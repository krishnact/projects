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

public  class OpenSessionResponse extends BinStruct implements PublicBinMsg{




    // members variables
    // length
    public short length ;
    // resourceIdentifier
    public long resourceIdentifier ;
    // sessionStatus
    public short sessionStatus ;
    // sessionNb
    public int sessionNb ;

        public OpenSessionResponse () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize length
        
        // Initialize resourceIdentifier
        
        // Initialize sessionStatus
        
        // Initialize sessionNb
        
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
        // read sessionStatus
        {sessionStatus=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read sessionNb
        {sessionNb=istream.readUnsignedShort(); retVal+=2;}

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
        // write sessionStatus
        ostream.writeByte(sessionStatus); retVal +=1;
        // write sessionNb
        ostream.writeShort(sessionNb); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("OpenSessionResponse\n");
    dc.increaseIndent();
        int retVal= 0;
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write resourceIdentifier
        dc.indent();dc.getPs().println("resourceIdentifier="+resourceIdentifier+"(0x"+ Long.toHexString(resourceIdentifier)+")") ;
        // write sessionStatus
        dc.indent();dc.getPs().println("sessionStatus="+sessionStatus+"(0x"+ Integer.toHexString(sessionStatus) + ")" );
        // write sessionNb
        dc.indent();dc.getPs().println("sessionNb="+sessionNb+"(0x"+ Integer.toHexString(sessionNb) + ")" );
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
    // Getter for sessionStatus
    //public short getSessionStatus()
    //{
    //    return sessionStatus ;
    //}

    
    // Setter for sessionStatus
    //public void setSessionStatus(short val)
    //{
    //    this.sessionStatus= val;
    //}
    // Getter for sessionNb
    //public int getSessionNb()
    //{
    //    return sessionNb ;
    //}

    
    // Setter for sessionNb
    //public void setSessionNb(int val)
    //{
    //    this.sessionNb= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code