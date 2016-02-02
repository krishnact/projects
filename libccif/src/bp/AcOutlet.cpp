//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "AcOutlet.h"

#ifdef org_himalay_ccif_AcOutlet__USE_SMART_PTR
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
AcOutlet::AcOutlet() {
    references= 0;


    // acOutletControl
    acOutletControl= (ui8)0;
}
// Destructor
AcOutlet::~AcOutlet() {
    // acOutletControl

}

int AcOutlet::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // acOutletControl
    {
        acOutletControl=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int AcOutlet::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read acOutletControl
    {
        acOutletControl=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int AcOutlet::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write acOutletControl
    ostream.writeUI8(acOutletControl);
    retVal +=1;

    return retVal;
}

int AcOutlet::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("AcOutlet\n");
    dc.increaseIndent();
    int retVal= 0;
    // write acOutletControl
    dc.indent();
    dc.getPs().print("acOutletControl=");
    dc.getPs().println((long)acOutletControl);
    dc.decreaseIndent();
    return retVal;
}


// Getter for acOutletControl
//ui8 AcOutlet::getAcOutletControl()
//{
//return this->acOutletControl;
//}

// Setter for acOutletControl
//void AcOutlet::setAcOutletControl(ui8 val)
//{
//this->acOutletControl= val;
//}

int AcOutlet::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_AcOutlet__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::AcOutlet* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::AcOutlet* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code