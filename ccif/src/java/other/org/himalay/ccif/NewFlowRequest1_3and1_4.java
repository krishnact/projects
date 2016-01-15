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
@Created(date = "Fri Jan 15 01:32:58 EST 2016")

public  class NewFlowRequest1_3and1_4 extends   APDUBase_2Factory.APDUBase_2 { //Concrete type is NewFlowRequest1_3and1_4




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // serviceType
    public short serviceType ;
    // mpegSection
    public ServiceMpegPid mpegSection ;
    // ipUnicast
    public ServiceIPUnicast ipUnicast ;
    // ipMulticast
    public ServiceIPMulticast ipMulticast ;

        public NewFlowRequest1_3and1_4 () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize serviceType
        
        // Initialize mpegSection
        //Conditional, will be initialized during read
        // Initialize ipUnicast
        //Conditional, will be initialized during read
        // Initialize ipMulticast
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read serviceType
        {serviceType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read mpegSection
        if (serviceType==0x00){ mpegSection = new ServiceMpegPid();retVal += mpegSection.read(istream);        }
        // read ipUnicast
        if (serviceType==0x01){ ipUnicast = new ServiceIPUnicast();retVal += ipUnicast.read(istream);        }
        // read ipMulticast
        if (serviceType==0x02){ ipMulticast = new ServiceIPMulticast();retVal += ipMulticast.read(istream);        }

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
        // read serviceType
        {serviceType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read mpegSection
        if (serviceType==0x00){ mpegSection = new ServiceMpegPid();retVal += mpegSection.read(istream);        }
        // read ipUnicast
        if (serviceType==0x01){ ipUnicast = new ServiceIPUnicast();retVal += ipUnicast.read(istream);        }
        // read ipMulticast
        if (serviceType==0x02){ ipMulticast = new ServiceIPMulticast();retVal += ipMulticast.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        { /** fix dependent sizes for mpegSection **/  }
        { /** fix dependent sizes for ipUnicast **/  }
        { /** fix dependent sizes for ipMulticast **/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write serviceType
        ostream.writeByte(serviceType); retVal +=1;
        // write mpegSection
        if (mpegSection!=null)retVal +=mpegSection.write(ostream);
        // write ipUnicast
        if (ipUnicast!=null)retVal +=ipUnicast.write(ostream);
        // write ipMulticast
        if (ipMulticast!=null)retVal +=ipMulticast.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("NewFlowRequest1_3and1_4\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write serviceType
        dc.indent();dc.getPs().println("serviceType="+serviceType+"(0x"+ Integer.toHexString(serviceType) + ")" );
        // write mpegSection
        if ( mpegSection != null ) {dc.indent();dc.getPs().println("mpegSection") ;retVal +=mpegSection.dump(dc);}
        // write ipUnicast
        if ( ipUnicast != null ) {dc.indent();dc.getPs().println("ipUnicast") ;retVal +=ipUnicast.dump(dc);}
        // write ipMulticast
        if ( ipMulticast != null ) {dc.indent();dc.getPs().println("ipMulticast") ;retVal +=ipMulticast.dump(dc);}
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
    // Getter for serviceType
    //public short getServiceType()
    //{
    //    return serviceType ;
    //}

    
    // Setter for serviceType
    //public void setServiceType(short val)
    //{
    //    this.serviceType= val;
    //}
    // Getter for mpegSection
    //public ServiceMpegPid getMpegSection()
    //{
    //    return mpegSection ;
    //}

    
    // Setter for mpegSection
    //public void setMpegSection(ServiceMpegPid val)
    //{
    //    this.mpegSection= val;
    //}
    // Getter for ipUnicast
    //public ServiceIPUnicast getIpUnicast()
    //{
    //    return ipUnicast ;
    //}

    
    // Setter for ipUnicast
    //public void setIpUnicast(ServiceIPUnicast val)
    //{
    //    this.ipUnicast= val;
    //}
    // Getter for ipMulticast
    //public ServiceIPMulticast getIpMulticast()
    //{
    //    return ipMulticast ;
    //}

    
    // Setter for ipMulticast
    //public void setIpMulticast(ServiceIPMulticast val)
    //{
    //    this.ipMulticast= val;
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