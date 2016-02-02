//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "SCTE65TableFactory.h"
#include "shortform_virtual_channel_table_section_.h"
#include "shortform_virtual_channel_table_section.h"
#include "network_text_table_section_.h"
#include "network_text_table_section.h"
#include "system_time_table_section_.h"
#include "system_time_table_section.h"
#include "network_information_table_section.h"
#include "code_version_table_section.h"
#include "generic_table_section.h"
#include "ca_table_section_.h"
#include "ca_table_section.h"
#include "xait_section.h"
#include "longform_virtual_channel_table_section_.h"
#include "longform_virtual_channel_table_section.h"
#include "MCP_3_1_1_Base.h"
#include "MCP_3_1_1.h"
// Namespace
namespace org {
namespace himalay {
namespace si {

using namespace ::org::himalay::msgs::runtime;


org::himalay::si::SCTE65TableFactory::SCTE65Table::SCTE65Table() {};
org::himalay::si::SCTE65TableFactory::SCTE65Table::~SCTE65Table() {};
bool SCTE65TableFactory::isDebug = true;
/**
 *
 *SCTE65TableFactory::SCTE65TablePtr SCTE65TableFactory::lastParsedObject= NULL;
 *
 */
org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE SCTE65TableFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_si_SCTE65_TableHeader__PTR_TYPE temp;
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE tableHeader ;
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader); ;
    //org_himalay_si_SCTE65_TableHeader__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@ae1c6017());
    retVal += tableHeader->read(istream);


    org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE retObj= createMsg( tableHeader,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE SCTE65TableFactory::createMsg( org_himalay_si_SCTE65_TableHeader__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0xc4 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new shortform_virtual_channel_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xc3 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new network_text_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xc5 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new system_time_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xc2 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new network_information_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xd9 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new code_version_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new generic_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x8c :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new ca_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x74 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new xait_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xcA :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new longform_virtual_channel_table_section ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0xc9 :
        {
            retObj= org_himalay_si_SCTE65TableFactory_SCTE65Table__PTR_TYPE((SCTE65TableFactory::SCTE65Table *) new MCP_3_1_1 ());
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
void intrusive_ptr_add_ref(org::himalay::si::SCTE65TableFactory::SCTE65Table* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::SCTE65TableFactory::SCTE65Table* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.si




// End of code