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
@Created(date = "Fri Jan 15 01:33:06 EST 2016")

public  class EA_locationCode extends BinStruct implements PublicBinMsg{




    // members variables
    // stateCode
    public short stateCode ;
    // bf1
    public BitField_16 bf1 ;

        public EA_locationCode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize stateCode
        
        // Initialize bf1
        bf1 = new BitField_16();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read stateCode
        {stateCode=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write stateCode
        ostream.writeByte(stateCode); retVal +=1;
        // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("EA_locationCode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write stateCode
        dc.indent();dc.getPs().println("stateCode="+stateCode+"(0x"+ Integer.toHexString(stateCode) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("countySubdivision: ");dc.getPs().println(BitField_8.toDisplayString(getCountySubdivision(),4));dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),2));dc.indent();dc.getPs().print("countyCode: ");dc.getPs().println(BitField_8.toDisplayString(getCountyCode(),11));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for stateCode
    //public short getStateCode()
    //{
    //    return stateCode ;
    //}

    
    // Setter for stateCode
    //public void setStateCode(short val)
    //{
    //    this.stateCode= val;
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


    public int getCountySubdivision( )
    {
        return ( bf1.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setCountySubdivision(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getReserved( )
    {
        return ( bf1.getValue() & 0x00000c00 ) >> 10 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffff3ff) | ( (val << 10 ) & 0x00000c00));
    }
    
    
    public int getCountyCode( )
    {
        return ( bf1.getValue() & 0x000007ff ) >> 0 ;
    }
    
    
    public void setCountyCode(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffff800) | ( (val << 0 ) & 0x000007ff));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code