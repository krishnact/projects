//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "MemoryReport.h"

#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
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
MemoryReport::MemoryReport() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // numberOfMemory
    org_himalay_msgs_runtime_ByteArray_NEW(numberOfMemory);
    numberOfMemory->setSizeType("FIRST_UI8");
}
// Destructor
MemoryReport::~MemoryReport() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // numberOfMemory
    org_himalay_msgs_runtime_ByteArray_DELETE( numberOfMemory);
}

int MemoryReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // header
    retVal += header->read(istream);
    // numberOfMemory
    {
        retVal+=numberOfMemory->read(istream);
    }
    return retVal;
}

int MemoryReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read numberOfMemory
    {
        retVal+=numberOfMemory->read(istream);
    }

    return retVal;
}

int MemoryReport::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for numberOfMemory**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write numberOfMemory
    {
        retVal += numberOfMemory->write(ostream);
    }

    return retVal;
}

int MemoryReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("MemoryReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write numberOfMemory
    dc.indent();
    dc.getPs().print("numberOfMemory");
    numberOfMemory->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE MemoryReport::getHeader()
//{
//return this->header;
//}

// Setter for header
//void MemoryReport::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for numberOfMemory
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE MemoryReport::getNumberOfMemory()
//{
//return this->numberOfMemory;
//}

// Setter for numberOfMemory
//void MemoryReport::setNumberOfMemory(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->numberOfMemory= val;
//}

int MemoryReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::MemoryReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::MemoryReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code