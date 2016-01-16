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
@Created(date = "Fri Jan 15 01:33:11 EST 2016")

public  class SystemTime extends   APDUBaseFactory.APDUBase { //Concrete type is SystemTime




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // systemTime
    public long systemTime ;
    // GPS_UTCoffset
    public short GPS_UTCoffset ;

    public SystemTime () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize systemTime

        // Initialize GPS_UTCoffset

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read length
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read systemTime
        {
            systemTime=(long)(BinPrimitive.readUI32(istream) );
            retVal+=4;
        }
        // read GPS_UTCoffset
        {
            GPS_UTCoffset=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read header
        retVal += header.read(istream);
        // read length
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read systemTime
        {
            systemTime=(long)(BinPrimitive.readUI32(istream) );
            retVal+=4;
        }
        // read GPS_UTCoffset
        {
            GPS_UTCoffset=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for header **/
        }




        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write systemTime
        BinPrimitive.writeUI32(ostream,systemTime);
        retVal +=4;
        // write GPS_UTCoffset
        ostream.writeByte(GPS_UTCoffset);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("SystemTime\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write systemTime
        dc.indent();
        dc.getPs().println("systemTime="+systemTime+"(0x"+ Long.toHexString(systemTime)+")") ;
        // write GPS_UTCoffset
        dc.indent();
        dc.getPs().println("GPS_UTCoffset="+GPS_UTCoffset+"(0x"+ Integer.toHexString(GPS_UTCoffset) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for header
    //public APDUHeader getHeader()
    //{
    //    return header ;
    //}


    // Setter for header
    //public void setHeader(APDUHeader val)
    //{
    //    this.header= val;
    //}
    // Getter for length
    //public short getLength()
    //{
    //    return length ;
    //}


    // Setter for length
    //public void setLength(short val)
    //{
    //    this.length= val;
    //}
    // Getter for systemTime
    //public long getSystemTime()
    //{
    //    return systemTime ;
    //}


    // Setter for systemTime
    //public void setSystemTime(long val)
    //{
    //    this.systemTime= val;
    //}
    // Getter for GPS_UTCoffset
    //public short getGPS_UTCoffset()
    //{
    //    return GPS_UTCoffset ;
    //}


    // Setter for GPS_UTCoffset
    //public void setGPS_UTCoffset(short val)
    //{
    //    this.GPS_UTCoffset= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }


    public void setHeader(APDUHeader header)
    {
        this.header= header;
    }

    public APDUHeader getHeader()
    {
        return this.header;
    }

}

// End of code