// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;
import org.himalay.binmsg.util.IPv4Address ;
import org.himalay.binmsg.util.IPv6Address ;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:39:12 EST 2016")

public  class LocationType_dsg_tunnel extends   LocationTypeFactory.LocationType { //Concrete type is LocationType_dsg_tunnel




    // members variables
    // dsgTunnelAddress
    public IPv4Address dsgTunnelAddress ;
    // source_ip_address
    public IPv6Address source_ip_address ;
    // destination_ip_address
    public IPv6Address destination_ip_address ;
    // source_port_number
    public int source_port_number ;
    // destination_port_number
    public int destination_port_number ;

        public LocationType_dsg_tunnel () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize dsgTunnelAddress
        dsgTunnelAddress = new IPv4Address();
        // Initialize source_ip_address
        source_ip_address = new IPv6Address();
        // Initialize destination_ip_address
        destination_ip_address = new IPv6Address();
        // Initialize source_port_number
        
        // Initialize destination_port_number
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read dsgTunnelAddress
        retVal += dsgTunnelAddress.read(istream);
        // read source_ip_address
        retVal += source_ip_address.read(istream);
        // read destination_ip_address
        retVal += destination_ip_address.read(istream);
        // read source_port_number
        {source_port_number=istream.readUnsignedShort(); retVal+=2;}
        // read destination_port_number
        {destination_port_number=istream.readUnsignedShort(); retVal+=2;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for dsgTunnelAddress **/  }
        { /** fix dependent sizes for source_ip_address **/  }
        { /** fix dependent sizes for destination_ip_address **/  }
        
        
    
                // write dsgTunnelAddress
        if (dsgTunnelAddress!=null)retVal +=dsgTunnelAddress.write(ostream);
        // write source_ip_address
        if (source_ip_address!=null)retVal +=source_ip_address.write(ostream);
        // write destination_ip_address
        if (destination_ip_address!=null)retVal +=destination_ip_address.write(ostream);
        // write source_port_number
        ostream.writeShort(source_port_number); retVal +=2;
        // write destination_port_number
        ostream.writeShort(destination_port_number); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("LocationType_dsg_tunnel\n");
    dc.increaseIndent();
        int retVal= 0;
        // write dsgTunnelAddress
        if ( dsgTunnelAddress != null ) {dc.indent();dc.getPs().println("dsgTunnelAddress") ;retVal +=dsgTunnelAddress.dump(dc);}
        // write source_ip_address
        if ( source_ip_address != null ) {dc.indent();dc.getPs().println("source_ip_address") ;retVal +=source_ip_address.dump(dc);}
        // write destination_ip_address
        if ( destination_ip_address != null ) {dc.indent();dc.getPs().println("destination_ip_address") ;retVal +=destination_ip_address.dump(dc);}
        // write source_port_number
        dc.indent();dc.getPs().println("source_port_number="+source_port_number+"(0x"+ Integer.toHexString(source_port_number) + ")" );
        // write destination_port_number
        dc.indent();dc.getPs().println("destination_port_number="+destination_port_number+"(0x"+ Integer.toHexString(destination_port_number) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for dsgTunnelAddress
    //public IPv4Address getDsgTunnelAddress()
    //{
    //    return dsgTunnelAddress ;
    //}

    
    // Setter for dsgTunnelAddress
    //public void setDsgTunnelAddress(IPv4Address val)
    //{
    //    this.dsgTunnelAddress= val;
    //}
    // Getter for source_ip_address
    //public IPv6Address getSource_ip_address()
    //{
    //    return source_ip_address ;
    //}

    
    // Setter for source_ip_address
    //public void setSource_ip_address(IPv6Address val)
    //{
    //    this.source_ip_address= val;
    //}
    // Getter for destination_ip_address
    //public IPv6Address getDestination_ip_address()
    //{
    //    return destination_ip_address ;
    //}

    
    // Setter for destination_ip_address
    //public void setDestination_ip_address(IPv6Address val)
    //{
    //    this.destination_ip_address= val;
    //}
    // Getter for source_port_number
    //public int getSource_port_number()
    //{
    //    return source_port_number ;
    //}

    
    // Setter for source_port_number
    //public void setSource_port_number(int val)
    //{
    //    this.source_port_number= val;
    //}
    // Getter for destination_port_number
    //public int getDestination_port_number()
    //{
    //    return destination_port_number ;
    //}

    
    // Setter for destination_port_number
    //public void setDestination_port_number(int val)
    //{
    //    this.destination_port_number= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code