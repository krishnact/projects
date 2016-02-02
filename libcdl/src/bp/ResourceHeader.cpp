//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ResourceHeader.h"

#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
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
ResourceHeader::ResourceHeader() {
    references= 0;


    // messageType
    messageType= (ui8)0;
    // descriptor_len
    descriptor_len= (ui8)0;
}
// Destructor
ResourceHeader::~ResourceHeader() {
    // messageType

    // descriptor_len

}

int ResourceHeader::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // descriptor_len
    {
        descriptor_len=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int ResourceHeader::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // read descriptor_len
    {
        descriptor_len=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int ResourceHeader::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write messageType
    ostream.writeUI8(messageType);
    retVal +=1;
    // write descriptor_len
    ostream.writeUI8(descriptor_len);
    retVal +=1;

    return retVal;
}

int ResourceHeader::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ResourceHeader\n");
    dc.increaseIndent();
    int retVal= 0;
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    // write descriptor_len
    dc.indent();
    dc.getPs().print("descriptor_len=");
    dc.getPs().println((long)descriptor_len);
    dc.decreaseIndent();
    return retVal;
}


// Getter for messageType
ui8 ResourceHeader::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void ResourceHeader::setMessageType(ui8 val)
{
    this->messageType= val;
}

// Getter for descriptor_len
//ui8 ResourceHeader::getDescriptor_len()
//{
//return this->descriptor_len;
//}

// Setter for descriptor_len
//void ResourceHeader::setDescriptor_len(ui8 val)
//{
//this->descriptor_len= val;
//}

int ResourceHeader::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::ResourceHeader* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::ResourceHeader* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code