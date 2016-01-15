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

public  class RDC_report extends BinStruct implements PublicBinMsg{




    // members variables
    // RDC_centerFreq
    public int RDC_centerFreq ;
    // RDC_transmitterPowerLevel
    public short RDC_transmitterPowerLevel ;
    // bf1
    public BitField_8 bf1 ;

        public RDC_report () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize RDC_centerFreq
        
        // Initialize RDC_transmitterPowerLevel
        
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

                     // read RDC_centerFreq
        {RDC_centerFreq=istream.readUnsignedShort(); retVal+=2;}
        // read RDC_transmitterPowerLevel
        {RDC_transmitterPowerLevel=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
    
                // write RDC_centerFreq
        ostream.writeShort(RDC_centerFreq); retVal +=2;
        // write RDC_transmitterPowerLevel
        ostream.writeByte(RDC_transmitterPowerLevel); retVal +=1;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("RDC_report\n");
    dc.increaseIndent();
        int retVal= 0;
        // write RDC_centerFreq
        dc.indent();dc.getPs().println("RDC_centerFreq="+RDC_centerFreq+"(0x"+ Integer.toHexString(RDC_centerFreq) + ")" );
        // write RDC_transmitterPowerLevel
        dc.indent();dc.getPs().println("RDC_transmitterPowerLevel="+RDC_transmitterPowerLevel+"(0x"+ Integer.toHexString(RDC_transmitterPowerLevel) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),6));dc.indent();dc.getPs().print("RDC_dataRate: ");dc.getPs().println(BitField_8.toDisplayString(getRDC_dataRate(),2));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for RDC_centerFreq
    //public int getRDC_centerFreq()
    //{
    //    return RDC_centerFreq ;
    //}

    
    // Setter for RDC_centerFreq
    //public void setRDC_centerFreq(int val)
    //{
    //    this.RDC_centerFreq= val;
    //}
    // Getter for RDC_transmitterPowerLevel
    //public short getRDC_transmitterPowerLevel()
    //{
    //    return RDC_transmitterPowerLevel ;
    //}

    
    // Setter for RDC_transmitterPowerLevel
    //public void setRDC_transmitterPowerLevel(short val)
    //{
    //    this.RDC_transmitterPowerLevel= val;
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
    
    
    public int getRDC_dataRate( )
    {
        return ( bf1.getValue() & 0x00000003 ) >> 0 ;
    }
    
    
    public void setRDC_dataRate(int val)
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