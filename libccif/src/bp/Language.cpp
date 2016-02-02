//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Language.h"

#ifdef org_himalay_ccif_Language__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif

// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;

// Constructor
Language::Language() {
    references= 0;


    // lanuageControl
    lanuageControl= (ui24)0;
}
// Destructor
Language::~Language() {
    // lanuageControl

}

int Language::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // lanuageControl
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        lanuageControl= i1 | i2;
        retVal += 3;
    }
    return retVal;
}

int Language::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read lanuageControl
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        lanuageControl= i1 | i2;
        retVal += 3;
    }

    return retVal;
}

int Language::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write lanuageControl
    {
        ostream.writeUI8((lanuageControl  & 0x00FF0000)>>16);
        ostream.writeUI16((lanuageControl & 0x0000FFFF));
        retVal+=3;
    }

    return retVal;
}

int Language::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Language\n");
    dc.increaseIndent();
    int retVal= 0;
    // write lanuageControl
    dc.indent();
    dc.getPs().print("lanuageControl=");
    dc.getPs().println((long)lanuageControl);
    dc.decreaseIndent();
    return retVal;
}


// Getter for lanuageControl
//ui24 Language::getLanuageControl()
//{
//return this->lanuageControl;
//}

// Setter for lanuageControl
//void Language::setLanuageControl(ui24 val)
//{
//this->lanuageControl= val;
//}

int Language::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_Language__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Language* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Language* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code