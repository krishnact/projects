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

public  class flist extends BinStruct implements PublicBinMsg {




    // members variables
    // featureId
    public short featureId ;
    // length
    public int length ;

    public flist () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize featureId

        // Initialize length

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
        // read length
        {
            length=istream.readUnsignedShort();
            retVal+=2;
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
        // write length
        ostream.writeShort(length);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("flist\n");
        dc.increaseIndent();
        int retVal= 0;
        // write featureId
        dc.indent();
        dc.getPs().println("featureId="+featureId+"(0x"+ Integer.toHexString(featureId) + ")" );
        // write length
        dc.indent();
        dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
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
    // Getter for length
    //public int getLength()
    //{
    //    return length ;
    //}


    // Setter for length
    //public void setLength(int val)
    //{
    //    this.length= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code