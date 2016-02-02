//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "APDUGeneric.h"

#ifdef org_himalay_ccif_APDUGeneric__USE_SMART_PTR
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
APDUGeneric::APDUGeneric() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIRST_UI8");
}
// Destructor
APDUGeneric::~APDUGeneric() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int APDUGeneric::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        retVal+=data->read(istream);
    }
    return retVal;
}

int APDUGeneric::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read data
    {
        retVal+=data->read(istream);
    }

    return retVal;
}

int APDUGeneric::write(DataOutputStream& ostream) { // throws IOException
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

int APDUGeneric::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("APDUGeneric\n");
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
//org_himalay_ccif_APDUHeader__PTR_TYPE APDUGeneric::getHeader()
//{
//return this->header;
//}

// Setter for header
//void APDUGeneric::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE APDUGeneric::getData()
//{
//return this->data;
//}

// Setter for data
//void APDUGeneric::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int APDUGeneric::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void APDUGeneric::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE APDUGeneric::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_APDUGeneric__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::APDUGeneric* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUGeneric* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code