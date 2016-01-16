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

public  class LocationType_dsg_app_id extends   LocationTypeFactory.LocationType { //Concrete type is LocationType_dsg_app_id




    // members variables
    // application_id
    public int application_id ;

    public LocationType_dsg_app_id () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize application_id

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read application_id
        {
            application_id=istream.readUnsignedShort();
            retVal+=2;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write application_id
        ostream.writeShort(application_id);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("LocationType_dsg_app_id\n");
        dc.increaseIndent();
        int retVal= 0;
        // write application_id
        dc.indent();
        dc.getPs().println("application_id="+application_id+"(0x"+ Integer.toHexString(application_id) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for application_id
    //public int getApplication_id()
    //{
    //    return application_id ;
    //}


    // Setter for application_id
    //public void setApplication_id(int val)
    //{
    //    this.application_id= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code