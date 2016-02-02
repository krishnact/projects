//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CloseSessionRequest.h"

#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
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
CloseSessionRequest::CloseSessionRequest() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // sessionNb
    sessionNb= (ui16)0;
}
// Destructor
CloseSessionRequest::~CloseSessionRequest() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // sessionNb

}

int CloseSessionRequest::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // sessionNb
    {
        sessionNb=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int CloseSessionRequest::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read sessionNb
    {
        sessionNb=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int CloseSessionRequest::write(DataOutputStream& ostream) { // throws IOException
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
    // write sessionNb
    ostream.writeUI16(sessionNb);
    retVal +=2;

    return retVal;
}

int CloseSessionRequest::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CloseSessionRequest\n");
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
    // write sessionNb
    dc.indent();
    dc.getPs().print("sessionNb=");
    dc.getPs().println((long)sessionNb);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CloseSessionRequest::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CloseSessionRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CloseSessionRequest::getLength()
//{
//return this->length;
//}

// Setter for length
//void CloseSessionRequest::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for sessionNb
//ui16 CloseSessionRequest::getSessionNb()
//{
//return this->sessionNb;
//}

// Setter for sessionNb
//void CloseSessionRequest::setSessionNb(ui16 val)
//{
//this->sessionNb= val;
//}

int CloseSessionRequest::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CloseSessionRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CloseSessionRequest::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CloseSessionRequest* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CloseSessionRequest* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code