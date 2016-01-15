// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:39:12 EST 2016")

public  class LocationType_pid extends   LocationTypeFactory.LocationType { //Concrete type is LocationType_pid




    // members variables
    // frequency_vector
    public int frequency_vector ;
    // modulation_type
    public short modulation_type ;
    // bf1
    public BitField_16 bf1 ;

        public LocationType_pid () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize frequency_vector
        
        // Initialize modulation_type
        
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

                     // read frequency_vector
        {frequency_vector=istream.readUnsignedShort(); retVal+=2;}
        // read modulation_type
        {modulation_type=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
    
                // write frequency_vector
        ostream.writeShort(frequency_vector); retVal +=2;
        // write modulation_type
        ostream.writeByte(modulation_type); retVal +=1;
        // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("LocationType_pid\n");
    dc.increaseIndent();
        int retVal= 0;
        // write frequency_vector
        dc.indent();dc.getPs().println("frequency_vector="+frequency_vector+"(0x"+ Integer.toHexString(frequency_vector) + ")" );
        // write modulation_type
        dc.indent();dc.getPs().println("modulation_type="+modulation_type+"(0x"+ Integer.toHexString(modulation_type) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved_: ");dc.getPs().println(BitField_8.toDisplayString(getReserved_(),3));dc.indent();dc.getPs().print("pid: ");dc.getPs().println(BitField_8.toDisplayString(getPid(),13));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for frequency_vector
    //public int getFrequency_vector()
    //{
    //    return frequency_vector ;
    //}

    
    // Setter for frequency_vector
    //public void setFrequency_vector(int val)
    //{
    //    this.frequency_vector= val;
    //}
    // Getter for modulation_type
    //public short getModulation_type()
    //{
    //    return modulation_type ;
    //}

    
    // Setter for modulation_type
    //public void setModulation_type(short val)
    //{
    //    this.modulation_type= val;
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


    public int getReserved_( )
    {
        return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
    }
    
    
    public void setReserved_(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }
    
    
    public int getPid( )
    {
        return ( bf1.getValue() & 0x00001fff ) >> 0 ;
    }
    
    
    public void setPid(int val)
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