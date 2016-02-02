//**//
//@Created(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "longform_virtual_channel_table_section.h"

#ifdef org_himalay_si_longform_virtual_channel_table_section__USE_SMART_PTR
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
longform_virtual_channel_table_section::longform_virtual_channel_table_section() {
    references= 0;


}
// Destructor
longform_virtual_channel_table_section::~longform_virtual_channel_table_section() {
}

int longform_virtual_channel_table_section::readNoHeader(DataInputStream&  istream ) { // throws IOException
    return longform_virtual_channel_table_section_::readNoHeader( istream );
}

int longform_virtual_channel_table_section::read(DataInputStream&  istream ) { // throws IOException
    return longform_virtual_channel_table_section_::read( istream );
}

int longform_virtual_channel_table_section::write(DataOutputStream& ostream) { // throws IOException
    return longform_virtual_channel_table_section_::write(ostream);
}

int longform_virtual_channel_table_section::dump(DumpContext& dc) { // throws IOException
    return longform_virtual_channel_table_section_::dump(dc);
}


int longform_virtual_channel_table_section::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_longform_virtual_channel_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code