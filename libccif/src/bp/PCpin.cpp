//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PCpin.h"

#ifdef org_himalay_ccif_PCpin__USE_SMART_PTR
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
PCpin::PCpin() {
    references= 0;


    // PCpinList
    org_himalay_msgs_runtime_ByteArray_NEW(PCpinList);
    PCpinList->setSizeType("FIRST_UI8");
}
// Destructor
PCpin::~PCpin() {
    // PCpinList
    org_himalay_msgs_runtime_ByteArray_DELETE( PCpinList);
}

int PCpin::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // PCpinList
    {
        retVal+=PCpinList->read(istream);
    }
    return retVal;
}

int PCpin::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read PCpinList
    {
        retVal+=PCpinList->read(istream);
    }

    return retVal;
}

int PCpin::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for PCpinList**/
    }

    int retVal= 0;
    // write PCpinList
    {
        retVal += PCpinList->write(ostream);
    }

    return retVal;
}

int PCpin::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PCpin\n");
    dc.increaseIndent();
    int retVal= 0;
    // write PCpinList
    dc.indent();
    dc.getPs().print("PCpinList");
    PCpinList->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for PCpinList
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PCpin::getPCpinList()
//{
//return this->PCpinList;
//}

// Setter for PCpinList
//void PCpin::setPCpinList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->PCpinList= val;
//}

int PCpin::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PCpin__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PCpin* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PCpin* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code