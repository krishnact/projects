#ifndef ORG_HIMALAY_CCIF_APDUBASE_3_FACTORY
#define ORG_HIMALAY_CCIF_APDUBASE_3_FACTORY
//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "APDUHeader.h"
#include "runtime.h"


#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__USE_SMART_PTR



#ifdef org_himalay_ccif_APDUBase_3Factory_APDUBase_3__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__PTR_TYPE boost::shared_ptr<APDUBase_3Factory::APDUBase_3>
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__INIT(x)
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__DELETE(x)
#else
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__PTR_TYPE APDUBase_3Factory::APDUBase_3*
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__NEW(x) {x= new APDUBase_3Factory::APDUBase_3();}
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__INIT(x)  {x=NULL;}
#define org_himalay_ccif_APDUBase_3Factory_APDUBase_3__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace ccif {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")

class APDUBase_3Factory {

public:
    class APDUBase_3 : public BinMessage {
    public:
        APDUBase_3();
    public:
        virtual ~APDUBase_3();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)=0;
    public:
        virtual org_himalay_ccif_APDUHeader__PTR_TYPE getHeader()=0;

        // APDUBase_3: 24ae301f-a528-444b-8603-51c86e860407 used as header is false


    };
#ifdef org_himalay_ccif_APDUBase_3Factory_APDUBase_3__USE_SMART_PTR
    typedef boost::shared_ptr<APDUBase_3> APDUBase_3Ptr;
#endif
public:
    static bool isDebug;
//public: static  APDUBase_3* lastParsedObject;
public:
    static org_himalay_ccif_APDUBase_3Factory_APDUBase_3__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_ccif_APDUBase_3Factory_APDUBase_3__PTR_TYPE createMsg( org_himalay_ccif_APDUHeader__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_ccif_APDUBase_3Factory_APDUBase_3__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::ccif::APDUBase_3Factory::APDUBase_3* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::APDUBase_3Factory::APDUBase_3* p);
void shared_ptr_release(org::himalay::ccif::APDUBase_3Factory::APDUBase_3* p);
#endif

}
}
}



#endif // ORG_HIMALAY_CCIF_APDUBASE_3_FACTORY
// End of code