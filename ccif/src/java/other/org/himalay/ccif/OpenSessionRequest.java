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
@Created(date = "Fri Jan 15 01:33:10 EST 2016")

public  class OpenSessionRequest extends BinStruct implements PublicBinMsg{




    // members variables
    // length
    public short length ;
    // resourceIdentifier
    public long resourceIdentifier ;

        public OpenSessionRequest () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize length
        
        // Initialize resourceIdentifier
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read resourceIdentifier
        {resourceIdentifier=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write length
        ostream.writeByte(length); retVal +=1;
        // write resourceIdentifier
        BinPrimitive.writeUI32(ostream,resourceIdentifier); retVal +=4;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("OpenSessionRequest\n");
    dc.increaseIndent();
        int retVal= 0;
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write resourceIdentifier
        dc.indent();dc.getPs().println("resourceIdentifier="+resourceIdentifier+"(0x"+ Long.toHexString(resourceIdentifier)+")") ;
dc.decreaseIndent();
        return retVal;
    }


        // Getter for length
    //public short getLength()
    //{
    //    return length ;
    //}

    
    // Setter for length
    //public void setLength(short val)
    //{
    //    this.length= val;
    //}
    // Getter for resourceIdentifier
    //public long getResourceIdentifier()
    //{
    //    return resourceIdentifier ;
    //}

    
    // Setter for resourceIdentifier
    //public void setResourceIdentifier(long val)
    //{
    //    this.resourceIdentifier= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code