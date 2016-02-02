//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "TerminalAssociation.h"

#ifdef org_himalay_ccif_TerminalAssociation__USE_SMART_PTR
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
TerminalAssociation::TerminalAssociation() {
    references= 0;


    // identifierList
    org_himalay_msgs_runtime_ByteArray_NEW(identifierList);
    identifierList->setSizeType("FIRST_UI16");
}
// Destructor
TerminalAssociation::~TerminalAssociation() {
    // identifierList
    org_himalay_msgs_runtime_ByteArray_DELETE( identifierList);
}

int TerminalAssociation::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // identifierList
    {
        retVal+=identifierList->read(istream);
    }
    return retVal;
}

int TerminalAssociation::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read identifierList
    {
        retVal+=identifierList->read(istream);
    }

    return retVal;
}

int TerminalAssociation::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for identifierList**/
    }

    int retVal= 0;
    // write identifierList
    {
        retVal += identifierList->write(ostream);
    }

    return retVal;
}

int TerminalAssociation::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("TerminalAssociation\n");
    dc.increaseIndent();
    int retVal= 0;
    // write identifierList
    dc.indent();
    dc.getPs().print("identifierList");
    identifierList->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for identifierList
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE TerminalAssociation::getIdentifierList()
//{
//return this->identifierList;
//}

// Setter for identifierList
//void TerminalAssociation::setIdentifierList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->identifierList= val;
//}

int TerminalAssociation::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_TerminalAssociation__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::TerminalAssociation* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::TerminalAssociation* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code