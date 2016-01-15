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

public  class FirmWareDate extends BinStruct implements PublicBinMsg{




    // members variables
    // year
    public int year ;
    // month
    public short month ;
    // date
    public short date ;

        public FirmWareDate () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize year
        
        // Initialize month
        
        // Initialize date
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read year
        {year=istream.readUnsignedShort(); retVal+=2;}
        // read month
        {month=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read date
        {date=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
    
                // write year
        ostream.writeShort(year); retVal +=2;
        // write month
        ostream.writeByte(month); retVal +=1;
        // write date
        ostream.writeByte(date); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("FirmWareDate\n");
    dc.increaseIndent();
        int retVal= 0;
        // write year
        dc.indent();dc.getPs().println("year="+year+"(0x"+ Integer.toHexString(year) + ")" );
        // write month
        dc.indent();dc.getPs().println("month="+month+"(0x"+ Integer.toHexString(month) + ")" );
        // write date
        dc.indent();dc.getPs().println("date="+date+"(0x"+ Integer.toHexString(date) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for year
    //public int getYear()
    //{
    //    return year ;
    //}

    
    // Setter for year
    //public void setYear(int val)
    //{
    //    this.year= val;
    //}
    // Getter for month
    //public short getMonth()
    //{
    //    return month ;
    //}

    
    // Setter for month
    //public void setMonth(short val)
    //{
    //    this.month= val;
    //}
    // Getter for date
    //public short getDate()
    //{
    //    return date ;
    //}

    
    // Setter for date
    //public void setDate(short val)
    //{
    //    this.date= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code