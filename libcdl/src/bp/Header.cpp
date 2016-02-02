//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Header.h"

#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
Header::Header() {
    references= 0;


    // messageType
    messageType= (ui24)0;
    // length
    org_himalay_cl_cdl_APDULengthField__NEW( length);
}
// Destructor
Header::~Header() {
    // messageType

    // length
    org_himalay_cl_cdl_APDULengthField__DELETE( length);
}

int Header::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // messageType
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        messageType= i1 | i2;
        retVal += 3;
    }
    // length
    retVal += length->read(istream);
    return retVal;
}

int Header::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read messageType
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        messageType= i1 | i2;
        retVal += 3;
    }
    // read length
    retVal += length->read(istream);

    return retVal;
}

int Header::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for length **/
    }

    int retVal= 0;
    // write messageType
    {
        ostream.writeUI8((messageType  & 0x00FF0000)>>16);
        ostream.writeUI16((messageType & 0x0000FFFF));
        retVal+=3;
    }
    // write length
    if ( length != NULL ) {
        retVal +=length->write(ostream);
    }

    return retVal;
}

int Header::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Header\n");
    dc.increaseIndent();
    int retVal= 0;
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    // write length
    if ( length != NULL ) {
        dc.indent();
        dc.getPs().println("length") ;
        retVal +=length->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for messageType
ui24 Header::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void Header::setMessageType(ui24 val)
{
    this->messageType= val;
}

// Getter for length
//org_himalay_cl_cdl_APDULengthField__PTR_TYPE Header::getLength()
//{
//return this->length;
//}

// Setter for length
//void Header::setLength(org_himalay_cl_cdl_APDULengthField__PTR_TYPE val)
//{
//this->length= val;
//}

int Header::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::Header* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::Header* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code