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
@Created(date = "Fri Jan 15 01:33:02 EST 2016")

public  class NetAddressReportMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // netAddressType
    public short netAddressType ;
    // networkAddresses
    public ByteArray networkAddresses ;
    // SubnetworkAddresses
    public ByteArray SubnetworkAddresses ;

        public NetAddressReportMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize netAddressType
        
        // Initialize networkAddresses
        networkAddresses= new ByteArray();networkAddresses.setSizeType("FIRST_UI8");
        // Initialize SubnetworkAddresses
        SubnetworkAddresses= new ByteArray();SubnetworkAddresses.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read netAddressType
        {netAddressType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read networkAddresses
        {retVal+=networkAddresses.read(istream); }
        // read SubnetworkAddresses
        {retVal+=SubnetworkAddresses.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for networkAddresses**/  }
        { /** fix dependent sizes for SubnetworkAddresses**/  }
    
                // write netAddressType
        ostream.writeByte(netAddressType); retVal +=1;
        // write networkAddresses
        {retVal += networkAddresses.write(ostream);}
        // write SubnetworkAddresses
        {retVal += SubnetworkAddresses.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("NetAddressReportMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write netAddressType
        dc.indent();dc.getPs().println("netAddressType="+netAddressType+"(0x"+ Integer.toHexString(netAddressType) + ")" );
        // write networkAddresses
        dc.indent();dc.getPs().print("networkAddresses: "+networkAddresses.getSize()+"(0x"+Integer.toHexString(networkAddresses.getSize())+")\n");this.networkAddresses.dump(dc);
        // write SubnetworkAddresses
        dc.indent();dc.getPs().print("SubnetworkAddresses: "+SubnetworkAddresses.getSize()+"(0x"+Integer.toHexString(SubnetworkAddresses.getSize())+")\n");this.SubnetworkAddresses.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for netAddressType
    //public short getNetAddressType()
    //{
    //    return netAddressType ;
    //}

    
    // Setter for netAddressType
    //public void setNetAddressType(short val)
    //{
    //    this.netAddressType= val;
    //}
    // Getter for networkAddresses
    //public ByteArray getNetworkAddresses()
    //{
    //    return networkAddresses ;
    //}

    
    // Setter for networkAddresses
    //public void setNetworkAddresses(ByteArray val)
    //{
    //    this.networkAddresses= val;
    //}
    // Getter for SubnetworkAddresses
    //public ByteArray getSubnetworkAddresses()
    //{
    //    return SubnetworkAddresses ;
    //}

    
    // Setter for SubnetworkAddresses
    //public void setSubnetworkAddresses(ByteArray val)
    //{
    //    this.SubnetworkAddresses= val;
    //}


    public void setNetworkAddresses(byte[] val)
    {
        this.networkAddresses.setData(val);
    }
    
    
    public void setSubnetworkAddresses(byte[] val)
    {
        this.SubnetworkAddresses.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code