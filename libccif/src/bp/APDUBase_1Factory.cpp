//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "APDUBase_1Factory.h"
#include "NewFlowConfirm.h"
#include "codeVersionTable1_3.h"
#include "CaPmtMMode2_1.h"
#include "NewFlowRequest1_1and1_2.h"
#include "CpDataReqTransMission2_1.h"
#include "CpDataCnfdata.h"
#include "diagnosticReqSmodeCnf.h"
#include "FeatureParamters_1_4.h"
// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;


org::himalay::ccif::APDUBase_1Factory::APDUBase_1::APDUBase_1() {};
org::himalay::ccif::APDUBase_1Factory::APDUBase_1::~APDUBase_1() {};
bool APDUBase_1Factory::isDebug = true;
/**
 *
 *APDUBase_1Factory::APDUBase_1Ptr APDUBase_1Factory::lastParsedObject= NULL;
 *
 */
org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE APDUBase_1Factory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_ccif_APDUHeader__PTR_TYPE temp;
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    org_himalay_ccif_APDUHeader__NEW( header); ;
    //org_himalay_ccif_APDUHeader__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@2c97a473());
    retVal += header->read(istream);


    org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE retObj= createMsg( header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE APDUBase_1Factory::createMsg( org_himalay_ccif_APDUHeader__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x9F8E01 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new NewFlowConfirm ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9C02 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new codeVersionTable1_3 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x219F8032 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new CaPmtMMode2_1 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E00 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new NewFlowRequest1_1and1_2 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9002 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new CpDataReqTransMission2_1 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9003 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new CpDataCnfdata ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FDF01 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new diagnosticReqSmodeCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9807 :
        {
            retObj= org_himalay_ccif_APDUBase_1Factory_APDUBase_1__PTR_TYPE((APDUBase_1Factory::APDUBase_1 *) new FeatureParamters_1_4 ());
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
void intrusive_ptr_add_ref(org::himalay::ccif::APDUBase_1Factory::APDUBase_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUBase_1Factory::APDUBase_1* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.ccif




// End of code