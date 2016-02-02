//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PurchasePin.h"

#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
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
PurchasePin::PurchasePin() {
    references= 0;


    // purchagePinList
    org_himalay_msgs_runtime_ByteArray_NEW(purchagePinList);
    purchagePinList->setSizeType("FIRST_UI16");
}
// Destructor
PurchasePin::~PurchasePin() {
    // purchagePinList
    org_himalay_msgs_runtime_ByteArray_DELETE( purchagePinList);
}

int PurchasePin::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // purchagePinList
    {
        retVal+=purchagePinList->read(istream);
    }
    return retVal;
}

int PurchasePin::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read purchagePinList
    {
        retVal+=purchagePinList->read(istream);
    }

    return retVal;
}

int PurchasePin::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for purchagePinList**/
    }

    int retVal= 0;
    // write purchagePinList
    {
        retVal += purchagePinList->write(ostream);
    }

    return retVal;
}

int PurchasePin::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PurchasePin\n");
    dc.increaseIndent();
    int retVal= 0;
    // write purchagePinList
    dc.indent();
    dc.getPs().print("purchagePinList");
    purchagePinList->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for purchagePinList
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PurchasePin::getPurchagePinList()
//{
//return this->purchagePinList;
//}

// Setter for purchagePinList
//void PurchasePin::setPurchagePinList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->purchagePinList= val;
//}

int PurchasePin::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PurchasePin* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PurchasePin* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code