//@Generated(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "code_version_tableFactory.h"
#include "code_version_table2_.h"
#include "code_version_table2.h"
// Namespace
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;


org::himalay::cl::cdl::code_version_tableFactory::code_version_table::code_version_table() {};
org::himalay::cl::cdl::code_version_tableFactory::code_version_table::~code_version_table() {};
bool code_version_tableFactory::isDebug = true;
/**
 *
 *code_version_tableFactory::code_version_tablePtr code_version_tableFactory::lastParsedObject= NULL;
 *
 */
org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE code_version_tableFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_cl_cdl_Header__PTR_TYPE temp;
    org_himalay_cl_cdl_Header__PTR_TYPE header ;
    org_himalay_cl_cdl_Header__NEW( header); ;
    //org_himalay_cl_cdl_Header__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@dce31f2a());
    retVal += header->read(istream);


    org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE retObj= createMsg( header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE code_version_tableFactory::createMsg( org_himalay_cl_cdl_Header__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x9f9c05 :
        {
            retObj= org_himalay_cl_cdl_code_version_tableFactory_code_version_table__PTR_TYPE((code_version_tableFactory::code_version_table *) new code_version_table2 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        }
    } catch(IOException& ioex)
    {
        if (isDebug)
        {
//        lastParsedObject = retVal;
        }
        throw ioex;
    }
    iHolder=retVal;
    return retObj;
}
void intrusive_ptr_add_ref(org::himalay::cl::cdl::code_version_tableFactory::code_version_table* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::code_version_tableFactory::code_version_table* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
}
} // End Namespace org.himalay.cl.cdl




// End of code