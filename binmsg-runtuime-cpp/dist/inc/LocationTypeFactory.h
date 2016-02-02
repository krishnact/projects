#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_FACTORY
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_FACTORY
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "runtime.h"


#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__USE_SMART_PTR 



#ifdef org_himalay_cl_cdl_LocationTypeFactory_LocationType__USE_SMART_PTR 
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE boost::shared_ptr<LocationTypeFactory::LocationType>
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__INIT(x)
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE LocationTypeFactory::LocationType*
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__NEW(x) {x= new LocationTypeFactory::LocationType();}
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__INIT(x)  {x=NULL;}
#define org_himalay_cl_cdl_LocationTypeFactory_LocationType__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org{namespace himalay{namespace cl{namespace cdl{
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")

class LocationTypeFactory { 

    public: class LocationType : public BinMessage {
    public: LocationType();
    public: virtual ~LocationType();
public: virtual int dump(DumpContext& dc)=0;
        
    };
#ifdef org_himalay_cl_cdl_LocationTypeFactory_LocationType__USE_SMART_PTR     
typedef boost::shared_ptr<LocationType> LocationTypePtr;
#endif
public: static bool isDebug;
//public: static  LocationType* lastParsedObject;
    public: static org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE createMsg( int messageType, DataInputStream& dis, int& iHolder) throw(IOException);
    
    
};

#ifdef org_himalay_cl_cdl_LocationTypeFactory_LocationType__USE_SMART_PTR 
void shared_ptr_add_ref(org::himalay::cl::cdl::LocationTypeFactory::LocationType* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::LocationTypeFactory::LocationType* p);
void shared_ptr_release(org::himalay::cl::cdl::LocationTypeFactory::LocationType* p);
#endif

}}}}



#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_FACTORY
// End of code