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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class HostPropertiesReplyMsg extends BinStruct implements PublicBinMsg {




    // members variables
    // propertyKeyByte
    public ByteArray propertyKeyByte ;
    // propertyValueByte
    public ByteArray propertyValueByte ;

    public HostPropertiesReplyMsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize propertyKeyByte
        propertyKeyByte= new ByteArray();
        propertyKeyByte.setSizeType("FIRST_UI8");
        // Initialize propertyValueByte
        propertyValueByte= new ByteArray();
        propertyValueByte.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read propertyKeyByte
        {
            retVal+=propertyKeyByte.read(istream);
        }
        // read propertyValueByte
        {
            retVal+=propertyValueByte.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for propertyKeyByte**/
        }
        {   /** fix dependent sizes for propertyValueByte**/
        }

        // write propertyKeyByte
        {
            retVal += propertyKeyByte.write(ostream);
        }
        // write propertyValueByte
        {
            retVal += propertyValueByte.write(ostream);
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("HostPropertiesReplyMsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write propertyKeyByte
        dc.indent();
        dc.getPs().print("propertyKeyByte: "+propertyKeyByte.getSize()+"(0x"+Integer.toHexString(propertyKeyByte.getSize())+")\n");
        this.propertyKeyByte.dump(dc);
        // write propertyValueByte
        dc.indent();
        dc.getPs().print("propertyValueByte: "+propertyValueByte.getSize()+"(0x"+Integer.toHexString(propertyValueByte.getSize())+")\n");
        this.propertyValueByte.dump(dc);
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for propertyKeyByte
    //public ByteArray getPropertyKeyByte()
    //{
    //    return propertyKeyByte ;
    //}


    // Setter for propertyKeyByte
    //public void setPropertyKeyByte(ByteArray val)
    //{
    //    this.propertyKeyByte= val;
    //}
    // Getter for propertyValueByte
    //public ByteArray getPropertyValueByte()
    //{
    //    return propertyValueByte ;
    //}


    // Setter for propertyValueByte
    //public void setPropertyValueByte(ByteArray val)
    //{
    //    this.propertyValueByte= val;
    //}


    public void setPropertyKeyByte(byte[] val)
    {
        this.propertyKeyByte.setData(val);
    }


    public void setPropertyValueByte(byte[] val)
    {
        this.propertyValueByte.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code