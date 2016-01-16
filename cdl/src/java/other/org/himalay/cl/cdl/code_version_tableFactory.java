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
public class code_version_tableFactory implements Factory {
    public static final int code_version_table2 = 0x9f9c05;
    public static boolean isDebug = true;
    public static  code_version_table lastParsedObject= null;
    public static code_version_table createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
        int iRead=0;
        Header header;
        {
            int retVal= 0;
            header = new Header();
            retVal += header.read(istream);
            iRead= retVal;
        }
        code_version_table retVal= createMsg( header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }

    public static code_version_table createMsg( org.himalay.cl.cdl.Header temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        code_version_table retVal= null;
        try {
            switch( temp.getMessageType() )        {
            case 0x9f9c05 :
            {
                retVal= new code_version_table2 ();
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

    public static abstract class code_version_table extends BinMessage implements FactoryProduct {
        public code_version_table() {
            super();
            // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.cl.cdl.Header header);
        public abstract org.himalay.cl.cdl.Header getHeader();

    }
}

// End of code