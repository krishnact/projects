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

public  class application_descriptor extends   app_desc_baseFactory.app_desc_base { //Concrete type is application_descriptor


// member static classes
    public  static  class profile extends BinStruct implements PublicBinMsg{




    // members variables
    // app_profile
    public int app_profile ;
    // major_version
    public short major_version ;
    // minor_version
    public short minor_version ;
    // micro_version
    public short micro_version ;

        // Parent of this object
application_descriptor parent;
    public profile (application_descriptor parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public application_descriptor getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize app_profile
        
        // Initialize major_version
        
        // Initialize minor_version
        
        // Initialize micro_version
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read app_profile
        {app_profile=istream.readUnsignedShort(); retVal+=2;}
        // read major_version
        {major_version=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read minor_version
        {minor_version=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read micro_version
        {micro_version=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
    
                // write app_profile
        ostream.writeShort(app_profile); retVal +=2;
        // write major_version
        ostream.writeByte(major_version); retVal +=1;
        // write minor_version
        ostream.writeByte(minor_version); retVal +=1;
        // write micro_version
        ostream.writeByte(micro_version); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("profile\n");
    dc.increaseIndent();
        int retVal= 0;
        // write app_profile
        dc.indent();dc.getPs().println("app_profile="+app_profile+"(0x"+ Integer.toHexString(app_profile) + ")" );
        // write major_version
        dc.indent();dc.getPs().println("major_version="+major_version+"(0x"+ Integer.toHexString(major_version) + ")" );
        // write minor_version
        dc.indent();dc.getPs().println("minor_version="+minor_version+"(0x"+ Integer.toHexString(minor_version) + ")" );
        // write micro_version
        dc.indent();dc.getPs().println("micro_version="+micro_version+"(0x"+ Integer.toHexString(micro_version) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for app_profile
    //public int getApp_profile()
    //{
    //    return app_profile ;
    //}

    
    // Setter for app_profile
    //public void setApp_profile(int val)
    //{
    //    this.app_profile= val;
    //}
    // Getter for major_version
    //public short getMajor_version()
    //{
    //    return major_version ;
    //}

    
    // Setter for major_version
    //public void setMajor_version(short val)
    //{
    //    this.major_version= val;
    //}
    // Getter for minor_version
    //public short getMinor_version()
    //{
    //    return minor_version ;
    //}

    
    // Setter for minor_version
    //public void setMinor_version(short val)
    //{
    //    this.minor_version= val;
    //}
    // Getter for micro_version
    //public short getMicro_version()
    //{
    //    return micro_version ;
    //}

    
    // Setter for micro_version
    //public void setMicro_version(short val)
    //{
    //    this.micro_version= val;
    //}


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
    // app_profile_length
    public short app_profile_length ;
    // profiles
    public ArrayList<profile> profiles ;
    // service_bound_visibility
    public short service_bound_visibility ;
    // priority
    public short priority ;
    // transport_label
    public short transport_label ;

        public application_descriptor () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize app_profile_length
        
        // Initialize profiles
        profiles= new ArrayList<profile>();profiles.setMemberSize(0);
        // Initialize service_bound_visibility
        
        // Initialize priority
        
        // Initialize transport_label
        
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
                    // read app_profile_length
        {app_profile_length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read profiles
        { int ilimit= retVal + (app_profile_length + (0)); for (; retVal < ilimit;){     profile temp;    temp = new profile(this);    retVal += temp.read(istream);    profiles.add(temp);}}
        // read service_bound_visibility
        {service_bound_visibility=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read priority
        {priority=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transport_label
        {transport_label=(short)(istream.readUnsignedByte()); retVal+=1;}

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
        // read app_profile_length
        {app_profile_length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read profiles
        { int ilimit= retVal + (app_profile_length + (0)); for (; retVal < ilimit;){     profile temp;    temp = new profile(this);    retVal += temp.read(istream);    profiles.add(temp);}}
        // read service_bound_visibility
        {service_bound_visibility=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read priority
        {priority=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transport_label
        {transport_label=(short)(istream.readUnsignedByte()); retVal+=1;}

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
        
        { /** fix dependent sizes for profiles**/ app_profile_length=((short)profiles.getSize()); }
        
        
        
    
                // write desc_header
        if (desc_header!=null)retVal +=desc_header.write(ostream);
        // write app_profile_length
        ostream.writeByte(app_profile_length); retVal +=1;
        // write profiles
        {ArrayList<profile> temp1 = profiles;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     profile temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
        // write service_bound_visibility
        ostream.writeByte(service_bound_visibility); retVal +=1;
        // write priority
        ostream.writeByte(priority); retVal +=1;
        // write transport_label
        ostream.writeByte(transport_label); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("application_descriptor\n");
    dc.increaseIndent();
        int retVal= 0;
        // write desc_header
        if ( desc_header != null ) {dc.indent();dc.getPs().println("desc_header") ;retVal +=desc_header.dump(dc);}
        // write app_profile_length
        dc.indent();dc.getPs().println("app_profile_length="+app_profile_length+"(0x"+ Integer.toHexString(app_profile_length) + ")" );
        // write profiles
        { ArrayList<profile> temp1 = profiles;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     profile element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
        // write service_bound_visibility
        dc.indent();dc.getPs().println("service_bound_visibility="+service_bound_visibility+"(0x"+ Integer.toHexString(service_bound_visibility) + ")" );
        // write priority
        dc.indent();dc.getPs().println("priority="+priority+"(0x"+ Integer.toHexString(priority) + ")" );
        // write transport_label
        dc.indent();dc.getPs().println("transport_label="+transport_label+"(0x"+ Integer.toHexString(transport_label) + ")" );
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
    // Getter for app_profile_length
    //public short getApp_profile_length()
    //{
    //    return app_profile_length ;
    //}

    
    // Setter for app_profile_length
    //public void setApp_profile_length(short val)
    //{
    //    this.app_profile_length= val;
    //}
    // Getter for profiles
    //public ArrayList<profile> getProfiles()
    //{
    //    return profiles ;
    //}

    
    // Setter for profiles
    //public void setProfiles(ArrayList<profile> val)
    //{
    //    this.profiles= val;
    //}
    // Getter for service_bound_visibility
    //public short getService_bound_visibility()
    //{
    //    return service_bound_visibility ;
    //}

    
    // Setter for service_bound_visibility
    //public void setService_bound_visibility(short val)
    //{
    //    this.service_bound_visibility= val;
    //}
    // Getter for priority
    //public short getPriority()
    //{
    //    return priority ;
    //}

    
    // Setter for priority
    //public void setPriority(short val)
    //{
    //    this.priority= val;
    //}
    // Getter for transport_label
    //public short getTransport_label()
    //{
    //    return transport_label ;
    //}

    
    // Setter for transport_label
    //public void setTransport_label(short val)
    //{
    //    this.transport_label= val;
    //}


    public int addToProfiles(profile val)
    {
            profiles.add(val); return profiles.size();
    }
    
    
    public int removeFromProfiles(profile val)
    {
            profiles.remove(val); return profiles.size();
    }
    
    
    public int removeNthFromProfiles(int idx)
    {
            profiles.remove(idx); return profiles.size();
    }
    
    
    public int emptyProfiles(int idx)
    {
            profiles.clear(); return profiles.size();
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