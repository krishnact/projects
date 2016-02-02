#ifndef ORG_HIMALAY_SI_SCTE65DESCRIPTOR_FACTORY
#define ORG_HIMALAY_SI_SCTE65DESCRIPTOR_FACTORY
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "descriptor_header.h"
#include "runtime.h"


#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__USE_SMART_PTR



#ifdef org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE boost::shared_ptr<SCTE65DescriptorFactory::SCTE65Descriptor>
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__INIT(x)
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__DELETE(x)
#else
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE SCTE65DescriptorFactory::SCTE65Descriptor*
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__NEW(x) {x= new SCTE65DescriptorFactory::SCTE65Descriptor();}
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__INIT(x)  {x=NULL;}
#define org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace si {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")

class SCTE65DescriptorFactory {

public:
    class SCTE65Descriptor : public BinMessage {
    public:
        SCTE65Descriptor();
    public:
        virtual ~SCTE65Descriptor();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)=0;
    public:
        virtual org_himalay_si_descriptor_header__PTR_TYPE getHeader()=0;

        // SCTE65Descriptor: 4c9b2b8c-535e-4996-bcdb-cda5bd49c5d5 used as header is false


    };
#ifdef org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__USE_SMART_PTR
    typedef boost::shared_ptr<SCTE65Descriptor> SCTE65DescriptorPtr;
#endif
public:
    static bool isDebug;
//public: static  SCTE65Descriptor* lastParsedObject;
public:
    static org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE createMsg( org_himalay_si_descriptor_header__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::SCTE65DescriptorFactory::SCTE65Descriptor* p);
void shared_ptr_release(org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor* p);
#endif

}
}
}



#endif // ORG_HIMALAY_SI_SCTE65DESCRIPTOR_FACTORY
// End of code