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
@Created(date = "Fri Jan 15 01:33:05 EST 2016")

public  class cblurlmsg extends BinStruct implements PublicBinMsg {




    // members variables
    // urlType
    public short urlType ;
    // urlchars
    public ByteArray urlchars ;

    public cblurlmsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize urlType

        // Initialize urlchars
        urlchars= new ByteArray();
        urlchars.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read urlType
        {
            urlType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read urlchars
        {
            retVal+=urlchars.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for urlchars**/
        }

        // write urlType
        ostream.writeByte(urlType);
        retVal +=1;
        // write urlchars
        {
            retVal += urlchars.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("cblurlmsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write urlType
        dc.indent();
        dc.getPs().println("urlType="+urlType+"(0x"+ Integer.toHexString(urlType) + ")" );
        // write urlchars
        dc.indent();
        dc.getPs().print("urlchars: "+urlchars.getSize()+"(0x"+Integer.toHexString(urlchars.getSize())+")\n");
        this.urlchars.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for urlType
    //public short getUrlType()
    //{
    //    return urlType ;
    //}


    // Setter for urlType
    //public void setUrlType(short val)
    //{
    //    this.urlType= val;
    //}
    // Getter for urlchars
    //public ByteArray getUrlchars()
    //{
    //    return urlchars ;
    //}


    // Setter for urlchars
    //public void setUrlchars(ByteArray val)
    //{
    //    this.urlchars= val;
    //}


    public void setUrlchars(byte[] val)
    {
        this.urlchars.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code