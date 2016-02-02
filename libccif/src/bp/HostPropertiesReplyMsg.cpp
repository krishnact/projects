//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostPropertiesReplyMsg.h"

#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
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
HostPropertiesReplyMsg::HostPropertiesReplyMsg() {
    references= 0;


    // propertyKeyByte
    org_himalay_msgs_runtime_ByteArray_NEW(propertyKeyByte);
    propertyKeyByte->setSizeType("FIRST_UI8");
    // propertyValueByte
    org_himalay_msgs_runtime_ByteArray_NEW(propertyValueByte);
    propertyValueByte->setSizeType("FIRST_UI8");
}
// Destructor
HostPropertiesReplyMsg::~HostPropertiesReplyMsg() {
    // propertyKeyByte
    org_himalay_msgs_runtime_ByteArray_DELETE( propertyKeyByte);
    // propertyValueByte
    org_himalay_msgs_runtime_ByteArray_DELETE( propertyValueByte);
}

int HostPropertiesReplyMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // propertyKeyByte
    {
        retVal+=propertyKeyByte->read(istream);
    }
    // propertyValueByte
    {
        retVal+=propertyValueByte->read(istream);
    }
    return retVal;
}

int HostPropertiesReplyMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read propertyKeyByte
    {
        retVal+=propertyKeyByte->read(istream);
    }
    // read propertyValueByte
    {
        retVal+=propertyValueByte->read(istream);
    }

    return retVal;
}

int HostPropertiesReplyMsg::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for propertyKeyByte**/
    }
    {   /** fix dependent sizes for propertyValueByte**/
    }

    int retVal= 0;
    // write propertyKeyByte
    {
        retVal += propertyKeyByte->write(ostream);
    }
    // write propertyValueByte
    {
        retVal += propertyValueByte->write(ostream);
    }

    return retVal;
}

int HostPropertiesReplyMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostPropertiesReplyMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write propertyKeyByte
    dc.indent();
    dc.getPs().print("propertyKeyByte");
    propertyKeyByte->dump(dc);
    // write propertyValueByte
    dc.indent();
    dc.getPs().print("propertyValueByte");
    propertyValueByte->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for propertyKeyByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HostPropertiesReplyMsg::getPropertyKeyByte()
//{
//return this->propertyKeyByte;
//}

// Setter for propertyKeyByte
//void HostPropertiesReplyMsg::setPropertyKeyByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->propertyKeyByte= val;
//}

// Getter for propertyValueByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HostPropertiesReplyMsg::getPropertyValueByte()
//{
//return this->propertyValueByte;
//}

// Setter for propertyValueByte
//void HostPropertiesReplyMsg::setPropertyValueByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->propertyValueByte= val;
//}

int HostPropertiesReplyMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HostPropertiesReplyMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HostPropertiesReplyMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code