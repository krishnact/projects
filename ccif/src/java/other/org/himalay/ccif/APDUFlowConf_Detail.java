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

public  class APDUFlowConf_Detail extends BinStruct implements PublicBinMsg {




    // members variables
    // flowId
    public int flowId ;
    // serviceType
    public short serviceType ;
    // ipUnicast
    public ServiceIPUnicast ipUnicast ;
    // ipMulticast
    public ServiceIPMulticast ipMulticast ;
    // socket
    public ServiceSocket socket ;

    public APDUFlowConf_Detail () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize flowId

        // Initialize serviceType

        // Initialize ipUnicast
        //Conditional, will be initialized during read
        // Initialize ipMulticast
        //Conditional, will be initialized during read
        // Initialize socket
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

        // read flowId
        {
            flowId= BinPrimitive.readUI24(istream);
            retVal += 3;
        }
        // read serviceType
        {
            serviceType=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read ipUnicast
        if (serviceType==0x01) {
            ipUnicast = new ServiceIPUnicast();
            retVal += ipUnicast.read(istream);
        }
        // read ipMulticast
        if (serviceType==0x02) {
            ipMulticast = new ServiceIPMulticast();
            retVal += ipMulticast.read(istream);
        }
        // read socket
        if (serviceType==0x04) {
            socket = new ServiceSocket();
            retVal += socket.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;



        {   /** fix dependent sizes for ipUnicast **/
        }
        {   /** fix dependent sizes for ipMulticast **/
        }
        {   /** fix dependent sizes for socket **/
        }

        // write flowId
        {
            ostream.writeByte((flowId  & 0x00FF0000)>>16);
            ostream.writeShort((flowId & 0x0000FFFF));
            retVal+=3;
        }
        // write serviceType
        ostream.writeByte(serviceType);
        retVal +=1;
        // write ipUnicast
        if (ipUnicast!=null)retVal +=ipUnicast.write(ostream);
        // write ipMulticast
        if (ipMulticast!=null)retVal +=ipMulticast.write(ostream);
        // write socket
        if (socket!=null)retVal +=socket.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("APDUFlowConf_Detail\n");
        dc.increaseIndent();
        int retVal= 0;
        // write flowId
        dc.indent();
        dc.getPs().println("flowId="+flowId+"(0x"+ Integer.toHexString(flowId)+")") ;
        // write serviceType
        dc.indent();
        dc.getPs().println("serviceType="+serviceType+"(0x"+ Integer.toHexString(serviceType) + ")" );
        // write ipUnicast
        if ( ipUnicast != null ) {
            dc.indent();
            dc.getPs().println("ipUnicast") ;
            retVal +=ipUnicast.dump(dc);
        }
        // write ipMulticast
        if ( ipMulticast != null ) {
            dc.indent();
            dc.getPs().println("ipMulticast") ;
            retVal +=ipMulticast.dump(dc);
        }
        // write socket
        if ( socket != null ) {
            dc.indent();
            dc.getPs().println("socket") ;
            retVal +=socket.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for flowId
    //public int getFlowId()
    //{
    //    return flowId ;
    //}


    // Setter for flowId
    //public void setFlowId(int val)
    //{
    //    this.flowId= val;
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
    // Getter for socket
    //public ServiceSocket getSocket()
    //{
    //    return socket ;
    //}


    // Setter for socket
    //public void setSocket(ServiceSocket val)
    //{
    //    this.socket= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code