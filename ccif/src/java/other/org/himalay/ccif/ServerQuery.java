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
@Created(date = "Fri Jan 15 01:32:55 EST 2016")

public  class ServerQuery extends   APDUBaseFactory.APDUBase { //Concrete type is ServerQuery




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // txnNumber
    public short txnNumber ;
    // headerFileName
    public ByteArray headerFileName ;
    // URL
    public ByteArray URL ;

        public ServerQuery () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize txnNumber
        
        // Initialize headerFileName
        headerFileName= new ByteArray();headerFileName.setSizeType("FIRST_UI16");
        // Initialize URL
        URL= new ByteArray();URL.setSizeType("FIRST_UI16");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read txnNumber
        {txnNumber=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read headerFileName
        {retVal+=headerFileName.read(istream); }
        // read URL
        {retVal+=URL.read(istream); }

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
        // read txnNumber
        {txnNumber=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read headerFileName
        {retVal+=headerFileName.read(istream); }
        // read URL
        {retVal+=URL.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        { /** fix dependent sizes for headerFileName**/  }
        { /** fix dependent sizes for URL**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write txnNumber
        ostream.writeByte(txnNumber); retVal +=1;
        // write headerFileName
        {retVal += headerFileName.write(ostream);}
        // write URL
        {retVal += URL.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ServerQuery\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write txnNumber
        dc.indent();dc.getPs().println("txnNumber="+txnNumber+"(0x"+ Integer.toHexString(txnNumber) + ")" );
        // write headerFileName
        dc.indent();dc.getPs().print("headerFileName: "+headerFileName.getSize()+"(0x"+Integer.toHexString(headerFileName.getSize())+")\n");this.headerFileName.dump(dc);
        // write URL
        dc.indent();dc.getPs().print("URL: "+URL.getSize()+"(0x"+Integer.toHexString(URL.getSize())+")\n");this.URL.dump(dc);
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
    // Getter for txnNumber
    //public short getTxnNumber()
    //{
    //    return txnNumber ;
    //}

    
    // Setter for txnNumber
    //public void setTxnNumber(short val)
    //{
    //    this.txnNumber= val;
    //}
    // Getter for headerFileName
    //public ByteArray getHeaderFileName()
    //{
    //    return headerFileName ;
    //}

    
    // Setter for headerFileName
    //public void setHeaderFileName(ByteArray val)
    //{
    //    this.headerFileName= val;
    //}
    // Getter for URL
    //public ByteArray getURL()
    //{
    //    return URL ;
    //}

    
    // Setter for URL
    //public void setURL(ByteArray val)
    //{
    //    this.URL= val;
    //}


    public void setHeaderFileName(byte[] val)
    {
        this.headerFileName.setData(val);
    }
    
    
    public void setURL(byte[] val)
    {
        this.URL.setData(val);
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