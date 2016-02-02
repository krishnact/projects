//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "app_desc_baseFactory.h"
#include "unbound_application_descriptor.h"
#include "abstract_service_descriptor.h"
#include "privileged_certificate_descriptor.h"
#include "application_storage_descriptor.h"
#include "application_name_descriptor.h"
#include "application_descriptor.h"
#include "transport_protocol_descriptor.h"
#include "dvbJapp_descriptor.h"
#include "dvbJapp_locator_descriptor.h"
#include "generic_app_desc.h"
// Namespace
namespace org {
namespace himalay {
namespace si {

using namespace ::org::himalay::msgs::runtime;


org::himalay::si::app_desc_baseFactory::app_desc_base::app_desc_base() {};
org::himalay::si::app_desc_baseFactory::app_desc_base::~app_desc_base() {};
bool app_desc_baseFactory::isDebug = true;
/**
 *
 *app_desc_baseFactory::app_desc_basePtr app_desc_baseFactory::lastParsedObject= NULL;
 *
 */
org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE app_desc_baseFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_si_descriptor_header__PTR_TYPE temp;
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    org_himalay_si_descriptor_header__NEW( desc_header); ;
    //org_himalay_si_descriptor_header__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@af215c18());
    retVal += desc_header->read(istream);


    org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE retObj= createMsg( desc_header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE app_desc_baseFactory::createMsg( org_himalay_si_descriptor_header__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x67 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new unbound_application_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x66 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new abstract_service_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x68 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new privileged_certificate_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x69 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new application_storage_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x01 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new application_name_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x00 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new application_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x02 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new transport_protocol_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x03 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new dvbJapp_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x04 :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE((app_desc_baseFactory::app_desc_base *) new dvbJapp_locator_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        default :
        {
            retObj= org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE( (app_desc_baseFactory::app_desc_base *) new generic_app_desc ());
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
void intrusive_ptr_add_ref(org::himalay::si::app_desc_baseFactory::app_desc_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::app_desc_baseFactory::app_desc_base* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.si




// End of code