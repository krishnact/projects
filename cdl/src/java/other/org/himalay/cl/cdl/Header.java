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

public  class Header extends BinStruct implements PublicBinMsg {




    // members variables
    // messageType
    public int messageType ;
    // length
    public APDULengthField length ;

    public Header () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize messageType

        // Initialize length
        length = new APDULengthField();
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read messageType
        {
            messageType= BinPrimitive.readUI24(istream);
            retVal += 3;
        }
        // read length
        retVal += length.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for length **/
        }

        // write messageType
        {
            ostream.writeByte((messageType  & 0x00FF0000)>>16);
            ostream.writeShort((messageType & 0x0000FFFF));
            retVal+=3;
        }
        // write length
        if (length!=null)retVal +=length.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("Header\n");
        dc.increaseIndent();
        int retVal= 0;
        // write messageType
        dc.indent();
        dc.getPs().println("messageType="+messageType+"(0x"+ Integer.toHexString(messageType)+")") ;
        // write length
        if ( length != null ) {
            dc.indent();
            dc.getPs().println("length") ;
            retVal +=length.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for messageType
    public int getMessageType()
    {
        return messageType ;
    }


    // Setter for messageType
    public void setMessageType(int val)
    {
        this.messageType= val;
    }
    // Getter for length
    //public APDULengthField getLength()
    //{
    //    return length ;
    //}


    // Setter for length
    //public void setLength(APDULengthField val)
    //{
    //    this.length= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code