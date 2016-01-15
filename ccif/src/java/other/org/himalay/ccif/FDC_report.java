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
@Created(date = "Fri Jan 15 01:32:58 EST 2016")

public  class FDC_report extends BinStruct implements PublicBinMsg{




    // members variables
    // header
    public APDUHeader header ;
    // FDC_centerFreq
    public int FDC_centerFreq ;
    // bf1
    public BitField_8 bf1 ;

        public FDC_report () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize FDC_centerFreq
        
        // Initialize bf1
        bf1 = new BitField_8();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read FDC_centerFreq
        {FDC_centerFreq=istream.readUnsignedShort(); retVal+=2;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write FDC_centerFreq
        ostream.writeShort(FDC_centerFreq); retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FDC_report\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write FDC_centerFreq
        dc.indent();dc.getPs().println("FDC_centerFreq="+FDC_centerFreq+"(0x"+ Integer.toHexString(FDC_centerFreq) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),6));dc.indent();dc.getPs().print("carrierLockStatus: ");dc.getPs().println(BitField_8.toDisplayString(getCarrierLockStatus(),1));dc.indent();dc.getPs().print("reserved1: ");dc.getPs().println(BitField_8.toDisplayString(getReserved1(),1));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for header
    //public APDUHeader getHeader()
    //{
    //    return header ;
    //}

    
    // Setter for header
    //public void setHeader(APDUHeader val)
    //{
    //    this.header= val;
    //}
    // Getter for FDC_centerFreq
    //public int getFDC_centerFreq()
    //{
    //    return FDC_centerFreq ;
    //}

    
    // Setter for FDC_centerFreq
    //public void setFDC_centerFreq(int val)
    //{
    //    this.FDC_centerFreq= val;
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


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000fc ) >> 2 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff03) | ( (val << 2 ) & 0x000000fc));
    }
    
    
    public int getCarrierLockStatus( )
    {
        return ( bf1.getValue() & 0x00000002 ) >> 1 ;
    }
    
    
    public void setCarrierLockStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
    }
    
    
    public int getReserved1( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setReserved1(int val)
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