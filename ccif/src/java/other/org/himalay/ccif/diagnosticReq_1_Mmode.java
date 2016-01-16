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
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class diagnosticReq_1_Mmode extends   APDUBaseFactory.APDUBase { //Concrete type is diagnosticReq_1_Mmode




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // selfDiagnostics
    public ArrayList<diagnosticReq1mMosemsg> selfDiagnostics ;

    public diagnosticReq_1_Mmode () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize selfDiagnostics
        selfDiagnostics= new ArrayList<diagnosticReq1mMosemsg>();
        selfDiagnostics.setMemberSize(0);
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
        // read selfDiagnostics
        for (; istream.available() > 0 ; ) {
            diagnosticReq1mMosemsg temp;
            temp = new diagnosticReq1mMosemsg();
            retVal += temp.read(istream);
            selfDiagnostics.add(temp);
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
        // read selfDiagnostics
        for (; istream.available() > 0 ; ) {
            diagnosticReq1mMosemsg temp;
            temp = new diagnosticReq1mMosemsg();
            retVal += temp.read(istream);
            selfDiagnostics.add(temp);
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

        {   /** fix dependent sizes for selfDiagnostics**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write selfDiagnostics
        {
            ArrayList<diagnosticReq1mMosemsg> temp1 = selfDiagnostics;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                diagnosticReq1mMosemsg temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("diagnosticReq_1_Mmode\n");
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
        // write selfDiagnostics
        {
            ArrayList<diagnosticReq1mMosemsg> temp1 = selfDiagnostics;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                diagnosticReq1mMosemsg element    = temp1.get(iIdx);
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
    // Getter for selfDiagnostics
    //public ArrayList<diagnosticReq1mMosemsg> getSelfDiagnostics()
    //{
    //    return selfDiagnostics ;
    //}


    // Setter for selfDiagnostics
    //public void setSelfDiagnostics(ArrayList<diagnosticReq1mMosemsg> val)
    //{
    //    this.selfDiagnostics= val;
    //}


    public int addToSelfDiagnostics(diagnosticReq1mMosemsg val)
    {
        selfDiagnostics.add(val);
        return selfDiagnostics.size();
    }


    public int removeFromSelfDiagnostics(diagnosticReq1mMosemsg val)
    {
        selfDiagnostics.remove(val);
        return selfDiagnostics.size();
    }


    public int removeNthFromSelfDiagnostics(int idx)
    {
        selfDiagnostics.remove(idx);
        return selfDiagnostics.size();
    }


    public int emptySelfDiagnostics(int idx)
    {
        selfDiagnostics.clear();
        return selfDiagnostics.size();
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