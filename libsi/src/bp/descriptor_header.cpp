//**//
//@Created(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "descriptor_header.h"

#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;

// Constructor
descriptor_header::descriptor_header() {
    references= 0;


    // messageType
    messageType= (ui8)0;
    // length
    length= (ui8)0;
}
// Destructor
descriptor_header::~descriptor_header() {
    // messageType

    // length

}

int descriptor_header::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int descriptor_header::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int descriptor_header::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write messageType
    ostream.writeUI8(messageType);
    retVal +=1;
    // write length
    ostream.writeUI8(length);
    retVal +=1;

    return retVal;
}

int descriptor_header::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("descriptor_header\n");
    dc.increaseIndent();
    int retVal= 0;
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    dc.decreaseIndent();
    return retVal;
}


// Getter for messageType
ui8 descriptor_header::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void descriptor_header::setMessageType(ui8 val)
{
    this->messageType= val;
}

// Getter for length
//ui8 descriptor_header::getLength()
//{
//return this->length;
//}

// Setter for length
//void descriptor_header::setLength(ui8 val)
//{
//this->length= val;
//}

int descriptor_header::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::descriptor_header* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::descriptor_header* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code