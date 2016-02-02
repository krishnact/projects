//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "OpenSessionRequest.h"

#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
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
OpenSessionRequest::OpenSessionRequest() {
    references= 0;


    // length
    length= (ui8)0;
    // resourceIdentifier
    resourceIdentifier= (ui32)0;
}
// Destructor
OpenSessionRequest::~OpenSessionRequest() {
    // length

    // resourceIdentifier

}

int OpenSessionRequest::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    return retVal;
}

int OpenSessionRequest::read(DataInputStream&  istream ) { // throws IOException
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

    return retVal;
}

int OpenSessionRequest::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write resourceIdentifier
    ostream.writeUI32(resourceIdentifier);
    retVal +=4;

    return retVal;
}

int OpenSessionRequest::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("OpenSessionRequest\n");
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
    dc.decreaseIndent();
    return retVal;
}


// Getter for length
//ui8 OpenSessionRequest::getLength()
//{
//return this->length;
//}

// Setter for length
//void OpenSessionRequest::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for resourceIdentifier
//ui32 OpenSessionRequest::getResourceIdentifier()
//{
//return this->resourceIdentifier;
//}

// Setter for resourceIdentifier
//void OpenSessionRequest::setResourceIdentifier(ui32 val)
//{
//this->resourceIdentifier= val;
//}

int OpenSessionRequest::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::OpenSessionRequest* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::OpenSessionRequest* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code