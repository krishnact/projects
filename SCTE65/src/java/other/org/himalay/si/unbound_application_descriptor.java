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

public  class unbound_application_descriptor extends   app_desc_baseFactory.app_desc_base { //Concrete type is unbound_application_descriptor




    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // service_id
    public int service_id ;
    // version_number
    public long version_number ;

        public unbound_application_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize service_id
        
        // Initialize version_number
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read service_id
        { service_id= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read version_number
        {version_number=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read desc_header
        retVal += desc_header.read(istream);
        // read service_id
        { service_id= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read version_number
        {version_number=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for desc_header **/  }
        
        
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write service_id
        {ostream.writeByte((service_id  & 0x00FF0000)>>16);ostream.writeShort((service_id & 0x0000FFFF));retVal+=3;}
        // write version_number
        BinPrimitive.writeUI32(ostream,version_number); retVal +=4;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("unbound_application_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write service_id
        dc.indent();dc.getPs().println("service_id="+service_id+"(0x"+ Integer.toHexString(service_id)+")") ;
        // write version_number
        dc.indent();dc.getPs().println("version_number="+version_number+"(0x"+ Long.toHexString(version_number)+")") ;
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
    // Getter for version_number
    //public long getVersion_number()
    //{
    //    return version_number ;
    //}

    
    // Setter for version_number
    //public void setVersion_number(long val)
    //{
    //    this.version_number= val;
    //}


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