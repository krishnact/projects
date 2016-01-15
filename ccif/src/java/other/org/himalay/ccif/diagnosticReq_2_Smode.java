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

public  class diagnosticReq_2_Smode extends BinStruct implements PublicBinMsg{




    // members variables
    // length
    public short length ;
    // selfDiagnostics
    public ByteArray selfDiagnostics ;

        public diagnosticReq_2_Smode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize length
        
        // Initialize selfDiagnostics
        selfDiagnostics= new ByteArray();selfDiagnostics.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read selfDiagnostics
        {retVal+=selfDiagnostics.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for selfDiagnostics**/  }
    
                // write length
        ostream.writeByte(length); retVal +=1;
        // write selfDiagnostics
        {retVal += selfDiagnostics.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("diagnosticReq_2_Smode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write selfDiagnostics
        dc.indent();dc.getPs().print("selfDiagnostics: "+selfDiagnostics.getSize()+"(0x"+Integer.toHexString(selfDiagnostics.getSize())+")\n");this.selfDiagnostics.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for length
    //public short getLength()
    //{
    //    return length ;
    //}

    
    // Setter for length
    //public void setLength(short val)
    //{
    //    this.length= val;
    //}
    // Getter for selfDiagnostics
    //public ByteArray getSelfDiagnostics()
    //{
    //    return selfDiagnostics ;
    //}

    
    // Setter for selfDiagnostics
    //public void setSelfDiagnostics(ByteArray val)
    //{
    //    this.selfDiagnostics= val;
    //}


    public void setSelfDiagnostics(byte[] val)
    {
        this.selfDiagnostics.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code