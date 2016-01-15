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
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class memoryReportMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // memoryType
    public short memoryType ;
    // memorySize
    public long memorySize ;

        public memoryReportMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize memoryType
        
        // Initialize memorySize
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read memoryType
        {memoryType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read memorySize
        {memorySize=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write memoryType
        ostream.writeByte(memoryType); retVal +=1;
        // write memorySize
        BinPrimitive.writeUI32(ostream,memorySize); retVal +=4;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("memoryReportMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write memoryType
        dc.indent();dc.getPs().println("memoryType="+memoryType+"(0x"+ Integer.toHexString(memoryType) + ")" );
        // write memorySize
        dc.indent();dc.getPs().println("memorySize="+memorySize+"(0x"+ Long.toHexString(memorySize)+")") ;
dc.decreaseIndent();
        return retVal;
    }


        // Getter for memoryType
    //public short getMemoryType()
    //{
    //    return memoryType ;
    //}

    
    // Setter for memoryType
    //public void setMemoryType(short val)
    //{
    //    this.memoryType= val;
    //}
    // Getter for memorySize
    //public long getMemorySize()
    //{
    //    return memorySize ;
    //}

    
    // Setter for memorySize
    //public void setMemorySize(long val)
    //{
    //    this.memorySize= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code