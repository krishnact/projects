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

public  class FirmwareVerReportM_Mode extends BinStruct implements PublicBinMsg{




    // members variables
    // firmWareVersionCharacter
    public ByteArray firmWareVersionCharacter ;
    // fwareDate
    public FirmWareDate fwareDate ;

        public FirmwareVerReportM_Mode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize firmWareVersionCharacter
        firmWareVersionCharacter= new ByteArray();firmWareVersionCharacter.setSizeType("FIRST_UI8");
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

                     // read firmWareVersionCharacter
        {retVal+=firmWareVersionCharacter.read(istream); }
        // read fwareDate
        retVal += fwareDate.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for firmWareVersionCharacter**/  }
        { /** fix dependent sizes for fwareDate **/  }
    
                // write firmWareVersionCharacter
        {retVal += firmWareVersionCharacter.write(ostream);}
        // write fwareDate
        if (fwareDate!=null)retVal +=fwareDate.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FirmwareVerReportM_Mode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write firmWareVersionCharacter
        dc.indent();dc.getPs().print("firmWareVersionCharacter: "+firmWareVersionCharacter.getSize()+"(0x"+Integer.toHexString(firmWareVersionCharacter.getSize())+")\n");this.firmWareVersionCharacter.dump(dc);
        // write fwareDate
        if ( fwareDate != null ) {dc.indent();dc.getPs().println("fwareDate") ;retVal +=fwareDate.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for firmWareVersionCharacter
    //public ByteArray getFirmWareVersionCharacter()
    //{
    //    return firmWareVersionCharacter ;
    //}

    
    // Setter for firmWareVersionCharacter
    //public void setFirmWareVersionCharacter(ByteArray val)
    //{
    //    this.firmWareVersionCharacter= val;
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


    public void setFirmWareVersionCharacter(byte[] val)
    {
        this.firmWareVersionCharacter.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code