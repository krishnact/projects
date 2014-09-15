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

public  class revision_detection_descriptor_base extends   SCTE65DescriptorFactory.SCTE65Descriptor { //Concrete type is revision_detection_descriptor




    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // bf1
    public BitField_8 bf1 ;
    // section_number
    public short section_number ;
    // last_section_number
    public short last_section_number ;

        public revision_detection_descriptor_base () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize section_number
        
        // Initialize last_section_number
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read bf1
        retVal += bf1.read(istream);
        // read section_number
        {section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read last_section_number
        {last_section_number=(short)(istream.readUnsignedByte()); retVal+=1;}

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read desc_header
        retVal += desc_header.read(istream);
        // read bf1
        retVal += bf1.read(istream);
        // read section_number
        {section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read last_section_number
        {last_section_number=(short)(istream.readUnsignedByte()); retVal+=1;}

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
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write section_number
        ostream.writeByte(section_number); retVal +=1;
        // write last_section_number
        ostream.writeByte(last_section_number); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("revision_detection_descriptor_base\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write bf1
        {dc.indent();dc.getPs().print("table_version_number: ");dc.getPs().println(BitField_8.toDisplayString(getTable_version_number(),5));}
        // write section_number
        dc.indent();dc.getPs().println("section_number="+section_number+"(0x"+ Integer.toHexString(section_number) + ")" );
        // write last_section_number
        dc.indent();dc.getPs().println("last_section_number="+last_section_number+"(0x"+ Integer.toHexString(last_section_number) + ")" );
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
    // Getter for section_number
    //public short getSection_number()
    //{
    //    return section_number ;
    //}

    
    // Setter for section_number
    //public void setSection_number(short val)
    //{
    //    this.section_number= val;
    //}
    // Getter for last_section_number
    //public short getLast_section_number()
    //{
    //    return last_section_number ;
    //}

    
    // Setter for last_section_number
    //public void setLast_section_number(short val)
    //{
    //    this.last_section_number= val;
    //}


    public int getTable_version_number( )
    {
        return ( bf1.getValue() & 0x0000001f ) >> 0 ;
    }
    
    
    public void setTable_version_number(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
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