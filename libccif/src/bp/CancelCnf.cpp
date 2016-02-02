//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CancelCnf.h"

#ifdef org_himalay_ccif_CancelCnf__USE_SMART_PTR
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
CancelCnf::CancelCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // IPPVslotId
    IPPVslotId= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // statusRegister
    statusRegister= (ui8)0;
    // commentLength
    org_himalay_msgs_runtime_ByteArray_NEW(commentLength);
    commentLength->setSizeType("FIRST_UI8");
}
// Destructor
CancelCnf::~CancelCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // IPPVslotId

    // statusField

    // statusRegister

    // commentLength
    org_himalay_msgs_runtime_ByteArray_DELETE( commentLength);
}

int CancelCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // statusRegister
    {
        statusRegister=(istream.readUI8());
        retVal+=1;
    }
    // commentLength
    {
        retVal+=commentLength->read(istream);
    }
    return retVal;
}

int CancelCnf::read(DataInputStream&  istream ) { // throws IOException
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
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // read statusRegister
    {
        statusRegister=(istream.readUI8());
        retVal+=1;
    }
    // read commentLength
    {
        retVal+=commentLength->read(istream);
    }

    return retVal;
}

int CancelCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }




    {   /** fix dependent sizes for commentLength**/
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
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;
    // write statusRegister
    ostream.writeUI8(statusRegister);
    retVal +=1;
    // write commentLength
    {
        retVal += commentLength->write(ostream);
    }

    return retVal;
}

int CancelCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CancelCnf\n");
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
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    // write statusRegister
    dc.indent();
    dc.getPs().print("statusRegister=");
    dc.getPs().println((long)statusRegister);
    // write commentLength
    dc.indent();
    dc.getPs().print("commentLength");
    commentLength->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CancelCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CancelCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CancelCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void CancelCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for IPPVslotId
//ui8 CancelCnf::getIPPVslotId()
//{
//return this->IPPVslotId;
//}

// Setter for IPPVslotId
//void CancelCnf::setIPPVslotId(ui8 val)
//{
//this->IPPVslotId= val;
//}

// Getter for statusField
//ui8 CancelCnf::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void CancelCnf::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for statusRegister
//ui8 CancelCnf::getStatusRegister()
//{
//return this->statusRegister;
//}

// Setter for statusRegister
//void CancelCnf::setStatusRegister(ui8 val)
//{
//this->statusRegister= val;
//}

// Getter for commentLength
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CancelCnf::getCommentLength()
//{
//return this->commentLength;
//}

// Setter for commentLength
//void CancelCnf::setCommentLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->commentLength= val;
//}

int CancelCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CancelCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CancelCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CancelCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CancelCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CancelCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code