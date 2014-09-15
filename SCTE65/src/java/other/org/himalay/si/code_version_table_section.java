// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:36 EDT 2014")

public  class code_version_table_section extends   SCTE65TableFactory.SCTE65Table { //Concrete type is code_version_table_section




    // members variables
    // tableHeader
    public SCTE65_TableHeader tableHeader ;
    // data
    public ByteArray data ;

        public code_version_table_section () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize tableHeader
        tableHeader = new SCTE65_TableHeader();
        // Initialize data
        data= new ByteArray();data.setSizeType("EXTERNAL");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read data
        {data.setSizeType("EXTERNAL");   int iRead  = tableHeader.getSection_length()+(0); data.setSize(iRead);retVal+=data.read(istream); }

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read tableHeader
        retVal += tableHeader.read(istream);
        // read data
        {data.setSizeType("EXTERNAL");   int iRead  = tableHeader.getSection_length()+(0); data.setSize(iRead);retVal+=data.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for tableHeader **/  }
        { /** fix dependent sizes for data**/ tableHeader.setSection_length((short)data.getSize()); }
    
                // write tableHeader
        if (tableHeader!=null)retVal +=tableHeader.write(ostream);
        // write data
        {retVal += data.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("code_version_table_section\n");
    dc.increaseIndent();
        int retVal= 0;
        // write tableHeader
        if ( tableHeader != null ) {dc.indent();dc.getPs().println("tableHeader") ;retVal +=tableHeader.dump(dc);}
        // write data
        dc.indent();dc.getPs().print("data: "+data.getSize()+"(0x"+Integer.toHexString(data.getSize())+")\n");this.data.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for tableHeader
    //public SCTE65_TableHeader getTableHeader()
    //{
    //    return tableHeader ;
    //}

    
    // Setter for tableHeader
    //public void setTableHeader(SCTE65_TableHeader val)
    //{
    //    this.tableHeader= val;
    //}
    // Getter for data
    //public ByteArray getData()
    //{
    //    return data ;
    //}

    
    // Setter for data
    //public void setData(ByteArray val)
    //{
    //    this.data= val;
    //}


    public void setData(byte[] val)
    {
        this.data.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        
     public void setHeader(SCTE65_TableHeader header)
    {
         this.tableHeader= header;   
    }
    
    public SCTE65_TableHeader getHeader()
    {
        return this.tableHeader;
    }

}

// End of code