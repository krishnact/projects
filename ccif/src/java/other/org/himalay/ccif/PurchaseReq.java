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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class PurchaseReq extends   APDUBaseFactory.APDUBase { //Concrete type is PurchaseReq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // transactionId
    public short transactionId ;
    // optionId
    public int optionId ;
    // pinCodeLength
    public ByteArray pinCodeLength ;

    public PurchaseReq () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize transactionId

        // Initialize optionId

        // Initialize pinCodeLength
        pinCodeLength= new ByteArray();
        pinCodeLength.setSizeType("FIRST_UI8");
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
        // read transactionId
        {
            transactionId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read optionId
        {
            optionId=istream.readUnsignedShort();
            retVal+=2;
        }
        // read pinCodeLength
        {
            retVal+=pinCodeLength.read(istream);
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
        // read transactionId
        {
            transactionId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read optionId
        {
            optionId=istream.readUnsignedShort();
            retVal+=2;
        }
        // read pinCodeLength
        {
            retVal+=pinCodeLength.read(istream);
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



        {   /** fix dependent sizes for pinCodeLength**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write transactionId
        ostream.writeByte(transactionId);
        retVal +=1;
        // write optionId
        ostream.writeShort(optionId);
        retVal +=2;
        // write pinCodeLength
        {
            retVal += pinCodeLength.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PurchaseReq\n");
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
        // write transactionId
        dc.indent();
        dc.getPs().println("transactionId="+transactionId+"(0x"+ Integer.toHexString(transactionId) + ")" );
        // write optionId
        dc.indent();
        dc.getPs().println("optionId="+optionId+"(0x"+ Integer.toHexString(optionId) + ")" );
        // write pinCodeLength
        dc.indent();
        dc.getPs().print("pinCodeLength: "+pinCodeLength.getSize()+"(0x"+Integer.toHexString(pinCodeLength.getSize())+")\n");
        this.pinCodeLength.dump(dc);
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
    // Getter for transactionId
    //public short getTransactionId()
    //{
    //    return transactionId ;
    //}


    // Setter for transactionId
    //public void setTransactionId(short val)
    //{
    //    this.transactionId= val;
    //}
    // Getter for optionId
    //public int getOptionId()
    //{
    //    return optionId ;
    //}


    // Setter for optionId
    //public void setOptionId(int val)
    //{
    //    this.optionId= val;
    //}
    // Getter for pinCodeLength
    //public ByteArray getPinCodeLength()
    //{
    //    return pinCodeLength ;
    //}


    // Setter for pinCodeLength
    //public void setPinCodeLength(ByteArray val)
    //{
    //    this.pinCodeLength= val;
    //}


    public void setPinCodeLength(byte[] val)
    {
        this.pinCodeLength.setData(val);
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