//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "PVDataFactory.h"
#include "PV1.h"
#include "PV2.h"
// Namespace
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;


org::himalay::cl::cdl::PVDataFactory::PVData::PVData() {};
org::himalay::cl::cdl::PVDataFactory::PVData::~PVData() {};
bool PVDataFactory::isDebug = true;
/**
 *
 *PVDataFactory::PVDataPtr PVDataFactory::lastParsedObject= NULL;
 *
 */
org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE PVDataFactory::createMsg( int messageType, DataInputStream& istream, int& iHolder) throw(IOException)
{

    int retVal= 0;
    org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE retObj;
    try {
        switch( messageType )
        {
        case 0x01 :
        {
            retObj= org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE((PVDataFactory::PVData *) new PV1 ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x02 :
        {
            retObj= org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE((PVDataFactory::PVData *) new PV2 ());
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
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PVDataFactory::PVData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PVDataFactory::PVData* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
}
} // End Namespace org.himalay.cl.cdl




// End of code