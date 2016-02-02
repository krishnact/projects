#ifndef ORG_HIMALAY_SI_SCTE65TABLE_FACTORY
#define ORG_HIMALAY_SI_SCTE65TABLE_FACTORY
//@Generated(date = "Mon Sep 22 23:15:28 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "SCTE65_TableHeader.h"
#include "runtime.h"


#define org_himalay_si_SCTE65TableFactory_SCTE65Table__USE_SMART_PTR



#ifdef org_himalay_si_SCTE65TableFactory_SCTE65Table__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE boost::shared_ptr<SCTE65TableFactory::SCTE65Table>
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__INIT(x)
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__DELETE(x)
#else
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE SCTE65TableFactory::SCTE65Table*
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__NEW(x) {x= new SCTE65TableFactory::SCTE65Table();}
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__INIT(x)  {x=NULL;}
#define org_himalay_si_SCTE65TableFactory_SCTE65Table__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace si {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Sep 22 23:15:28 EDT 2014")

class SCTE65TableFactory {

public:
    class SCTE65Table : public BinMessage {
    public:
        SCTE65Table();
    public:
        virtual ~SCTE65Table();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)=0;
    public:
        virtual org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader()=0;

        // SCTE65Table: 7401cfd1-dda2-453a-be3e-0141d8fb2869 used as header is false


    };
#ifdef org_himalay_si_SCTE65TableFactory_SCTE65Table__USE_SMART_PTR
    typedef boost::shared_ptr<SCTE65Table> SCTE65TablePtr;
#endif
public:
    static bool isDebug;
//public: static  SCTE65Table* lastParsedObject;
public:
    static org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE createMsg( org_himalay_si_SCTE65_TableHeader__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_si_SCTE65TableFactory_SCTE65Table__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::si::SCTE65TableFactory::SCTE65Table* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::SCTE65TableFactory::SCTE65Table* p);
void shared_ptr_release(org::himalay::si::SCTE65TableFactory::SCTE65Table* p);
#endif

}
}
}



#endif // ORG_HIMALAY_SI_SCTE65TABLE_FACTORY
// End of code