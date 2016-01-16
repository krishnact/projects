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

public  class CaInfo extends BinStruct implements PublicBinMsg {




    // members variables
    // caPmtId
    public short caPmtId ;
    // CaDescriptors
    public ByteArray CaDescriptors ;

    public CaInfo () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize caPmtId

        // Initialize CaDescriptors
        CaDescriptors= new ByteArray();
        CaDescriptors.setSizeType("EOS");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read caPmtId
        {
            caPmtId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read CaDescriptors
        {
            retVal+=CaDescriptors.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for CaDescriptors**/
        }

        // write caPmtId
        ostream.writeByte(caPmtId);
        retVal +=1;
        // write CaDescriptors
        {
            retVal += CaDescriptors.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("CaInfo\n");
        dc.increaseIndent();
        int retVal= 0;
        // write caPmtId
        dc.indent();
        dc.getPs().println("caPmtId="+caPmtId+"(0x"+ Integer.toHexString(caPmtId) + ")" );
        // write CaDescriptors
        dc.indent();
        dc.getPs().print("CaDescriptors: "+CaDescriptors.getSize()+"(0x"+Integer.toHexString(CaDescriptors.getSize())+")\n");
        this.CaDescriptors.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for caPmtId
    //public short getCaPmtId()
    //{
    //    return caPmtId ;
    //}


    // Setter for caPmtId
    //public void setCaPmtId(short val)
    //{
    //    this.caPmtId= val;
    //}
    // Getter for CaDescriptors
    //public ByteArray getCaDescriptors()
    //{
    //    return CaDescriptors ;
    //}


    // Setter for CaDescriptors
    //public void setCaDescriptors(ByteArray val)
    //{
    //    this.CaDescriptors= val;
    //}


    public void setCaDescriptors(byte[] val)
    {
        this.CaDescriptors.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code