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
@Created(date = "Fri Jan 15 01:33:03 EST 2016")

public  class SAS_data_av extends   APDUBaseFactory.APDUBase { //Concrete type is SAS_data_av




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // SAS_dataStatus
    public short SAS_dataStatus ;
    // transaction_nb
    public short transaction_nb ;

        public SAS_data_av () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize SAS_dataStatus
        
        // Initialize transaction_nb
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read SAS_dataStatus
        {SAS_dataStatus=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transaction_nb
        {transaction_nb=(short)(istream.readUnsignedByte()); retVal+=1;}

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
        // read SAS_dataStatus
        {SAS_dataStatus=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transaction_nb
        {transaction_nb=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write SAS_dataStatus
        ostream.writeByte(SAS_dataStatus); retVal +=1;
        // write transaction_nb
        ostream.writeByte(transaction_nb); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("SAS_data_av\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write SAS_dataStatus
        dc.indent();dc.getPs().println("SAS_dataStatus="+SAS_dataStatus+"(0x"+ Integer.toHexString(SAS_dataStatus) + ")" );
        // write transaction_nb
        dc.indent();dc.getPs().println("transaction_nb="+transaction_nb+"(0x"+ Integer.toHexString(transaction_nb) + ")" );
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
    // Getter for SAS_dataStatus
    //public short getSAS_dataStatus()
    //{
    //    return SAS_dataStatus ;
    //}

    
    // Setter for SAS_dataStatus
    //public void setSAS_dataStatus(short val)
    //{
    //    this.SAS_dataStatus= val;
    //}
    // Getter for transaction_nb
    //public short getTransaction_nb()
    //{
    //    return transaction_nb ;
    //}

    
    // Setter for transaction_nb
    //public void setTransaction_nb(short val)
    //{
    //    this.transaction_nb= val;
    //}


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