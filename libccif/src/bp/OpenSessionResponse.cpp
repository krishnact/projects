//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "OpenSessionResponse.h"

#ifdef org_himalay_ccif_OpenSessionResponse__USE_SMART_PTR
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
OpenSessionResponse::OpenSessionResponse() {
    references= 0;


    // length
    length= (ui8)0;
    // resourceIdentifier
    resourceIdentifier= (ui32)0;
    // sessionStatus
    sessionStatus= (ui8)0;
    // sessionNb
    sessionNb= (ui16)0;
}
// Destructor
OpenSessionResponse::~OpenSessionResponse() {
    // length

    // resourceIdentifier

    // sessionStatus

    // sessionNb

}

int OpenSessionResponse::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // resourceIdentifier
    {
        resourceIdentifier=istream.readUI32() ;
        retVal+=4;
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

int OpenSessionResponse::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read resourceIdentifier
    {
        resourceIdentifier=istream.readUI32() ;
        retVal+=4;
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

int OpenSessionResponse::write(DataOutputStream& ostream) { // throws IOException





    int retVal= 0;
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write resourceIdentifier
    ostream.writeUI32(resourceIdentifier);
    retVal +=4;
    // write sessionStatus
    ostream.writeUI8(sessionStatus);
    retVal +=1;
    // write sessionNb
    ostream.writeUI16(sessionNb);
    retVal +=2;

    return retVal;
}

int OpenSessionResponse::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("OpenSessionResponse\n");
    dc.increaseIndent();
    int retVal= 0;
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    // write resourceIdentifier
    dc.indent();
    dc.getPs().print("resourceIdentifier=");
    dc.getPs().println((long)resourceIdentifier);
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


// Getter for length
//ui8 OpenSessionResponse::getLength()
//{
//return this->length;
//}

// Setter for length
//void OpenSessionResponse::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for resourceIdentifier
//ui32 OpenSessionResponse::getResourceIdentifier()
//{
//return this->resourceIdentifier;
//}

// Setter for resourceIdentifier
//void OpenSessionResponse::setResourceIdentifier(ui32 val)
//{
//this->resourceIdentifier= val;
//}

// Getter for sessionStatus
//ui8 OpenSessionResponse::getSessionStatus()
//{
//return this->sessionStatus;
//}

// Setter for sessionStatus
//void OpenSessionResponse::setSessionStatus(ui8 val)
//{
//this->sessionStatus= val;
//}

// Getter for sessionNb
//ui16 OpenSessionResponse::getSessionNb()
//{
//return this->sessionNb;
//}

// Setter for sessionNb
//void OpenSessionResponse::setSessionNb(ui16 val)
//{
//this->sessionNb= val;
//}

int OpenSessionResponse::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_OpenSessionResponse__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::OpenSessionResponse* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::OpenSessionResponse* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code