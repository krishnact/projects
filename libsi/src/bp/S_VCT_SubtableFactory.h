#ifndef ORG_HIMALAY_SI_S_VCT_SUBTABLE_FACTORY
#define ORG_HIMALAY_SI_S_VCT_SUBTABLE_FACTORY
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "runtime.h"


#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__USE_SMART_PTR



#ifdef org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE boost::shared_ptr<S_VCT_SubtableFactory::S_VCT_Subtable>
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__INIT(x)
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__DELETE(x)
#else
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE S_VCT_SubtableFactory::S_VCT_Subtable*
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__NEW(x) {x= new S_VCT_SubtableFactory::S_VCT_Subtable();}
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__INIT(x)  {x=NULL;}
#define org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace si {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")

class S_VCT_SubtableFactory {

public:
    class S_VCT_Subtable : public BinMessage {
    public:
        S_VCT_Subtable();
    public:
        virtual ~S_VCT_Subtable();
    public:
        virtual int dump(DumpContext& dc)=0;

    };
#ifdef org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__USE_SMART_PTR
    typedef boost::shared_ptr<S_VCT_Subtable> S_VCT_SubtablePtr;
#endif
public:
    static bool isDebug;
//public: static  S_VCT_Subtable* lastParsedObject;
public:
    static org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE createMsg( int messageType, DataInputStream& dis, int& iHolder) throw(IOException);


};

#ifdef org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::S_VCT_SubtableFactory::S_VCT_Subtable* p);
void shared_ptr_release(org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable* p);
#endif

}
}
}



#endif // ORG_HIMALAY_SI_S_VCT_SUBTABLE_FACTORY
// End of code