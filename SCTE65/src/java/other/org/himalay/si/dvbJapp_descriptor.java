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

public  class dvbJapp_descriptor extends   app_desc_baseFactory.app_desc_base { //Concrete type is dvbJapp_descriptor


// member static classes
    public  static  class Param extends BinStruct implements PublicBinMsg{




    // members variables
    // data
    public ByteArray data ;

        // Parent of this object
dvbJapp_descriptor parent;
    public Param (dvbJapp_descriptor parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public dvbJapp_descriptor getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize data
        data= new ByteArray();data.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read data
        {retVal+=data.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for data**/  }
    
                // write data
        {retVal += data.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("Param\n");
    dc.increaseIndent();
        int retVal= 0;
        // write data
        dc.indent();dc.getPs().print("data: "+data.getSize()+"(0x"+Integer.toHexString(data.getSize())+")\n");this.data.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


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
    
        

}

// End of code


    // members variables
    // desc_header
    public descriptor_header desc_header ;
    // params
    public ArrayList<Param> params ;

        public dvbJapp_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize params
        params= new ArrayList<Param>();params.setMemberSize(0);
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
                    // read params
        { int ilimit= retVal + (desc_header.length + (0)); for (; retVal < ilimit;){     Param temp;    temp = new Param(this);    retVal += temp.read(istream);    params.add(temp);}}

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
        // read params
        { int ilimit= retVal + (desc_header.length + (0)); for (; retVal < ilimit;){     Param temp;    temp = new Param(this);    retVal += temp.read(istream);    params.add(temp);}}

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
        { /** fix dependent sizes for params**/ desc_header.length=((short)params.getSize()); }
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write params
        {ArrayList<Param> temp1 = params;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     Param temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("dvbJapp_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write params
        { ArrayList<Param> temp1 = params;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     Param element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
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
    // Getter for params
    //public ArrayList<Param> getParams()
    //{
    //    return params ;
    //}

    
    // Setter for params
    //public void setParams(ArrayList<Param> val)
    //{
    //    this.params= val;
    //}


    public int addToParams(Param val)
    {
            params.add(val); return params.size();
    }
    
    
    public int removeFromParams(Param val)
    {
            params.remove(val); return params.size();
    }
    
    
    public int removeNthFromParams(int idx)
    {
            params.remove(idx); return params.size();
    }
    
    
    public int emptyParams(int idx)
    {
            params.clear(); return params.size();
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