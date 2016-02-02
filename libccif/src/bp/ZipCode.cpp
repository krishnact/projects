//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ZipCode.h"

#ifdef org_himalay_ccif_ZipCode__USE_SMART_PTR
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
ZipCode::ZipCode() {
    references= 0;


    // zipCodebytes
    org_himalay_msgs_runtime_ByteArray_NEW(zipCodebytes);
    zipCodebytes->setSizeType("FIRST_UI16");
}
// Destructor
ZipCode::~ZipCode() {
    // zipCodebytes
    org_himalay_msgs_runtime_ByteArray_DELETE( zipCodebytes);
}

int ZipCode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // zipCodebytes
    {
        retVal+=zipCodebytes->read(istream);
    }
    return retVal;
}

int ZipCode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read zipCodebytes
    {
        retVal+=zipCodebytes->read(istream);
    }

    return retVal;
}

int ZipCode::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for zipCodebytes**/
    }

    int retVal= 0;
    // write zipCodebytes
    {
        retVal += zipCodebytes->write(ostream);
    }

    return retVal;
}

int ZipCode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ZipCode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write zipCodebytes
    dc.indent();
    dc.getPs().print("zipCodebytes");
    zipCodebytes->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for zipCodebytes
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ZipCode::getZipCodebytes()
//{
//return this->zipCodebytes;
//}

// Setter for zipCodebytes
//void ZipCode::setZipCodebytes(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->zipCodebytes= val;
//}

int ZipCode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ZipCode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ZipCode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ZipCode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code