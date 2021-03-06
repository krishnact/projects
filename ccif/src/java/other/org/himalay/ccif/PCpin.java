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
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class PCpin extends BinStruct implements PublicBinMsg {




    // members variables
    // PCpinList
    public ByteArray PCpinList ;

    public PCpin () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize PCpinList
        PCpinList= new ByteArray();
        PCpinList.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read PCpinList
        {
            retVal+=PCpinList.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for PCpinList**/
        }

        // write PCpinList
        {
            retVal += PCpinList.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PCpin\n");
        dc.increaseIndent();
        int retVal= 0;
        // write PCpinList
        dc.indent();
        dc.getPs().print("PCpinList: "+PCpinList.getSize()+"(0x"+Integer.toHexString(PCpinList.getSize())+")\n");
        this.PCpinList.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for PCpinList
    //public ByteArray getPCpinList()
    //{
    //    return PCpinList ;
    //}


    // Setter for PCpinList
    //public void setPCpinList(ByteArray val)
    //{
    //    this.PCpinList= val;
    //}


    public void setPCpinList(byte[] val)
    {
        this.PCpinList.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code