//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LocationType_dsg_app_id.h"

#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
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
LocationType_dsg_app_id::LocationType_dsg_app_id() {
    references= 0;


    // application_id
    application_id= (ui16)0;
}
// Destructor
LocationType_dsg_app_id::~LocationType_dsg_app_id() {
    // application_id

}

int LocationType_dsg_app_id::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // application_id
    {
        application_id=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int LocationType_dsg_app_id::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read application_id
    {
        application_id=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int LocationType_dsg_app_id::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write application_id
    ostream.writeUI16(application_id);
    retVal +=2;

    return retVal;
}

int LocationType_dsg_app_id::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LocationType_dsg_app_id\n");
    dc.increaseIndent();
    int retVal= 0;
    // write application_id
    dc.indent();
    dc.getPs().print("application_id=");
    dc.getPs().println((long)application_id);
    dc.decreaseIndent();
    return retVal;
}


// Getter for application_id
//ui16 LocationType_dsg_app_id::getApplication_id()
//{
//return this->application_id;
//}

// Setter for application_id
//void LocationType_dsg_app_id::setApplication_id(ui16 val)
//{
//this->application_id= val;
//}

int LocationType_dsg_app_id::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_dsg_app_id* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_dsg_app_id* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code