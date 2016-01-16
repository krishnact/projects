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
public class ResourceFactory implements Factory {

    public static final int VendorId = 0x00;
    public static final int HardwareVersionId = 0x01;
    public static final int HostMacAddress = 0x02;
    public static final int HostId = 0x03;
    public static final int GroupId = 0x04;
    public static boolean isDebug = true;
    public static  Resource lastParsedObject= null;
    public static Resource createMsg(DataInputStream istream, IntegerHolder iHolder1) throws IOException
    {
        int iRead=0;
        ResourceHeader header;
        {
            int retVal= 0;
            header = new ResourceHeader();
            retVal += header.read(istream);
            iRead= retVal;
        }
        Resource retVal= createMsg( header,  istream,  iHolder1);
        iHolder1.setValue(iHolder1.getValue()+iRead);
        return retVal;
    }

    public static Resource createMsg( org.himalay.cl.cdl.ResourceHeader temp, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        Resource retVal= null;
        try {
            switch( temp.getMessageType() )        {
            case 0x00 :
            {
                retVal= new VendorId ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x01 :
            {
                retVal= new HardwareVersionId ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x02 :
            {
                retVal= new HostMacAddress ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x03 :
            {
                retVal= new HostId ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x04 :
            {
                retVal= new GroupId ();
                retVal.setHeader(temp);
                // has no spread
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            default :
            {
                retVal= new GenericResource ();
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

    public static abstract class Resource extends BinMessage implements FactoryProduct {
        public Resource() {
            super();
            // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.cl.cdl.ResourceHeader header);
        public abstract org.himalay.cl.cdl.ResourceHeader getHeader();

    }
}

// End of code