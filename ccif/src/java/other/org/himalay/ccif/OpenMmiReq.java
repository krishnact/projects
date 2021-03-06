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

public  class OpenMmiReq extends   APDUBaseFactory.APDUBase { //Concrete type is OpenMmiReq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // displayType
    public short displayType ;
    // urlBytes
    public ByteArray urlBytes ;

    public OpenMmiReq () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize displayType

        // Initialize urlBytes
        urlBytes= new ByteArray();
        urlBytes.setSizeType("FIRST_UI16");
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
        // read displayType
        {
            displayType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read urlBytes
        {
            retVal+=urlBytes.read(istream);
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
        // read displayType
        {
            displayType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read urlBytes
        {
            retVal+=urlBytes.read(istream);
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


        {   /** fix dependent sizes for urlBytes**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write displayType
        ostream.writeByte(displayType);
        retVal +=1;
        // write urlBytes
        {
            retVal += urlBytes.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("OpenMmiReq\n");
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
        // write displayType
        dc.indent();
        dc.getPs().println("displayType="+displayType+"(0x"+ Integer.toHexString(displayType) + ")" );
        // write urlBytes
        dc.indent();
        dc.getPs().print("urlBytes: "+urlBytes.getSize()+"(0x"+Integer.toHexString(urlBytes.getSize())+")\n");
        this.urlBytes.dump(dc);
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
    // Getter for displayType
    //public short getDisplayType()
    //{
    //    return displayType ;
    //}


    // Setter for displayType
    //public void setDisplayType(short val)
    //{
    //    this.displayType= val;
    //}
    // Getter for urlBytes
    //public ByteArray getUrlBytes()
    //{
    //    return urlBytes ;
    //}


    // Setter for urlBytes
    //public void setUrlBytes(ByteArray val)
    //{
    //    this.urlBytes= val;
    //}


    public void setUrlBytes(byte[] val)
    {
        this.urlBytes.setData(val);
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