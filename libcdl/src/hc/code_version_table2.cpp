//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "code_version_table2.h"

#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
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
code_version_table2::code_version_table2() {
    references= 0;


}
// Destructor
code_version_table2::~code_version_table2() {
}

int code_version_table2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return code_version_table2_::readNoHeader( istream );
}

int code_version_table2::read(DataInputStream&  istream ) { // throws IOException
    return code_version_table2_::read( istream );
}

int code_version_table2::write(DataOutputStream& ostream) { // throws IOException
    return code_version_table2_::write(ostream);
}

int code_version_table2::dump(DumpContext& dc) { // throws IOException
    return code_version_table2_::dump(dc);
}


int code_version_table2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::code_version_table2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::code_version_table2* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code