//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NewFlowRequest.h"

#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
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
NewFlowRequest::NewFlowRequest() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // serviceType
    serviceType= (ui8)0;
    // mpegSection
    org_himalay_ccif_ServiceMpegPid__INIT(mpegSection)
    // ipUnicast
    org_himalay_ccif_ServiceIPUnicast__INIT(ipUnicast)
    // ipMulticast
    org_himalay_ccif_ServiceIPMulticast__INIT(ipMulticast)
    // socket
    org_himalay_ccif_ServiceSocket__INIT(socket)
}
// Destructor
NewFlowRequest::~NewFlowRequest() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // serviceType

    // mpegSection
    org_himalay_ccif_ServiceMpegPid__DELETE( mpegSection);
    // ipUnicast
    org_himalay_ccif_ServiceIPUnicast__DELETE( ipUnicast);
    // ipMulticast
    org_himalay_ccif_ServiceIPMulticast__DELETE( ipMulticast);
    // socket
    org_himalay_ccif_ServiceSocket__DELETE( socket);
}

int NewFlowRequest::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // serviceType
    {
        serviceType=(istream.readUI8());
        retVal+=1;
    }
    // mpegSection
    if (serviceType==0x00) {
        org_himalay_ccif_ServiceMpegPid__NEW( mpegSection);
        retVal += mpegSection->read(istream);
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

int NewFlowRequest::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read serviceType
    {
        serviceType=(istream.readUI8());
        retVal+=1;
    }
    // read mpegSection
    if (serviceType==0x00) {
        org_himalay_ccif_ServiceMpegPid__NEW( mpegSection);
        retVal += mpegSection->read(istream);
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

int NewFlowRequest::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for mpegSection **/
    }
    {   /** fix dependent sizes for ipUnicast **/
    }
    {   /** fix dependent sizes for ipMulticast **/
    }
    {   /** fix dependent sizes for socket **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write serviceType
    ostream.writeUI8(serviceType);
    retVal +=1;
    // write mpegSection
    if ( mpegSection != NULL ) {
        retVal +=mpegSection->write(ostream);
    }
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

int NewFlowRequest::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NewFlowRequest\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    // write serviceType
    dc.indent();
    dc.getPs().print("serviceType=");
    dc.getPs().println((long)serviceType);
    // write mpegSection
    if ( mpegSection != NULL ) {
        dc.indent();
        dc.getPs().println("mpegSection") ;
        retVal +=mpegSection->dump(dc);
    }
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


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowRequest::getHeader()
//{
//return this->header;
//}

// Setter for header
//void NewFlowRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 NewFlowRequest::getLength()
//{
//return this->length;
//}

// Setter for length
//void NewFlowRequest::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for serviceType
//ui8 NewFlowRequest::getServiceType()
//{
//return this->serviceType;
//}

// Setter for serviceType
//void NewFlowRequest::setServiceType(ui8 val)
//{
//this->serviceType= val;
//}

// Getter for mpegSection
//org_himalay_ccif_ServiceMpegPid__PTR_TYPE NewFlowRequest::getMpegSection()
//{
//return this->mpegSection;
//}

// Setter for mpegSection
//void NewFlowRequest::setMpegSection(org_himalay_ccif_ServiceMpegPid__PTR_TYPE val)
//{
//this->mpegSection= val;
//}

// Getter for ipUnicast
//org_himalay_ccif_ServiceIPUnicast__PTR_TYPE NewFlowRequest::getIpUnicast()
//{
//return this->ipUnicast;
//}

// Setter for ipUnicast
//void NewFlowRequest::setIpUnicast(org_himalay_ccif_ServiceIPUnicast__PTR_TYPE val)
//{
//this->ipUnicast= val;
//}

// Getter for ipMulticast
//org_himalay_ccif_ServiceIPMulticast__PTR_TYPE NewFlowRequest::getIpMulticast()
//{
//return this->ipMulticast;
//}

// Setter for ipMulticast
//void NewFlowRequest::setIpMulticast(org_himalay_ccif_ServiceIPMulticast__PTR_TYPE val)
//{
//this->ipMulticast= val;
//}

// Getter for socket
//org_himalay_ccif_ServiceSocket__PTR_TYPE NewFlowRequest::getSocket()
//{
//return this->socket;
//}

// Setter for socket
//void NewFlowRequest::setSocket(org_himalay_ccif_ServiceSocket__PTR_TYPE val)
//{
//this->socket= val;
//}

int NewFlowRequest::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void NewFlowRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowRequest::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowRequest* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowRequest* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code