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

public  class HistoryCnf extends   APDUBaseFactory.APDUBase { //Concrete type is HistoryCnf




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // statusField
    public short statusField ;
    // commentLength
    public ByteArray commentLength ;
    // ippvslotNb
    public ByteArray ippvslotNb ;

        public HistoryCnf () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize statusField
        
        // Initialize commentLength
        commentLength= new ByteArray();commentLength.setSizeType("FIRST_UI8");
        // Initialize ippvslotNb
        ippvslotNb= new ByteArray();ippvslotNb.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read commentLength
        {retVal+=commentLength.read(istream); }
        // read ippvslotNb
        {retVal+=ippvslotNb.read(istream); }

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
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read commentLength
        {retVal+=commentLength.read(istream); }
        // read ippvslotNb
        {retVal+=ippvslotNb.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        { /** fix dependent sizes for commentLength**/  }
        { /** fix dependent sizes for ippvslotNb**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write statusField
        ostream.writeByte(statusField); retVal +=1;
        // write commentLength
        {retVal += commentLength.write(ostream);}
        // write ippvslotNb
        {retVal += ippvslotNb.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("HistoryCnf\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write statusField
        dc.indent();dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write commentLength
        dc.indent();dc.getPs().print("commentLength: "+commentLength.getSize()+"(0x"+Integer.toHexString(commentLength.getSize())+")\n");this.commentLength.dump(dc);
        // write ippvslotNb
        dc.indent();dc.getPs().print("ippvslotNb: "+ippvslotNb.getSize()+"(0x"+Integer.toHexString(ippvslotNb.getSize())+")\n");this.ippvslotNb.dump(dc);
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
    // Getter for ippvslotNb
    //public ByteArray getIppvslotNb()
    //{
    //    return ippvslotNb ;
    //}

    
    // Setter for ippvslotNb
    //public void setIppvslotNb(ByteArray val)
    //{
    //    this.ippvslotNb= val;
    //}


    public void setCommentLength(byte[] val)
    {
        this.commentLength.setData(val);
    }
    
    
    public void setIppvslotNb(byte[] val)
    {
        this.ippvslotNb.setData(val);
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