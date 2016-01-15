// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl ;

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

@Created(date = "Fri Jan 15 01:39:12 EST 2016")
public class PVDataFactory implements Factory{ 
    public static final int PV1 = 0x01;
    public static final int PV2 = 0x02;
public static boolean isDebug = true;
public static  PVData lastParsedObject= null;
    public static PVData createMsg( int messageType, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        PVData retVal= null;
        try{
        switch( messageType )
        {
        case 0x01 :
        {
        retVal= new PV1 ();
        iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x02 :
        {
        retVal= new PV2 ();
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
    
                public static abstract class PVData extends BinMessage implements FactoryProduct {
    public PVData() {
        super();
        // TODO Auto-generated constructor stub
        }
        
    }
}

// End of code