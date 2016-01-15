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
@Created(date = "Fri Jan 15 01:32:55 EST 2016")

public  class ServiceSocket extends BinStruct implements PublicBinMsg{




    // members variables
    // protocolFlag
    public short protocolFlag ;
    // localPort
    public int localPort ;
    // remotePort
    public int remotePort ;
    // remoteAddressType
    public short remoteAddressType ;
    // name
    public ByteArrayWrapper_ui8 name ;
    // ipV4Address
    public IPV4Address ipV4Address ;
    // ipV6Address
    public IPV6Address ipV6Address ;

        public ServiceSocket () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize protocolFlag
        
        // Initialize localPort
        
        // Initialize remotePort
        
        // Initialize remoteAddressType
        
        // Initialize name
        //Conditional, will be initialized during read
        // Initialize ipV4Address
        //Conditional, will be initialized during read
        // Initialize ipV6Address
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read protocolFlag
        {protocolFlag=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read localPort
        {localPort=istream.readUnsignedShort(); retVal+=2;}
        // read remotePort
        {remotePort=istream.readUnsignedShort(); retVal+=2;}
        // read remoteAddressType
        {remoteAddressType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read name
        if (remoteAddressType==0x00){ name = new ByteArrayWrapper_ui8();retVal += name.read(istream);        }
        // read ipV4Address
        if (remoteAddressType==0x01){ ipV4Address = new IPV4Address();retVal += ipV4Address.read(istream);        }
        // read ipV6Address
        if (remoteAddressType==0x02){ ipV6Address = new IPV6Address();retVal += ipV6Address.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
        { /** fix dependent sizes for name **/  }
        { /** fix dependent sizes for ipV4Address **/  }
        { /** fix dependent sizes for ipV6Address **/  }
    
                // write protocolFlag
        ostream.writeByte(protocolFlag); retVal +=1;
        // write localPort
        ostream.writeShort(localPort); retVal +=2;
        // write remotePort
        ostream.writeShort(remotePort); retVal +=2;
        // write remoteAddressType
        ostream.writeByte(remoteAddressType); retVal +=1;
        // write name
        if (name!=null)retVal +=name.write(ostream);
        // write ipV4Address
        if (ipV4Address!=null)retVal +=ipV4Address.write(ostream);
        // write ipV6Address
        if (ipV6Address!=null)retVal +=ipV6Address.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ServiceSocket\n");
    dc.increaseIndent();
        int retVal= 0;
        // write protocolFlag
        dc.indent();dc.getPs().println("protocolFlag="+protocolFlag+"(0x"+ Integer.toHexString(protocolFlag) + ")" );
        // write localPort
        dc.indent();dc.getPs().println("localPort="+localPort+"(0x"+ Integer.toHexString(localPort) + ")" );
        // write remotePort
        dc.indent();dc.getPs().println("remotePort="+remotePort+"(0x"+ Integer.toHexString(remotePort) + ")" );
        // write remoteAddressType
        dc.indent();dc.getPs().println("remoteAddressType="+remoteAddressType+"(0x"+ Integer.toHexString(remoteAddressType) + ")" );
        // write name
        if ( name != null ) {dc.indent();dc.getPs().println("name") ;retVal +=name.dump(dc);}
        // write ipV4Address
        if ( ipV4Address != null ) {dc.indent();dc.getPs().println("ipV4Address") ;retVal +=ipV4Address.dump(dc);}
        // write ipV6Address
        if ( ipV6Address != null ) {dc.indent();dc.getPs().println("ipV6Address") ;retVal +=ipV6Address.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for protocolFlag
    //public short getProtocolFlag()
    //{
    //    return protocolFlag ;
    //}

    
    // Setter for protocolFlag
    //public void setProtocolFlag(short val)
    //{
    //    this.protocolFlag= val;
    //}
    // Getter for localPort
    //public int getLocalPort()
    //{
    //    return localPort ;
    //}

    
    // Setter for localPort
    //public void setLocalPort(int val)
    //{
    //    this.localPort= val;
    //}
    // Getter for remotePort
    //public int getRemotePort()
    //{
    //    return remotePort ;
    //}

    
    // Setter for remotePort
    //public void setRemotePort(int val)
    //{
    //    this.remotePort= val;
    //}
    // Getter for remoteAddressType
    //public short getRemoteAddressType()
    //{
    //    return remoteAddressType ;
    //}

    
    // Setter for remoteAddressType
    //public void setRemoteAddressType(short val)
    //{
    //    this.remoteAddressType= val;
    //}
    // Getter for name
    //public ByteArrayWrapper_ui8 getName()
    //{
    //    return name ;
    //}

    
    // Setter for name
    //public void setName(ByteArrayWrapper_ui8 val)
    //{
    //    this.name= val;
    //}
    // Getter for ipV4Address
    //public IPV4Address getIpV4Address()
    //{
    //    return ipV4Address ;
    //}

    
    // Setter for ipV4Address
    //public void setIpV4Address(IPV4Address val)
    //{
    //    this.ipV4Address= val;
    //}
    // Getter for ipV6Address
    //public IPV6Address getIpV6Address()
    //{
    //    return ipV6Address ;
    //}

    
    // Setter for ipV6Address
    //public void setIpV6Address(IPV6Address val)
    //{
    //    this.ipV6Address= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code