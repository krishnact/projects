//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "APDUHeader.h"

#ifdef org_himalay_ccif_APDUHeader__USE_SMART_PTR
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
APDUHeader::APDUHeader() {
    references= 0;


    // messageType
    messageType= (ui24)0;
}
// Destructor
APDUHeader::~APDUHeader() {
    // messageType

}

int APDUHeader::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // messageType
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        messageType= i1 | i2;
        retVal += 3;
    }
    return retVal;
}

int APDUHeader::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read messageType
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        messageType= i1 | i2;
        retVal += 3;
    }

    return retVal;
}

int APDUHeader::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write messageType
    {
        ostream.writeUI8((messageType  & 0x00FF0000)>>16);
        ostream.writeUI16((messageType & 0x0000FFFF));
        retVal+=3;
    }

    return retVal;
}

int APDUHeader::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("APDUHeader\n");
    dc.increaseIndent();
    int retVal= 0;
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    dc.decreaseIndent();
    return retVal;
}


// Getter for messageType
ui24 APDUHeader::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void APDUHeader::setMessageType(ui24 val)
{
    this->messageType= val;
}

int APDUHeader::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_APDUHeader__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::APDUHeader* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUHeader* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code