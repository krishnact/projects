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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class DviStatusReport extends BinStruct implements PublicBinMsg {




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // videoFormat
    public VideoFormat videoFormat ;

    public DviStatusReport () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize videoFormat
        videoFormat = new VideoFormat();
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
        // read videoFormat
        retVal += videoFormat.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for videoFormat **/
        }

        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal +=1;
        // write videoFormat
        if (videoFormat!=null)retVal +=videoFormat.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("DviStatusReport\n");
        dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {
            dc.indent();
            dc.getPs().print("reserved: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved(),3));
            dc.indent();
            dc.getPs().print("connectionStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getConnectionStatus(),2));
            dc.indent();
            dc.getPs().print("hostHdcpStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getHostHdcpStatus(),1));
            dc.indent();
            dc.getPs().print("deviceHdcpStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getDeviceHdcpStatus(),2));
        }
        // write videoFormat
        if ( videoFormat != null ) {
            dc.indent();
            dc.getPs().println("videoFormat") ;
            retVal +=videoFormat.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for bf1
    //public BitField_8 getBf1()
    //{
    //    return bf1 ;
    //}


    // Setter for bf1
    //public void setBf1(BitField_8 val)
    //{
    //    this.bf1= val;
    //}
    // Getter for videoFormat
    //public VideoFormat getVideoFormat()
    //{
    //    return videoFormat ;
    //}


    // Setter for videoFormat
    //public void setVideoFormat(VideoFormat val)
    //{
    //    this.videoFormat= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000e0 ) >> 5 ;
    }


    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
    }


    public int getConnectionStatus( )
    {
        return ( bf1.getValue() & 0x00000018 ) >> 3 ;
    }


    public void setConnectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffe7) | ( (val << 3 ) & 0x00000018));
    }


    public int getHostHdcpStatus( )
    {
        return ( bf1.getValue() & 0x00000004 ) >> 2 ;
    }


    public void setHostHdcpStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
    }


    public int getDeviceHdcpStatus( )
    {
        return ( bf1.getValue() & 0x00000003 ) >> 0 ;
    }


    public void setDeviceHdcpStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code