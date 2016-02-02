//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "IPV6Address.h"

#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
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
IPV6Address::IPV6Address() {
    references= 0;


    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIXED");
    data->setSize(16);
}
// Destructor
IPV6Address::~IPV6Address() {
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int IPV6Address::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        retVal+=data->read(istream);
    }
    return retVal;
}

int IPV6Address::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read data
    {
        retVal+=data->read(istream);
    }

    return retVal;
}

int IPV6Address::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for data**/
    }

    int retVal= 0;
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int IPV6Address::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("IPV6Address\n");
    dc.increaseIndent();
    int retVal= 0;
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE IPV6Address::getData()
//{
//return this->data;
//}

// Setter for data
//void IPV6Address::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int IPV6Address::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::IPV6Address* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::IPV6Address* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code