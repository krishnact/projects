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

public  class ServiceIPUnicast extends BinStruct implements PublicBinMsg{




    // members variables
    // macAddress
    public MacAddress macAddress ;
    // optionaData
    public ByteArray optionaData ;

        public ServiceIPUnicast () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize macAddress
        macAddress = new MacAddress();
        // Initialize optionaData
        optionaData= new ByteArray();optionaData.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read macAddress
        retVal += macAddress.read(istream);
        // read optionaData
        {retVal+=optionaData.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for macAddress **/  }
        { /** fix dependent sizes for optionaData**/  }
    
                // write macAddress
        if (macAddress!=null)retVal +=macAddress.write(ostream);
        // write optionaData
        {retVal += optionaData.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ServiceIPUnicast\n");
    dc.increaseIndent();
        int retVal= 0;
        // write macAddress
        if ( macAddress != null ) {dc.indent();dc.getPs().println("macAddress") ;retVal +=macAddress.dump(dc);}
        // write optionaData
        dc.indent();dc.getPs().print("optionaData: "+optionaData.getSize()+"(0x"+Integer.toHexString(optionaData.getSize())+")\n");this.optionaData.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for macAddress
    //public MacAddress getMacAddress()
    //{
    //    return macAddress ;
    //}

    
    // Setter for macAddress
    //public void setMacAddress(MacAddress val)
    //{
    //    this.macAddress= val;
    //}
    // Getter for optionaData
    //public ByteArray getOptionaData()
    //{
    //    return optionaData ;
    //}

    
    // Setter for optionaData
    //public void setOptionaData(ByteArray val)
    //{
    //    this.optionaData= val;
    //}


    public void setOptionaData(byte[] val)
    {
        this.optionaData.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code