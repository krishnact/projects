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
@Created(date = "Fri Jan 15 01:33:03 EST 2016")

public  class FAT_statusReport extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // SNR
    public int SNR ;
    // signalLevel
    public int signalLevel ;

        public FAT_statusReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize SNR
        
        // Initialize signalLevel
        
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
        // read SNR
        {SNR=istream.readUnsignedShort(); retVal+=2;}
        // read signalLevel
        {signalLevel=istream.readUnsignedShort(); retVal+=2;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
    
                // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write SNR
        ostream.writeShort(SNR); retVal +=2;
        // write signalLevel
        ostream.writeShort(signalLevel); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FAT_statusReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),4));dc.indent();dc.getPs().print("PCR_lock: ");dc.getPs().println(BitField_8.toDisplayString(getPCR_lock(),1));dc.indent();dc.getPs().print("modulationMode: ");dc.getPs().println(BitField_8.toDisplayString(getModulationMode(),2));dc.indent();dc.getPs().print("carrierLockStatus: ");dc.getPs().println(BitField_8.toDisplayString(getCarrierLockStatus(),1));}
        // write SNR
        dc.indent();dc.getPs().println("SNR="+SNR+"(0x"+ Integer.toHexString(SNR) + ")" );
        // write signalLevel
        dc.indent();dc.getPs().println("signalLevel="+signalLevel+"(0x"+ Integer.toHexString(signalLevel) + ")" );
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
    // Getter for SNR
    //public int getSNR()
    //{
    //    return SNR ;
    //}

    
    // Setter for SNR
    //public void setSNR(int val)
    //{
    //    this.SNR= val;
    //}
    // Getter for signalLevel
    //public int getSignalLevel()
    //{
    //    return signalLevel ;
    //}

    
    // Setter for signalLevel
    //public void setSignalLevel(int val)
    //{
    //    this.signalLevel= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000f0 ) >> 4 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
    }
    
    
    public int getPCR_lock( )
    {
        return ( bf1.getValue() & 0x00000008 ) >> 3 ;
    }
    
    
    public void setPCR_lock(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
    }
    
    
    public int getModulationMode( )
    {
        return ( bf1.getValue() & 0x00000006 ) >> 1 ;
    }
    
    
    public void setModulationMode(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff9) | ( (val << 1 ) & 0x00000006));
    }
    
    
    public int getCarrierLockStatus( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setCarrierLockStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code