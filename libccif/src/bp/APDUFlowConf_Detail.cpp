//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "APDUFlowConf_Detail.h"

#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
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
APDUFlowConf_Detail::APDUFlowConf_Detail() {
    references= 0;


    // flowId
    flowId= (ui24)0;
    // serviceType
    serviceType= (ui8)0;
    // ipUnicast
    org_himalay_ccif_ServiceIPUnicast__INIT(ipUnicast)
    // ipMulticast
    org_himalay_ccif_ServiceIPMulticast__INIT(ipMulticast)
    // socket
    org_himalay_ccif_ServiceSocket__INIT(socket)
}
// Destructor
APDUFlowConf_Detail::~APDUFlowConf_Detail() {
    // flowId

    // serviceType

    // ipUnicast
    org_himalay_ccif_ServiceIPUnicast__DELETE( ipUnicast);
    // ipMulticast
    org_himalay_ccif_ServiceIPMulticast__DELETE( ipMulticast);
    // socket
    org_himalay_ccif_ServiceSocket__DELETE( socket);
}

int APDUFlowConf_Detail::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // flowId
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        flowId= i1 | i2;
        retVal += 3;
    }
    // serviceType
    {
        serviceType=(istream.readUI8());
        retVal+=1;
    }
    // ipUnicast
    if (serviceType==0x01) {
        org_himalay_ccif_ServiceIPUnicast__NEW( ipUnicast);
        retVal += ipUnicast->read(istream);
    }
    // ipMulticast
    if (serviceType==0x02) {
        org_himalay_ccif_ServiceIPMulticast__NEW( ipMulticast);
        retVal += ipMulticast->read(istream);
    }
    // socket
    if (serviceType==0x04) {
        org_himalay_ccif_ServiceSocket__NEW( socket);
        retVal += socket->read(istream);
    }
    return retVal;
}

int APDUFlowConf_Detail::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read flowId
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        flowId= i1 | i2;
        retVal += 3;
    }
    // read serviceType
    {
        serviceType=(istream.readUI8());
        retVal+=1;
    }
    // read ipUnicast
    if (serviceType==0x01) {
        org_himalay_ccif_ServiceIPUnicast__NEW( ipUnicast);
        retVal += ipUnicast->read(istream);
    }
    // read ipMulticast
    if (serviceType==0x02) {
        org_himalay_ccif_ServiceIPMulticast__NEW( ipMulticast);
        retVal += ipMulticast->read(istream);
    }
    // read socket
    if (serviceType==0x04) {
        org_himalay_ccif_ServiceSocket__NEW( socket);
        retVal += socket->read(istream);
    }

    return retVal;
}

int APDUFlowConf_Detail::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for ipUnicast **/
    }
    {   /** fix dependent sizes for ipMulticast **/
    }
    {   /** fix dependent sizes for socket **/
    }

    int retVal= 0;
    // write flowId
    {
        ostream.writeUI8((flowId  & 0x00FF0000)>>16);
        ostream.writeUI16((flowId & 0x0000FFFF));
        retVal+=3;
    }
    // write serviceType
    ostream.writeUI8(serviceType);
    retVal +=1;
    // write ipUnicast
    if ( ipUnicast != NULL ) {
        retVal +=ipUnicast->write(ostream);
    }
    // write ipMulticast
    if ( ipMulticast != NULL ) {
        retVal +=ipMulticast->write(ostream);
    }
    // write socket
    if ( socket != NULL ) {
        retVal +=socket->write(ostream);
    }

    return retVal;
}

int APDUFlowConf_Detail::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("APDUFlowConf_Detail\n");
    dc.increaseIndent();
    int retVal= 0;
    // write flowId
    dc.indent();
    dc.getPs().print("flowId=");
    dc.getPs().println((long)flowId);
    // write serviceType
    dc.indent();
    dc.getPs().print("serviceType=");
    dc.getPs().println((long)serviceType);
    // write ipUnicast
    if ( ipUnicast != NULL ) {
        dc.indent();
        dc.getPs().println("ipUnicast") ;
        retVal +=ipUnicast->dump(dc);
    }
    // write ipMulticast
    if ( ipMulticast != NULL ) {
        dc.indent();
        dc.getPs().println("ipMulticast") ;
        retVal +=ipMulticast->dump(dc);
    }
    // write socket
    if ( socket != NULL ) {
        dc.indent();
        dc.getPs().println("socket") ;
        retVal +=socket->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for flowId
//ui24 APDUFlowConf_Detail::getFlowId()
//{
//return this->flowId;
//}

// Setter for flowId
//void APDUFlowConf_Detail::setFlowId(ui24 val)
//{
//this->flowId= val;
//}

// Getter for serviceType
//ui8 APDUFlowConf_Detail::getServiceType()
//{
//return this->serviceType;
//}

// Setter for serviceType
//void APDUFlowConf_Detail::setServiceType(ui8 val)
//{
//this->serviceType= val;
//}

// Getter for ipUnicast
//org_himalay_ccif_ServiceIPUnicast__PTR_TYPE APDUFlowConf_Detail::getIpUnicast()
//{
//return this->ipUnicast;
//}

// Setter for ipUnicast
//void APDUFlowConf_Detail::setIpUnicast(org_himalay_ccif_ServiceIPUnicast__PTR_TYPE val)
//{
//this->ipUnicast= val;
//}

// Getter for ipMulticast
//org_himalay_ccif_ServiceIPMulticast__PTR_TYPE APDUFlowConf_Detail::getIpMulticast()
//{
//return this->ipMulticast;
//}

// Setter for ipMulticast
//void APDUFlowConf_Detail::setIpMulticast(org_himalay_ccif_ServiceIPMulticast__PTR_TYPE val)
//{
//this->ipMulticast= val;
//}

// Getter for socket
//org_himalay_ccif_ServiceSocket__PTR_TYPE APDUFlowConf_Detail::getSocket()
//{
//return this->socket;
//}

// Setter for socket
//void APDUFlowConf_Detail::setSocket(org_himalay_ccif_ServiceSocket__PTR_TYPE val)
//{
//this->socket= val;
//}

int APDUFlowConf_Detail::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::APDUFlowConf_Detail* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUFlowConf_Detail* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code