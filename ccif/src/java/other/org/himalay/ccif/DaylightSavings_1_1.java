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

public  class DaylightSavings_1_1 extends BinStruct implements PublicBinMsg {




    // members variables
    // daylightSavingsControl
    public short daylightSavingsControl ;

    public DaylightSavings_1_1 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize daylightSavingsControl

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read daylightSavingsControl
        {
            daylightSavingsControl=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write daylightSavingsControl
        ostream.writeByte(daylightSavingsControl);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("DaylightSavings_1_1\n");
        dc.increaseIndent();
        int retVal= 0;
        // write daylightSavingsControl
        dc.indent();
        dc.getPs().println("daylightSavingsControl="+daylightSavingsControl+"(0x"+ Integer.toHexString(daylightSavingsControl) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for daylightSavingsControl
    //public short getDaylightSavingsControl()
    //{
    //    return daylightSavingsControl ;
    //}


    // Setter for daylightSavingsControl
    //public void setDaylightSavingsControl(short val)
    //{
    //    this.daylightSavingsControl= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code