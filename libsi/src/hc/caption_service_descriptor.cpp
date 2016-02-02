//**//
//@Created(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "caption_service_descriptor.h"

#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
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
caption_service_descriptor::caption_service_descriptor() {
    references= 0;


}
// Destructor
caption_service_descriptor::~caption_service_descriptor() {
}

int caption_service_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return caption_service_descriptor_base::readNoHeader( istream );
}

int caption_service_descriptor::read(DataInputStream&  istream ) { // throws IOException
    return caption_service_descriptor_base::read( istream );
}

int caption_service_descriptor::write(DataOutputStream& ostream) { // throws IOException
    return caption_service_descriptor_base::write(ostream);
}

int caption_service_descriptor::dump(DumpContext& dc) { // throws IOException
    return caption_service_descriptor_base::dump(dc);
}


int caption_service_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code