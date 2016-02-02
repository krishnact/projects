//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Send_DSD_Info.h"

#ifdef org_himalay_ccif_Send_DSD_Info__USE_SMART_PTR
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
Send_DSD_Info::Send_DSD_Info() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // DCD_message
    DCD_message= (ui8)0;
}
// Destructor
Send_DSD_Info::~Send_DSD_Info() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // DCD_message

}

int Send_DSD_Info::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // DCD_message
    {
        DCD_message=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int Send_DSD_Info::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read DCD_message
    {
        DCD_message=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int Send_DSD_Info::write(DataOutputStream& ostream) { // throws IOException
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
    // write DCD_message
    ostream.writeUI8(DCD_message);
    retVal +=1;

    return retVal;
}

int Send_DSD_Info::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Send_DSD_Info\n");
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
    // write DCD_message
    dc.indent();
    dc.getPs().print("DCD_message=");
    dc.getPs().println((long)DCD_message);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE Send_DSD_Info::getHeader()
//{
//return this->header;
//}

// Setter for header
//void Send_DSD_Info::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 Send_DSD_Info::getLength()
//{
//return this->length;
//}

// Setter for length
//void Send_DSD_Info::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for DCD_message
//ui8 Send_DSD_Info::getDCD_message()
//{
//return this->DCD_message;
//}

// Setter for DCD_message
//void Send_DSD_Info::setDCD_message(ui8 val)
//{
//this->DCD_message= val;
//}

int Send_DSD_Info::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void Send_DSD_Info::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE Send_DSD_Info::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_Send_DSD_Info__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Send_DSD_Info* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Send_DSD_Info* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code