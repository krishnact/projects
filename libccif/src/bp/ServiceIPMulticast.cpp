//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ServiceIPMulticast.h"

#ifdef org_himalay_ccif_ServiceIPMulticast__USE_SMART_PTR
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
ServiceIPMulticast::ServiceIPMulticast() {
    references= 0;


    // multicastGroupId
    org_himalay_msgs_runtime_ByteArray_NEW(multicastGroupId);
    multicastGroupId->setSizeType("FIXED");
    multicastGroupId->setSize(4);
}
// Destructor
ServiceIPMulticast::~ServiceIPMulticast() {
    // multicastGroupId
    org_himalay_msgs_runtime_ByteArray_DELETE( multicastGroupId);
}

int ServiceIPMulticast::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // multicastGroupId
    {
        retVal+=multicastGroupId->read(istream);
    }
    return retVal;
}

int ServiceIPMulticast::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read multicastGroupId
    {
        retVal+=multicastGroupId->read(istream);
    }

    return retVal;
}

int ServiceIPMulticast::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for multicastGroupId**/
    }

    int retVal= 0;
    // write multicastGroupId
    {
        retVal += multicastGroupId->write(ostream);
    }

    return retVal;
}

int ServiceIPMulticast::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceIPMulticast\n");
    dc.increaseIndent();
    int retVal= 0;
    // write multicastGroupId
    dc.indent();
    dc.getPs().print("multicastGroupId");
    multicastGroupId->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for multicastGroupId
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ServiceIPMulticast::getMulticastGroupId()
//{
//return this->multicastGroupId;
//}

// Setter for multicastGroupId
//void ServiceIPMulticast::setMulticastGroupId(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->multicastGroupId= val;
//}

int ServiceIPMulticast::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ServiceIPMulticast__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceIPMulticast* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ServiceIPMulticast* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code