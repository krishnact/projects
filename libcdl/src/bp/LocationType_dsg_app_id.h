#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_APP_ID
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_APP_ID
//@Generated(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"


#include "LocationTypeFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationType_dsg_app_id__PTR_TYPE boost::shared_ptr<LocationType_dsg_app_id>
#define org_himalay_cl_cdl_LocationType_dsg_app_id__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_LocationType_dsg_app_id__PTR_TYPE(new LocationType_dsg_app_id()); }
#define org_himalay_cl_cdl_LocationType_dsg_app_id__INIT(x)
#define org_himalay_cl_cdl_LocationType_dsg_app_id__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationType_dsg_app_id__PTR_TYPE LocationType_dsg_app_id*
#define org_himalay_cl_cdl_LocationType_dsg_app_id__NEW(x) {x= new LocationType_dsg_app_id();}
#define org_himalay_cl_cdl_LocationType_dsg_app_id__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_LocationType_dsg_app_id__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif
//#endif


// Namespace
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
class LocationType_dsg_app_id;
typedef ::boost::shared_ptr<LocationType_dsg_app_id> LocationType_dsg_app_idPtr;
#endif

class LocationType_dsg_app_id :public   LocationTypeFactory::LocationType { //Concrete type is LocationType_dsg_app_id

//  public:
//    long    references;

public:


    // members variables
    // application_id ---
public:
    ui16 application_id ;


public:
    LocationType_dsg_app_id (); // throws Exception
    virtual ~LocationType_dsg_app_id ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for application_id
    // public: ui16 getApplication_id();

    // Setter for application_id
    // public: void setApplication_id(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_LocationType_dsg_app_id__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_dsg_app_id* p);
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_dsg_app_id* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_APP_ID
// End of code