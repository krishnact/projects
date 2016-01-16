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
@Created(date = "Fri Jan 15 01:33:04 EST 2016")

public  class softwareVerSMsg extends BinStruct implements PublicBinMsg {




    // members variables
    // applicationVersionNumber
    public int applicationVersionNumber ;
    // ApplicationStatusfield
    public short ApplicationStatusfield ;
    // applicationNameByte
    public ByteArray applicationNameByte ;
    // applicationSignbyte
    public ByteArray applicationSignbyte ;

    public softwareVerSMsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize applicationVersionNumber

        // Initialize ApplicationStatusfield

        // Initialize applicationNameByte
        applicationNameByte= new ByteArray();
        applicationNameByte.setSizeType("FIRST_UI8");
        // Initialize applicationSignbyte
        applicationSignbyte= new ByteArray();
        applicationSignbyte.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read applicationVersionNumber
        {
            applicationVersionNumber=istream.readUnsignedShort();
            retVal+=2;
        }
        // read ApplicationStatusfield
        {
            ApplicationStatusfield=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read applicationNameByte
        {
            retVal+=applicationNameByte.read(istream);
        }
        // read applicationSignbyte
        {
            retVal+=applicationSignbyte.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        {   /** fix dependent sizes for applicationNameByte**/
        }
        {   /** fix dependent sizes for applicationSignbyte**/
        }

        // write applicationVersionNumber
        ostream.writeShort(applicationVersionNumber);
        retVal +=2;
        // write ApplicationStatusfield
        ostream.writeByte(ApplicationStatusfield);
        retVal +=1;
        // write applicationNameByte
        {
            retVal += applicationNameByte.write(ostream);
        }
        // write applicationSignbyte
        {
            retVal += applicationSignbyte.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("softwareVerSMsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write applicationVersionNumber
        dc.indent();
        dc.getPs().println("applicationVersionNumber="+applicationVersionNumber+"(0x"+ Integer.toHexString(applicationVersionNumber) + ")" );
        // write ApplicationStatusfield
        dc.indent();
        dc.getPs().println("ApplicationStatusfield="+ApplicationStatusfield+"(0x"+ Integer.toHexString(ApplicationStatusfield) + ")" );
        // write applicationNameByte
        dc.indent();
        dc.getPs().print("applicationNameByte: "+applicationNameByte.getSize()+"(0x"+Integer.toHexString(applicationNameByte.getSize())+")\n");
        this.applicationNameByte.dump(dc);
        // write applicationSignbyte
        dc.indent();
        dc.getPs().print("applicationSignbyte: "+applicationSignbyte.getSize()+"(0x"+Integer.toHexString(applicationSignbyte.getSize())+")\n");
        this.applicationSignbyte.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for applicationVersionNumber
    //public int getApplicationVersionNumber()
    //{
    //    return applicationVersionNumber ;
    //}


    // Setter for applicationVersionNumber
    //public void setApplicationVersionNumber(int val)
    //{
    //    this.applicationVersionNumber= val;
    //}
    // Getter for ApplicationStatusfield
    //public short getApplicationStatusfield()
    //{
    //    return ApplicationStatusfield ;
    //}


    // Setter for ApplicationStatusfield
    //public void setApplicationStatusfield(short val)
    //{
    //    this.ApplicationStatusfield= val;
    //}
    // Getter for applicationNameByte
    //public ByteArray getApplicationNameByte()
    //{
    //    return applicationNameByte ;
    //}


    // Setter for applicationNameByte
    //public void setApplicationNameByte(ByteArray val)
    //{
    //    this.applicationNameByte= val;
    //}
    // Getter for applicationSignbyte
    //public ByteArray getApplicationSignbyte()
    //{
    //    return applicationSignbyte ;
    //}


    // Setter for applicationSignbyte
    //public void setApplicationSignbyte(ByteArray val)
    //{
    //    this.applicationSignbyte= val;
    //}


    public void setApplicationNameByte(byte[] val)
    {
        this.applicationNameByte.setData(val);
    }


    public void setApplicationSignbyte(byte[] val)
    {
        this.applicationSignbyte.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code