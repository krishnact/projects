#ifndef ORG_HIMALAY_CL_CDL_RESOURCE_FACTORY
#define ORG_HIMALAY_CL_CDL_RESOURCE_FACTORY
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "ResourceHeader.h"
#include "runtime.h"


#define org_himalay_cl_cdl_ResourceFactory_Resource__USE_SMART_PTR 



#ifdef org_himalay_cl_cdl_ResourceFactory_Resource__USE_SMART_PTR 
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE boost::shared_ptr<ResourceFactory::Resource>
#define org_himalay_cl_cdl_ResourceFactory_Resource__INIT(x)
#define org_himalay_cl_cdl_ResourceFactory_Resource__DELETE(x)
#else
#define org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE ResourceFactory::Resource*
#define org_himalay_cl_cdl_ResourceFactory_Resource__NEW(x) {x= new ResourceFactory::Resource();}
#define org_himalay_cl_cdl_ResourceFactory_Resource__INIT(x)  {x=NULL;}
#define org_himalay_cl_cdl_ResourceFactory_Resource__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org{namespace himalay{namespace cl{namespace cdl{
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")

class ResourceFactory { 

    public: class Resource : public BinMessage {
    public: Resource();
    public: virtual ~Resource();
public: virtual int dump(DumpContext& dc)=0;
        public: virtual void setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header)=0;
    public: virtual org_himalay_cl_cdl_ResourceHeader__PTR_TYPE getHeader()=0;
    
        // Resource: 4c9c4c2d-a8f8-40d1-a05d-469484d67010 used as header is false
        
        
    };
#ifdef org_himalay_cl_cdl_ResourceFactory_Resource__USE_SMART_PTR     
typedef boost::shared_ptr<Resource> ResourcePtr;
#endif
public: static bool isDebug;
//public: static  Resource* lastParsedObject;
    public: static org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
    public: static org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE createMsg( org_himalay_cl_cdl_ResourceHeader__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);
    
    
};

#ifdef org_himalay_cl_cdl_ResourceFactory_Resource__USE_SMART_PTR 
void shared_ptr_add_ref(org::himalay::cl::cdl::ResourceFactory::Resource* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::ResourceFactory::Resource* p);
void shared_ptr_release(org::himalay::cl::cdl::ResourceFactory::Resource* p);
#endif

}}}}



#endif // ORG_HIMALAY_CL_CDL_RESOURCE_FACTORY
// End of code