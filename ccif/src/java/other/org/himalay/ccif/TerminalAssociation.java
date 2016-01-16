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

public  class TerminalAssociation extends BinStruct implements PublicBinMsg {




    // members variables
    // identifierList
    public ByteArray identifierList ;

    public TerminalAssociation () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize identifierList
        identifierList= new ByteArray();
        identifierList.setSizeType("FIRST_UI16");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read identifierList
        {
            retVal+=identifierList.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for identifierList**/
        }

        // write identifierList
        {
            retVal += identifierList.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("TerminalAssociation\n");
        dc.increaseIndent();
        int retVal= 0;
        // write identifierList
        dc.indent();
        dc.getPs().print("identifierList: "+identifierList.getSize()+"(0x"+Integer.toHexString(identifierList.getSize())+")\n");
        this.identifierList.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for identifierList
    //public ByteArray getIdentifierList()
    //{
    //    return identifierList ;
    //}


    // Setter for identifierList
    //public void setIdentifierList(ByteArray val)
    //{
    //    this.identifierList= val;
    //}


    public void setIdentifierList(byte[] val)
    {
        this.identifierList.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code