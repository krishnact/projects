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

public  class ElementaryStreamInfo extends BinStruct implements PublicBinMsg {




    // members variables
    // streamType
    public short streamType ;
    // bf1
    public BitField_16 bf1 ;
    // caInfo
    public CaInfo caInfo ;

    public ElementaryStreamInfo () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize streamType

        // Initialize bf1
        bf1 = new BitField_16();
        // Initialize caInfo
        caInfo = new CaInfo();
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read streamType
        {
            streamType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read bf1
        retVal += bf1.read(istream);
        // read caInfo
        {
            int iCount    = getElementaryStreamInfoLength()+(0);
            byte[] ba        = new byte[iCount];
            istream.readFully(ba);
            ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);
            retVal+= caInfo.read(new DataInputStream(baTemp));
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        {   /** fix dependent sizes for caInfo **/ if (caInfo != null )setElementaryStreamInfoLength((short)caInfo.getSize());
        }

        // write streamType
        ostream.writeByte(streamType);
        retVal +=1;
        // write bf1
        ostream.writeShort(bf1.getValue());
        retVal +=2;
        // write caInfo
        if (caInfo!=null)retVal +=caInfo.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("ElementaryStreamInfo\n");
        dc.increaseIndent();
        int retVal= 0;
        // write streamType
        dc.indent();
        dc.getPs().println("streamType="+streamType+"(0x"+ Integer.toHexString(streamType) + ")" );
        // write bf1
        {
            dc.indent();
            dc.getPs().print("reserved2: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved2(),3));
            dc.indent();
            dc.getPs().print("elementaryStreamInfoLength: ");
            dc.getPs().println(BitField_8.toDisplayString(getElementaryStreamInfoLength(),13));
        }
        // write caInfo
        if ( caInfo != null ) {
            dc.indent();
            dc.getPs().println("caInfo") ;
            retVal +=caInfo.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for streamType
    //public short getStreamType()
    //{
    //    return streamType ;
    //}


    // Setter for streamType
    //public void setStreamType(short val)
    //{
    //    this.streamType= val;
    //}
    // Getter for bf1
    //public BitField_16 getBf1()
    //{
    //    return bf1 ;
    //}


    // Setter for bf1
    //public void setBf1(BitField_16 val)
    //{
    //    this.bf1= val;
    //}
    // Getter for caInfo
    //public CaInfo getCaInfo()
    //{
    //    return caInfo ;
    //}


    // Setter for caInfo
    //public void setCaInfo(CaInfo val)
    //{
    //    this.caInfo= val;
    //}


    public int getReserved2( )
    {
        return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
    }


    public void setReserved2(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }


    public int getElementaryStreamInfoLength( )
    {
        return ( bf1.getValue() & 0x00001fff ) >> 0 ;
    }


    public void setElementaryStreamInfoLength(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code