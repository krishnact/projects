//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "snmpReq.h"

#ifdef org_himalay_ccif_snmpReq__USE_SMART_PTR
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
snmpReq::snmpReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // snmpMessage
    org_himalay_msgs_runtime_ByteArray_NEW(snmpMessage);
    snmpMessage->setSizeType("FIRST_UI8");
}
// Destructor
snmpReq::~snmpReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // snmpMessage
    org_himalay_msgs_runtime_ByteArray_DELETE( snmpMessage);
}

int snmpReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // snmpMessage
    {
        retVal+=snmpMessage->read(istream);
    }
    return retVal;
}

int snmpReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read snmpMessage
    {
        retVal+=snmpMessage->read(istream);
    }

    return retVal;
}

int snmpReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for snmpMessage**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write snmpMessage
    {
        retVal += snmpMessage->write(ostream);
    }

    return retVal;
}

int snmpReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("snmpReq\n");
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
    // write snmpMessage
    dc.indent();
    dc.getPs().print("snmpMessage");
    snmpMessage->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE snmpReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void snmpReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 snmpReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void snmpReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for snmpMessage
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE snmpReq::getSnmpMessage()
//{
//return this->snmpMessage;
//}

// Setter for snmpMessage
//void snmpReq::setSnmpMessage(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->snmpMessage= val;
//}

int snmpReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void snmpReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE snmpReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_snmpReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::snmpReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::snmpReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code