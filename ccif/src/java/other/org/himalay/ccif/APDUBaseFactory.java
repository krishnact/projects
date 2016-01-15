// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.ccif ;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import org.himalay.msgs.runtime.Factory;
import org.himalay.msgs.runtime.FactoryProduct;
import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.*;

@Created(date = "Fri Jan 15 01:33:14 EST 2016")
public class APDUBaseFactory implements Factory{ 

    public static final int ProfileInq = 0x9F8010;
    public static final int ProfileReply = 0x9F8011;
    public static final int ProfileChanged = 0x9F8012;
    public static final int ServerQuery = 0x9F8022;
    public static final int ServerReply = 0x9F8023;
    public static final int CaPmtReply_1_2 = 0x129F8033;
    public static final int CaPmtReply_2_1 = 0x219F8033;
    public static final int ApplicationInfoReqest = 0x9F8020;
    public static final int NewFlowRequest = 0x9F8e00;
    public static final int ProgramCnf = 0x9F8F01;
    public static final int ProgramReq = 0x9F8F00;
    public static final int codeVersionTable1_2 = 0x9F9C02;
    public static final int CaPmtSMode1_2 = 0x219F8032;
    public static final int InbandTuneReq = 0x9F8408;
    public static final int HostPropertiesReq = 0x9F9F01;
    public static final int HostPropertiesReply = 0x9F9F02;
    public static final int snmpReq = 0x9FA000;
    public static final int snmpReply = 0x9FA001;
    public static final int GetRootOidReq = 0x9FA002;
    public static final int GetRootOidReqply = 0x9FA003;
    public static final int PurchaseReq = 0x9F8F02;
    public static final int PCnf = 0x9F8F03;
    public static final int CancelReq = 0x9F8F04;
    public static final int CancelCnf = 0x9F8F05;
    public static final int HistoryReq = 0x9F8F06;
    public static final int HistoryCnf = 0x9F8F07;
    public static final int DiagnosticCnf = 0x9FDF01;
    public static final int HostInfoRequest = 0x9F9C00;
    public static final int LostFlowInd = 0x9F8E04;
    public static final int Inquire_DSG_Mode1234 = 0x9F8E06;
    public static final int Send_DCD_info = 0x9F8E0B;
    public static final int CpDataReqData2_1 = 0x9F9002;
    public static final int CpDataCnfKey = 0x9F9003;
    public static final int FirmwareUpgrade = 0x9F9995;
    public static final int FirmwareUpgradeReply = 0x9F9996;
    public static final int FirmwareUpgradeComplete = 0x9F9997;
    public static final int Inquire_DSG_mode = 0x9F9100;
    public static final int Set_DSG_mode = 0x9F9101;
    public static final int Send_DSD_Info = 0x9F9105;
    public static final int DSG_error = 0x9F9102;
    public static final int DSG_packetError = 0x9F8E08;
    public static final int hostResetVectorAck = 0x9F9E01;
    public static final int SAS_data_cnf = 0x9F9A04;
    public static final int SAS_serverQuery = 0x9F9A05;
    public static final int SAS_serverReply = 0x9F9A06;
    public static final int SAS_asyncMsg = 0x9F9A07;
    public static final int OpenHoming = 0x9F9990;
    public static final int OpenHomingReply = 0x9F9992;
    public static final int HomingActive = 0x9F9993;
    public static final int HomingCancelled = 0x9F9991;
    public static final int HomingComplete = 0x9F9994;
    public static final int SAS_connectRqst = 0x9F9A00;
    public static final int SAS_connectCnf = 0x9F9A01;
    public static final int SAS_data_rqst = 0x9F9A02;
    public static final int SAS_data_av = 0x9F9A03;
    public static final int diagnosticReq_1_Mmode = 0x9FDF00;
    public static final int FeatureParamtersCnf = 0x9F9808;
    public static final int EsProfile = 0x9FA014;
    public static final int EsProfileCnf = 0x9FA015;
    public static final int requestPids = 0x9FA016;
    public static final int RequestPidsCnf = 0x9FA017;
    public static final int DeleteFlowReq = 0x9F8E02;
    public static final int DeleteFlowCnf = 0x9F8E03;
    public static final int LostFlowCnf = 0x9F8E05;
    public static final int FeatureListReq = 0x9F9802;
    public static final int FeatureList = 0x9F9803;
    public static final int FeatureListCnf = 0x9F9804;
    public static final int FeatureListChanged = 0x9F9805;
    public static final int FeatureParamtersReq = 0x9F9806;
    public static final int SystemTimeInq = 0x9F8442;
    public static final int CloseSessionRequest = 0x95;
    public static final int CloseSessionResponse = 0x96;
    public static final int SystemTime = 0x9F8443;
    public static final int OpenMmiReq = 0x9F8820;
    public static final int OpenMmiCnf = 0x9F8821;
    public static final int CloseMmiReq = 0x9F8822;
    public static final int CloseMmiCnf = 0x9F8823;
    public static final int StreamProfile = 0x9FA010;
    public static final int StreamProfileCnf = 0x9FA011;
    public static final int ProgramProfile = 0x9FA012;
    public static final int ProgramProfileCnf = 0x9FA013;
    public static final int FeatureParamters_1_3 = 0x9F9807;
    public static final int NewFlowConfirm1Type1 = 0x9F8E01;
    public static final int Set_DSG_Mode1234 = 0x9F8E07;
public static boolean isDebug = true;
public static  APDUBase lastParsedObject= null;
    public static APDUBase createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
int iRead=0;
        APDUHeader header;
        {
        int retVal= 0;
         header = new APDUHeader();
retVal += header.read(istream);
iRead= retVal;
}
        APDUBase retVal= createMsg( header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }
  
    public static APDUBase createMsg( org.himalay.ccif.APDUHeader temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        APDUBase retVal= null;
        try{
        switch( temp.getMessageType() )        {
        case 0x9F8010 :
        {
        retVal= new ProfileInq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8011 :
        {
        retVal= new ProfileReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8012 :
        {
        retVal= new ProfileChanged ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8022 :
        {
        retVal= new ServerQuery ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8023 :
        {
        retVal= new ServerReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x129F8033 :
        {
        retVal= new CaPmtReply_1_2 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x219F8033 :
        {
        retVal= new CaPmtReply_2_1 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8020 :
        {
        retVal= new ApplicationInfoReqest ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8e00 :
        {
        retVal= new NewFlowRequest ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F01 :
        {
        retVal= new ProgramCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F00 :
        {
        retVal= new ProgramReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9C02 :
        {
        retVal= new codeVersionTable1_2 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x219F8032 :
        {
        retVal= new CaPmtSMode1_2 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8408 :
        {
        retVal= new InbandTuneReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9F01 :
        {
        retVal= new HostPropertiesReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9F02 :
        {
        retVal= new HostPropertiesReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA000 :
        {
        retVal= new snmpReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA001 :
        {
        retVal= new snmpReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA002 :
        {
        retVal= new GetRootOidReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA003 :
        {
        retVal= new GetRootOidReqply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F02 :
        {
        retVal= new PurchaseReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F03 :
        {
        retVal= new PCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F04 :
        {
        retVal= new CancelReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F05 :
        {
        retVal= new CancelCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F06 :
        {
        retVal= new HistoryReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8F07 :
        {
        retVal= new HistoryCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FDF01 :
        {
        retVal= new DiagnosticCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9C00 :
        {
        retVal= new HostInfoRequest ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E04 :
        {
        retVal= new LostFlowInd ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E06 :
        {
        retVal= new Inquire_DSG_Mode1234 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E0B :
        {
        retVal= new Send_DCD_info ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9002 :
        {
        retVal= new CpDataReqData2_1 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9003 :
        {
        retVal= new CpDataCnfKey ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9995 :
        {
        retVal= new FirmwareUpgrade ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9996 :
        {
        retVal= new FirmwareUpgradeReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9997 :
        {
        retVal= new FirmwareUpgradeComplete ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9100 :
        {
        retVal= new Inquire_DSG_mode ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9101 :
        {
        retVal= new Set_DSG_mode ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9105 :
        {
        retVal= new Send_DSD_Info ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9102 :
        {
        retVal= new DSG_error ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E08 :
        {
        retVal= new DSG_packetError ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9E01 :
        {
        retVal= new hostResetVectorAck ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A04 :
        {
        retVal= new SAS_data_cnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A05 :
        {
        retVal= new SAS_serverQuery ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A06 :
        {
        retVal= new SAS_serverReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A07 :
        {
        retVal= new SAS_asyncMsg ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9990 :
        {
        retVal= new OpenHoming ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9992 :
        {
        retVal= new OpenHomingReply ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9993 :
        {
        retVal= new HomingActive ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9991 :
        {
        retVal= new HomingCancelled ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9994 :
        {
        retVal= new HomingComplete ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A00 :
        {
        retVal= new SAS_connectRqst ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A01 :
        {
        retVal= new SAS_connectCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A02 :
        {
        retVal= new SAS_data_rqst ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9A03 :
        {
        retVal= new SAS_data_av ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FDF00 :
        {
        retVal= new diagnosticReq_1_Mmode ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9808 :
        {
        retVal= new FeatureParamtersCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA014 :
        {
        retVal= new EsProfile ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA015 :
        {
        retVal= new EsProfileCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA016 :
        {
        retVal= new requestPids ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA017 :
        {
        retVal= new RequestPidsCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E02 :
        {
        retVal= new DeleteFlowReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E03 :
        {
        retVal= new DeleteFlowCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E05 :
        {
        retVal= new LostFlowCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9802 :
        {
        retVal= new FeatureListReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9803 :
        {
        retVal= new FeatureList ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9804 :
        {
        retVal= new FeatureListCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9805 :
        {
        retVal= new FeatureListChanged ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9806 :
        {
        retVal= new FeatureParamtersReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8442 :
        {
        retVal= new SystemTimeInq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x95 :
        {
        retVal= new CloseSessionRequest ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x96 :
        {
        retVal= new CloseSessionResponse ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8443 :
        {
        retVal= new SystemTime ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8820 :
        {
        retVal= new OpenMmiReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8821 :
        {
        retVal= new OpenMmiCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8822 :
        {
        retVal= new CloseMmiReq ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8823 :
        {
        retVal= new CloseMmiCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA010 :
        {
        retVal= new StreamProfile ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA011 :
        {
        retVal= new StreamProfileCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA012 :
        {
        retVal= new ProgramProfile ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FA013 :
        {
        retVal= new ProgramProfileCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9807 :
        {
        retVal= new FeatureParamters_1_3 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E01 :
        {
        retVal= new NewFlowConfirm1Type1 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E07 :
        {
        retVal= new Set_DSG_Mode1234 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
                        default :
        {
        retVal= new APDUGeneric ();
            retVal.setHeader(temp);
        // has no spread
                 iRead+=retVal.readNoHeader(dis);
            break;
        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        } 
        }catch(IOException ioex)
        {
        if (isDebug)
        {
        lastParsedObject = retVal;
        }
        throw ioex;
        }
        iHolder.setValue(iRead);
        return retVal;
    }
    
                public static abstract class APDUBase extends BinMessage implements FactoryProduct {
    public APDUBase() {
        super();
        // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.ccif.APDUHeader header);
    public abstract org.himalay.ccif.APDUHeader getHeader();
        
    }
}

// End of code