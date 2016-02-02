//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CodeVeriFicationCertiFication.h"

#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
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
CodeVeriFicationCertiFication::CodeVeriFicationCertiFication() {
    references= 0;


}
// Destructor
CodeVeriFicationCertiFication::~CodeVeriFicationCertiFication() {
}

int CodeVeriFicationCertiFication::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    return retVal;
}

int CodeVeriFicationCertiFication::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    return retVal;
}

int CodeVeriFicationCertiFication::write(DataOutputStream& ostream) { // throws IOException

    int retVal= 0;

    return retVal;
}

int CodeVeriFicationCertiFication::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CodeVeriFicationCertiFication\n");
    dc.increaseIndent();
    int retVal= 0;
    dc.decreaseIndent();
    return retVal;
}


int CodeVeriFicationCertiFication::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CodeVeriFicationCertiFication* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CodeVeriFicationCertiFication* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code