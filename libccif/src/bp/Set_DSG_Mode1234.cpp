//**//
//@Created(date = "Mon Feb 01 22:30:19 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Set_DSG_Mode1234.h"

#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
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
// Constructor
Set_DSG_Mode1234::StatusfieldCheck::StatusfieldCheck() {
    references= 0;

    parent = NULL;

    // macAddress
    org_himalay_ccif_MacAddress__NEW( macAddress);
    // remove_header_bytes
    remove_header_bytes= (ui16)0;
}
// Destructor
Set_DSG_Mode1234::StatusfieldCheck::~StatusfieldCheck() {
    // macAddress
    org_himalay_ccif_MacAddress__DELETE( macAddress);
    // remove_header_bytes

    parent = NULL;
}

int Set_DSG_Mode1234::StatusfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // macAddress
    retVal += macAddress->read(istream);
    // remove_header_bytes
    {
        remove_header_bytes=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int Set_DSG_Mode1234::StatusfieldCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read macAddress
    retVal += macAddress->read(istream);
    // read remove_header_bytes
    {
        remove_header_bytes=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int Set_DSG_Mode1234::StatusfieldCheck::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for macAddress **/
    }


    int retVal= 0;
    // write macAddress
    if ( macAddress != NULL ) {
        retVal +=macAddress->write(ostream);
    }
    // write remove_header_bytes
    ostream.writeUI16(remove_header_bytes);
    retVal +=2;

    return retVal;
}

int Set_DSG_Mode1234::StatusfieldCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("StatusfieldCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write macAddress
    if ( macAddress != NULL ) {
        dc.indent();
        dc.getPs().println("macAddress") ;
        retVal +=macAddress->dump(dc);
    }
    // write remove_header_bytes
    dc.indent();
    dc.getPs().print("remove_header_bytes=");
    dc.getPs().println((long)remove_header_bytes);
    dc.decreaseIndent();
    return retVal;
}


// Getter for macAddress
//org_himalay_ccif_MacAddress__PTR_TYPE Set_DSG_Mode1234::StatusfieldCheck::getMacAddress()
//{
//return this->macAddress;
//}

// Setter for macAddress
//void Set_DSG_Mode1234::StatusfieldCheck::setMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val)
//{
//this->macAddress= val;
//}

// Getter for remove_header_bytes
//ui16 Set_DSG_Mode1234::StatusfieldCheck::getRemove_header_bytes()
//{
//return this->remove_header_bytes;
//}

// Setter for remove_header_bytes
//void Set_DSG_Mode1234::StatusfieldCheck::setRemove_header_bytes(ui16 val)
//{
//this->remove_header_bytes= val;
//}

int Set_DSG_Mode1234::StatusfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
Set_DSG_Mode1234::Set_DSG_Mode1234() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // operationalMode
    operationalMode= (ui8)0;
    // StatusfieldCheckInstance
    org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__INIT(StatusfieldCheckInstance)
}
// Destructor
Set_DSG_Mode1234::~Set_DSG_Mode1234() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // operationalMode

    // StatusfieldCheckInstance
    org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__DELETE( StatusfieldCheckInstance);
}

int Set_DSG_Mode1234::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // operationalMode
    {
        operationalMode=(istream.readUI8());
        retVal+=1;
    }
    // StatusfieldCheckInstance
    if ((operationalMode == 0x03) ||                (operationalMode ==0x04)) {
        org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }
    return retVal;
}

int Set_DSG_Mode1234::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read operationalMode
    {
        operationalMode=(istream.readUI8());
        retVal+=1;
    }
    // read StatusfieldCheckInstance
    if ((operationalMode == 0x03) ||                (operationalMode ==0x04)) {
        org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }

    return retVal;
}

int Set_DSG_Mode1234::write(DataOutputStream& ostream) { // throws IOException
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
    // write operationalMode
    ostream.writeUI8(operationalMode);
    retVal +=1;
    // write StatusfieldCheckInstance
    if ( StatusfieldCheckInstance != NULL ) {
        retVal +=StatusfieldCheckInstance->write(ostream);
    }

    return retVal;
}

int Set_DSG_Mode1234::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Set_DSG_Mode1234\n");
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
    // write operationalMode
    dc.indent();
    dc.getPs().print("operationalMode=");
    dc.getPs().println((long)operationalMode);
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
//org_himalay_ccif_APDUHeader__PTR_TYPE Set_DSG_Mode1234::getHeader()
//{
//return this->header;
//}

// Setter for header
//void Set_DSG_Mode1234::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 Set_DSG_Mode1234::getLength()
//{
//return this->length;
//}

// Setter for length
//void Set_DSG_Mode1234::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for operationalMode
//ui8 Set_DSG_Mode1234::getOperationalMode()
//{
//return this->operationalMode;
//}

// Setter for operationalMode
//void Set_DSG_Mode1234::setOperationalMode(ui8 val)
//{
//this->operationalMode= val;
//}

// Getter for StatusfieldCheckInstance
//org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE Set_DSG_Mode1234::getStatusfieldCheckInstance()
//{
//return this->StatusfieldCheckInstance;
//}

// Setter for StatusfieldCheckInstance
//void Set_DSG_Mode1234::setStatusfieldCheckInstance(org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE val)
//{
//this->StatusfieldCheckInstance= val;
//}

int Set_DSG_Mode1234::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void Set_DSG_Mode1234::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE Set_DSG_Mode1234::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code