#ifndef ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_0_OR_1
#define ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_0_OR_1
//@Generated(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "LocationTypeFactory.h" //header for org.himalay.cl.cdl.LocationTypeFactory




/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE boost::shared_ptr<DownloadType_0_or_1>
#define org_himalay_cl_cdl_DownloadType_0_or_1__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE(new DownloadType_0_or_1()); }
#define org_himalay_cl_cdl_DownloadType_0_or_1__INIT(x)
#define org_himalay_cl_cdl_DownloadType_0_or_1__DELETE(x)
#else
#define org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE DownloadType_0_or_1*
#define org_himalay_cl_cdl_DownloadType_0_or_1__NEW(x) {x= new DownloadType_0_or_1();}
#define org_himalay_cl_cdl_DownloadType_0_or_1__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_DownloadType_0_or_1__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
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
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
class DownloadType_0_or_1;
typedef ::boost::shared_ptr<DownloadType_0_or_1> DownloadType_0_or_1Ptr;
#endif

class DownloadType_0_or_1 :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // locationTypeSpecifier ---
public:
    ui8 locationTypeSpecifier ;
    // location ---
public:
    org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE  location ;


public:
    DownloadType_0_or_1 (); // throws Exception
    virtual ~DownloadType_0_or_1 ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for locationTypeSpecifier
    // public: ui8 getLocationTypeSpecifier();

    // Setter for locationTypeSpecifier
    // public: void setLocationTypeSpecifier(ui8 val);

    // Getter for location
    // public: org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE  getLocation();

    // Setter for location
    // public: void setLocation(org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE  val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::DownloadType_0_or_1* p);
void intrusive_ptr_release(org::himalay::cl::cdl::DownloadType_0_or_1* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_0_OR_1
// End of code