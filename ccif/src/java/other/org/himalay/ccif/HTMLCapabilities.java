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

public  class HTMLCapabilities extends BinStruct implements PublicBinMsg {




    // members variables
    // linkSupport
    public short linkSupport ;
    // tableSupport
    public short tableSupport ;
    // listSupport
    public short listSupport ;
    // imageSupport
    public short imageSupport ;

    public HTMLCapabilities () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize linkSupport

        // Initialize tableSupport

        // Initialize listSupport

        // Initialize imageSupport

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read linkSupport
        {
            linkSupport=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read tableSupport
        {
            tableSupport=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read listSupport
        {
            listSupport=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read imageSupport
        {
            imageSupport=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;






        // write linkSupport
        ostream.writeByte(linkSupport);
        retVal +=1;
        // write tableSupport
        ostream.writeByte(tableSupport);
        retVal +=1;
        // write listSupport
        ostream.writeByte(listSupport);
        retVal +=1;
        // write imageSupport
        ostream.writeByte(imageSupport);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("HTMLCapabilities\n");
        dc.increaseIndent();
        int retVal= 0;
        // write linkSupport
        dc.indent();
        dc.getPs().println("linkSupport="+linkSupport+"(0x"+ Integer.toHexString(linkSupport) + ")" );
        // write tableSupport
        dc.indent();
        dc.getPs().println("tableSupport="+tableSupport+"(0x"+ Integer.toHexString(tableSupport) + ")" );
        // write listSupport
        dc.indent();
        dc.getPs().println("listSupport="+listSupport+"(0x"+ Integer.toHexString(listSupport) + ")" );
        // write imageSupport
        dc.indent();
        dc.getPs().println("imageSupport="+imageSupport+"(0x"+ Integer.toHexString(imageSupport) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for linkSupport
    //public short getLinkSupport()
    //{
    //    return linkSupport ;
    //}


    // Setter for linkSupport
    //public void setLinkSupport(short val)
    //{
    //    this.linkSupport= val;
    //}
    // Getter for tableSupport
    //public short getTableSupport()
    //{
    //    return tableSupport ;
    //}


    // Setter for tableSupport
    //public void setTableSupport(short val)
    //{
    //    this.tableSupport= val;
    //}
    // Getter for listSupport
    //public short getListSupport()
    //{
    //    return listSupport ;
    //}


    // Setter for listSupport
    //public void setListSupport(short val)
    //{
    //    this.listSupport= val;
    //}
    // Getter for imageSupport
    //public short getImageSupport()
    //{
    //    return imageSupport ;
    //}


    // Setter for imageSupport
    //public void setImageSupport(short val)
    //{
    //    this.imageSupport= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code