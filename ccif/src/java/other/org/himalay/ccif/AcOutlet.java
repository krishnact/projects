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

public  class AcOutlet extends BinStruct implements PublicBinMsg{




    // members variables
    // acOutletControl
    public short acOutletControl ;

        public AcOutlet () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize acOutletControl
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read acOutletControl
        {acOutletControl=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write acOutletControl
        ostream.writeByte(acOutletControl); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("AcOutlet\n");
    dc.increaseIndent();
        int retVal= 0;
        // write acOutletControl
        dc.indent();dc.getPs().println("acOutletControl="+acOutletControl+"(0x"+ Integer.toHexString(acOutletControl) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for acOutletControl
    //public short getAcOutletControl()
    //{
    //    return acOutletControl ;
    //}

    
    // Setter for acOutletControl
    //public void setAcOutletControl(short val)
    //{
    //    this.acOutletControl= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code