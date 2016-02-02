//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PurchaseReq.h"

#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
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
PurchaseReq::PurchaseReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transactionId
    transactionId= (ui8)0;
    // optionId
    optionId= (ui16)0;
    // pinCodeLength
    org_himalay_msgs_runtime_ByteArray_NEW(pinCodeLength);
    pinCodeLength->setSizeType("FIRST_UI8");
}
// Destructor
PurchaseReq::~PurchaseReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transactionId

    // optionId

    // pinCodeLength
    org_himalay_msgs_runtime_ByteArray_DELETE( pinCodeLength);
}

int PurchaseReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // optionId
    {
        optionId=istream.readUI16();
        retVal+=2;
    }
    // pinCodeLength
    {
        retVal+=pinCodeLength->read(istream);
    }
    return retVal;
}

int PurchaseReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // read optionId
    {
        optionId=istream.readUI16();
        retVal+=2;
    }
    // read pinCodeLength
    {
        retVal+=pinCodeLength->read(istream);
    }

    return retVal;
}

int PurchaseReq::write(DataOutputStream& ostream) { // throws IOException
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
    // write transactionId
    ostream.writeUI8(transactionId);
    retVal +=1;
    // write optionId
    ostream.writeUI16(optionId);
    retVal +=2;
    // write pinCodeLength
    {
        retVal += pinCodeLength->write(ostream);
    }

    return retVal;
}

int PurchaseReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PurchaseReq\n");
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
    // write transactionId
    dc.indent();
    dc.getPs().print("transactionId=");
    dc.getPs().println((long)transactionId);
    // write optionId
    dc.indent();
    dc.getPs().print("optionId=");
    dc.getPs().println((long)optionId);
    // write pinCodeLength
    dc.indent();
    dc.getPs().print("pinCodeLength");
    pinCodeLength->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE PurchaseReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void PurchaseReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 PurchaseReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void PurchaseReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transactionId
//ui8 PurchaseReq::getTransactionId()
//{
//return this->transactionId;
//}

// Setter for transactionId
//void PurchaseReq::setTransactionId(ui8 val)
//{
//this->transactionId= val;
//}

// Getter for optionId
//ui16 PurchaseReq::getOptionId()
//{
//return this->optionId;
//}

// Setter for optionId
//void PurchaseReq::setOptionId(ui16 val)
//{
//this->optionId= val;
//}

// Getter for pinCodeLength
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PurchaseReq::getPinCodeLength()
//{
//return this->pinCodeLength;
//}

// Setter for pinCodeLength
//void PurchaseReq::setPinCodeLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->pinCodeLength= val;
//}

int PurchaseReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void PurchaseReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE PurchaseReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PurchaseReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PurchaseReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code