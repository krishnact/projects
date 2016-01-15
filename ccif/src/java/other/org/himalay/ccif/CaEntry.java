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

public  class CaEntry extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_16 bf1 ;
    // bf2
    public BitField_8 bf2 ;

        public CaEntry () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_16();
        // Initialize bf2
        bf2 = new BitField_8();
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
        // read bf2
        retVal += bf2.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
        // write bf2
        ostream.writeByte(bf2.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CaEntry\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),3));dc.indent();dc.getPs().print("elementaryPid: ");dc.getPs().println(BitField_8.toDisplayString(getElementaryPid(),13));}
        // write bf2
        {dc.indent();dc.getPs().print("caEnableFlag: ");dc.getPs().println(BitField_8.toDisplayString(getCaEnableFlag(),1));dc.indent();dc.getPs().print("caEnable: ");dc.getPs().println(BitField_8.toDisplayString(getCaEnable(),7));}
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
    // Getter for bf2
    //public BitField_8 getBf2()
    //{
    //    return bf2 ;
    //}

    
    // Setter for bf2
    //public void setBf2(BitField_8 val)
    //{
    //    this.bf2= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }
    
    
    public int getElementaryPid( )
    {
        return ( bf1.getValue() & 0x00001fff ) >> 0 ;
    }
    
    
    public void setElementaryPid(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
    }
    
    
    public int getCaEnableFlag( )
    {
        return ( bf2.getValue() & 0x00000080 ) >> 7 ;
    }
    
    
    public void setCaEnableFlag(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }
    
    
    public int getCaEnable( )
    {
        return ( bf2.getValue() & 0x0000007f ) >> 0 ;
    }
    
    
    public void setCaEnable(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code