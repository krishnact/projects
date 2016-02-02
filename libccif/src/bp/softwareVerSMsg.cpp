//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "softwareVerSMsg.h"

#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
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
softwareVerSMsg::softwareVerSMsg() {
    references= 0;


    // applicationVersionNumber
    applicationVersionNumber= (ui16)0;
    // ApplicationStatusfield
    ApplicationStatusfield= (ui8)0;
    // applicationNameByte
    org_himalay_msgs_runtime_ByteArray_NEW(applicationNameByte);
    applicationNameByte->setSizeType("FIRST_UI8");
    // applicationSignbyte
    org_himalay_msgs_runtime_ByteArray_NEW(applicationSignbyte);
    applicationSignbyte->setSizeType("FIRST_UI8");
}
// Destructor
softwareVerSMsg::~softwareVerSMsg() {
    // applicationVersionNumber

    // ApplicationStatusfield

    // applicationNameByte
    org_himalay_msgs_runtime_ByteArray_DELETE( applicationNameByte);
    // applicationSignbyte
    org_himalay_msgs_runtime_ByteArray_DELETE( applicationSignbyte);
}

int softwareVerSMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // applicationVersionNumber
    {
        applicationVersionNumber=istream.readUI16();
        retVal+=2;
    }
    // ApplicationStatusfield
    {
        ApplicationStatusfield=(istream.readUI8());
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
    return retVal;
}

int softwareVerSMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read applicationVersionNumber
    {
        applicationVersionNumber=istream.readUI16();
        retVal+=2;
    }
    // read ApplicationStatusfield
    {
        ApplicationStatusfield=(istream.readUI8());
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

    return retVal;
}

int softwareVerSMsg::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for applicationNameByte**/
    }
    {   /** fix dependent sizes for applicationSignbyte**/
    }

    int retVal= 0;
    // write applicationVersionNumber
    ostream.writeUI16(applicationVersionNumber);
    retVal +=2;
    // write ApplicationStatusfield
    ostream.writeUI8(ApplicationStatusfield);
    retVal +=1;
    // write applicationNameByte
    {
        retVal += applicationNameByte->write(ostream);
    }
    // write applicationSignbyte
    {
        retVal += applicationSignbyte->write(ostream);
    }

    return retVal;
}

int softwareVerSMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("softwareVerSMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write applicationVersionNumber
    dc.indent();
    dc.getPs().print("applicationVersionNumber=");
    dc.getPs().println((long)applicationVersionNumber);
    // write ApplicationStatusfield
    dc.indent();
    dc.getPs().print("ApplicationStatusfield=");
    dc.getPs().println((long)ApplicationStatusfield);
    // write applicationNameByte
    dc.indent();
    dc.getPs().print("applicationNameByte");
    applicationNameByte->dump(dc);
    // write applicationSignbyte
    dc.indent();
    dc.getPs().print("applicationSignbyte");
    applicationSignbyte->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for applicationVersionNumber
//ui16 softwareVerSMsg::getApplicationVersionNumber()
//{
//return this->applicationVersionNumber;
//}

// Setter for applicationVersionNumber
//void softwareVerSMsg::setApplicationVersionNumber(ui16 val)
//{
//this->applicationVersionNumber= val;
//}

// Getter for ApplicationStatusfield
//ui8 softwareVerSMsg::getApplicationStatusfield()
//{
//return this->ApplicationStatusfield;
//}

// Setter for ApplicationStatusfield
//void softwareVerSMsg::setApplicationStatusfield(ui8 val)
//{
//this->ApplicationStatusfield= val;
//}

// Getter for applicationNameByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE softwareVerSMsg::getApplicationNameByte()
//{
//return this->applicationNameByte;
//}

// Setter for applicationNameByte
//void softwareVerSMsg::setApplicationNameByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->applicationNameByte= val;
//}

// Getter for applicationSignbyte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE softwareVerSMsg::getApplicationSignbyte()
//{
//return this->applicationSignbyte;
//}

// Setter for applicationSignbyte
//void softwareVerSMsg::setApplicationSignbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->applicationSignbyte= val;
//}

int softwareVerSMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::softwareVerSMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::softwareVerSMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code