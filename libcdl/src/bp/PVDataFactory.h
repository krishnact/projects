#ifndef ORG_HIMALAY_CL_CDL_PVDATA_FACTORY
#define ORG_HIMALAY_CL_CDL_PVDATA_FACTORY
//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "runtime.h"


#define org_himalay_cl_cdl_PVDataFactory_PVData__USE_SMART_PTR



#ifdef org_himalay_cl_cdl_PVDataFactory_PVData__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE boost::shared_ptr<PVDataFactory::PVData>
#define org_himalay_cl_cdl_PVDataFactory_PVData__INIT(x)
#define org_himalay_cl_cdl_PVDataFactory_PVData__DELETE(x)
#else
#define org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE PVDataFactory::PVData*
#define org_himalay_cl_cdl_PVDataFactory_PVData__NEW(x) {x= new PVDataFactory::PVData();}
#define org_himalay_cl_cdl_PVDataFactory_PVData__INIT(x)  {x=NULL;}
#define org_himalay_cl_cdl_PVDataFactory_PVData__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace cl {
namespace cdl {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")

class PVDataFactory {

public:
    class PVData : public BinMessage {
    public:
        PVData();
    public:
        virtual ~PVData();
    public:
        virtual int dump(DumpContext& dc)=0;

    };
#ifdef org_himalay_cl_cdl_PVDataFactory_PVData__USE_SMART_PTR
    typedef boost::shared_ptr<PVData> PVDataPtr;
#endif
public:
    static bool isDebug;
//public: static  PVData* lastParsedObject;
public:
    static org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE createMsg( int messageType, DataInputStream& dis, int& iHolder) throw(IOException);


};

#ifdef org_himalay_cl_cdl_PVDataFactory_PVData__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::cl::cdl::PVDataFactory::PVData* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::PVDataFactory::PVData* p);
void shared_ptr_release(org::himalay::cl::cdl::PVDataFactory::PVData* p);
#endif

}
}
}
}



#endif // ORG_HIMALAY_CL_CDL_PVDATA_FACTORY
// End of code