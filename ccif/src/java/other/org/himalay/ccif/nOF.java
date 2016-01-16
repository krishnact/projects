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
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class nOF extends BinStruct implements PublicBinMsg {




    // members variables
    // featureId
    public short featureId ;
    // status
    public short status ;

    public nOF () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize featureId

        // Initialize status

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read featureId
        {
            featureId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read status
        {
            status=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;




        // write featureId
        ostream.writeByte(featureId);
        retVal +=1;
        // write status
        ostream.writeByte(status);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("nOF\n");
        dc.increaseIndent();
        int retVal= 0;
        // write featureId
        dc.indent();
        dc.getPs().println("featureId="+featureId+"(0x"+ Integer.toHexString(featureId) + ")" );
        // write status
        dc.indent();
        dc.getPs().println("status="+status+"(0x"+ Integer.toHexString(status) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for featureId
    //public short getFeatureId()
    //{
    //    return featureId ;
    //}


    // Setter for featureId
    //public void setFeatureId(short val)
    //{
    //    this.featureId= val;
    //}
    // Getter for status
    //public short getStatus()
    //{
    //    return status ;
    //}


    // Setter for status
    //public void setStatus(short val)
    //{
    //    this.status= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code