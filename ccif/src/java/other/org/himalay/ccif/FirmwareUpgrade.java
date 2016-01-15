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
@Created(date = "Fri Jan 15 01:33:00 EST 2016")

public  class FirmwareUpgrade extends   APDUBaseFactory.APDUBase { //Concrete type is FirmwareUpgrade




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // upgrade_source
    public short upgrade_source ;
    // download_time
    public int download_time ;
    // download_timeout_period
    public short download_timeout_period ;
    // length1
    public int length1 ;
    // texts
    public ByteArray texts ;

        public FirmwareUpgrade () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize upgrade_source
        
        // Initialize download_time
        
        // Initialize download_timeout_period
        
        // Initialize length1
        
        // Initialize texts
        texts= new ByteArray();texts.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read upgrade_source
        {upgrade_source=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read download_time
        {download_time=istream.readUnsignedShort(); retVal+=2;}
        // read download_timeout_period
        {download_timeout_period=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read length1
        {length1=istream.readUnsignedShort(); retVal+=2;}
        // read texts
        {retVal+=texts.read(istream); }

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
        // read upgrade_source
        {upgrade_source=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read download_time
        {download_time=istream.readUnsignedShort(); retVal+=2;}
        // read download_timeout_period
        {download_timeout_period=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read length1
        {length1=istream.readUnsignedShort(); retVal+=2;}
        // read texts
        {retVal+=texts.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        
        
        { /** fix dependent sizes for texts**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write upgrade_source
        ostream.writeByte(upgrade_source); retVal +=1;
        // write download_time
        ostream.writeShort(download_time); retVal +=2;
        // write download_timeout_period
        ostream.writeByte(download_timeout_period); retVal +=1;
        // write length1
        ostream.writeShort(length1); retVal +=2;
        // write texts
        {retVal += texts.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FirmwareUpgrade\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write upgrade_source
        dc.indent();dc.getPs().println("upgrade_source="+upgrade_source+"(0x"+ Integer.toHexString(upgrade_source) + ")" );
        // write download_time
        dc.indent();dc.getPs().println("download_time="+download_time+"(0x"+ Integer.toHexString(download_time) + ")" );
        // write download_timeout_period
        dc.indent();dc.getPs().println("download_timeout_period="+download_timeout_period+"(0x"+ Integer.toHexString(download_timeout_period) + ")" );
        // write length1
        dc.indent();dc.getPs().println("length1="+length1+"(0x"+ Integer.toHexString(length1) + ")" );
        // write texts
        dc.indent();dc.getPs().print("texts: "+texts.getSize()+"(0x"+Integer.toHexString(texts.getSize())+")\n");this.texts.dump(dc);
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
    // Getter for upgrade_source
    //public short getUpgrade_source()
    //{
    //    return upgrade_source ;
    //}

    
    // Setter for upgrade_source
    //public void setUpgrade_source(short val)
    //{
    //    this.upgrade_source= val;
    //}
    // Getter for download_time
    //public int getDownload_time()
    //{
    //    return download_time ;
    //}

    
    // Setter for download_time
    //public void setDownload_time(int val)
    //{
    //    this.download_time= val;
    //}
    // Getter for download_timeout_period
    //public short getDownload_timeout_period()
    //{
    //    return download_timeout_period ;
    //}

    
    // Setter for download_timeout_period
    //public void setDownload_timeout_period(short val)
    //{
    //    this.download_timeout_period= val;
    //}
    // Getter for length1
    //public int getLength1()
    //{
    //    return length1 ;
    //}

    
    // Setter for length1
    //public void setLength1(int val)
    //{
    //    this.length1= val;
    //}
    // Getter for texts
    //public ByteArray getTexts()
    //{
    //    return texts ;
    //}

    
    // Setter for texts
    //public void setTexts(ByteArray val)
    //{
    //    this.texts= val;
    //}


    public void setTexts(byte[] val)
    {
        this.texts.setData(val);
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