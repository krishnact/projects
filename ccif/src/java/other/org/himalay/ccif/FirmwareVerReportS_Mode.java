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
@Created(date = "Fri Jan 15 01:33:05 EST 2016")

public  class FirmwareVerReportS_Mode extends BinStruct implements PublicBinMsg{




    // members variables
    // firmwareVersion
    public int firmwareVersion ;
    // fwareDate
    public FirmWareDate fwareDate ;

        public FirmwareVerReportS_Mode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize firmwareVersion
        
        // Initialize fwareDate
        fwareDate = new FirmWareDate();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read firmwareVersion
        {firmwareVersion=istream.readUnsignedShort(); retVal+=2;}
        // read fwareDate
        retVal += fwareDate.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for fwareDate **/  }
    
                // write firmwareVersion
        ostream.writeShort(firmwareVersion); retVal +=2;
        // write fwareDate
        if (fwareDate!=null)retVal +=fwareDate.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FirmwareVerReportS_Mode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write firmwareVersion
        dc.indent();dc.getPs().println("firmwareVersion="+firmwareVersion+"(0x"+ Integer.toHexString(firmwareVersion) + ")" );
        // write fwareDate
        if ( fwareDate != null ) {dc.indent();dc.getPs().println("fwareDate") ;retVal +=fwareDate.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for firmwareVersion
    //public int getFirmwareVersion()
    //{
    //    return firmwareVersion ;
    //}

    
    // Setter for firmwareVersion
    //public void setFirmwareVersion(int val)
    //{
    //    this.firmwareVersion= val;
    //}
    // Getter for fwareDate
    //public FirmWareDate getFwareDate()
    //{
    //    return fwareDate ;
    //}

    
    // Setter for fwareDate
    //public void setFwareDate(FirmWareDate val)
    //{
    //    this.fwareDate= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code