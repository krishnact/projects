//**//
//@Created(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ICM_structure.h"

#ifdef org_himalay_si_ICM_structure__USE_SMART_PTR
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
ICM_structure::ICM_structure() {
    references= 0;


}
// Destructor
ICM_structure::~ICM_structure() {
}

int ICM_structure::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return ICM_structure_base::readNoHeader( istream );
}

int ICM_structure::read(DataInputStream&  istream ) { // throws IOException
    return ICM_structure_base::read( istream );
}

int ICM_structure::write(DataOutputStream& ostream) { // throws IOException
    return ICM_structure_base::write(ostream);
}

int ICM_structure::dump(DumpContext& dc) { // throws IOException
    return ICM_structure_base::dump(dc);
}


int ICM_structure::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_ICM_structure__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ICM_structure* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code