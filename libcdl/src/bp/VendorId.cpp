//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "VendorId.h"

#ifdef org_himalay_cl_cdl_VendorId__USE_SMART_PTR
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
VendorId::VendorId() {
    references= 0;


    // header
    org_himalay_cl_cdl_ResourceHeader__NEW( header);
    // oui
    org_himalay_msgs_runtime_ByteArray_NEW(oui);
    oui->setSizeType("FIXED");
    oui->setSize(3);
}
// Destructor
VendorId::~VendorId() {
    // header
    org_himalay_cl_cdl_ResourceHeader__DELETE( header);
    // oui
    org_himalay_msgs_runtime_ByteArray_DELETE( oui);
}

int VendorId::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // oui
    {
        retVal+=oui->read(istream);
    }
    return retVal;
}

int VendorId::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read oui
    {
        retVal+=oui->read(istream);
    }

    return retVal;
}

int VendorId::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for oui**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write oui
    {
        retVal += oui->write(ostream);
    }

    return retVal;
}

int VendorId::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("VendorId\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write oui
    dc.indent();
    dc.getPs().print("oui");
    oui->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_cl_cdl_ResourceHeader__PTR_TYPE VendorId::getHeader()
//{
//return this->header;
//}

// Setter for header
//void VendorId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for oui
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE VendorId::getOui()
//{
//return this->oui;
//}

// Setter for oui
//void VendorId::setOui(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->oui= val;
//}

int VendorId::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void VendorId::setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_ResourceHeader__PTR_TYPE VendorId::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_VendorId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::VendorId* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::VendorId* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code