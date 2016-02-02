//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ServiceIPUnicast.h"

#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
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
ServiceIPUnicast::ServiceIPUnicast() {
    references= 0;


    // macAddress
    org_himalay_ccif_MacAddress__NEW( macAddress);
    // optionaData
    org_himalay_msgs_runtime_ByteArray_NEW(optionaData);
    optionaData->setSizeType("FIRST_UI8");
}
// Destructor
ServiceIPUnicast::~ServiceIPUnicast() {
    // macAddress
    org_himalay_ccif_MacAddress__DELETE( macAddress);
    // optionaData
    org_himalay_msgs_runtime_ByteArray_DELETE( optionaData);
}

int ServiceIPUnicast::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // macAddress
    retVal += macAddress->read(istream);
    // optionaData
    {
        retVal+=optionaData->read(istream);
    }
    return retVal;
}

int ServiceIPUnicast::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read macAddress
    retVal += macAddress->read(istream);
    // read optionaData
    {
        retVal+=optionaData->read(istream);
    }

    return retVal;
}

int ServiceIPUnicast::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for macAddress **/
    }
    {   /** fix dependent sizes for optionaData**/
    }

    int retVal= 0;
    // write macAddress
    if ( macAddress != NULL ) {
        retVal +=macAddress->write(ostream);
    }
    // write optionaData
    {
        retVal += optionaData->write(ostream);
    }

    return retVal;
}

int ServiceIPUnicast::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceIPUnicast\n");
    dc.increaseIndent();
    int retVal= 0;
    // write macAddress
    if ( macAddress != NULL ) {
        dc.indent();
        dc.getPs().println("macAddress") ;
        retVal +=macAddress->dump(dc);
    }
    // write optionaData
    dc.indent();
    dc.getPs().print("optionaData");
    optionaData->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for macAddress
//org_himalay_ccif_MacAddress__PTR_TYPE ServiceIPUnicast::getMacAddress()
//{
//return this->macAddress;
//}

// Setter for macAddress
//void ServiceIPUnicast::setMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val)
//{
//this->macAddress= val;
//}

// Getter for optionaData
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ServiceIPUnicast::getOptionaData()
//{
//return this->optionaData;
//}

// Setter for optionaData
//void ServiceIPUnicast::setOptionaData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->optionaData= val;
//}

int ServiceIPUnicast::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceIPUnicast* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ServiceIPUnicast* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code