//**//
//@Created(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "generic_descriptor.h"

#ifdef org_himalay_si_generic_descriptor__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;

// Constructor
generic_descriptor::generic_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("EXTERNAL");
}
// Destructor
generic_descriptor::~generic_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int generic_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = desc_header->length+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }
    return retVal;
}

int generic_descriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read desc_header
    retVal += desc_header->read(istream);
    // read data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = desc_header->length+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }

    return retVal;
}

int generic_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }
    {   /** fix dependent sizes for data**/ desc_header->length=((short)data->getSize() -(0));
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int generic_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("generic_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE generic_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void generic_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE generic_descriptor::getData()
//{
//return this->data;
//}

// Setter for data
//void generic_descriptor::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int generic_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void generic_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE generic_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_generic_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::generic_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::generic_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code