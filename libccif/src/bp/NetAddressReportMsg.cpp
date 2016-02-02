//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NetAddressReportMsg.h"

#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
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
NetAddressReportMsg::NetAddressReportMsg() {
    references= 0;


    // netAddressType
    netAddressType= (ui8)0;
    // networkAddresses
    org_himalay_msgs_runtime_ByteArray_NEW(networkAddresses);
    networkAddresses->setSizeType("FIRST_UI8");
    // SubnetworkAddresses
    org_himalay_msgs_runtime_ByteArray_NEW(SubnetworkAddresses);
    SubnetworkAddresses->setSizeType("FIRST_UI8");
}
// Destructor
NetAddressReportMsg::~NetAddressReportMsg() {
    // netAddressType

    // networkAddresses
    org_himalay_msgs_runtime_ByteArray_DELETE( networkAddresses);
    // SubnetworkAddresses
    org_himalay_msgs_runtime_ByteArray_DELETE( SubnetworkAddresses);
}

int NetAddressReportMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // netAddressType
    {
        netAddressType=(istream.readUI8());
        retVal+=1;
    }
    // networkAddresses
    {
        retVal+=networkAddresses->read(istream);
    }
    // SubnetworkAddresses
    {
        retVal+=SubnetworkAddresses->read(istream);
    }
    return retVal;
}

int NetAddressReportMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read netAddressType
    {
        netAddressType=(istream.readUI8());
        retVal+=1;
    }
    // read networkAddresses
    {
        retVal+=networkAddresses->read(istream);
    }
    // read SubnetworkAddresses
    {
        retVal+=SubnetworkAddresses->read(istream);
    }

    return retVal;
}

int NetAddressReportMsg::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for networkAddresses**/
    }
    {   /** fix dependent sizes for SubnetworkAddresses**/
    }

    int retVal= 0;
    // write netAddressType
    ostream.writeUI8(netAddressType);
    retVal +=1;
    // write networkAddresses
    {
        retVal += networkAddresses->write(ostream);
    }
    // write SubnetworkAddresses
    {
        retVal += SubnetworkAddresses->write(ostream);
    }

    return retVal;
}

int NetAddressReportMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NetAddressReportMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write netAddressType
    dc.indent();
    dc.getPs().print("netAddressType=");
    dc.getPs().println((long)netAddressType);
    // write networkAddresses
    dc.indent();
    dc.getPs().print("networkAddresses");
    networkAddresses->dump(dc);
    // write SubnetworkAddresses
    dc.indent();
    dc.getPs().print("SubnetworkAddresses");
    SubnetworkAddresses->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for netAddressType
//ui8 NetAddressReportMsg::getNetAddressType()
//{
//return this->netAddressType;
//}

// Setter for netAddressType
//void NetAddressReportMsg::setNetAddressType(ui8 val)
//{
//this->netAddressType= val;
//}

// Getter for networkAddresses
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE NetAddressReportMsg::getNetworkAddresses()
//{
//return this->networkAddresses;
//}

// Setter for networkAddresses
//void NetAddressReportMsg::setNetworkAddresses(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->networkAddresses= val;
//}

// Getter for SubnetworkAddresses
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE NetAddressReportMsg::getSubnetworkAddresses()
//{
//return this->SubnetworkAddresses;
//}

// Setter for SubnetworkAddresses
//void NetAddressReportMsg::setSubnetworkAddresses(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->SubnetworkAddresses= val;
//}

int NetAddressReportMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NetAddressReportMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NetAddressReportMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code