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
@Created(date = "Fri Jan 15 01:32:59 EST 2016")

public  class Send_DCD_info extends   APDUBaseFactory.APDUBase { //Concrete type is Send_DCD_info




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // operationalMode
    public short operationalMode ;
    // messageType
    public short messageType ;

    public Send_DCD_info () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize operationalMode

        // Initialize messageType

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
        // read operationalMode
        {
            operationalMode=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read messageType
        {
            messageType=(short)(istream.readUnsignedByte());
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
        // read operationalMode
        {
            operationalMode=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read messageType
        {
            messageType=(short)(istream.readUnsignedByte());
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
        // write operationalMode
        ostream.writeByte(operationalMode);
        retVal +=1;
        // write messageType
        ostream.writeByte(messageType);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("Send_DCD_info\n");
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
        // write operationalMode
        dc.indent();
        dc.getPs().println("operationalMode="+operationalMode+"(0x"+ Integer.toHexString(operationalMode) + ")" );
        // write messageType
        dc.indent();
        dc.getPs().println("messageType="+messageType+"(0x"+ Integer.toHexString(messageType) + ")" );
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
    // Getter for operationalMode
    //public short getOperationalMode()
    //{
    //    return operationalMode ;
    //}


    // Setter for operationalMode
    //public void setOperationalMode(short val)
    //{
    //    this.operationalMode= val;
    //}
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