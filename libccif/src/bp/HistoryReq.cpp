//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HistoryReq.h"

#ifdef org_himalay_ccif_HistoryReq__USE_SMART_PTR
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
HistoryReq::HistoryReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // pincodeLength
    org_himalay_msgs_runtime_ByteArray_NEW(pincodeLength);
    pincodeLength->setSizeType("FIRST_UI8");
}
// Destructor
HistoryReq::~HistoryReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // pincodeLength
    org_himalay_msgs_runtime_ByteArray_DELETE( pincodeLength);
}

int HistoryReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // pincodeLength
    {
        retVal+=pincodeLength->read(istream);
    }
    return retVal;
}

int HistoryReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read pincodeLength
    {
        retVal+=pincodeLength->read(istream);
    }

    return retVal;
}

int HistoryReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for pincodeLength**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write pincodeLength
    {
        retVal += pincodeLength->write(ostream);
    }

    return retVal;
}

int HistoryReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HistoryReq\n");
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
    // write pincodeLength
    dc.indent();
    dc.getPs().print("pincodeLength");
    pincodeLength->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE HistoryReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HistoryReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HistoryReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void HistoryReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for pincodeLength
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HistoryReq::getPincodeLength()
//{
//return this->pincodeLength;
//}

// Setter for pincodeLength
//void HistoryReq::setPincodeLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->pincodeLength= val;
//}

int HistoryReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HistoryReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HistoryReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HistoryReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HistoryReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HistoryReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code