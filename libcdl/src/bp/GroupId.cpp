//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "GroupId.h"

#ifdef org_himalay_cl_cdl_GroupId__USE_SMART_PTR
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
GroupId::GroupId() {
    references= 0;


    // header
    org_himalay_cl_cdl_ResourceHeader__NEW( header);
    // id
    org_himalay_msgs_runtime_ByteArray_NEW(id);
    id->setSizeType("FIXED");
    id->setSize(2);
}
// Destructor
GroupId::~GroupId() {
    // header
    org_himalay_cl_cdl_ResourceHeader__DELETE( header);
    // id
    org_himalay_msgs_runtime_ByteArray_DELETE( id);
}

int GroupId::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // id
    {
        retVal+=id->read(istream);
    }
    return retVal;
}

int GroupId::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read id
    {
        retVal+=id->read(istream);
    }

    return retVal;
}

int GroupId::write(DataOutputStream& ostream) { // throws IOException
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

int GroupId::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("GroupId\n");
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
//org_himalay_cl_cdl_ResourceHeader__PTR_TYPE GroupId::getHeader()
//{
//return this->header;
//}

// Setter for header
//void GroupId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for id
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE GroupId::getId()
//{
//return this->id;
//}

// Setter for id
//void GroupId::setId(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->id= val;
//}

int GroupId::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void GroupId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_ResourceHeader__PTR_TYPE GroupId::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_GroupId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::GroupId* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::GroupId* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code