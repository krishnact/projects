//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Send_DCD_info.h"

#ifdef org_himalay_ccif_Send_DCD_info__USE_SMART_PTR
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
Send_DCD_info::Send_DCD_info() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // operationalMode
    operationalMode= (ui8)0;
    // messageType
    messageType= (ui8)0;
}
// Destructor
Send_DCD_info::~Send_DCD_info() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // operationalMode

    // messageType

}

int Send_DCD_info::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int Send_DCD_info::read(DataInputStream&  istream ) { // throws IOException
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
    // read messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int Send_DCD_info::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
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
    // write messageType
    ostream.writeUI8(messageType);
    retVal +=1;

    return retVal;
}

int Send_DCD_info::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Send_DCD_info\n");
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
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE Send_DCD_info::getHeader()
//{
//return this->header;
//}

// Setter for header
//void Send_DCD_info::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 Send_DCD_info::getLength()
//{
//return this->length;
//}

// Setter for length
//void Send_DCD_info::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for operationalMode
//ui8 Send_DCD_info::getOperationalMode()
//{
//return this->operationalMode;
//}

// Setter for operationalMode
//void Send_DCD_info::setOperationalMode(ui8 val)
//{
//this->operationalMode= val;
//}

// Getter for messageType
ui8 Send_DCD_info::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void Send_DCD_info::setMessageType(ui8 val)
{
    this->messageType= val;
}

int Send_DCD_info::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void Send_DCD_info::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE Send_DCD_info::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_Send_DCD_info__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Send_DCD_info* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Send_DCD_info* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code