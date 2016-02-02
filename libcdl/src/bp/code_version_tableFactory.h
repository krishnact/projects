#ifndef ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE_FACTORY
#define ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE_FACTORY
//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//


#include "stdio.h"
#include "Header.h"
#include "runtime.h"


#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__USE_SMART_PTR



#ifdef org_himalay_cl_cdl_code_version_tableFactory_code_version_table__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE boost::shared_ptr<code_version_tableFactory::code_version_table>
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__INIT(x)
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__DELETE(x)
#else
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE code_version_tableFactory::code_version_table*
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__NEW(x) {x= new code_version_tableFactory::code_version_table();}
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__INIT(x)  {x=NULL;}
#define org_himalay_cl_cdl_code_version_tableFactory_code_version_table__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org {
namespace himalay {
namespace cl {
namespace cdl {
using namespace ::org::himalay::msgs::runtime;
//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")

class code_version_tableFactory {

public:
    class code_version_table : public BinMessage {
    public:
        code_version_table();
    public:
        virtual ~code_version_table();
    public:
        virtual int dump(DumpContext& dc)=0;
    public:
        virtual void setHeader(org_himalay_cl_cdl_Header__PTR_TYPE header)=0;
    public:
        virtual org_himalay_cl_cdl_Header__PTR_TYPE getHeader()=0;

        // code_version_table: cdf8651c-6dd7-4211-80c6-59de3dc3a193 used as header is false


    };
#ifdef org_himalay_cl_cdl_code_version_tableFactory_code_version_table__USE_SMART_PTR
    typedef boost::shared_ptr<code_version_table> code_version_tablePtr;
#endif
public:
    static bool isDebug;
//public: static  code_version_table* lastParsedObject;
public:
    static org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE createMsg(DataInputStream& dis, int& iHolder) throw( IOException);
public:
    static org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE createMsg( org_himalay_cl_cdl_Header__PTR_TYPE temp, DataInputStream& dis, int& iHolder) throw( IOException);


};

#ifdef org_himalay_cl_cdl_code_version_tableFactory_code_version_table__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::cl::cdl::code_version_tableFactory::code_version_table* p);
//void shared_ptr_add_ref(${cppUtil.getGlobalScope($factory.packageName)}::code_version_tableFactory::code_version_table* p);
void shared_ptr_release(org::himalay::cl::cdl::code_version_tableFactory::code_version_table* p);
#endif

}
}
}
}



#endif // ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE_FACTORY
// End of code