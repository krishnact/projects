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
@Created(date = "Fri Jan 15 01:32:57 EST 2016")

public  class MemoryReport extends BinStruct implements PublicBinMsg {




    // members variables
    // header
    public APDUHeader header ;
    // numberOfMemory
    public ByteArray numberOfMemory ;

    public MemoryReport () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize numberOfMemory
        numberOfMemory= new ByteArray();
        numberOfMemory.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read header
        retVal += header.read(istream);
        // read numberOfMemory
        {
            retVal+=numberOfMemory.read(istream);
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
        {   /** fix dependent sizes for numberOfMemory**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write numberOfMemory
        {
            retVal += numberOfMemory.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("MemoryReport\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write numberOfMemory
        dc.indent();
        dc.getPs().print("numberOfMemory: "+numberOfMemory.getSize()+"(0x"+Integer.toHexString(numberOfMemory.getSize())+")\n");
        this.numberOfMemory.dump(dc);
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
    // Getter for numberOfMemory
    //public ByteArray getNumberOfMemory()
    //{
    //    return numberOfMemory ;
    //}


    // Setter for numberOfMemory
    //public void setNumberOfMemory(ByteArray val)
    //{
    //    this.numberOfMemory= val;
    //}


    public void setNumberOfMemory(byte[] val)
    {
        this.numberOfMemory.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code