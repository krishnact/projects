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

public  class ResetPin extends BinStruct implements PublicBinMsg{




    // members variables
    // resetpinControl
    public short resetpinControl ;

        public ResetPin () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize resetpinControl
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read resetpinControl
        {resetpinControl=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write resetpinControl
        ostream.writeByte(resetpinControl); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ResetPin\n");
    dc.increaseIndent();
        int retVal= 0;
        // write resetpinControl
        dc.indent();dc.getPs().println("resetpinControl="+resetpinControl+"(0x"+ Integer.toHexString(resetpinControl) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for resetpinControl
    //public short getResetpinControl()
    //{
    //    return resetpinControl ;
    //}

    
    // Setter for resetpinControl
    //public void setResetpinControl(short val)
    //{
    //    this.resetpinControl= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code