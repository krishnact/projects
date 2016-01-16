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

public  class HostId extends   ResourceFactory.Resource { //Concrete type is HostId




    // members variables
    // header
    public ResourceHeader header ;
    // id
    public ByteArray id ;

    public HostId () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new ResourceHeader();
        // Initialize id
        id= new ByteArray();
        id.setSizeType("FIXED");
        id.setSize(5);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read id
        {
            retVal+=id.read(istream);
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
        // read id
        {
            retVal+=id.read(istream);
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
        {   /** fix dependent sizes for id**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write id
        {
            retVal += id.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("HostId\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write id
        dc.indent();
        dc.getPs().print("id: "+id.getSize()+"(0x"+Integer.toHexString(id.getSize())+")\n");
        this.id.dump(dc);
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
    // Getter for id
    //public ByteArray getId()
    //{
    //    return id ;
    //}


    // Setter for id
    //public void setId(ByteArray val)
    //{
    //    this.id= val;
    //}


    public void setId(byte[] val)
    {
        this.id.setData(val);
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