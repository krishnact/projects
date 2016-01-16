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

public  class PurchasePin extends BinStruct implements PublicBinMsg {




    // members variables
    // purchagePinList
    public ByteArray purchagePinList ;

    public PurchasePin () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize purchagePinList
        purchagePinList= new ByteArray();
        purchagePinList.setSizeType("FIRST_UI16");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read purchagePinList
        {
            retVal+=purchagePinList.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for purchagePinList**/
        }

        // write purchagePinList
        {
            retVal += purchagePinList.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PurchasePin\n");
        dc.increaseIndent();
        int retVal= 0;
        // write purchagePinList
        dc.indent();
        dc.getPs().print("purchagePinList: "+purchagePinList.getSize()+"(0x"+Integer.toHexString(purchagePinList.getSize())+")\n");
        this.purchagePinList.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for purchagePinList
    //public ByteArray getPurchagePinList()
    //{
    //    return purchagePinList ;
    //}


    // Setter for purchagePinList
    //public void setPurchagePinList(ByteArray val)
    //{
    //    this.purchagePinList= val;
    //}


    public void setPurchagePinList(byte[] val)
    {
        this.purchagePinList.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code