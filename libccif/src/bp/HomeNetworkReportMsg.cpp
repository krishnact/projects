//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HomeNetworkReportMsg.h"

#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
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
HomeNetworkReportMsg::HomeNetworkReportMsg() {
    references= 0;


    // clientMacAddress
    org_himalay_ccif_MacAddress__NEW( clientMacAddress);
    // host_DRM_status
    host_DRM_status= (ui8)0;
    // clientsIpAddressByte
    org_himalay_msgs_runtime_ByteArray_NEW(clientsIpAddressByte);
    clientsIpAddressByte->setSizeType("FIRST_UI8");
    // client_DRM_status
    client_DRM_status= (ui8)0;
}
// Destructor
HomeNetworkReportMsg::~HomeNetworkReportMsg() {
    // clientMacAddress
    org_himalay_ccif_MacAddress__DELETE( clientMacAddress);
    // host_DRM_status

    // clientsIpAddressByte
    org_himalay_msgs_runtime_ByteArray_DELETE( clientsIpAddressByte);
    // client_DRM_status

}

int HomeNetworkReportMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // clientMacAddress
    retVal += clientMacAddress->read(istream);
    // host_DRM_status
    {
        host_DRM_status=(istream.readUI8());
        retVal+=1;
    }
    // clientsIpAddressByte
    {
        retVal+=clientsIpAddressByte->read(istream);
    }
    // client_DRM_status
    {
        client_DRM_status=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int HomeNetworkReportMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read clientMacAddress
    retVal += clientMacAddress->read(istream);
    // read host_DRM_status
    {
        host_DRM_status=(istream.readUI8());
        retVal+=1;
    }
    // read clientsIpAddressByte
    {
        retVal+=clientsIpAddressByte->read(istream);
    }
    // read client_DRM_status
    {
        client_DRM_status=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int HomeNetworkReportMsg::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for clientMacAddress **/
    }

    {   /** fix dependent sizes for clientsIpAddressByte**/
    }


    int retVal= 0;
    // write clientMacAddress
    if ( clientMacAddress != NULL ) {
        retVal +=clientMacAddress->write(ostream);
    }
    // write host_DRM_status
    ostream.writeUI8(host_DRM_status);
    retVal +=1;
    // write clientsIpAddressByte
    {
        retVal += clientsIpAddressByte->write(ostream);
    }
    // write client_DRM_status
    ostream.writeUI8(client_DRM_status);
    retVal +=1;

    return retVal;
}

int HomeNetworkReportMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HomeNetworkReportMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write clientMacAddress
    if ( clientMacAddress != NULL ) {
        dc.indent();
        dc.getPs().println("clientMacAddress") ;
        retVal +=clientMacAddress->dump(dc);
    }
    // write host_DRM_status
    dc.indent();
    dc.getPs().print("host_DRM_status=");
    dc.getPs().println((long)host_DRM_status);
    // write clientsIpAddressByte
    dc.indent();
    dc.getPs().print("clientsIpAddressByte");
    clientsIpAddressByte->dump(dc);
    // write client_DRM_status
    dc.indent();
    dc.getPs().print("client_DRM_status=");
    dc.getPs().println((long)client_DRM_status);
    dc.decreaseIndent();
    return retVal;
}


// Getter for clientMacAddress
//org_himalay_ccif_MacAddress__PTR_TYPE HomeNetworkReportMsg::getClientMacAddress()
//{
//return this->clientMacAddress;
//}

// Setter for clientMacAddress
//void HomeNetworkReportMsg::setClientMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val)
//{
//this->clientMacAddress= val;
//}

// Getter for host_DRM_status
//ui8 HomeNetworkReportMsg::getHost_DRM_status()
//{
//return this->host_DRM_status;
//}

// Setter for host_DRM_status
//void HomeNetworkReportMsg::setHost_DRM_status(ui8 val)
//{
//this->host_DRM_status= val;
//}

// Getter for clientsIpAddressByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HomeNetworkReportMsg::getClientsIpAddressByte()
//{
//return this->clientsIpAddressByte;
//}

// Setter for clientsIpAddressByte
//void HomeNetworkReportMsg::setClientsIpAddressByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->clientsIpAddressByte= val;
//}

// Getter for client_DRM_status
//ui8 HomeNetworkReportMsg::getClient_DRM_status()
//{
//return this->client_DRM_status;
//}

// Setter for client_DRM_status
//void HomeNetworkReportMsg::setClient_DRM_status(ui8 val)
//{
//this->client_DRM_status= val;
//}

int HomeNetworkReportMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HomeNetworkReportMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HomeNetworkReportMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code