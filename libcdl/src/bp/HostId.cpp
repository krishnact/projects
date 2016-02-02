//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostId.h"

#ifdef org_himalay_cl_cdl_HostId__USE_SMART_PTR
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
HostId::HostId() {
    references= 0;


    // header
    org_himalay_cl_cdl_ResourceHeader__NEW( header);
    // id
    org_himalay_msgs_runtime_ByteArray_NEW(id);
    id->setSizeType("FIXED");
    id->setSize(5);
}
// Destructor
HostId::~HostId() {
    // header
    org_himalay_cl_cdl_ResourceHeader__DELETE( header);
    // id
    org_himalay_msgs_runtime_ByteArray_DELETE( id);
}

int HostId::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // id
    {
        retVal+=id->read(istream);
    }
    return retVal;
}

int HostId::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read id
    {
        retVal+=id->read(istream);
    }

    return retVal;
}

int HostId::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for id**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write id
    {
        retVal += id->write(ostream);
    }

    return retVal;
}

int HostId::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostId\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write id
    dc.indent();
    dc.getPs().print("id");
    id->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_cl_cdl_ResourceHeader__PTR_TYPE HostId::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HostId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for id
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE HostId::getId()
//{
//return this->id;
//}

// Setter for id
//void HostId::setId(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->id= val;
//}

int HostId::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HostId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_ResourceHeader__PTR_TYPE HostId::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_HostId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::HostId* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::HostId* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code