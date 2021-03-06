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

public  class ProfileReply extends   APDUBaseFactory.APDUBase { //Concrete type is ProfileReply




    // members variables
    // header
    public APDUHeader header ;
    // data
    public ByteArray data ;

    public ProfileReply () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize data
        data= new ByteArray();
        data.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read data
        {
            retVal+=data.read(istream);
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
        // read data
        {
            retVal+=data.read(istream);
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
        {   /** fix dependent sizes for data**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write data
        {
            retVal += data.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("ProfileReply\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write data
        dc.indent();
        dc.getPs().print("data: "+data.getSize()+"(0x"+Integer.toHexString(data.getSize())+")\n");
        this.data.dump(dc);
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
    // Getter for data
    //public ByteArray getData()
    //{
    //    return data ;
    //}


    // Setter for data
    //public void setData(ByteArray val)
    //{
    //    this.data= val;
    //}


    public void setData(byte[] val)
    {
        this.data.setData(val);
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