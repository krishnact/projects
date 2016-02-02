#ifndef ORG_HIMALAY_CCIF_APDUBASE_FACTORY
#define ORG_HIMALAY_CCIF_APDUBASE_FACTORY
//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "APDUHeader.h"
#include "runtime.h"


#define org_himalay_ccif_APDUBaseFactory_APDUBase__USE_SMART_PTR



#ifdef org_himalay_ccif_APDUBaseFactory_APDUBase__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE boost::shared_ptr<APDUBaseFactory::APDUBase>
#define org_himalay_ccif_APDUBaseFactory_APDUBase__INIT(x)
#define org_himalay_ccif_APDUBaseFactory_APDUBase__DELETE(x)
#else
#define org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE APDUBaseFactory::APDUBase*
#define org_himalay_ccif_APDUBaseFactory_APDUBase__NEW(x) {x= new APDUBaseFactory::APDUBase();}
#define org_himalay_ccif_APDUBaseFactory_APDUBase__INIT(x)  {x=NULL;}
#define org_himalay_ccif_APDUBaseFactory_APDUBase__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace ccif {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")

class APDUBaseFactory {

public:
    class APDUBase : public BinMessage {
    public:
        APDUBase();
    public:
        virtual ~APDUBase();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)=0;
    public:
        virtual org_himalay_ccif_APDUHeader__PTR_TYPE getHeader()=0;

        // APDUBase: 6b56c803-ea75-40a4-89fd-1e9dcb652288 used as header is false


    };
#ifdef org_himalay_ccif_APDUBaseFactory_APDUBase__USE_SMART_PTR
    typedef boost::shared_ptr<APDUBase> APDUBasePtr;
#endif
public:
    static bool isDebug;
//public: static  APDUBase* lastParsedObject;
public:
    static org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE createMsg( org_himalay_ccif_APDUHeader__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_ccif_APDUBaseFactory_APDUBase__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::ccif::APDUBaseFactory::APDUBase* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::APDUBaseFactory::APDUBase* p);
void shared_ptr_release(org::himalay::ccif::APDUBaseFactory::APDUBase* p);
#endif

}
}
}



#endif // ORG_HIMALAY_CCIF_APDUBASE_FACTORY
// End of code