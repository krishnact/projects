// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.ccif ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:32:55 EST 2016")

public  class ServiceIPMulticast extends BinStruct implements PublicBinMsg {




    // members variables
    // multicastGroupId
    public ByteArray multicastGroupId ;

    public ServiceIPMulticast () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize multicastGroupId
        multicastGroupId= new ByteArray();
        multicastGroupId.setSizeType("FIXED");
        multicastGroupId.setSize(4);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read multicastGroupId
        {
            retVal+=multicastGroupId.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for multicastGroupId**/
        }

        // write multicastGroupId
        {
            retVal += multicastGroupId.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("ServiceIPMulticast\n");
        dc.increaseIndent();
        int retVal= 0;
        // write multicastGroupId
        dc.indent();
        dc.getPs().print("multicastGroupId: "+multicastGroupId.getSize()+"(0x"+Integer.toHexString(multicastGroupId.getSize())+")\n");
        this.multicastGroupId.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for multicastGroupId
    //public ByteArray getMulticastGroupId()
    //{
    //    return multicastGroupId ;
    //}


    // Setter for multicastGroupId
    //public void setMulticastGroupId(ByteArray val)
    //{
    //    this.multicastGroupId= val;
    //}


    public void setMulticastGroupId(byte[] val)
    {
        this.multicastGroupId.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code