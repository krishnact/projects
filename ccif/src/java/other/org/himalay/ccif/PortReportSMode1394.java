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

public  class PortReportSMode1394 extends BinStruct implements PublicBinMsg {




    // members variables
    // totalNumberOfNodes
    public int totalNumberOfNodes ;
    // bf1
    public BitField_8 bf1 ;

    public PortReportSMode1394 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize totalNumberOfNodes

        // Initialize bf1
        bf1 = new BitField_8();
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read totalNumberOfNodes
        {
            totalNumberOfNodes=istream.readUnsignedShort();
            retVal+=2;
        }
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;




        // write totalNumberOfNodes
        ostream.writeShort(totalNumberOfNodes);
        retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal +=1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PortReportSMode1394\n");
        dc.increaseIndent();
        int retVal= 0;
        // write totalNumberOfNodes
        dc.indent();
        dc.getPs().println("totalNumberOfNodes="+totalNumberOfNodes+"(0x"+ Integer.toHexString(totalNumberOfNodes) + ")" );
        // write bf1
        {
            dc.indent();
            dc.getPs().print("reserved: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved(),3));
            dc.indent();
            dc.getPs().print("loopStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getLoopStatus(),1));
            dc.indent();
            dc.getPs().print("rootStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getRootStatus(),1));
            dc.indent();
            dc.getPs().print("cycleMasterStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getCycleMasterStatus(),1));
            dc.indent();
            dc.getPs().print("port_1ConnectionStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getPort_1ConnectionStatus(),1));
            dc.indent();
            dc.getPs().print("port_2ConnectionStatus: ");
            dc.getPs().println(BitField_8.toDisplayString(getPort_2ConnectionStatus(),1));
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for totalNumberOfNodes
    //public int getTotalNumberOfNodes()
    //{
    //    return totalNumberOfNodes ;
    //}


    // Setter for totalNumberOfNodes
    //public void setTotalNumberOfNodes(int val)
    //{
    //    this.totalNumberOfNodes= val;
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


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000e0 ) >> 5 ;
    }


    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
    }


    public int getLoopStatus( )
    {
        return ( bf1.getValue() & 0x00000010 ) >> 4 ;
    }


    public void setLoopStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffef) | ( (val << 4 ) & 0x00000010));
    }


    public int getRootStatus( )
    {
        return ( bf1.getValue() & 0x00000008 ) >> 3 ;
    }


    public void setRootStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
    }


    public int getCycleMasterStatus( )
    {
        return ( bf1.getValue() & 0x00000004 ) >> 2 ;
    }


    public void setCycleMasterStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
    }


    public int getPort_1ConnectionStatus( )
    {
        return ( bf1.getValue() & 0x00000002 ) >> 1 ;
    }


    public void setPort_1ConnectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
    }


    public int getPort_2ConnectionStatus( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }


    public void setPort_2ConnectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code