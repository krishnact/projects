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

public  class APDUHeader extends BinStruct implements PublicBinMsg {




    // members variables
    // messageType
    public int messageType ;

    public APDUHeader () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize messageType

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

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write messageType
        {
            ostream.writeByte((messageType  & 0x00FF0000)>>16);
            ostream.writeShort((messageType & 0x0000FFFF));
            retVal+=3;
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("APDUHeader\n");
        dc.increaseIndent();
        int retVal= 0;
        // write messageType
        dc.indent();
        dc.getPs().println("messageType="+messageType+"(0x"+ Integer.toHexString(messageType)+")") ;
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


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code