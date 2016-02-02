//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "LocationTypeFactory.h"
#include "LocationType_source_id.h"
#include "LocationType_pid.h"
#include "LocationType_program.h"
#include "LocationType_dsg_tunnel.h"
#include "LocationType_dsg_app_id.h"
// Namespace
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;


org::himalay::cl::cdl::LocationTypeFactory::LocationType::LocationType() {};
org::himalay::cl::cdl::LocationTypeFactory::LocationType::~LocationType() {};
bool LocationTypeFactory::isDebug = true;
/**
 *
 *LocationTypeFactory::LocationTypePtr LocationTypeFactory::lastParsedObject= NULL;
 *
 */
org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE LocationTypeFactory::createMsg( int messageType, DataInputStream& istream, int& iHolder) throw(IOException)
{

    int retVal= 0;
    org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE retObj;
    try {
        switch( messageType )
        {
        case 0x00 :
        {
            retObj= org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE((LocationTypeFactory::LocationType *) new LocationType_source_id ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x01 :
        {
            retObj= org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE((LocationTypeFactory::LocationType *) new LocationType_pid ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x02 :
        {
            retObj= org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE((LocationTypeFactory::LocationType *) new LocationType_program ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x03 :
        {
            retObj= org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE((LocationTypeFactory::LocationType *) new LocationType_dsg_tunnel ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x04 :
        {
            retObj= org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE((LocationTypeFactory::LocationType *) new LocationType_dsg_app_id ());
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
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationTypeFactory::LocationType* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationTypeFactory::LocationType* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
}
} // End Namespace org.himalay.cl.cdl




// End of code