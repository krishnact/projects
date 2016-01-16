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

public  class DownloadType_0_or_1 extends BinStruct implements PublicBinMsg {




    // members variables
    // locationTypeSpecifier
    public short locationTypeSpecifier ;
    // location
    public LocationTypeFactory.LocationType location ;

    public DownloadType_0_or_1 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize locationTypeSpecifier

        // Initialize location
        /* Generic classes are abstract, so we can not invoke new*/
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read locationTypeSpecifier
        {
            locationTypeSpecifier=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read location
        {
            IntegerHolder iHolder= new IntegerHolder();
            DataInputStream disTemp = istream;
            location=LocationTypeFactory.createMsg(locationTypeSpecifier,disTemp,iHolder);
            retVal+= iHolder.getValue();
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for location **/
        }

        // write locationTypeSpecifier
        ostream.writeByte(locationTypeSpecifier);
        retVal +=1;
        // write location
        if (location!=null)retVal +=location.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("DownloadType_0_or_1\n");
        dc.increaseIndent();
        int retVal= 0;
        // write locationTypeSpecifier
        dc.indent();
        dc.getPs().println("locationTypeSpecifier="+locationTypeSpecifier+"(0x"+ Integer.toHexString(locationTypeSpecifier) + ")" );
        // write location
        if ( location != null ) {
            dc.indent();
            dc.getPs().println("location") ;
            retVal +=location.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for locationTypeSpecifier
    //public short getLocationTypeSpecifier()
    //{
    //    return locationTypeSpecifier ;
    //}


    // Setter for locationTypeSpecifier
    //public void setLocationTypeSpecifier(short val)
    //{
    //    this.locationTypeSpecifier= val;
    //}
    // Getter for location
    //public LocationTypeFactory.LocationType getLocation()
    //{
    //    return location ;
    //}


    // Setter for location
    //public void setLocation(LocationTypeFactory.LocationType val)
    //{
    //    this.location= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code