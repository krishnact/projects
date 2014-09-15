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

public  class transport_protocol_descriptor extends   app_desc_baseFactory.app_desc_base { //Concrete type is transport_protocol_descriptor




    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // id
    public int id ;
    // label
    public short label ;
    // url
    public ByteArray url ;

        public transport_protocol_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize id
        
        // Initialize label
        
        // Initialize url
        url= new ByteArray();url.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
    DataInputStream saved = istream;
    int sizeLimit= getHeader().length + (0);
    if ( sizeLimit > 0 ){
    byte[] ba        = new byte[sizeLimit];
    istream.readFully(ba);
    ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);
    istream = new DataInputStream(baTemp);
    {
                    // read id
        {id=istream.readUnsignedShort(); retVal+=2;}
        // read label
        {label=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read url
        {retVal+=url.read(istream); }

}
}
istream = saved;
postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

         DataInputStream saved = istream;
    int sizeLimit= getHeader().length + (0);
    if ( sizeLimit > 0 ){
    byte[] ba        = new byte[sizeLimit];
    istream.readFully(ba);
    ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);
    istream = new DataInputStream(baTemp);
    {
                    // read desc_header
        retVal += desc_header.read(istream);
        // read id
        {id=istream.readUnsignedShort(); retVal+=2;}
        // read label
        {label=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read url
        {retVal+=url.read(istream); }

                }
}
istream = saved;
postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for desc_header **/  }
        
        
        { /** fix dependent sizes for url**/  }
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write id
        ostream.writeShort(id); retVal +=2;
        // write label
        ostream.writeByte(label); retVal +=1;
        // write url
        {retVal += url.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("transport_protocol_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write id
        dc.indent();dc.getPs().println("id="+id+"(0x"+ Integer.toHexString(id) + ")" );
        // write label
        dc.indent();dc.getPs().println("label="+label+"(0x"+ Integer.toHexString(label) + ")" );
        // write url
        dc.indent();dc.getPs().print("url: "+url.getSize()+"(0x"+Integer.toHexString(url.getSize())+")\n");this.url.dump(dc);
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
    // Getter for id
    //public int getId()
    //{
    //    return id ;
    //}

    
    // Setter for id
    //public void setId(int val)
    //{
    //    this.id= val;
    //}
    // Getter for label
    //public short getLabel()
    //{
    //    return label ;
    //}

    
    // Setter for label
    //public void setLabel(short val)
    //{
    //    this.label= val;
    //}
    // Getter for url
    //public ByteArray getUrl()
    //{
    //    return url ;
    //}

    
    // Setter for url
    //public void setUrl(ByteArray val)
    //{
    //    this.url= val;
    //}


    public void setUrl(byte[] val)
    {
        this.url.setData(val);
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