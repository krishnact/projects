//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaDescriptor.h"

#ifdef org_himalay_ccif_CaDescriptor__USE_SMART_PTR
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
CaDescriptor::CaDescriptor() {
    references= 0;


}
// Destructor
CaDescriptor::~CaDescriptor() {
}

int CaDescriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    return retVal;
}

int CaDescriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    return retVal;
}

int CaDescriptor::write(DataOutputStream& ostream) { // throws IOException

    int retVal= 0;

    return retVal;
}

int CaDescriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaDescriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    dc.decreaseIndent();
    return retVal;
}


int CaDescriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaDescriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaDescriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaDescriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code