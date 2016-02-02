//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "softwareVerMMsg.h"

#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
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
softwareVerMMsg::softwareVerMMsg() {
    references= 0;


    // ApplicationStatusflag
    ApplicationStatusflag= (ui8)0;
    // applicationNameByte
    org_himalay_msgs_runtime_ByteArray_NEW(applicationNameByte);
    applicationNameByte->setSizeType("FIRST_UI8");
    // applicationSignbyte
    org_himalay_msgs_runtime_ByteArray_NEW(applicationSignbyte);
    applicationSignbyte->setSizeType("FIRST_UI8");
    // applicationVersionbyte
    org_himalay_msgs_runtime_ByteArray_NEW(applicationVersionbyte);
    applicationVersionbyte->setSizeType("FIRST_UI8");
}
// Destructor
softwareVerMMsg::~softwareVerMMsg() {
    // ApplicationStatusflag

    // applicationNameByte
    org_himalay_msgs_runtime_ByteArray_DELETE( applicationNameByte);
    // applicationSignbyte
    org_himalay_msgs_runtime_ByteArray_DELETE( applicationSignbyte);
    // applicationVersionbyte
    org_himalay_msgs_runtime_ByteArray_DELETE( applicationVersionbyte);
}

int softwareVerMMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ApplicationStatusflag
    {
        ApplicationStatusflag=(istream.readUI8());
        retVal+=1;
    }
    // applicationNameByte
    {
        retVal+=applicationNameByte->read(istream);
    }
    // applicationSignbyte
    {
        retVal+=applicationSignbyte->read(istream);
    }
    // applicationVersionbyte
    {
        retVal+=applicationVersionbyte->read(istream);
    }
    return retVal;
}

int softwareVerMMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ApplicationStatusflag
    {
        ApplicationStatusflag=(istream.readUI8());
        retVal+=1;
    }
    // read applicationNameByte
    {
        retVal+=applicationNameByte->read(istream);
    }
    // read applicationSignbyte
    {
        retVal+=applicationSignbyte->read(istream);
    }
    // read applicationVersionbyte
    {
        retVal+=applicationVersionbyte->read(istream);
    }

    return retVal;
}

int softwareVerMMsg::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for applicationNameByte**/
    }
    {   /** fix dependent sizes for applicationSignbyte**/
    }
    {   /** fix dependent sizes for applicationVersionbyte**/
    }

    int retVal= 0;
    // write ApplicationStatusflag
    ostream.writeUI8(ApplicationStatusflag);
    retVal +=1;
    // write applicationNameByte
    {
        retVal += applicationNameByte->write(ostream);
    }
    // write applicationSignbyte
    {
        retVal += applicationSignbyte->write(ostream);
    }
    // write applicationVersionbyte
    {
        retVal += applicationVersionbyte->write(ostream);
    }

    return retVal;
}

int softwareVerMMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("softwareVerMMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ApplicationStatusflag
    dc.indent();
    dc.getPs().print("ApplicationStatusflag=");
    dc.getPs().println((long)ApplicationStatusflag);
    // write applicationNameByte
    dc.indent();
    dc.getPs().print("applicationNameByte");
    applicationNameByte->dump(dc);
    // write applicationSignbyte
    dc.indent();
    dc.getPs().print("applicationSignbyte");
    applicationSignbyte->dump(dc);
    // write applicationVersionbyte
    dc.indent();
    dc.getPs().print("applicationVersionbyte");
    applicationVersionbyte->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for ApplicationStatusflag
//ui8 softwareVerMMsg::getApplicationStatusflag()
//{
//return this->ApplicationStatusflag;
//}

// Setter for ApplicationStatusflag
//void softwareVerMMsg::setApplicationStatusflag(ui8 val)
//{
//this->ApplicationStatusflag= val;
//}

// Getter for applicationNameByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE softwareVerMMsg::getApplicationNameByte()
//{
//return this->applicationNameByte;
//}

// Setter for applicationNameByte
//void softwareVerMMsg::setApplicationNameByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->applicationNameByte= val;
//}

// Getter for applicationSignbyte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE softwareVerMMsg::getApplicationSignbyte()
//{
//return this->applicationSignbyte;
//}

// Setter for applicationSignbyte
//void softwareVerMMsg::setApplicationSignbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->applicationSignbyte= val;
//}

// Getter for applicationVersionbyte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE softwareVerMMsg::getApplicationVersionbyte()
//{
//return this->applicationVersionbyte;
//}

// Setter for applicationVersionbyte
//void softwareVerMMsg::setApplicationVersionbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->applicationVersionbyte= val;
//}

int softwareVerMMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::softwareVerMMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::softwareVerMMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code