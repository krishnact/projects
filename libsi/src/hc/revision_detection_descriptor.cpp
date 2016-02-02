//**//
//@Created(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "revision_detection_descriptor.h"

#ifdef org_himalay_si_revision_detection_descriptor__USE_SMART_PTR
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
revision_detection_descriptor::revision_detection_descriptor() {
    references= 0;


}
// Destructor
revision_detection_descriptor::~revision_detection_descriptor() {
}

int revision_detection_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return revision_detection_descriptor_base::readNoHeader( istream );
}

int revision_detection_descriptor::read(DataInputStream&  istream ) { // throws IOException
    return revision_detection_descriptor_base::read( istream );
}

int revision_detection_descriptor::write(DataOutputStream& ostream) { // throws IOException
    return revision_detection_descriptor_base::write(ostream);
}

int revision_detection_descriptor::dump(DumpContext& dc) { // throws IOException
    return revision_detection_descriptor_base::dump(dc);
}


int revision_detection_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_revision_detection_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::revision_detection_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::revision_detection_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code