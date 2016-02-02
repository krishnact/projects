//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ProfileReply.h"

#ifdef org_himalay_ccif_ProfileReply__USE_SMART_PTR
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
ProfileReply::ProfileReply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIRST_UI8");
}
// Destructor
ProfileReply::~ProfileReply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int ProfileReply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        retVal+=data->read(istream);
    }
    return retVal;
}

int ProfileReply::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read data
    {
        retVal+=data->read(istream);
    }

    return retVal;
}

int ProfileReply::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for data**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int ProfileReply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ProfileReply\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ProfileReply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ProfileReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ProfileReply::getData()
//{
//return this->data;
//}

// Setter for data
//void ProfileReply::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int ProfileReply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ProfileReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ProfileReply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ProfileReply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProfileReply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProfileReply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code