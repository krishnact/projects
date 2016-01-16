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
public class APDUBase_3Factory implements Factory {
    public static final int NewFlowConfirm1Type1_5 = 0x9F8E01;
    public static boolean isDebug = true;
    public static  APDUBase_3 lastParsedObject= null;
    public static APDUBase_3 createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
        int iRead=0;
        APDUHeader header;
        {
            int retVal= 0;
            header = new APDUHeader();
            retVal += header.read(istream);
            iRead= retVal;
        }
        APDUBase_3 retVal= createMsg( header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }

    public static APDUBase_3 createMsg( org.himalay.ccif.APDUHeader temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        APDUBase_3 retVal= null;
        try {
            switch( temp.getMessageType() )        {
            case 0x9F8E01 :
            {
                retVal= new NewFlowConfirm1Type1_5 ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            }
        } catch(IOException ioex)
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

    public static abstract class APDUBase_3 extends BinMessage implements FactoryProduct {
        public APDUBase_3() {
            super();
            // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.ccif.APDUHeader header);
        public abstract org.himalay.ccif.APDUHeader getHeader();

    }
}

// End of code