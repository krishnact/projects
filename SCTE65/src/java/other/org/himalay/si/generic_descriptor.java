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

public  class generic_descriptor extends   SCTE65DescriptorFactory.SCTE65Descriptor { //Concrete type is generic_descriptor




    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // data
    public ByteArray data ;

        public generic_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize data
        data= new ByteArray();data.setSizeType("EXTERNAL");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read data
        {data.setSizeType("EXTERNAL");   int iRead  = desc_header.length+(0); data.setSize(iRead);retVal+=data.read(istream); }

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read desc_header
        retVal += desc_header.read(istream);
        // read data
        {data.setSizeType("EXTERNAL");   int iRead  = desc_header.length+(0); data.setSize(iRead);retVal+=data.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for desc_header **/  }
        { /** fix dependent sizes for data**/ desc_header.length=((short)data.getSize()); }
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write data
        {retVal += data.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("generic_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write data
        dc.indent();dc.getPs().print("data: "+data.getSize()+"(0x"+Integer.toHexString(data.getSize())+")\n");this.data.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for desc_header
    //public descriptor_header getDesc_header()
    //{
    //    return desc_header ;
    //}

    
    // Setter for desc_header
    //public void setDesc_header(descriptor_header val)
    //{
    //    this.desc_header= val;
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
    
        
     public void setHeader(descriptor_header header)
    {
         this.desc_header= header;   
    }
    
    public descriptor_header getHeader()
    {
        return this.desc_header;
    }

}

// End of code