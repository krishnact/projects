//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DSG_error.h"

#ifdef org_himalay_ccif_DSG_error__USE_SMART_PTR
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
DSG_error::DSG_error() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // errorStatus
    errorStatus= (ui8)0;
}
// Destructor
DSG_error::~DSG_error() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // errorStatus

}

int DSG_error::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // errorStatus
    {
        errorStatus=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int DSG_error::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read errorStatus
    {
        errorStatus=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int DSG_error::write(DataOutputStream& ostream) { // throws IOException
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
    // write errorStatus
    ostream.writeUI8(errorStatus);
    retVal +=1;

    return retVal;
}

int DSG_error::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DSG_error\n");
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
    // write errorStatus
    dc.indent();
    dc.getPs().print("errorStatus=");
    dc.getPs().println((long)errorStatus);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE DSG_error::getHeader()
//{
//return this->header;
//}

// Setter for header
//void DSG_error::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 DSG_error::getLength()
//{
//return this->length;
//}

// Setter for length
//void DSG_error::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for errorStatus
//ui8 DSG_error::getErrorStatus()
//{
//return this->errorStatus;
//}

// Setter for errorStatus
//void DSG_error::setErrorStatus(ui8 val)
//{
//this->errorStatus= val;
//}

int DSG_error::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void DSG_error::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE DSG_error::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_DSG_error__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DSG_error* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DSG_error* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code