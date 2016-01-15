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

public  class TurnOnChannel extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_16 bf1 ;

        public TurnOnChannel () // throws Exception
    {
            init();
    }
    
    private void init()
    {
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
        ostream.writeShort(bf1.getValue()); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("TurnOnChannel\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),3));dc.indent();dc.getPs().print("turnOnChannelDefined: ");dc.getPs().println(BitField_8.toDisplayString(getTurnOnChannelDefined(),1));dc.indent();dc.getPs().print("turnOnVirtualChannel: ");dc.getPs().println(BitField_8.toDisplayString(getTurnOnVirtualChannel(),12));}
dc.decreaseIndent();
        return retVal;
    }


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


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }
    
    
    public int getTurnOnChannelDefined( )
    {
        return ( bf1.getValue() & 0x00001000 ) >> 12 ;
    }
    
    
    public void setTurnOnChannelDefined(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffefff) | ( (val << 12 ) & 0x00001000));
    }
    
    
    public int getTurnOnVirtualChannel( )
    {
        return ( bf1.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setTurnOnVirtualChannel(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code