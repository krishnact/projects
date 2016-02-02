//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NewFlowRequest1_1and1_2.h"

#ifdef org_himalay_ccif_NewFlowRequest1_1and1_2__USE_SMART_PTR
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
NewFlowRequest1_1and1_2::NewFlowRequest1_1and1_2() {
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
}
// Destructor
NewFlowRequest1_1and1_2::~NewFlowRequest1_1and1_2() {
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
}

int NewFlowRequest1_1and1_2::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    return retVal;
}

int NewFlowRequest1_1and1_2::read(DataInputStream&  istream ) { // throws IOException
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

    return retVal;
}

int NewFlowRequest1_1and1_2::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for mpegSection **/
    }
    {   /** fix dependent sizes for ipUnicast **/
    }
    {   /** fix dependent sizes for ipMulticast **/
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

    return retVal;
}

int NewFlowRequest1_1and1_2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NewFlowRequest1_1and1_2\n");
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
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowRequest1_1and1_2::getHeader()
//{
//return this->header;
//}

// Setter for header
//void NewFlowRequest1_1and1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 NewFlowRequest1_1and1_2::getLength()
//{
//return this->length;
//}

// Setter for length
//void NewFlowRequest1_1and1_2::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for serviceType
//ui8 NewFlowRequest1_1and1_2::getServiceType()
//{
//return this->serviceType;
//}

// Setter for serviceType
//void NewFlowRequest1_1and1_2::setServiceType(ui8 val)
//{
//this->serviceType= val;
//}

// Getter for mpegSection
//org_himalay_ccif_ServiceMpegPid__PTR_TYPE NewFlowRequest1_1and1_2::getMpegSection()
//{
//return this->mpegSection;
//}

// Setter for mpegSection
//void NewFlowRequest1_1and1_2::setMpegSection(org_himalay_ccif_ServiceMpegPid__PTR_TYPE val)
//{
//this->mpegSection= val;
//}

// Getter for ipUnicast
//org_himalay_ccif_ServiceIPUnicast__PTR_TYPE NewFlowRequest1_1and1_2::getIpUnicast()
//{
//return this->ipUnicast;
//}

// Setter for ipUnicast
//void NewFlowRequest1_1and1_2::setIpUnicast(org_himalay_ccif_ServiceIPUnicast__PTR_TYPE val)
//{
//this->ipUnicast= val;
//}

// Getter for ipMulticast
//org_himalay_ccif_ServiceIPMulticast__PTR_TYPE NewFlowRequest1_1and1_2::getIpMulticast()
//{
//return this->ipMulticast;
//}

// Setter for ipMulticast
//void NewFlowRequest1_1and1_2::setIpMulticast(org_himalay_ccif_ServiceIPMulticast__PTR_TYPE val)
//{
//this->ipMulticast= val;
//}

int NewFlowRequest1_1and1_2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void NewFlowRequest1_1and1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowRequest1_1and1_2::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_NewFlowRequest1_1and1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowRequest1_1and1_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowRequest1_1and1_2* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code