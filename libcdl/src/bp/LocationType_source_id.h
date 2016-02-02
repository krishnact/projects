#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_SOURCE_ID
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_SOURCE_ID
//@Generated(date = "Mon Feb 01 22:30:22 EST 2016")
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
#define org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationType_source_id__PTR_TYPE boost::shared_ptr<LocationType_source_id>
#define org_himalay_cl_cdl_LocationType_source_id__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_LocationType_source_id__PTR_TYPE(new LocationType_source_id()); }
#define org_himalay_cl_cdl_LocationType_source_id__INIT(x)
#define org_himalay_cl_cdl_LocationType_source_id__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationType_source_id__PTR_TYPE LocationType_source_id*
#define org_himalay_cl_cdl_LocationType_source_id__NEW(x) {x= new LocationType_source_id();}
#define org_himalay_cl_cdl_LocationType_source_id__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_LocationType_source_id__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
class LocationType_source_id;
typedef ::boost::shared_ptr<LocationType_source_id> LocationType_source_idPtr;
#endif

class LocationType_source_id :public   LocationTypeFactory::LocationType { //Concrete type is LocationType_source_id

//  public:
//    long    references;

public:


    // members variables
    // source_ID ---
public:
    ui16 source_ID ;


public:
    LocationType_source_id (); // throws Exception
    virtual ~LocationType_source_id ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for source_ID
    // public: ui16 getSource_ID();

    // Setter for source_ID
    // public: void setSource_ID(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_LocationType_source_id__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_source_id* p);
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_source_id* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_SOURCE_ID
// End of code