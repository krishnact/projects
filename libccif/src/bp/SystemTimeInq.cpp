//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SystemTimeInq.h"

#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
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
SystemTimeInq::SystemTimeInq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // responseInterval
    responseInterval= (ui8)0;
}
// Destructor
SystemTimeInq::~SystemTimeInq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // responseInterval

}

int SystemTimeInq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // responseInterval
    {
        responseInterval=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SystemTimeInq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read responseInterval
    {
        responseInterval=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int SystemTimeInq::write(DataOutputStream& ostream) { // throws IOException
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
    // write responseInterval
    ostream.writeUI8(responseInterval);
    retVal +=1;

    return retVal;
}

int SystemTimeInq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SystemTimeInq\n");
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
    // write responseInterval
    dc.indent();
    dc.getPs().print("responseInterval=");
    dc.getPs().println((long)responseInterval);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SystemTimeInq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SystemTimeInq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SystemTimeInq::getLength()
//{
//return this->length;
//}

// Setter for length
//void SystemTimeInq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for responseInterval
//ui8 SystemTimeInq::getResponseInterval()
//{
//return this->responseInterval;
//}

// Setter for responseInterval
//void SystemTimeInq::setResponseInterval(ui8 val)
//{
//this->responseInterval= val;
//}

int SystemTimeInq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SystemTimeInq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SystemTimeInq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SystemTimeInq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SystemTimeInq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code