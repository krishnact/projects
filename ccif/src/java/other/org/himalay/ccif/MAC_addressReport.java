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
@Created(date = "Fri Jan 15 01:32:57 EST 2016")

public  class MAC_addressReport extends BinStruct implements PublicBinMsg{




    // members variables
    // header
    public APDUHeader header ;
    // numberOfAddress
    public ByteArray numberOfAddress ;

        public MAC_addressReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize numberOfAddress
        numberOfAddress= new ByteArray();numberOfAddress.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read numberOfAddress
        {retVal+=numberOfAddress.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        { /** fix dependent sizes for numberOfAddress**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write numberOfAddress
        {retVal += numberOfAddress.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("MAC_addressReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write numberOfAddress
        dc.indent();dc.getPs().print("numberOfAddress: "+numberOfAddress.getSize()+"(0x"+Integer.toHexString(numberOfAddress.getSize())+")\n");this.numberOfAddress.dump(dc);
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
    // Getter for numberOfAddress
    //public ByteArray getNumberOfAddress()
    //{
    //    return numberOfAddress ;
    //}

    
    // Setter for numberOfAddress
    //public void setNumberOfAddress(ByteArray val)
    //{
    //    this.numberOfAddress= val;
    //}


    public void setNumberOfAddress(byte[] val)
    {
        this.numberOfAddress.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code