//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CloseSessionResponse.h"

#ifdef org_himalay_ccif_CloseSessionResponse__USE_SMART_PTR
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
CloseSessionResponse::CloseSessionResponse() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // sessionStatus
    sessionStatus= (ui8)0;
    // sessionNb
    sessionNb= (ui16)0;
}
// Destructor
CloseSessionResponse::~CloseSessionResponse() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // sessionStatus

    // sessionNb

}

int CloseSessionResponse::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // sessionStatus
    {
        sessionStatus=(istream.readUI8());
        retVal+=1;
    }
    // sessionNb
    {
        sessionNb=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int CloseSessionResponse::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read sessionStatus
    {
        sessionStatus=(istream.readUI8());
        retVal+=1;
    }
    // read sessionNb
    {
        sessionNb=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int CloseSessionResponse::write(DataOutputStream& ostream) { // throws IOException
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
    // write sessionStatus
    ostream.writeUI8(sessionStatus);
    retVal +=1;
    // write sessionNb
    ostream.writeUI16(sessionNb);
    retVal +=2;

    return retVal;
}

int CloseSessionResponse::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CloseSessionResponse\n");
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
    // write sessionStatus
    dc.indent();
    dc.getPs().print("sessionStatus=");
    dc.getPs().println((long)sessionStatus);
    // write sessionNb
    dc.indent();
    dc.getPs().print("sessionNb=");
    dc.getPs().println((long)sessionNb);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CloseSessionResponse::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CloseSessionResponse::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CloseSessionResponse::getLength()
//{
//return this->length;
//}

// Setter for length
//void CloseSessionResponse::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for sessionStatus
//ui8 CloseSessionResponse::getSessionStatus()
//{
//return this->sessionStatus;
//}

// Setter for sessionStatus
//void CloseSessionResponse::setSessionStatus(ui8 val)
//{
//this->sessionStatus= val;
//}

// Getter for sessionNb
//ui16 CloseSessionResponse::getSessionNb()
//{
//return this->sessionNb;
//}

// Setter for sessionNb
//void CloseSessionResponse::setSessionNb(ui16 val)
//{
//this->sessionNb= val;
//}

int CloseSessionResponse::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CloseSessionResponse::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CloseSessionResponse::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CloseSessionResponse__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CloseSessionResponse* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CloseSessionResponse* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code