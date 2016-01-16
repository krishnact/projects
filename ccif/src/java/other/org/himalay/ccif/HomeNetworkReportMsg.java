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

public  class HomeNetworkReportMsg extends BinStruct implements PublicBinMsg {




    // members variables
    // clientMacAddress
    public MacAddress clientMacAddress ;
    // host_DRM_status
    public short host_DRM_status ;
    // clientsIpAddressByte
    public ByteArray clientsIpAddressByte ;
    // client_DRM_status
    public short client_DRM_status ;

    public HomeNetworkReportMsg () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize clientMacAddress
        clientMacAddress = new MacAddress();
        // Initialize host_DRM_status

        // Initialize clientsIpAddressByte
        clientsIpAddressByte= new ByteArray();
        clientsIpAddressByte.setSizeType("FIRST_UI8");
        // Initialize client_DRM_status

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read clientMacAddress
        retVal += clientMacAddress.read(istream);
        // read host_DRM_status
        {
            host_DRM_status=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read clientsIpAddressByte
        {
            retVal+=clientsIpAddressByte.read(istream);
        }
        // read client_DRM_status
        {
            client_DRM_status=(short)(istream.readUnsignedByte());
            retVal+=1;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for clientMacAddress **/
        }

        {   /** fix dependent sizes for clientsIpAddressByte**/
        }


        // write clientMacAddress
        if (clientMacAddress!=null)retVal +=clientMacAddress.write(ostream);
        // write host_DRM_status
        ostream.writeByte(host_DRM_status);
        retVal +=1;
        // write clientsIpAddressByte
        {
            retVal += clientsIpAddressByte.write(ostream);
        }
        // write client_DRM_status
        ostream.writeByte(client_DRM_status);
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("HomeNetworkReportMsg\n");
        dc.increaseIndent();
        int retVal= 0;
        // write clientMacAddress
        if ( clientMacAddress != null ) {
            dc.indent();
            dc.getPs().println("clientMacAddress") ;
            retVal +=clientMacAddress.dump(dc);
        }
        // write host_DRM_status
        dc.indent();
        dc.getPs().println("host_DRM_status="+host_DRM_status+"(0x"+ Integer.toHexString(host_DRM_status) + ")" );
        // write clientsIpAddressByte
        dc.indent();
        dc.getPs().print("clientsIpAddressByte: "+clientsIpAddressByte.getSize()+"(0x"+Integer.toHexString(clientsIpAddressByte.getSize())+")\n");
        this.clientsIpAddressByte.dump(dc);
        // write client_DRM_status
        dc.indent();
        dc.getPs().println("client_DRM_status="+client_DRM_status+"(0x"+ Integer.toHexString(client_DRM_status) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for clientMacAddress
    //public MacAddress getClientMacAddress()
    //{
    //    return clientMacAddress ;
    //}


    // Setter for clientMacAddress
    //public void setClientMacAddress(MacAddress val)
    //{
    //    this.clientMacAddress= val;
    //}
    // Getter for host_DRM_status
    //public short getHost_DRM_status()
    //{
    //    return host_DRM_status ;
    //}


    // Setter for host_DRM_status
    //public void setHost_DRM_status(short val)
    //{
    //    this.host_DRM_status= val;
    //}
    // Getter for clientsIpAddressByte
    //public ByteArray getClientsIpAddressByte()
    //{
    //    return clientsIpAddressByte ;
    //}


    // Setter for clientsIpAddressByte
    //public void setClientsIpAddressByte(ByteArray val)
    //{
    //    this.clientsIpAddressByte= val;
    //}
    // Getter for client_DRM_status
    //public short getClient_DRM_status()
    //{
    //    return client_DRM_status ;
    //}


    // Setter for client_DRM_status
    //public void setClient_DRM_status(short val)
    //{
    //    this.client_DRM_status= val;
    //}


    public void setClientsIpAddressByte(byte[] val)
    {
        this.clientsIpAddressByte.setData(val);
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code