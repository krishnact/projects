//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ResetPin.h"

#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
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
ResetPin::ResetPin() {
    references= 0;


    // resetpinControl
    resetpinControl= (ui8)0;
}
// Destructor
ResetPin::~ResetPin() {
    // resetpinControl

}

int ResetPin::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // resetpinControl
    {
        resetpinControl=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int ResetPin::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read resetpinControl
    {
        resetpinControl=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int ResetPin::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write resetpinControl
    ostream.writeUI8(resetpinControl);
    retVal +=1;

    return retVal;
}

int ResetPin::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ResetPin\n");
    dc.increaseIndent();
    int retVal= 0;
    // write resetpinControl
    dc.indent();
    dc.getPs().print("resetpinControl=");
    dc.getPs().println((long)resetpinControl);
    dc.decreaseIndent();
    return retVal;
}


// Getter for resetpinControl
//ui8 ResetPin::getResetpinControl()
//{
//return this->resetpinControl;
//}

// Setter for resetpinControl
//void ResetPin::setResetpinControl(ui8 val)
//{
//this->resetpinControl= val;
//}

int ResetPin::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ResetPin* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ResetPin* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code