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

public  class ResourceHeader extends BinStruct implements PublicBinMsg{




    // members variables
    // messageType
    public short messageType ;
    // descriptor_len
    public short descriptor_len ;

        public ResourceHeader () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize messageType
        
        // Initialize descriptor_len
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read messageType
        {messageType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read descriptor_len
        {descriptor_len=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write messageType
        ostream.writeByte(messageType); retVal +=1;
        // write descriptor_len
        ostream.writeByte(descriptor_len); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ResourceHeader\n");
    dc.increaseIndent();
        int retVal= 0;
        // write messageType
        dc.indent();dc.getPs().println("messageType="+messageType+"(0x"+ Integer.toHexString(messageType) + ")" );
        // write descriptor_len
        dc.indent();dc.getPs().println("descriptor_len="+descriptor_len+"(0x"+ Integer.toHexString(descriptor_len) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for messageType
    public short getMessageType()
    {
        return messageType ;
    }

    
    // Setter for messageType
    public void setMessageType(short val)
    {
        this.messageType= val;
    }
    // Getter for descriptor_len
    //public short getDescriptor_len()
    //{
    //    return descriptor_len ;
    //}

    
    // Setter for descriptor_len
    //public void setDescriptor_len(short val)
    //{
    //    this.descriptor_len= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code