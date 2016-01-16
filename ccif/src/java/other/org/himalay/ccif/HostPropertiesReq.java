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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class HostPropertiesReq extends   APDUBaseFactory.APDUBase { //Concrete type is HostPropertiesReq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // hpr
    public ArrayList<HostPropertiesReqMsg> hpr ;

    public HostPropertiesReq () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize hpr
        hpr= new ArrayList<HostPropertiesReqMsg>();
        hpr.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read length
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read hpr
        for (; istream.available() > 0 ; ) {
            HostPropertiesReqMsg temp;
            temp = new HostPropertiesReqMsg();
            retVal += temp.read(istream);
            hpr.add(temp);
        }

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
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read hpr
        for (; istream.available() > 0 ; ) {
            HostPropertiesReqMsg temp;
            temp = new HostPropertiesReqMsg();
            retVal += temp.read(istream);
            hpr.add(temp);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for header **/
        }

        {   /** fix dependent sizes for hpr**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write hpr
        {
            ArrayList<HostPropertiesReqMsg> temp1 = hpr;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                HostPropertiesReqMsg temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("HostPropertiesReq\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write hpr
        {
            ArrayList<HostPropertiesReqMsg> temp1 = hpr;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                HostPropertiesReqMsg element    = temp1.get(iIdx);
                dc.indent();
                dc.getPs().println(iIdx);
                if ( element != null ) {
                    dc.indent();
                    dc.getPs().println("element") ;
                    retVal +=element.dump(dc);
                }
            }
        }
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
    // Getter for hpr
    //public ArrayList<HostPropertiesReqMsg> getHpr()
    //{
    //    return hpr ;
    //}


    // Setter for hpr
    //public void setHpr(ArrayList<HostPropertiesReqMsg> val)
    //{
    //    this.hpr= val;
    //}


    public int addToHpr(HostPropertiesReqMsg val)
    {
        hpr.add(val);
        return hpr.size();
    }


    public int removeFromHpr(HostPropertiesReqMsg val)
    {
        hpr.remove(val);
        return hpr.size();
    }


    public int removeNthFromHpr(int idx)
    {
        hpr.remove(idx);
        return hpr.size();
    }


    public int emptyHpr(int idx)
    {
        hpr.clear();
        return hpr.size();
    }


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