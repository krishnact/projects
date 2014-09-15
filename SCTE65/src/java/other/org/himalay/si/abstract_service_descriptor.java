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

public  class abstract_service_descriptor extends   app_desc_baseFactory.app_desc_base { //Concrete type is abstract_service_descriptor




    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // service_id
    public int service_id ;
    // bf1
    public BitField_8 bf1 ;
    // service_name
    public ByteArray service_name ;

        public abstract_service_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize service_id
        
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize service_name
        service_name= new ByteArray();service_name.setSizeType("EOS");
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
                    // read service_id
        { service_id= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read bf1
        retVal += bf1.read(istream);
        // read service_name
        {retVal+=service_name.read(istream); }

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
        // read service_id
        { service_id= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read bf1
        retVal += bf1.read(istream);
        // read service_name
        {retVal+=service_name.read(istream); }

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
        
        
        { /** fix dependent sizes for service_name**/  }
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write service_id
        {ostream.writeByte((service_id  & 0x00FF0000)>>16);ostream.writeShort((service_id & 0x0000FFFF));retVal+=3;}
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write service_name
        {retVal += service_name.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("abstract_service_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write service_id
        dc.indent();dc.getPs().println("service_id="+service_id+"(0x"+ Integer.toHexString(service_id)+")") ;
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),7));dc.indent();dc.getPs().print("auto_select: ");dc.getPs().println(BitField_8.toDisplayString(getAuto_select(),5));}
        // write service_name
        dc.indent();dc.getPs().print("service_name: "+service_name.getSize()+"(0x"+Integer.toHexString(service_name.getSize())+")\n");this.service_name.dump(dc);
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
    // Getter for service_id
    //public int getService_id()
    //{
    //    return service_id ;
    //}

    
    // Setter for service_id
    //public void setService_id(int val)
    //{
    //    this.service_id= val;
    //}
    // Getter for bf1
    //public BitField_8 getBf1()
    //{
    //    return bf1 ;
    //}

    
    // Setter for bf1
    //public void setBf1(BitField_8 val)
    //{
    //    this.bf1= val;
    //}
    // Getter for service_name
    //public ByteArray getService_name()
    //{
    //    return service_name ;
    //}

    
    // Setter for service_name
    //public void setService_name(ByteArray val)
    //{
    //    this.service_name= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000fe ) >> 1 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff01) | ( (val << 1 ) & 0x000000fe));
    }
    
    
    public int getAuto_select( )
    {
        return ( bf1.getValue() & 0x0000001f ) >> 0 ;
    }
    
    
    public void setAuto_select(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
    }
    
    
    public void setService_name(byte[] val)
    {
        this.service_name.setData(val);
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