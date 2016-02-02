//**//
//@Created(date = "Mon Feb 01 22:30:19 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NewFlowConfirm1Type1.h"

#ifdef org_himalay_ccif_NewFlowConfirm1Type1__USE_SMART_PTR
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
// member static classes
// member static classes
// Constructor
NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::ServiceTypeCheck() {
    references= 0;

    parent = NULL;

    // ip_address
    ip_address= (ui32)0;
}
// Destructor
NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::~ServiceTypeCheck() {
    // ip_address

    parent = NULL;
}

int NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ip_address
    {
        ip_address=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ip_address
    {
        ip_address=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write ip_address
    ostream.writeUI32(ip_address);
    retVal +=4;

    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceTypeCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ip_address
    dc.indent();
    dc.getPs().print("ip_address=");
    dc.getPs().println((long)ip_address);
    dc.decreaseIndent();
    return retVal;
}


// Getter for ip_address
//ui32 NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::getIp_address()
//{
//return this->ip_address;
//}

// Setter for ip_address
//void NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::setIp_address(ui32 val)
//{
//this->ip_address= val;
//}

int NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
NewFlowConfirm1Type1::StatusfieldCheck::StatusfieldCheck() {
    references= 0;

    parent = NULL;

    // flowId
    flowId= (ui24)0;
    // serviceType
    serviceType= (ui8)0;
    // ServiceTypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__INIT(ServiceTypeCheckInstance)
}
// Destructor
NewFlowConfirm1Type1::StatusfieldCheck::~StatusfieldCheck() {
    // flowId

    // serviceType

    // ServiceTypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__DELETE( ServiceTypeCheckInstance);
    parent = NULL;
}

int NewFlowConfirm1Type1::StatusfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // ServiceTypeCheckInstance
    if (serviceType==0x01) {
        org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__NEW( ServiceTypeCheckInstance);
        ServiceTypeCheckInstance->parent=this;
        retVal += ServiceTypeCheckInstance->read(istream);
    }
    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::read(DataInputStream&  istream ) { // throws IOException
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
    // read ServiceTypeCheckInstance
    if (serviceType==0x01) {
        org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__NEW( ServiceTypeCheckInstance);
        ServiceTypeCheckInstance->parent=this;
        retVal += ServiceTypeCheckInstance->read(istream);
    }

    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for ServiceTypeCheckInstance **/
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
    // write ServiceTypeCheckInstance
    if ( ServiceTypeCheckInstance != NULL ) {
        retVal +=ServiceTypeCheckInstance->write(ostream);
    }

    return retVal;
}

int NewFlowConfirm1Type1::StatusfieldCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("StatusfieldCheck\n");
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
    // write ServiceTypeCheckInstance
    if ( ServiceTypeCheckInstance != NULL ) {
        dc.indent();
        dc.getPs().println("ServiceTypeCheckInstance") ;
        retVal +=ServiceTypeCheckInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for flowId
//ui24 NewFlowConfirm1Type1::StatusfieldCheck::getFlowId()
//{
//return this->flowId;
//}

// Setter for flowId
//void NewFlowConfirm1Type1::StatusfieldCheck::setFlowId(ui24 val)
//{
//this->flowId= val;
//}

// Getter for serviceType
//ui8 NewFlowConfirm1Type1::StatusfieldCheck::getServiceType()
//{
//return this->serviceType;
//}

// Setter for serviceType
//void NewFlowConfirm1Type1::StatusfieldCheck::setServiceType(ui8 val)
//{
//this->serviceType= val;
//}

// Getter for ServiceTypeCheckInstance
//org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE NewFlowConfirm1Type1::StatusfieldCheck::getServiceTypeCheckInstance()
//{
//return this->ServiceTypeCheckInstance;
//}

// Setter for ServiceTypeCheckInstance
//void NewFlowConfirm1Type1::StatusfieldCheck::setServiceTypeCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE val)
//{
//this->ServiceTypeCheckInstance= val;
//}

int NewFlowConfirm1Type1::StatusfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
NewFlowConfirm1Type1::NewFlowConfirm1Type1() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // flowsRemaining
    flowsRemaining= (ui8)0;
    // StatusfieldCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__INIT(StatusfieldCheckInstance)
}
// Destructor
NewFlowConfirm1Type1::~NewFlowConfirm1Type1() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // statusField

    // flowsRemaining

    // StatusfieldCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__DELETE( StatusfieldCheckInstance);
}

int NewFlowConfirm1Type1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // flowsRemaining
    {
        flowsRemaining=(istream.readUI8());
        retVal+=1;
    }
    // StatusfieldCheckInstance
    if (statusField == 0) {
        org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }
    return retVal;
}

int NewFlowConfirm1Type1::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // read flowsRemaining
    {
        flowsRemaining=(istream.readUI8());
        retVal+=1;
    }
    // read StatusfieldCheckInstance
    if (statusField == 0) {
        org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }

    return retVal;
}

int NewFlowConfirm1Type1::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    {   /** fix dependent sizes for StatusfieldCheckInstance **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;
    // write flowsRemaining
    ostream.writeUI8(flowsRemaining);
    retVal +=1;
    // write StatusfieldCheckInstance
    if ( StatusfieldCheckInstance != NULL ) {
        retVal +=StatusfieldCheckInstance->write(ostream);
    }

    return retVal;
}

int NewFlowConfirm1Type1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NewFlowConfirm1Type1\n");
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
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    // write flowsRemaining
    dc.indent();
    dc.getPs().print("flowsRemaining=");
    dc.getPs().println((long)flowsRemaining);
    // write StatusfieldCheckInstance
    if ( StatusfieldCheckInstance != NULL ) {
        dc.indent();
        dc.getPs().println("StatusfieldCheckInstance") ;
        retVal +=StatusfieldCheckInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm1Type1::getHeader()
//{
//return this->header;
//}

// Setter for header
//void NewFlowConfirm1Type1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 NewFlowConfirm1Type1::getLength()
//{
//return this->length;
//}

// Setter for length
//void NewFlowConfirm1Type1::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for statusField
//ui8 NewFlowConfirm1Type1::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void NewFlowConfirm1Type1::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for flowsRemaining
//ui8 NewFlowConfirm1Type1::getFlowsRemaining()
//{
//return this->flowsRemaining;
//}

// Setter for flowsRemaining
//void NewFlowConfirm1Type1::setFlowsRemaining(ui8 val)
//{
//this->flowsRemaining= val;
//}

// Getter for StatusfieldCheckInstance
//org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__PTR_TYPE NewFlowConfirm1Type1::getStatusfieldCheckInstance()
//{
//return this->StatusfieldCheckInstance;
//}

// Setter for StatusfieldCheckInstance
//void NewFlowConfirm1Type1::setStatusfieldCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_StatusfieldCheck__PTR_TYPE val)
//{
//this->StatusfieldCheckInstance= val;
//}

int NewFlowConfirm1Type1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void NewFlowConfirm1Type1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm1Type1::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code