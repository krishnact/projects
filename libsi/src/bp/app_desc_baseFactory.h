#ifndef ORG_HIMALAY_SI_APP_DESC_BASE_FACTORY
#define ORG_HIMALAY_SI_APP_DESC_BASE_FACTORY
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "descriptor_header.h"
#include "runtime.h"


#define org_himalay_si_app_desc_baseFactory_app_desc_base__USE_SMART_PTR



#ifdef org_himalay_si_app_desc_baseFactory_app_desc_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE boost::shared_ptr<app_desc_baseFactory::app_desc_base>
#define org_himalay_si_app_desc_baseFactory_app_desc_base__INIT(x)
#define org_himalay_si_app_desc_baseFactory_app_desc_base__DELETE(x)
#else
#define org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE app_desc_baseFactory::app_desc_base*
#define org_himalay_si_app_desc_baseFactory_app_desc_base__NEW(x) {x= new app_desc_baseFactory::app_desc_base();}
#define org_himalay_si_app_desc_baseFactory_app_desc_base__INIT(x)  {x=NULL;}
#define org_himalay_si_app_desc_baseFactory_app_desc_base__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace si {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")

class app_desc_baseFactory {

public:
    class app_desc_base : public BinMessage {
    public:
        app_desc_base();
    public:
        virtual ~app_desc_base();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)=0;
    public:
        virtual org_himalay_si_descriptor_header__PTR_TYPE getHeader()=0;

        // app_desc_base: 1aabb5c8-d07d-4e31-911a-cae2b8fe17de used as header is false


    };
#ifdef org_himalay_si_app_desc_baseFactory_app_desc_base__USE_SMART_PTR
    typedef boost::shared_ptr<app_desc_base> app_desc_basePtr;
#endif
public:
    static bool isDebug;
//public: static  app_desc_base* lastParsedObject;
public:
    static org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE createMsg( org_himalay_si_descriptor_header__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_si_app_desc_baseFactory_app_desc_base__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::si::app_desc_baseFactory::app_desc_base* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::app_desc_baseFactory::app_desc_base* p);
void shared_ptr_release(org::himalay::si::app_desc_baseFactory::app_desc_base* p);
#endif

}
}
}



#endif // ORG_HIMALAY_SI_APP_DESC_BASE_FACTORY
// End of code