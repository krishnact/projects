//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HistoryCnf.h"

#ifdef org_himalay_ccif_HistoryCnf__USE_SMART_PTR
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
HistoryCnf::HistoryCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // commentLength
    org_himalay_msgs_runtime_ByteArray_NEW(commentLength);
    commentLength->setSizeType("FIRST_UI8");
    // ippvslotNb
    org_himalay_msgs_runtime_ByteArray_NEW(ippvslotNb);
    ippvslotNb->setSizeType("FIRST_UI8");
}
// Destructor
HistoryCnf::~HistoryCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // statusField

    // commentLength
    org_himalay_msgs_runtime_ByteArray_DELETE( commentLength);
    // ippvslotNb
    org_himalay_msgs_runtime_ByteArray_DELETE( ippvslotNb);
}

int HistoryCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // commentLength
    {
        retVal+=commentLength->read(istream);
    }
    // ippvslotNb
    {
        retVal+=ippvslotNb->read(istream);
    }
    return retVal;
}

int HistoryCnf::read(DataInputStream&  istream ) { // throws IOException
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
    // read commentLength
    {
        retVal+=commentLength->read(istream);
    }
    // read ippvslotNb
    {
        retVal+=ippvslotNb->read(istream);
    }

    return retVal;
}

int HistoryCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for commentLength**/
    }
    {   /** fix dependent sizes for ippvslotNb**/
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
    // write commentLength
    {
        retVal += commentLength->write(ostream);
    }
    // write ippvslotNb
    {
        retVal += ippvslotNb->write(ostream);
    }

    return retVal;
}

int HistoryCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HistoryCnf\n");
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
    // write commentLength
    dc.indent();
    dc.getPs().print("commentLength");
    commentLength->dump(dc);
    // write ippvslotNb
    dc.indent();
    dc.getPs().print("ippvslotNb");
    ippvslotNb->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE HistoryCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HistoryCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HistoryCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void HistoryCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for statusField
//ui8 HistoryCnf::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void HistoryCnf::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for commentLength
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HistoryCnf::getCommentLength()
//{
//return this->commentLength;
//}

// Setter for commentLength
//void HistoryCnf::setCommentLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->commentLength= val;
//}

// Getter for ippvslotNb
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HistoryCnf::getIppvslotNb()
//{
//return this->ippvslotNb;
//}

// Setter for ippvslotNb
//void HistoryCnf::setIppvslotNb(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->ippvslotNb= val;
//}

int HistoryCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HistoryCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HistoryCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HistoryCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HistoryCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HistoryCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code