//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LocationType_source_id.h"

#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
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
LocationType_source_id::LocationType_source_id() {
    references= 0;


    // source_ID
    source_ID= (ui16)0;
}
// Destructor
LocationType_source_id::~LocationType_source_id() {
    // source_ID

}

int LocationType_source_id::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // source_ID
    {
        source_ID=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int LocationType_source_id::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read source_ID
    {
        source_ID=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int LocationType_source_id::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write source_ID
    ostream.writeUI16(source_ID);
    retVal +=2;

    return retVal;
}

int LocationType_source_id::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LocationType_source_id\n");
    dc.increaseIndent();
    int retVal= 0;
    // write source_ID
    dc.indent();
    dc.getPs().print("source_ID=");
    dc.getPs().println((long)source_ID);
    dc.decreaseIndent();
    return retVal;
}


// Getter for source_ID
//ui16 LocationType_source_id::getSource_ID()
//{
//return this->source_ID;
//}

// Setter for source_ID
//void LocationType_source_id::setSource_ID(ui16 val)
//{
//this->source_ID= val;
//}

int LocationType_source_id::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_source_id* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_source_id* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code