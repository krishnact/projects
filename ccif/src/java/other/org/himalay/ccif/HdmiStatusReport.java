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

public  class HdmiStatusReport extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // vdoFormat
    public VideoFormat vdoFormat ;
    // adoFormat
    public AudioFormat adoFormat ;

        public HdmiStatusReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize vdoFormat
        vdoFormat = new VideoFormat();
        // Initialize adoFormat
        adoFormat = new AudioFormat();
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
        // read vdoFormat
        retVal += vdoFormat.read(istream);
        // read adoFormat
        retVal += adoFormat.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for vdoFormat **/  }
        { /** fix dependent sizes for adoFormat **/  }
    
                // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write vdoFormat
        if (vdoFormat!=null)retVal +=vdoFormat.write(ostream);
        // write adoFormat
        if (adoFormat!=null)retVal +=adoFormat.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("HdmiStatusReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("deviceType: ");dc.getPs().println(BitField_8.toDisplayString(getDeviceType(),1));dc.indent();dc.getPs().print("colorSpace: ");dc.getPs().println(BitField_8.toDisplayString(getColorSpace(),2));dc.indent();dc.getPs().print("connectionStatus: ");dc.getPs().println(BitField_8.toDisplayString(getConnectionStatus(),2));dc.indent();dc.getPs().print("HostHdcpStatus: ");dc.getPs().println(BitField_8.toDisplayString(getHostHdcpStatus(),1));dc.indent();dc.getPs().print("deviceHdcpStatus: ");dc.getPs().println(BitField_8.toDisplayString(getDeviceHdcpStatus(),2));}
        // write vdoFormat
        if ( vdoFormat != null ) {dc.indent();dc.getPs().println("vdoFormat") ;retVal +=vdoFormat.dump(dc);}
        // write adoFormat
        if ( adoFormat != null ) {dc.indent();dc.getPs().println("adoFormat") ;retVal +=adoFormat.dump(dc);}
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
    // Getter for vdoFormat
    //public VideoFormat getVdoFormat()
    //{
    //    return vdoFormat ;
    //}

    
    // Setter for vdoFormat
    //public void setVdoFormat(VideoFormat val)
    //{
    //    this.vdoFormat= val;
    //}
    // Getter for adoFormat
    //public AudioFormat getAdoFormat()
    //{
    //    return adoFormat ;
    //}

    
    // Setter for adoFormat
    //public void setAdoFormat(AudioFormat val)
    //{
    //    this.adoFormat= val;
    //}


    public int getDeviceType( )
    {
        return ( bf1.getValue() & 0x00000080 ) >> 7 ;
    }
    
    
    public void setDeviceType(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }
    
    
    public int getColorSpace( )
    {
        return ( bf1.getValue() & 0x00000060 ) >> 5 ;
    }
    
    
    public void setColorSpace(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff9f) | ( (val << 5 ) & 0x00000060));
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