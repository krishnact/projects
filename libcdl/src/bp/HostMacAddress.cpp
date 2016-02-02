//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostMacAddress.h"

#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
HostMacAddress::HostMacAddress() {
    references= 0;


    // header
    org_himalay_cl_cdl_ResourceHeader__NEW( header);
    // macAddress
    org_himalay_binmsg_util_MacAddress__NEW( macAddress);
}
// Destructor
HostMacAddress::~HostMacAddress() {
    // header
    org_himalay_cl_cdl_ResourceHeader__DELETE( header);
    // macAddress
    org_himalay_binmsg_util_MacAddress__DELETE( macAddress);
}

int HostMacAddress::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // macAddress
    retVal += macAddress->read(istream);
    return retVal;
}

int HostMacAddress::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read macAddress
    retVal += macAddress->read(istream);

    return retVal;
}

int HostMacAddress::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for macAddress **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write macAddress
    if ( macAddress != NULL ) {
        retVal +=macAddress->write(ostream);
    }

    return retVal;
}

int HostMacAddress::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostMacAddress\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write macAddress
    if ( macAddress != NULL ) {
        dc.indent();
        dc.getPs().println("macAddress") ;
        retVal +=macAddress->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_cl_cdl_ResourceHeader__PTR_TYPE HostMacAddress::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HostMacAddress::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for macAddress
//org_himalay_binmsg_util_MacAddress__PTR_TYPE HostMacAddress::getMacAddress()
//{
//return this->macAddress;
//}

// Setter for macAddress
//void HostMacAddress::setMacAddress(org_himalay_binmsg_util_MacAddress__PTR_TYPE val)
//{
//this->macAddress= val;
//}

int HostMacAddress::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HostMacAddress::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_ResourceHeader__PTR_TYPE HostMacAddress::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::HostMacAddress* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::HostMacAddress* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code