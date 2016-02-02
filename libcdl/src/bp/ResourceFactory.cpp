//@Generated(date = "Mon Feb 01 22:30:21 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "ResourceFactory.h"
#include "GenericResource.h"
#include "VendorId.h"
#include "HardwareVersionId.h"
#include "HostMacAddress.h"
#include "HostId.h"
#include "GroupId.h"
// Namespace
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;


org::himalay::cl::cdl::ResourceFactory::Resource::Resource() {};
org::himalay::cl::cdl::ResourceFactory::Resource::~Resource() {};
bool ResourceFactory::isDebug = true;
/**
 *
 *ResourceFactory::ResourcePtr ResourceFactory::lastParsedObject= NULL;
 *
 */
org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE ResourceFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_cl_cdl_ResourceHeader__PTR_TYPE temp;
    org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header ;
    org_himalay_cl_cdl_ResourceHeader__NEW( header); ;
    //org_himalay_cl_cdl_ResourceHeader__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@a89ecd8());
    retVal += header->read(istream);


    org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE retObj= createMsg( header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE ResourceFactory::createMsg( org_himalay_cl_cdl_ResourceHeader__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x00 :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE((ResourceFactory::Resource *) new VendorId ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x01 :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE((ResourceFactory::Resource *) new HardwareVersionId ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x02 :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE((ResourceFactory::Resource *) new HostMacAddress ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x03 :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE((ResourceFactory::Resource *) new HostId ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x04 :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE((ResourceFactory::Resource *) new GroupId ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        default :
        {
            retObj= org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE( (ResourceFactory::Resource *) new GenericResource ());
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
void intrusive_ptr_add_ref(org::himalay::cl::cdl::ResourceFactory::Resource* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::ResourceFactory::Resource* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
}
} // End Namespace org.himalay.cl.cdl




// End of code