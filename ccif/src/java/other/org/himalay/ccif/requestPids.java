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
@Created(date = "Fri Jan 15 01:33:09 EST 2016")

public  class requestPids extends   APDUBaseFactory.APDUBase { //Concrete type is requestPids




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // ltsid
    public short ltsid ;
    // pidFilteringStatus
    public short pidFilteringStatus ;

    public requestPids () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize ltsid

        // Initialize pidFilteringStatus

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
        // read ltsid
        {
            ltsid=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read pidFilteringStatus
        {
            pidFilteringStatus=(short)(istream.readUnsignedByte());
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
        // read ltsid
        {
            ltsid=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read pidFilteringStatus
        {
            pidFilteringStatus=(short)(istream.readUnsignedByte());
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
        // write ltsid
        ostream.writeByte(ltsid);
        retVal +=1;
        // write pidFilteringStatus
        ostream.writeByte(pidFilteringStatus);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("requestPids\n");
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
        // write ltsid
        dc.indent();
        dc.getPs().println("ltsid="+ltsid+"(0x"+ Integer.toHexString(ltsid) + ")" );
        // write pidFilteringStatus
        dc.indent();
        dc.getPs().println("pidFilteringStatus="+pidFilteringStatus+"(0x"+ Integer.toHexString(pidFilteringStatus) + ")" );
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
    // Getter for ltsid
    //public short getLtsid()
    //{
    //    return ltsid ;
    //}


    // Setter for ltsid
    //public void setLtsid(short val)
    //{
    //    this.ltsid= val;
    //}
    // Getter for pidFilteringStatus
    //public short getPidFilteringStatus()
    //{
    //    return pidFilteringStatus ;
    //}


    // Setter for pidFilteringStatus
    //public void setPidFilteringStatus(short val)
    //{
    //    this.pidFilteringStatus= val;
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