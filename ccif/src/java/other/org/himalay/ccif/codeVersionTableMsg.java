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

public  class codeVersionTableMsg extends BinStruct implements PublicBinMsg {




    // members variables
    // purchaseType
    public short purchaseType ;
    // purchasePrice
    public int purchasePrice ;
    // videoFormat
    public DescriptionData videoFormat ;

    public codeVersionTableMsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize purchaseType

        // Initialize purchasePrice

        // Initialize videoFormat
        videoFormat = new DescriptionData();
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read purchaseType
        {
            purchaseType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read purchasePrice
        {
            purchasePrice=istream.readUnsignedShort();
            retVal+=2;
        }
        // read videoFormat
        retVal += videoFormat.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        {   /** fix dependent sizes for videoFormat **/
        }

        // write purchaseType
        ostream.writeByte(purchaseType);
        retVal +=1;
        // write purchasePrice
        ostream.writeShort(purchasePrice);
        retVal +=2;
        // write videoFormat
        if (videoFormat!=null)retVal +=videoFormat.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("codeVersionTableMsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write purchaseType
        dc.indent();
        dc.getPs().println("purchaseType="+purchaseType+"(0x"+ Integer.toHexString(purchaseType) + ")" );
        // write purchasePrice
        dc.indent();
        dc.getPs().println("purchasePrice="+purchasePrice+"(0x"+ Integer.toHexString(purchasePrice) + ")" );
        // write videoFormat
        if ( videoFormat != null ) {
            dc.indent();
            dc.getPs().println("videoFormat") ;
            retVal +=videoFormat.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for purchaseType
    //public short getPurchaseType()
    //{
    //    return purchaseType ;
    //}


    // Setter for purchaseType
    //public void setPurchaseType(short val)
    //{
    //    this.purchaseType= val;
    //}
    // Getter for purchasePrice
    //public int getPurchasePrice()
    //{
    //    return purchasePrice ;
    //}


    // Setter for purchasePrice
    //public void setPurchasePrice(int val)
    //{
    //    this.purchasePrice= val;
    //}
    // Getter for videoFormat
    //public DescriptionData getVideoFormat()
    //{
    //    return videoFormat ;
    //}


    // Setter for videoFormat
    //public void setVideoFormat(DescriptionData val)
    //{
    //    this.videoFormat= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code