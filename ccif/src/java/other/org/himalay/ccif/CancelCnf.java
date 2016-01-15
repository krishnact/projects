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

public  class CancelCnf extends   APDUBaseFactory.APDUBase { //Concrete type is CancelCnf




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // IPPVslotId
    public short IPPVslotId ;
    // statusField
    public short statusField ;
    // statusRegister
    public short statusRegister ;
    // commentLength
    public ByteArray commentLength ;

        public CancelCnf () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize IPPVslotId
        
        // Initialize statusField
        
        // Initialize statusRegister
        
        // Initialize commentLength
        commentLength= new ByteArray();commentLength.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read IPPVslotId
        {IPPVslotId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusRegister
        {statusRegister=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read commentLength
        {retVal+=commentLength.read(istream); }

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read IPPVslotId
        {IPPVslotId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusRegister
        {statusRegister=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read commentLength
        {retVal+=commentLength.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        
        { /** fix dependent sizes for commentLength**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write IPPVslotId
        ostream.writeByte(IPPVslotId); retVal +=1;
        // write statusField
        ostream.writeByte(statusField); retVal +=1;
        // write statusRegister
        ostream.writeByte(statusRegister); retVal +=1;
        // write commentLength
        {retVal += commentLength.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CancelCnf\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write IPPVslotId
        dc.indent();dc.getPs().println("IPPVslotId="+IPPVslotId+"(0x"+ Integer.toHexString(IPPVslotId) + ")" );
        // write statusField
        dc.indent();dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write statusRegister
        dc.indent();dc.getPs().println("statusRegister="+statusRegister+"(0x"+ Integer.toHexString(statusRegister) + ")" );
        // write commentLength
        dc.indent();dc.getPs().print("commentLength: "+commentLength.getSize()+"(0x"+Integer.toHexString(commentLength.getSize())+")\n");this.commentLength.dump(dc);
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
    // Getter for IPPVslotId
    //public short getIPPVslotId()
    //{
    //    return IPPVslotId ;
    //}

    
    // Setter for IPPVslotId
    //public void setIPPVslotId(short val)
    //{
    //    this.IPPVslotId= val;
    //}
    // Getter for statusField
    //public short getStatusField()
    //{
    //    return statusField ;
    //}

    
    // Setter for statusField
    //public void setStatusField(short val)
    //{
    //    this.statusField= val;
    //}
    // Getter for statusRegister
    //public short getStatusRegister()
    //{
    //    return statusRegister ;
    //}

    
    // Setter for statusRegister
    //public void setStatusRegister(short val)
    //{
    //    this.statusRegister= val;
    //}
    // Getter for commentLength
    //public ByteArray getCommentLength()
    //{
    //    return commentLength ;
    //}

    
    // Setter for commentLength
    //public void setCommentLength(ByteArray val)
    //{
    //    this.commentLength= val;
    //}


    public void setCommentLength(byte[] val)
    {
        this.commentLength.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        
     public void setHeader(APDUHeader header)
    {
         this.header= header;   
    }
    
    public APDUHeader getHeader()
    {
        return this.header;
    }

}

// End of code