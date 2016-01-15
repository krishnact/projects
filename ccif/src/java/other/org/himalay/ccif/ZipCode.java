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

public  class ZipCode extends BinStruct implements PublicBinMsg{




    // members variables
    // zipCodebytes
    public ByteArray zipCodebytes ;

        public ZipCode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize zipCodebytes
        zipCodebytes= new ByteArray();zipCodebytes.setSizeType("FIRST_UI16");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read zipCodebytes
        {retVal+=zipCodebytes.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for zipCodebytes**/  }
    
                // write zipCodebytes
        {retVal += zipCodebytes.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ZipCode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write zipCodebytes
        dc.indent();dc.getPs().print("zipCodebytes: "+zipCodebytes.getSize()+"(0x"+Integer.toHexString(zipCodebytes.getSize())+")\n");this.zipCodebytes.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for zipCodebytes
    //public ByteArray getZipCodebytes()
    //{
    //    return zipCodebytes ;
    //}

    
    // Setter for zipCodebytes
    //public void setZipCodebytes(ByteArray val)
    //{
    //    this.zipCodebytes= val;
    //}


    public void setZipCodebytes(byte[] val)
    {
        this.zipCodebytes.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code