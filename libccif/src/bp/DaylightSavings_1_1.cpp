//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DaylightSavings_1_1.h"

#ifdef org_himalay_ccif_DaylightSavings_1_1__USE_SMART_PTR
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
DaylightSavings_1_1::DaylightSavings_1_1() {
    references= 0;


    // daylightSavingsControl
    daylightSavingsControl= (ui8)0;
}
// Destructor
DaylightSavings_1_1::~DaylightSavings_1_1() {
    // daylightSavingsControl

}

int DaylightSavings_1_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // daylightSavingsControl
    {
        daylightSavingsControl=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int DaylightSavings_1_1::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read daylightSavingsControl
    {
        daylightSavingsControl=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int DaylightSavings_1_1::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write daylightSavingsControl
    ostream.writeUI8(daylightSavingsControl);
    retVal +=1;

    return retVal;
}

int DaylightSavings_1_1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DaylightSavings_1_1\n");
    dc.increaseIndent();
    int retVal= 0;
    // write daylightSavingsControl
    dc.indent();
    dc.getPs().print("daylightSavingsControl=");
    dc.getPs().println((long)daylightSavingsControl);
    dc.decreaseIndent();
    return retVal;
}


// Getter for daylightSavingsControl
//ui8 DaylightSavings_1_1::getDaylightSavingsControl()
//{
//return this->daylightSavingsControl;
//}

// Setter for daylightSavingsControl
//void DaylightSavings_1_1::setDaylightSavingsControl(ui8 val)
//{
//this->daylightSavingsControl= val;
//}

int DaylightSavings_1_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_DaylightSavings_1_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code