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
@Created(date = "Fri Jan 15 01:33:04 EST 2016")

public  class softwareVerMMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // ApplicationStatusflag
    public short ApplicationStatusflag ;
    // applicationNameByte
    public ByteArray applicationNameByte ;
    // applicationSignbyte
    public ByteArray applicationSignbyte ;
    // applicationVersionbyte
    public ByteArray applicationVersionbyte ;

        public softwareVerMMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize ApplicationStatusflag
        
        // Initialize applicationNameByte
        applicationNameByte= new ByteArray();applicationNameByte.setSizeType("FIRST_UI8");
        // Initialize applicationSignbyte
        applicationSignbyte= new ByteArray();applicationSignbyte.setSizeType("FIRST_UI8");
        // Initialize applicationVersionbyte
        applicationVersionbyte= new ByteArray();applicationVersionbyte.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read ApplicationStatusflag
        {ApplicationStatusflag=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read applicationNameByte
        {retVal+=applicationNameByte.read(istream); }
        // read applicationSignbyte
        {retVal+=applicationSignbyte.read(istream); }
        // read applicationVersionbyte
        {retVal+=applicationVersionbyte.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for applicationNameByte**/  }
        { /** fix dependent sizes for applicationSignbyte**/  }
        { /** fix dependent sizes for applicationVersionbyte**/  }
    
                // write ApplicationStatusflag
        ostream.writeByte(ApplicationStatusflag); retVal +=1;
        // write applicationNameByte
        {retVal += applicationNameByte.write(ostream);}
        // write applicationSignbyte
        {retVal += applicationSignbyte.write(ostream);}
        // write applicationVersionbyte
        {retVal += applicationVersionbyte.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("softwareVerMMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write ApplicationStatusflag
        dc.indent();dc.getPs().println("ApplicationStatusflag="+ApplicationStatusflag+"(0x"+ Integer.toHexString(ApplicationStatusflag) + ")" );
        // write applicationNameByte
        dc.indent();dc.getPs().print("applicationNameByte: "+applicationNameByte.getSize()+"(0x"+Integer.toHexString(applicationNameByte.getSize())+")\n");this.applicationNameByte.dump(dc);
        // write applicationSignbyte
        dc.indent();dc.getPs().print("applicationSignbyte: "+applicationSignbyte.getSize()+"(0x"+Integer.toHexString(applicationSignbyte.getSize())+")\n");this.applicationSignbyte.dump(dc);
        // write applicationVersionbyte
        dc.indent();dc.getPs().print("applicationVersionbyte: "+applicationVersionbyte.getSize()+"(0x"+Integer.toHexString(applicationVersionbyte.getSize())+")\n");this.applicationVersionbyte.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for ApplicationStatusflag
    //public short getApplicationStatusflag()
    //{
    //    return ApplicationStatusflag ;
    //}

    
    // Setter for ApplicationStatusflag
    //public void setApplicationStatusflag(short val)
    //{
    //    this.ApplicationStatusflag= val;
    //}
    // Getter for applicationNameByte
    //public ByteArray getApplicationNameByte()
    //{
    //    return applicationNameByte ;
    //}

    
    // Setter for applicationNameByte
    //public void setApplicationNameByte(ByteArray val)
    //{
    //    this.applicationNameByte= val;
    //}
    // Getter for applicationSignbyte
    //public ByteArray getApplicationSignbyte()
    //{
    //    return applicationSignbyte ;
    //}

    
    // Setter for applicationSignbyte
    //public void setApplicationSignbyte(ByteArray val)
    //{
    //    this.applicationSignbyte= val;
    //}
    // Getter for applicationVersionbyte
    //public ByteArray getApplicationVersionbyte()
    //{
    //    return applicationVersionbyte ;
    //}

    
    // Setter for applicationVersionbyte
    //public void setApplicationVersionbyte(ByteArray val)
    //{
    //    this.applicationVersionbyte= val;
    //}


    public void setApplicationNameByte(byte[] val)
    {
        this.applicationNameByte.setData(val);
    }
    
    
    public void setApplicationSignbyte(byte[] val)
    {
        this.applicationSignbyte.setData(val);
    }
    
    
    public void setApplicationVersionbyte(byte[] val)
    {
        this.applicationVersionbyte.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code