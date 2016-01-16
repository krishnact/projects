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
@Created(date = "Fri Jan 15 01:33:01 EST 2016")

public  class ADSG_Filter extends BinStruct implements PublicBinMsg {




    // members variables
    // tunnelID
    public short tunnelID ;
    // tunnelPriority
    public short tunnelPriority ;
    // source_IP_address
    public long source_IP_address ;
    // source_IP_mask
    public long source_IP_mask ;
    // destination_IP_address
    public long destination_IP_address ;
    // destination_port_start
    public int destination_port_start ;
    // destination_port_end
    public int destination_port_end ;

    public ADSG_Filter () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize tunnelID

        // Initialize tunnelPriority

        // Initialize source_IP_address

        // Initialize source_IP_mask

        // Initialize destination_IP_address

        // Initialize destination_port_start

        // Initialize destination_port_end

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read tunnelID
        {
            tunnelID=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read tunnelPriority
        {
            tunnelPriority=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read source_IP_address
        {
            source_IP_address=(long)(BinPrimitive.readUI32(istream) );
            retVal+=4;
        }
        // read source_IP_mask
        {
            source_IP_mask=(long)(BinPrimitive.readUI32(istream) );
            retVal+=4;
        }
        // read destination_IP_address
        {
            destination_IP_address=(long)(BinPrimitive.readUI32(istream) );
            retVal+=4;
        }
        // read destination_port_start
        {
            destination_port_start=istream.readUnsignedShort();
            retVal+=2;
        }
        // read destination_port_end
        {
            destination_port_end=istream.readUnsignedShort();
            retVal+=2;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;









        // write tunnelID
        ostream.writeByte(tunnelID);
        retVal +=1;
        // write tunnelPriority
        ostream.writeByte(tunnelPriority);
        retVal +=1;
        // write source_IP_address
        BinPrimitive.writeUI32(ostream,source_IP_address);
        retVal +=4;
        // write source_IP_mask
        BinPrimitive.writeUI32(ostream,source_IP_mask);
        retVal +=4;
        // write destination_IP_address
        BinPrimitive.writeUI32(ostream,destination_IP_address);
        retVal +=4;
        // write destination_port_start
        ostream.writeShort(destination_port_start);
        retVal +=2;
        // write destination_port_end
        ostream.writeShort(destination_port_end);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("ADSG_Filter\n");
        dc.increaseIndent();
        int retVal= 0;
        // write tunnelID
        dc.indent();
        dc.getPs().println("tunnelID="+tunnelID+"(0x"+ Integer.toHexString(tunnelID) + ")" );
        // write tunnelPriority
        dc.indent();
        dc.getPs().println("tunnelPriority="+tunnelPriority+"(0x"+ Integer.toHexString(tunnelPriority) + ")" );
        // write source_IP_address
        dc.indent();
        dc.getPs().println("source_IP_address="+source_IP_address+"(0x"+ Long.toHexString(source_IP_address)+")") ;
        // write source_IP_mask
        dc.indent();
        dc.getPs().println("source_IP_mask="+source_IP_mask+"(0x"+ Long.toHexString(source_IP_mask)+")") ;
        // write destination_IP_address
        dc.indent();
        dc.getPs().println("destination_IP_address="+destination_IP_address+"(0x"+ Long.toHexString(destination_IP_address)+")") ;
        // write destination_port_start
        dc.indent();
        dc.getPs().println("destination_port_start="+destination_port_start+"(0x"+ Integer.toHexString(destination_port_start) + ")" );
        // write destination_port_end
        dc.indent();
        dc.getPs().println("destination_port_end="+destination_port_end+"(0x"+ Integer.toHexString(destination_port_end) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for tunnelID
    //public short getTunnelID()
    //{
    //    return tunnelID ;
    //}


    // Setter for tunnelID
    //public void setTunnelID(short val)
    //{
    //    this.tunnelID= val;
    //}
    // Getter for tunnelPriority
    //public short getTunnelPriority()
    //{
    //    return tunnelPriority ;
    //}


    // Setter for tunnelPriority
    //public void setTunnelPriority(short val)
    //{
    //    this.tunnelPriority= val;
    //}
    // Getter for source_IP_address
    //public long getSource_IP_address()
    //{
    //    return source_IP_address ;
    //}


    // Setter for source_IP_address
    //public void setSource_IP_address(long val)
    //{
    //    this.source_IP_address= val;
    //}
    // Getter for source_IP_mask
    //public long getSource_IP_mask()
    //{
    //    return source_IP_mask ;
    //}


    // Setter for source_IP_mask
    //public void setSource_IP_mask(long val)
    //{
    //    this.source_IP_mask= val;
    //}
    // Getter for destination_IP_address
    //public long getDestination_IP_address()
    //{
    //    return destination_IP_address ;
    //}


    // Setter for destination_IP_address
    //public void setDestination_IP_address(long val)
    //{
    //    this.destination_IP_address= val;
    //}
    // Getter for destination_port_start
    //public int getDestination_port_start()
    //{
    //    return destination_port_start ;
    //}


    // Setter for destination_port_start
    //public void setDestination_port_start(int val)
    //{
    //    this.destination_port_start= val;
    //}
    // Getter for destination_port_end
    //public int getDestination_port_end()
    //{
    //    return destination_port_end ;
    //}


    // Setter for destination_port_end
    //public void setDestination_port_end(int val)
    //{
    //    this.destination_port_end= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code