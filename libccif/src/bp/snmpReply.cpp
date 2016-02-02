//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "snmpReply.h"

#ifdef org_himalay_ccif_snmpReply__USE_SMART_PTR
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
snmpReply::snmpReply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // snmpResponse
    org_himalay_msgs_runtime_ByteArray_NEW(snmpResponse);
    snmpResponse->setSizeType("FIRST_UI8");
}
// Destructor
snmpReply::~snmpReply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // snmpResponse
    org_himalay_msgs_runtime_ByteArray_DELETE( snmpResponse);
}

int snmpReply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // snmpResponse
    {
        retVal+=snmpResponse->read(istream);
    }
    return retVal;
}

int snmpReply::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read snmpResponse
    {
        retVal+=snmpResponse->read(istream);
    }

    return retVal;
}

int snmpReply::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for snmpResponse**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write snmpResponse
    {
        retVal += snmpResponse->write(ostream);
    }

    return retVal;
}

int snmpReply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("snmpReply\n");
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
    // write snmpResponse
    dc.indent();
    dc.getPs().print("snmpResponse");
    snmpResponse->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE snmpReply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void snmpReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 snmpReply::getLength()
//{
//return this->length;
//}

// Setter for length
//void snmpReply::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for snmpResponse
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE snmpReply::getSnmpResponse()
//{
//return this->snmpResponse;
//}

// Setter for snmpResponse
//void snmpReply::setSnmpResponse(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->snmpResponse= val;
//}

int snmpReply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void snmpReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE snmpReply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_snmpReply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::snmpReply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::snmpReply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code