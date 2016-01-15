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
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class diagnosticReq1mMosemsg extends BinStruct implements PublicBinMsg{




    // members variables
    // diagnosticid
    public short diagnosticid ;
    // itsid
    public short itsid ;

        public diagnosticReq1mMosemsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize diagnosticid
        
        // Initialize itsid
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read diagnosticid
        {diagnosticid=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read itsid
        {itsid=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write diagnosticid
        ostream.writeByte(diagnosticid); retVal +=1;
        // write itsid
        ostream.writeByte(itsid); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("diagnosticReq1mMosemsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write diagnosticid
        dc.indent();dc.getPs().println("diagnosticid="+diagnosticid+"(0x"+ Integer.toHexString(diagnosticid) + ")" );
        // write itsid
        dc.indent();dc.getPs().println("itsid="+itsid+"(0x"+ Integer.toHexString(itsid) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for diagnosticid
    //public short getDiagnosticid()
    //{
    //    return diagnosticid ;
    //}

    
    // Setter for diagnosticid
    //public void setDiagnosticid(short val)
    //{
    //    this.diagnosticid= val;
    //}
    // Getter for itsid
    //public short getItsid()
    //{
    //    return itsid ;
    //}

    
    // Setter for itsid
    //public void setItsid(short val)
    //{
    //    this.itsid= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code