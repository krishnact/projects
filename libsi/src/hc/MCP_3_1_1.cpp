//**//
//@Created(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "MCP_3_1_1.h"

#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
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
MCP_3_1_1::MCP_3_1_1() {
    references= 0;


}
// Destructor
MCP_3_1_1::~MCP_3_1_1() {
}

int MCP_3_1_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return MCP_3_1_1_Base::readNoHeader( istream );
}

int MCP_3_1_1::read(DataInputStream&  istream ) { // throws IOException
    return MCP_3_1_1_Base::read( istream );
}

int MCP_3_1_1::write(DataOutputStream& ostream) { // throws IOException
    return MCP_3_1_1_Base::write(ostream);
}

int MCP_3_1_1::dump(DumpContext& dc) { // throws IOException
    return MCP_3_1_1_Base::dump(dc);
}


int MCP_3_1_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code