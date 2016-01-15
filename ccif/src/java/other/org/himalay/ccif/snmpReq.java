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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class snmpReq extends   APDUBaseFactory.APDUBase { //Concrete type is snmpReq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // snmpMessage
    public ByteArray snmpMessage ;

        public snmpReq () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize snmpMessage
        snmpMessage= new ByteArray();snmpMessage.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read snmpMessage
        {retVal+=snmpMessage.read(istream); }

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
        // read snmpMessage
        {retVal+=snmpMessage.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        { /** fix dependent sizes for snmpMessage**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write snmpMessage
        {retVal += snmpMessage.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("snmpReq\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write snmpMessage
        dc.indent();dc.getPs().print("snmpMessage: "+snmpMessage.getSize()+"(0x"+Integer.toHexString(snmpMessage.getSize())+")\n");this.snmpMessage.dump(dc);
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
    // Getter for snmpMessage
    //public ByteArray getSnmpMessage()
    //{
    //    return snmpMessage ;
    //}

    
    // Setter for snmpMessage
    //public void setSnmpMessage(ByteArray val)
    //{
    //    this.snmpMessage= val;
    //}


    public void setSnmpMessage(byte[] val)
    {
        this.snmpMessage.setData(val);
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