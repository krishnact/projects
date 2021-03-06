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
@Created(date = "Fri Jan 15 01:33:06 EST 2016")

public  class cdlGroupId extends BinStruct implements PublicBinMsg {




    // members variables
    // groupId
    public int groupId ;

    public cdlGroupId () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize groupId

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read groupId
        {
            groupId=istream.readUnsignedShort();
            retVal+=2;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        // write groupId
        ostream.writeShort(groupId);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("cdlGroupId\n");
        dc.increaseIndent();
        int retVal= 0;
        // write groupId
        dc.indent();
        dc.getPs().println("groupId="+groupId+"(0x"+ Integer.toHexString(groupId) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for groupId
    //public int getGroupId()
    //{
    //    return groupId ;
    //}


    // Setter for groupId
    //public void setGroupId(int val)
    //{
    //    this.groupId= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code