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

public  class VendorId extends   ResourceFactory.Resource { //Concrete type is VendorId




    // members variables
    // header
    public ResourceHeader header ;
    // oui
    public ByteArray oui ;

    public VendorId () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new ResourceHeader();
        // Initialize oui
        oui= new ByteArray();
        oui.setSizeType("FIXED");
        oui.setSize(3);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read oui
        {
            retVal+=oui.read(istream);
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
        // read oui
        {
            retVal+=oui.read(istream);
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
        {   /** fix dependent sizes for oui**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write oui
        {
            retVal += oui.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("VendorId\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write oui
        dc.indent();
        dc.getPs().print("oui: "+oui.getSize()+"(0x"+Integer.toHexString(oui.getSize())+")\n");
        this.oui.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for header
    //public ResourceHeader getHeader()
    //{
    //    return header ;
    //}


    // Setter for header
    //public void setHeader(ResourceHeader val)
    //{
    //    this.header= val;
    //}
    // Getter for oui
    //public ByteArray getOui()
    //{
    //    return oui ;
    //}


    // Setter for oui
    //public void setOui(ByteArray val)
    //{
    //    this.oui= val;
    //}


    public void setOui(byte[] val)
    {
        this.oui.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }


    public void setHeader(ResourceHeader header)
    {
        this.header= header;
    }

    public ResourceHeader getHeader()
    {
        return this.header;
    }

}

// End of code