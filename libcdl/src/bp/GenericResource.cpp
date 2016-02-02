//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "GenericResource.h"

#ifdef org_himalay_cl_cdl_GenericResource__USE_SMART_PTR
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
GenericResource::GenericResource() {
    references= 0;


    // header
    org_himalay_cl_cdl_ResourceHeader__NEW( header);
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("EXTERNAL");
}
// Destructor
GenericResource::~GenericResource() {
    // header
    org_himalay_cl_cdl_ResourceHeader__DELETE( header);
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int GenericResource::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = header->descriptor_len+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }
    return retVal;
}

int GenericResource::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = header->descriptor_len+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }

    return retVal;
}

int GenericResource::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for data**/ header->descriptor_len=((short)data->getSize() -(0));
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

int GenericResource::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("GenericResource\n");
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
//org_himalay_cl_cdl_ResourceHeader__PTR_TYPE GenericResource::getHeader()
//{
//return this->header;
//}

// Setter for header
//void GenericResource::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE GenericResource::getData()
//{
//return this->data;
//}

// Setter for data
//void GenericResource::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int GenericResource::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void GenericResource::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_ResourceHeader__PTR_TYPE GenericResource::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_GenericResource__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::GenericResource* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::GenericResource* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code