//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CancelReq.h"

#ifdef org_himalay_ccif_CancelReq__USE_SMART_PTR
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
CancelReq::CancelReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // IPPVslotId
    IPPVslotId= (ui8)0;
    // pinCodeLength
    org_himalay_msgs_runtime_ByteArray_NEW(pinCodeLength);
    pinCodeLength->setSizeType("FIRST_UI8");
}
// Destructor
CancelReq::~CancelReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // IPPVslotId

    // pinCodeLength
    org_himalay_msgs_runtime_ByteArray_DELETE( pinCodeLength);
}

int CancelReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // IPPVslotId
    {
        IPPVslotId=(istream.readUI8());
        retVal+=1;
    }
    // pinCodeLength
    {
        retVal+=pinCodeLength->read(istream);
    }
    return retVal;
}

int CancelReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read IPPVslotId
    {
        IPPVslotId=(istream.readUI8());
        retVal+=1;
    }
    // read pinCodeLength
    {
        retVal+=pinCodeLength->read(istream);
    }

    return retVal;
}

int CancelReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for pinCodeLength**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write IPPVslotId
    ostream.writeUI8(IPPVslotId);
    retVal +=1;
    // write pinCodeLength
    {
        retVal += pinCodeLength->write(ostream);
    }

    return retVal;
}

int CancelReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CancelReq\n");
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
    // write IPPVslotId
    dc.indent();
    dc.getPs().print("IPPVslotId=");
    dc.getPs().println((long)IPPVslotId);
    // write pinCodeLength
    dc.indent();
    dc.getPs().print("pinCodeLength");
    pinCodeLength->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CancelReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CancelReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CancelReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void CancelReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for IPPVslotId
//ui8 CancelReq::getIPPVslotId()
//{
//return this->IPPVslotId;
//}

// Setter for IPPVslotId
//void CancelReq::setIPPVslotId(ui8 val)
//{
//this->IPPVslotId= val;
//}

// Getter for pinCodeLength
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CancelReq::getPinCodeLength()
//{
//return this->pinCodeLength;
//}

// Setter for pinCodeLength
//void CancelReq::setPinCodeLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->pinCodeLength= val;
//}

int CancelReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CancelReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CancelReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CancelReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CancelReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CancelReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code