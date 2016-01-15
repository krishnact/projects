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
@Created(date = "Fri Jan 15 01:33:04 EST 2016")

public  class ECM_statusReport extends BinStruct implements PublicBinMsg{




    // members variables
    // downstreamCenterFreq
    public int downstreamCenterFreq ;
    // downstreamPowerLevel
    public int downstreamPowerLevel ;
    // bf1
    public BitField_8 bf1 ;
    // upstreamXmtCenterFreq
    public int upstreamXmtCenterFreq ;
    // upstreamPowerLevel
    public int upstreamPowerLevel ;
    // upstreamSymbolRate
    public short upstreamSymbolRate ;

        public ECM_statusReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize downstreamCenterFreq
        
        // Initialize downstreamPowerLevel
        
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize upstreamXmtCenterFreq
        
        // Initialize upstreamPowerLevel
        
        // Initialize upstreamSymbolRate
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read downstreamCenterFreq
        {downstreamCenterFreq=istream.readUnsignedShort(); retVal+=2;}
        // read downstreamPowerLevel
        {downstreamPowerLevel=istream.readUnsignedShort(); retVal+=2;}
        // read bf1
        retVal += bf1.read(istream);
        // read upstreamXmtCenterFreq
        {upstreamXmtCenterFreq=istream.readUnsignedShort(); retVal+=2;}
        // read upstreamPowerLevel
        {upstreamPowerLevel=istream.readUnsignedShort(); retVal+=2;}
        // read upstreamSymbolRate
        {upstreamSymbolRate=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
        
        
    
                // write downstreamCenterFreq
        ostream.writeShort(downstreamCenterFreq); retVal +=2;
        // write downstreamPowerLevel
        ostream.writeShort(downstreamPowerLevel); retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write upstreamXmtCenterFreq
        ostream.writeShort(upstreamXmtCenterFreq); retVal +=2;
        // write upstreamPowerLevel
        ostream.writeShort(upstreamPowerLevel); retVal +=2;
        // write upstreamSymbolRate
        ostream.writeByte(upstreamSymbolRate); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ECM_statusReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write downstreamCenterFreq
        dc.indent();dc.getPs().println("downstreamCenterFreq="+downstreamCenterFreq+"(0x"+ Integer.toHexString(downstreamCenterFreq) + ")" );
        // write downstreamPowerLevel
        dc.indent();dc.getPs().println("downstreamPowerLevel="+downstreamPowerLevel+"(0x"+ Integer.toHexString(downstreamPowerLevel) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("downstreamCarrierLockStatus: ");dc.getPs().println(BitField_8.toDisplayString(getDownstreamCarrierLockStatus(),1));dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),2));dc.indent();dc.getPs().print("channel_s_cdmaStatus: ");dc.getPs().println(BitField_8.toDisplayString(getChannel_s_cdmaStatus(),2));dc.indent();dc.getPs().print("upstreamModulationType: ");dc.getPs().println(BitField_8.toDisplayString(getUpstreamModulationType(),3));}
        // write upstreamXmtCenterFreq
        dc.indent();dc.getPs().println("upstreamXmtCenterFreq="+upstreamXmtCenterFreq+"(0x"+ Integer.toHexString(upstreamXmtCenterFreq) + ")" );
        // write upstreamPowerLevel
        dc.indent();dc.getPs().println("upstreamPowerLevel="+upstreamPowerLevel+"(0x"+ Integer.toHexString(upstreamPowerLevel) + ")" );
        // write upstreamSymbolRate
        dc.indent();dc.getPs().println("upstreamSymbolRate="+upstreamSymbolRate+"(0x"+ Integer.toHexString(upstreamSymbolRate) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for downstreamCenterFreq
    //public int getDownstreamCenterFreq()
    //{
    //    return downstreamCenterFreq ;
    //}

    
    // Setter for downstreamCenterFreq
    //public void setDownstreamCenterFreq(int val)
    //{
    //    this.downstreamCenterFreq= val;
    //}
    // Getter for downstreamPowerLevel
    //public int getDownstreamPowerLevel()
    //{
    //    return downstreamPowerLevel ;
    //}

    
    // Setter for downstreamPowerLevel
    //public void setDownstreamPowerLevel(int val)
    //{
    //    this.downstreamPowerLevel= val;
    //}
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
    // Getter for upstreamXmtCenterFreq
    //public int getUpstreamXmtCenterFreq()
    //{
    //    return upstreamXmtCenterFreq ;
    //}

    
    // Setter for upstreamXmtCenterFreq
    //public void setUpstreamXmtCenterFreq(int val)
    //{
    //    this.upstreamXmtCenterFreq= val;
    //}
    // Getter for upstreamPowerLevel
    //public int getUpstreamPowerLevel()
    //{
    //    return upstreamPowerLevel ;
    //}

    
    // Setter for upstreamPowerLevel
    //public void setUpstreamPowerLevel(int val)
    //{
    //    this.upstreamPowerLevel= val;
    //}
    // Getter for upstreamSymbolRate
    //public short getUpstreamSymbolRate()
    //{
    //    return upstreamSymbolRate ;
    //}

    
    // Setter for upstreamSymbolRate
    //public void setUpstreamSymbolRate(short val)
    //{
    //    this.upstreamSymbolRate= val;
    //}


    public int getDownstreamCarrierLockStatus( )
    {
        return ( bf1.getValue() & 0x00000080 ) >> 7 ;
    }
    
    
    public void setDownstreamCarrierLockStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }
    
    
    public int getReserved( )
    {
        return ( bf1.getValue() & 0x00000060 ) >> 5 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff9f) | ( (val << 5 ) & 0x00000060));
    }
    
    
    public int getChannel_s_cdmaStatus( )
    {
        return ( bf1.getValue() & 0x00000018 ) >> 3 ;
    }
    
    
    public void setChannel_s_cdmaStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffe7) | ( (val << 3 ) & 0x00000018));
    }
    
    
    public int getUpstreamModulationType( )
    {
        return ( bf1.getValue() & 0x00000007 ) >> 0 ;
    }
    
    
    public void setUpstreamModulationType(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff8) | ( (val << 0 ) & 0x00000007));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code