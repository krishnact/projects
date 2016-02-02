//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "SCTE65DescriptorFactory.h"
#include "caption_service_descriptor_base.h"
#include "caption_service_descriptor.h"
#include "revision_detection_descriptor_base.h"
#include "revision_detection_descriptor.h"
#include "generic_descriptor.h"
// Namespace
namespace org {
namespace himalay {
namespace si {

using namespace ::org::himalay::msgs::runtime;


org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor::SCTE65Descriptor() {};
org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor::~SCTE65Descriptor() {};
bool SCTE65DescriptorFactory::isDebug = true;
/**
 *
 *SCTE65DescriptorFactory::SCTE65DescriptorPtr SCTE65DescriptorFactory::lastParsedObject= NULL;
 *
 */
org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE SCTE65DescriptorFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_si_descriptor_header__PTR_TYPE temp;
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    org_himalay_si_descriptor_header__NEW( desc_header); ;
    //org_himalay_si_descriptor_header__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@af215c18());
    retVal += desc_header->read(istream);


    org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE retObj= createMsg( desc_header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE SCTE65DescriptorFactory::createMsg( org_himalay_si_descriptor_header__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x86 :
        {
            retObj= org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE((SCTE65DescriptorFactory::SCTE65Descriptor *) new caption_service_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x93 :
        {
            retObj= org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE((SCTE65DescriptorFactory::SCTE65Descriptor *) new revision_detection_descriptor ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        default :
        {
            retObj= org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE( (SCTE65DescriptorFactory::SCTE65Descriptor *) new generic_descriptor ());
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
void intrusive_ptr_add_ref(org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::SCTE65DescriptorFactory::SCTE65Descriptor* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.si




// End of code