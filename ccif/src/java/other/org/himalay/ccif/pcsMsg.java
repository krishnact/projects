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
@Created(date = "Fri Jan 15 01:33:08 EST 2016")

public  class pcsMsg extends BinStruct implements PublicBinMsg {




    // members variables
    // bf1
    public BitField_24 bf1 ;

    public pcsMsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_24();
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write bf1

        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("pcsMsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {
            dc.indent();
            dc.getPs().print("reserved: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved(),4));
            dc.indent();
            dc.getPs().print("major_channel_number: ");
            dc.getPs().println(BitField_8.toDisplayString(getMajor_channel_number(),10));
            dc.indent();
            dc.getPs().print("miner_channel_number: ");
            dc.getPs().println(BitField_8.toDisplayString(getMiner_channel_number(),10));
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for bf1
    //public BitField_24 getBf1()
    //{
    //    return bf1 ;
    //}


    // Setter for bf1
    //public void setBf1(BitField_24 val)
    //{
    //    this.bf1= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x00f00000 ) >> 20 ;
    }


    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xff0fffff) | ( (val << 20 ) & 0x00f00000));
    }


    public int getMajor_channel_number( )
    {
        return ( bf1.getValue() & 0x000ffc00 ) >> 10 ;
    }


    public void setMajor_channel_number(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfff003ff) | ( (val << 10 ) & 0x000ffc00));
    }


    public int getMiner_channel_number( )
    {
        return ( bf1.getValue() & 0x000003ff ) >> 0 ;
    }


    public void setMiner_channel_number(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code