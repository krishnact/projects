// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si ;

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

@Created(date = "Sun Sep 14 22:48:37 EDT 2014")
public class SCTE65DescriptorFactory implements Factory{ 
    public static final int caption_service_descriptor = 0x86;
    public static final int revision_detection_descriptor = 0x93;

public static boolean isDebug = true;
public static  SCTE65Descriptor lastParsedObject= null;
    public static SCTE65Descriptor createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
int iRead=0;
        descriptor_header desc_header;
        {
        int retVal= 0;
         desc_header = new descriptor_header();
retVal += desc_header.read(istream);
iRead= retVal;
}
        SCTE65Descriptor retVal= createMsg( desc_header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }
  
    public static SCTE65Descriptor createMsg( org.himalay.si.descriptor_header temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        SCTE65Descriptor retVal= null;
        try{
        switch( temp.getMessageType() )        {
        case 0x86 :
        {
        retVal= new caption_service_descriptor ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
        case 0x93 :
        {
        retVal= new revision_detection_descriptor ();
            retVal.setHeader(temp);
        // has no spread
                iRead+=retVal.readNoHeader(dis);
            break;
        }
                                        default :
        {
        retVal= new generic_descriptor ();
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
    
                public static abstract class SCTE65Descriptor extends BinMessage implements FactoryProduct {
    public SCTE65Descriptor() {
        super();
        // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.si.descriptor_header header);
    public abstract org.himalay.si.descriptor_header getHeader();
        
    }
}

// End of code