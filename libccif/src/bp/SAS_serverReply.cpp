//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SAS_serverReply.h"

#ifdef org_himalay_ccif_SAS_serverReply__USE_SMART_PTR
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
SAS_serverReply::SAS_serverReply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transaction_nb
    transaction_nb= (ui8)0;
    // messages
    org_himalay_msgs_runtime_ByteArray_NEW(messages);
    messages->setSizeType("FIRST_UI16");
}
// Destructor
SAS_serverReply::~SAS_serverReply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transaction_nb

    // messages
    org_himalay_msgs_runtime_ByteArray_DELETE( messages);
}

int SAS_serverReply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }
    // messages
    {
        retVal+=messages->read(istream);
    }
    return retVal;
}

int SAS_serverReply::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }
    // read messages
    {
        retVal+=messages->read(istream);
    }

    return retVal;
}

int SAS_serverReply::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for messages**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write transaction_nb
    ostream.writeUI8(transaction_nb);
    retVal +=1;
    // write messages
    {
        retVal += messages->write(ostream);
    }

    return retVal;
}

int SAS_serverReply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SAS_serverReply\n");
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
    // write transaction_nb
    dc.indent();
    dc.getPs().print("transaction_nb=");
    dc.getPs().println((long)transaction_nb);
    // write messages
    dc.indent();
    dc.getPs().print("messages");
    messages->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SAS_serverReply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SAS_serverReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SAS_serverReply::getLength()
//{
//return this->length;
//}

// Setter for length
//void SAS_serverReply::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transaction_nb
//ui8 SAS_serverReply::getTransaction_nb()
//{
//return this->transaction_nb;
//}

// Setter for transaction_nb
//void SAS_serverReply::setTransaction_nb(ui8 val)
//{
//this->transaction_nb= val;
//}

// Getter for messages
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE SAS_serverReply::getMessages()
//{
//return this->messages;
//}

// Setter for messages
//void SAS_serverReply::setMessages(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->messages= val;
//}

int SAS_serverReply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SAS_serverReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SAS_serverReply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SAS_serverReply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SAS_serverReply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SAS_serverReply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code