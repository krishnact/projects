//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ServerReply.h"

#ifdef org_himalay_ccif_ServerReply__USE_SMART_PTR
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
ServerReply::ServerReply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // txnNumber
    txnNumber= (ui8)0;
    // fileStatus
    fileStatus= (ui8)0;
    // headerFileName
    org_himalay_msgs_runtime_ByteArray_NEW(headerFileName);
    headerFileName->setSizeType("FIRST_UI16");
    // URL
    org_himalay_msgs_runtime_ByteArray_NEW(URL);
    URL->setSizeType("FIRST_UI16");
}
// Destructor
ServerReply::~ServerReply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // txnNumber

    // fileStatus

    // headerFileName
    org_himalay_msgs_runtime_ByteArray_DELETE( headerFileName);
    // URL
    org_himalay_msgs_runtime_ByteArray_DELETE( URL);
}

int ServerReply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // txnNumber
    {
        txnNumber=(istream.readUI8());
        retVal+=1;
    }
    // fileStatus
    {
        fileStatus=(istream.readUI8());
        retVal+=1;
    }
    // headerFileName
    {
        retVal+=headerFileName->read(istream);
    }
    // URL
    {
        retVal+=URL->read(istream);
    }
    return retVal;
}

int ServerReply::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read txnNumber
    {
        txnNumber=(istream.readUI8());
        retVal+=1;
    }
    // read fileStatus
    {
        fileStatus=(istream.readUI8());
        retVal+=1;
    }
    // read headerFileName
    {
        retVal+=headerFileName->read(istream);
    }
    // read URL
    {
        retVal+=URL->read(istream);
    }

    return retVal;
}

int ServerReply::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    {   /** fix dependent sizes for headerFileName**/
    }
    {   /** fix dependent sizes for URL**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write txnNumber
    ostream.writeUI8(txnNumber);
    retVal +=1;
    // write fileStatus
    ostream.writeUI8(fileStatus);
    retVal +=1;
    // write headerFileName
    {
        retVal += headerFileName->write(ostream);
    }
    // write URL
    {
        retVal += URL->write(ostream);
    }

    return retVal;
}

int ServerReply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServerReply\n");
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
    // write txnNumber
    dc.indent();
    dc.getPs().print("txnNumber=");
    dc.getPs().println((long)txnNumber);
    // write fileStatus
    dc.indent();
    dc.getPs().print("fileStatus=");
    dc.getPs().println((long)fileStatus);
    // write headerFileName
    dc.indent();
    dc.getPs().print("headerFileName");
    headerFileName->dump(dc);
    // write URL
    dc.indent();
    dc.getPs().print("URL");
    URL->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ServerReply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ServerReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 ServerReply::getLength()
//{
//return this->length;
//}

// Setter for length
//void ServerReply::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for txnNumber
//ui8 ServerReply::getTxnNumber()
//{
//return this->txnNumber;
//}

// Setter for txnNumber
//void ServerReply::setTxnNumber(ui8 val)
//{
//this->txnNumber= val;
//}

// Getter for fileStatus
//ui8 ServerReply::getFileStatus()
//{
//return this->fileStatus;
//}

// Setter for fileStatus
//void ServerReply::setFileStatus(ui8 val)
//{
//this->fileStatus= val;
//}

// Getter for headerFileName
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ServerReply::getHeaderFileName()
//{
//return this->headerFileName;
//}

// Setter for headerFileName
//void ServerReply::setHeaderFileName(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->headerFileName= val;
//}

// Getter for URL
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ServerReply::getURL()
//{
//return this->URL;
//}

// Setter for URL
//void ServerReply::setURL(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->URL= val;
//}

int ServerReply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ServerReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ServerReply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ServerReply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServerReply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ServerReply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code