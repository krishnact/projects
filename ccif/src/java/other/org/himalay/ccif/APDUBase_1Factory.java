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
public class APDUBase_1Factory implements Factory{ 
    public static final int NewFlowConfirm = 0x9F8E01;
    public static final int codeVersionTable1_3 = 0x9F9C02;
    public static final int CaPmtMMode2_1 = 0x219F8032;
    public static final int NewFlowRequest1_1and1_2 = 0x9F8E00;
    public static final int CpDataReqTransMission2_1 = 0x9F9002;
    public static final int CpDataCnfdata = 0x9F9003;
    public static final int diagnosticReqSmodeCnf = 0x9FDF01;
    public static final int FeatureParamters_1_4 = 0x9F9807;
public static boolean isDebug = true;
public static  APDUBase_1 lastParsedObject= null;
    public static APDUBase_1 createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
int iRead=0;
        APDUHeader header;
        {
        int retVal= 0;
         header = new APDUHeader();
retVal += header.read(istream);
iRead= retVal;
}
        APDUBase_1 retVal= createMsg( header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }
  
    public static APDUBase_1 createMsg( org.himalay.ccif.APDUHeader temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        APDUBase_1 retVal= null;
        try{
        switch( temp.getMessageType() )        {
        case 0x9F8E01 :
        {
        retVal= new NewFlowConfirm ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9C02 :
        {
        retVal= new codeVersionTable1_3 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x219F8032 :
        {
        retVal= new CaPmtMMode2_1 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F8E00 :
        {
        retVal= new NewFlowRequest1_1and1_2 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9002 :
        {
        retVal= new CpDataReqTransMission2_1 ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9003 :
        {
        retVal= new CpDataCnfdata ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9FDF01 :
        {
        retVal= new diagnosticReqSmodeCnf ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x9F9807 :
        {
        retVal= new FeatureParamters_1_4 ();
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
    
                public static abstract class APDUBase_1 extends BinMessage implements FactoryProduct {
    public APDUBase_1() {
        super();
        // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.ccif.APDUHeader header);
    public abstract org.himalay.ccif.APDUHeader getHeader();
        
    }
}

// End of code