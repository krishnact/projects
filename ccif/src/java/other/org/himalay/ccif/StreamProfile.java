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
@Created(date = "Fri Jan 15 01:33:11 EST 2016")

public  class StreamProfile extends   APDUBaseFactory.APDUBase { //Concrete type is StreamProfile




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // maxNumberOfStreams
    public short maxNumberOfStreams ;

        public StreamProfile () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize maxNumberOfStreams
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read maxNumberOfStreams
        {maxNumberOfStreams=(short)(istream.readUnsignedByte()); retVal+=1;}

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read maxNumberOfStreams
        {maxNumberOfStreams=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write maxNumberOfStreams
        ostream.writeByte(maxNumberOfStreams); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("StreamProfile\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write maxNumberOfStreams
        dc.indent();dc.getPs().println("maxNumberOfStreams="+maxNumberOfStreams+"(0x"+ Integer.toHexString(maxNumberOfStreams) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for header
    //public APDUHeader getHeader()
    //{
    //    return header ;
    //}

    
    // Setter for header
    //public void setHeader(APDUHeader val)
    //{
    //    this.header= val;
    //}
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
    // Getter for maxNumberOfStreams
    //public short getMaxNumberOfStreams()
    //{
    //    return maxNumberOfStreams ;
    //}

    
    // Setter for maxNumberOfStreams
    //public void setMaxNumberOfStreams(short val)
    //{
    //    this.maxNumberOfStreams= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        
     public void setHeader(APDUHeader header)
    {
         this.header= header;   
    }
    
    public APDUHeader getHeader()
    {
        return this.header;
    }

}

// End of code