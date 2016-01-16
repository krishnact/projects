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
@Created(date = "Fri Jan 15 01:33:08 EST 2016")

public  class TimeZone extends BinStruct implements PublicBinMsg {




    // members variables
    // timeZoneOffset
    public int timeZoneOffset ;

    public TimeZone () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize timeZoneOffset

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read timeZoneOffset
        {
            timeZoneOffset=istream.readUnsignedShort();
            retVal+=2;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write timeZoneOffset
        ostream.writeShort(timeZoneOffset);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("TimeZone\n");
        dc.increaseIndent();
        int retVal= 0;
        // write timeZoneOffset
        dc.indent();
        dc.getPs().println("timeZoneOffset="+timeZoneOffset+"(0x"+ Integer.toHexString(timeZoneOffset) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for timeZoneOffset
    //public int getTimeZoneOffset()
    //{
    //    return timeZoneOffset ;
    //}


    // Setter for timeZoneOffset
    //public void setTimeZoneOffset(int val)
    //{
    //    this.timeZoneOffset= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code