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

public  class SystemTimeInq extends   APDUBaseFactory.APDUBase { //Concrete type is SystemTimeInq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // responseInterval
    public short responseInterval ;

    public SystemTimeInq () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize responseInterval

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read length
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read responseInterval
        {
            responseInterval=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

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
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read responseInterval
        {
            responseInterval=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for header **/
        }



        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write responseInterval
        ostream.writeByte(responseInterval);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("SystemTimeInq\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write responseInterval
        dc.indent();
        dc.getPs().println("responseInterval="+responseInterval+"(0x"+ Integer.toHexString(responseInterval) + ")" );
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
    // Getter for responseInterval
    //public short getResponseInterval()
    //{
    //    return responseInterval ;
    //}


    // Setter for responseInterval
    //public void setResponseInterval(short val)
    //{
    //    this.responseInterval= val;
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