//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "APDUBaseFactory.h"
#include "APDUGeneric.h"
#include "ProfileInq.h"
#include "ProfileReply.h"
#include "ProfileChanged.h"
#include "ServerQuery.h"
#include "ServerReply.h"
#include "CaPmtReply_1_2.h"
#include "CaPmtReply_2_1.h"
#include "ApplicationInfoReqest.h"
#include "NewFlowRequest.h"
#include "ProgramCnf.h"
#include "ProgramReq.h"
#include "codeVersionTable1_2.h"
#include "CaPmtSMode1_2.h"
#include "InbandTuneReq.h"
#include "HostPropertiesReq.h"
#include "HostPropertiesReply.h"
#include "snmpReq.h"
#include "snmpReply.h"
#include "GetRootOidReq.h"
#include "GetRootOidReqply.h"
#include "PurchaseReq.h"
#include "PCnf.h"
#include "CancelReq.h"
#include "CancelCnf.h"
#include "HistoryReq.h"
#include "HistoryCnf.h"
#include "DiagnosticCnf.h"
#include "HostInfoRequest.h"
#include "LostFlowInd.h"
#include "Inquire_DSG_Mode1234.h"
#include "Send_DCD_info.h"
#include "CpDataReqData2_1.h"
#include "CpDataCnfKey.h"
#include "FirmwareUpgrade.h"
#include "FirmwareUpgradeReply.h"
#include "FirmwareUpgradeComplete.h"
#include "Inquire_DSG_mode.h"
#include "Set_DSG_mode.h"
#include "Send_DSD_Info.h"
#include "DSG_error.h"
#include "DSG_packetError.h"
#include "hostResetVectorAck.h"
#include "SAS_data_cnf.h"
#include "SAS_serverQuery.h"
#include "SAS_serverReply.h"
#include "SAS_asyncMsg.h"
#include "OpenHoming.h"
#include "OpenHomingReply.h"
#include "HomingActive.h"
#include "HomingCancelled.h"
#include "HomingComplete.h"
#include "SAS_connectRqst.h"
#include "SAS_connectCnf.h"
#include "SAS_data_rqst.h"
#include "SAS_data_av.h"
#include "diagnosticReq_1_Mmode.h"
#include "FeatureParamtersCnf.h"
#include "EsProfile.h"
#include "EsProfileCnf.h"
#include "requestPids.h"
#include "RequestPidsCnf.h"
#include "DeleteFlowReq.h"
#include "DeleteFlowCnf.h"
#include "LostFlowCnf.h"
#include "FeatureListReq.h"
#include "FeatureList.h"
#include "FeatureListCnf.h"
#include "FeatureListChanged.h"
#include "FeatureParamtersReq.h"
#include "SystemTimeInq.h"
#include "CloseSessionRequest.h"
#include "CloseSessionResponse.h"
#include "SystemTime.h"
#include "OpenMmiReq.h"
#include "OpenMmiCnf.h"
#include "CloseMmiReq.h"
#include "CloseMmiCnf.h"
#include "StreamProfile.h"
#include "StreamProfileCnf.h"
#include "ProgramProfile.h"
#include "ProgramProfileCnf.h"
#include "FeatureParamters_1_3.h"
#include "NewFlowConfirm1Type1.h"
#include "Set_DSG_Mode1234.h"
// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;


org::himalay::ccif::APDUBaseFactory::APDUBase::APDUBase() {};
org::himalay::ccif::APDUBaseFactory::APDUBase::~APDUBase() {};
bool APDUBaseFactory::isDebug = true;
/**
 *
 *APDUBaseFactory::APDUBasePtr APDUBaseFactory::lastParsedObject= NULL;
 *
 */
org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE APDUBaseFactory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_ccif_APDUHeader__PTR_TYPE temp;
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    org_himalay_ccif_APDUHeader__NEW( header); ;
    //org_himalay_ccif_APDUHeader__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@2c97a473());
    retVal += header->read(istream);


    org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE retObj= createMsg( header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE APDUBaseFactory::createMsg( org_himalay_ccif_APDUHeader__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x9F8010 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProfileInq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8011 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProfileReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8012 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProfileChanged ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8022 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ServerQuery ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8023 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ServerReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x129F8033 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CaPmtReply_1_2 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x219F8033 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CaPmtReply_2_1 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8020 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ApplicationInfoReqest ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8e00 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new NewFlowRequest ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProgramCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F00 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProgramReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9C02 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new codeVersionTable1_2 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x219F8032 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CaPmtSMode1_2 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8408 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new InbandTuneReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9F01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HostPropertiesReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9F02 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HostPropertiesReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA000 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new snmpReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA001 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new snmpReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA002 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new GetRootOidReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA003 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new GetRootOidReqply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F02 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new PurchaseReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F03 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new PCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F04 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CancelReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F05 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CancelCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F06 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HistoryReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8F07 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HistoryCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FDF01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new DiagnosticCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9C00 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HostInfoRequest ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E04 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new LostFlowInd ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E06 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Inquire_DSG_Mode1234 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E0B :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Send_DCD_info ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9002 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CpDataReqData2_1 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9003 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CpDataCnfKey ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9995 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FirmwareUpgrade ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9996 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FirmwareUpgradeReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9997 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FirmwareUpgradeComplete ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9100 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Inquire_DSG_mode ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9101 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Set_DSG_mode ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9105 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Send_DSD_Info ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9102 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new DSG_error ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E08 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new DSG_packetError ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9E01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new hostResetVectorAck ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A04 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_data_cnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A05 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_serverQuery ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A06 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_serverReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A07 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_asyncMsg ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9990 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new OpenHoming ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9992 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new OpenHomingReply ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9993 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HomingActive ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9991 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HomingCancelled ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9994 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new HomingComplete ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A00 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_connectRqst ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_connectCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A02 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_data_rqst ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9A03 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SAS_data_av ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FDF00 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new diagnosticReq_1_Mmode ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9808 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureParamtersCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA014 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new EsProfile ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA015 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new EsProfileCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA016 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new requestPids ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA017 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new RequestPidsCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E02 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new DeleteFlowReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E03 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new DeleteFlowCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E05 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new LostFlowCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9802 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureListReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9803 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureList ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9804 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureListCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9805 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureListChanged ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9806 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureParamtersReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8442 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SystemTimeInq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x95 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CloseSessionRequest ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x96 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CloseSessionResponse ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8443 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new SystemTime ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8820 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new OpenMmiReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8821 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new OpenMmiCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8822 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CloseMmiReq ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8823 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new CloseMmiCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA010 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new StreamProfile ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA011 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new StreamProfileCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA012 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProgramProfile ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FA013 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new ProgramProfileCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F9807 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new FeatureParamters_1_3 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E01 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new NewFlowConfirm1Type1 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E07 :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE((APDUBaseFactory::APDUBase *) new Set_DSG_Mode1234 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        default :
        {
            retObj= org_himalay_ccif_APDUBaseFactory_APDUBase__PTR_TYPE( (APDUBaseFactory::APDUBase *) new APDUGeneric ());
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
void intrusive_ptr_add_ref(org::himalay::ccif::APDUBaseFactory::APDUBase* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUBaseFactory::APDUBase* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.ccif




// End of code