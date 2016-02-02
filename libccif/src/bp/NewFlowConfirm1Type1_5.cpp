//**//
//@Created(date = "Mon Feb 01 22:30:19 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NewFlowConfirm1Type1_5.h"

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
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
// member static classes
// Constructor
NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::stypeCheck() {
    references= 0;

    parent = NULL;

    // bf2
    bf2 = 0;
}
// Destructor
NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::~stypeCheck() {
    // bf2

    parent = NULL;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;

    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;

    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("stypeCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf2
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("maxpduSize: ");
        dc.getPs().printlnBin(getMaxpduSize(),13);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf2
//ui16 NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::setBf2(ui16 val)
//{
//this->bf2= val;
//}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::getReserved( ) {
    return ( this->bf2 & 0x0000e000 ) >> 13 ;
}

void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::setReserved(int val) {
    bf2=(  (this->bf2 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::getMaxpduSize( ) {
    return ( this->bf2 & 0x00001fff ) >> 0 ;
}

void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::setMaxpduSize(int val) {
    bf2=(  (this->bf2 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::ServiceTypeCheck() {
    references= 0;

    parent = NULL;

    // ip_address
    ip_address= (ui32)0;
    // flowType
    flowType= (ui8)0;
    // bf1
    bf1 = 0;
    // optionByte
    org_himalay_msgs_runtime_ByteArray_NEW(optionByte);
    optionByte->setSizeType("FIRST_UI8");
    // stypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__INIT(stypeCheckInstance)
}
// Destructor
NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::~ServiceTypeCheck() {
    // ip_address

    // flowType

    // bf1

    // optionByte
    org_himalay_msgs_runtime_ByteArray_DELETE( optionByte);
    // stypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__DELETE( stypeCheckInstance);
    parent = NULL;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ip_address
    {
        ip_address=istream.readUI32() ;
        retVal+=4;
    }
    // flowType
    {
        flowType=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // optionByte
    {
        retVal+=optionByte->read(istream);
    }
    // stypeCheckInstance
    if (parent->serviceType == 0x04) {
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__NEW( stypeCheckInstance);
        stypeCheckInstance->parent=this;
        retVal += stypeCheckInstance->read(istream);
    }
    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ip_address
    {
        ip_address=istream.readUI32() ;
        retVal+=4;
    }
    // read flowType
    {
        flowType=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read optionByte
    {
        retVal+=optionByte->read(istream);
    }
    // read stypeCheckInstance
    if (parent->serviceType == 0x04) {
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__NEW( stypeCheckInstance);
        stypeCheckInstance->parent=this;
        retVal += stypeCheckInstance->read(istream);
    }

    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::write(DataOutputStream& ostream) { // throws IOException



    {   /** fix dependent sizes for optionByte**/
    }
    {   /** fix dependent sizes for stypeCheckInstance **/
    }

    int retVal= 0;
    // write ip_address
    ostream.writeUI32(ip_address);
    retVal +=4;
    // write flowType
    ostream.writeUI8(flowType);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write optionByte
    {
        retVal += optionByte->write(ostream);
    }
    // write stypeCheckInstance
    if ( stypeCheckInstance != NULL ) {
        retVal +=stypeCheckInstance->write(ostream);
    }

    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceTypeCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ip_address
    dc.indent();
    dc.getPs().print("ip_address=");
    dc.getPs().println((long)ip_address);
    // write flowType
    dc.indent();
    dc.getPs().print("flowType=");
    dc.getPs().println((long)flowType);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("flag: ");
        dc.getPs().printlnBin(getFlag(),3);
        dc.indent();
        dc.getPs().print("maxpduSize: ");
        dc.getPs().printlnBin(getMaxpduSize(),13);
    }
    // write optionByte
    dc.indent();
    dc.getPs().print("optionByte");
    optionByte->dump(dc);
    // write stypeCheckInstance
    if ( stypeCheckInstance != NULL ) {
        dc.indent();
        dc.getPs().println("stypeCheckInstance") ;
        retVal +=stypeCheckInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for ip_address
//ui32 NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getIp_address()
//{
//return this->ip_address;
//}

// Setter for ip_address
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setIp_address(ui32 val)
//{
//this->ip_address= val;
//}

// Getter for flowType
//ui8 NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getFlowType()
//{
//return this->flowType;
//}

// Setter for flowType
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setFlowType(ui8 val)
//{
//this->flowType= val;
//}

// Getter for bf1
//ui16 NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for optionByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getOptionByte()
//{
//return this->optionByte;
//}

// Setter for optionByte
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setOptionByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->optionByte= val;
//}

// Getter for stypeCheckInstance
//org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getStypeCheckInstance()
//{
//return this->stypeCheckInstance;
//}

// Setter for stypeCheckInstance
//void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setStypeCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE val)
//{
//this->stypeCheckInstance= val;
//}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getFlag( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setFlag(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getMaxpduSize( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::setMaxpduSize(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
NewFlowConfirm1Type1_5::StatusfieldCheck::StatusfieldCheck() {
    references= 0;

    parent = NULL;

    // flowId
    flowId= (ui24)0;
    // serviceType
    serviceType= (ui8)0;
    // ServiceTypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__INIT(ServiceTypeCheckInstance)
}
// Destructor
NewFlowConfirm1Type1_5::StatusfieldCheck::~StatusfieldCheck() {
    // flowId

    // serviceType

    // ServiceTypeCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__DELETE( ServiceTypeCheckInstance);
    parent = NULL;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__NEW( ServiceTypeCheckInstance);
        ServiceTypeCheckInstance->parent=this;
        retVal += ServiceTypeCheckInstance->read(istream);
    }
    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::read(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__NEW( ServiceTypeCheckInstance);
        ServiceTypeCheckInstance->parent=this;
        retVal += ServiceTypeCheckInstance->read(istream);
    }

    return retVal;
}

int NewFlowConfirm1Type1_5::StatusfieldCheck::write(DataOutputStream& ostream) { // throws IOException


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

int NewFlowConfirm1Type1_5::StatusfieldCheck::dump(DumpContext& dc) { // throws IOException
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
//ui24 NewFlowConfirm1Type1_5::StatusfieldCheck::getFlowId()
//{
//return this->flowId;
//}

// Setter for flowId
//void NewFlowConfirm1Type1_5::StatusfieldCheck::setFlowId(ui24 val)
//{
//this->flowId= val;
//}

// Getter for serviceType
//ui8 NewFlowConfirm1Type1_5::StatusfieldCheck::getServiceType()
//{
//return this->serviceType;
//}

// Setter for serviceType
//void NewFlowConfirm1Type1_5::StatusfieldCheck::setServiceType(ui8 val)
//{
//this->serviceType= val;
//}

// Getter for ServiceTypeCheckInstance
//org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck::getServiceTypeCheckInstance()
//{
//return this->ServiceTypeCheckInstance;
//}

// Setter for ServiceTypeCheckInstance
//void NewFlowConfirm1Type1_5::StatusfieldCheck::setServiceTypeCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE val)
//{
//this->ServiceTypeCheckInstance= val;
//}

int NewFlowConfirm1Type1_5::StatusfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
NewFlowConfirm1Type1_5::NewFlowConfirm1Type1_5() {
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
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__INIT(StatusfieldCheckInstance)
}
// Destructor
NewFlowConfirm1Type1_5::~NewFlowConfirm1Type1_5() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // statusField

    // flowsRemaining

    // StatusfieldCheckInstance
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__DELETE( StatusfieldCheckInstance);
}

int NewFlowConfirm1Type1_5::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }
    return retVal;
}

int NewFlowConfirm1Type1_5::read(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }

    return retVal;
}

int NewFlowConfirm1Type1_5::write(DataOutputStream& ostream) { // throws IOException
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

int NewFlowConfirm1Type1_5::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NewFlowConfirm1Type1_5\n");
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
//org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm1Type1_5::getHeader()
//{
//return this->header;
//}

// Setter for header
//void NewFlowConfirm1Type1_5::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 NewFlowConfirm1Type1_5::getLength()
//{
//return this->length;
//}

// Setter for length
//void NewFlowConfirm1Type1_5::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for statusField
//ui8 NewFlowConfirm1Type1_5::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void NewFlowConfirm1Type1_5::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for flowsRemaining
//ui8 NewFlowConfirm1Type1_5::getFlowsRemaining()
//{
//return this->flowsRemaining;
//}

// Setter for flowsRemaining
//void NewFlowConfirm1Type1_5::setFlowsRemaining(ui8 val)
//{
//this->flowsRemaining= val;
//}

// Getter for StatusfieldCheckInstance
//org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE NewFlowConfirm1Type1_5::getStatusfieldCheckInstance()
//{
//return this->StatusfieldCheckInstance;
//}

// Setter for StatusfieldCheckInstance
//void NewFlowConfirm1Type1_5::setStatusfieldCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE val)
//{
//this->StatusfieldCheckInstance= val;
//}

int NewFlowConfirm1Type1_5::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void NewFlowConfirm1Type1_5::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm1Type1_5::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code