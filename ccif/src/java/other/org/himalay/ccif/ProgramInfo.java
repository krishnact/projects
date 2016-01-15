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

public  class ProgramInfo extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_16 bf1 ;
    // programInfo
    public CaInfo programInfo ;

        public ProgramInfo () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_16();
        // Initialize programInfo
        programInfo = new CaInfo();
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
        // read programInfo
            {        int iCount    = getProgramInfoLength()+(0);        byte[] ba        = new byte[iCount];istream.readFully(ba);ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);        retVal+= programInfo.read(new DataInputStream(baTemp));}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for programInfo **/ if (programInfo != null )setProgramInfoLength((short)programInfo.getSize()); }
    
                // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
        // write programInfo
        if (programInfo!=null)retVal +=programInfo.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ProgramInfo\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("reserved2: ");dc.getPs().println(BitField_8.toDisplayString(getReserved2(),4));dc.indent();dc.getPs().print("programInfoLength: ");dc.getPs().println(BitField_8.toDisplayString(getProgramInfoLength(),12));}
        // write programInfo
        if ( programInfo != null ) {dc.indent();dc.getPs().println("programInfo") ;retVal +=programInfo.dump(dc);}
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
    // Getter for programInfo
    //public CaInfo getProgramInfo()
    //{
    //    return programInfo ;
    //}

    
    // Setter for programInfo
    //public void setProgramInfo(CaInfo val)
    //{
    //    this.programInfo= val;
    //}


    public int getReserved2( )
    {
        return ( bf1.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setReserved2(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getProgramInfoLength( )
    {
        return ( bf1.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setProgramInfoLength(int val)
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