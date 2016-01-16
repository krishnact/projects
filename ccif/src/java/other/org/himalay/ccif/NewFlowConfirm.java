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

public  class NewFlowConfirm extends   APDUBase_1Factory.APDUBase_1 { //Concrete type is NewFlowConfirm




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // statusField
    public short statusField ;
    // flowsRemaining
    public short flowsRemaining ;
    // flowDetails
    public APDUFlowConf_Detail flowDetails ;

    public NewFlowConfirm () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize statusField

        // Initialize flowsRemaining

        // Initialize flowDetails
        //Conditional, will be initialized during read
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
        // read statusField
        {
            statusField=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowsRemaining
        {
            flowsRemaining=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowDetails
        if (statusField==0x00) {
            flowDetails = new APDUFlowConf_Detail();
            retVal += flowDetails.read(istream);
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
        // read statusField
        {
            statusField=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowsRemaining
        {
            flowsRemaining=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowDetails
        if (statusField==0x00) {
            flowDetails = new APDUFlowConf_Detail();
            retVal += flowDetails.read(istream);
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



        {   /** fix dependent sizes for flowDetails **/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write statusField
        ostream.writeByte(statusField);
        retVal +=1;
        // write flowsRemaining
        ostream.writeByte(flowsRemaining);
        retVal +=1;
        // write flowDetails
        if (flowDetails!=null)retVal +=flowDetails.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("NewFlowConfirm\n");
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
        // write statusField
        dc.indent();
        dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write flowsRemaining
        dc.indent();
        dc.getPs().println("flowsRemaining="+flowsRemaining+"(0x"+ Integer.toHexString(flowsRemaining) + ")" );
        // write flowDetails
        if ( flowDetails != null ) {
            dc.indent();
            dc.getPs().println("flowDetails") ;
            retVal +=flowDetails.dump(dc);
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
    // Getter for statusField
    //public short getStatusField()
    //{
    //    return statusField ;
    //}


    // Setter for statusField
    //public void setStatusField(short val)
    //{
    //    this.statusField= val;
    //}
    // Getter for flowsRemaining
    //public short getFlowsRemaining()
    //{
    //    return flowsRemaining ;
    //}


    // Setter for flowsRemaining
    //public void setFlowsRemaining(short val)
    //{
    //    this.flowsRemaining= val;
    //}
    // Getter for flowDetails
    //public APDUFlowConf_Detail getFlowDetails()
    //{
    //    return flowDetails ;
    //}


    // Setter for flowDetails
    //public void setFlowDetails(APDUFlowConf_Detail val)
    //{
    //    this.flowDetails= val;
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