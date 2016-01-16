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

public  class CaPmtReply_2_1 extends   APDUBaseFactory.APDUBase { //Concrete type is CaPmtReply_2_1




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // programIndex
    public short programIndex ;
    // txnId
    public short txnId ;
    // ltsid
    public short ltsid ;
    // programNumber
    public int programNumber ;
    // sourceId
    public int sourceId ;
    // bf1
    public BitField_8 bf1 ;
    // bf2
    public BitField_8 bf2 ;
    // CaEntries
    public ArrayList<CaEntry> CaEntries ;

    public CaPmtReply_2_1 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize programIndex

        // Initialize txnId

        // Initialize ltsid

        // Initialize programNumber

        // Initialize sourceId

        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize CaEntries
        CaEntries= new ArrayList<CaEntry>();
        CaEntries.setMemberSize(0);
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
        // read programIndex
        {
            programIndex=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read txnId
        {
            txnId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read ltsid
        {
            ltsid=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read programNumber
        {
            programNumber=istream.readUnsignedShort();
            retVal+=2;
        }
        // read sourceId
        {
            sourceId=istream.readUnsignedShort();
            retVal+=2;
        }
        // read bf1
        retVal += bf1.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read CaEntries
        for (; istream.available() > 0 ; ) {
            CaEntry temp;
            temp = new CaEntry();
            retVal += temp.read(istream);
            CaEntries.add(temp);
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
        // read programIndex
        {
            programIndex=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read txnId
        {
            txnId=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read ltsid
        {
            ltsid=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read programNumber
        {
            programNumber=istream.readUnsignedShort();
            retVal+=2;
        }
        // read sourceId
        {
            sourceId=istream.readUnsignedShort();
            retVal+=2;
        }
        // read bf1
        retVal += bf1.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read CaEntries
        for (; istream.available() > 0 ; ) {
            CaEntry temp;
            temp = new CaEntry();
            retVal += temp.read(istream);
            CaEntries.add(temp);
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








        {   /** fix dependent sizes for CaEntries**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write programIndex
        ostream.writeByte(programIndex);
        retVal +=1;
        // write txnId
        ostream.writeByte(txnId);
        retVal +=1;
        // write ltsid
        ostream.writeByte(ltsid);
        retVal +=1;
        // write programNumber
        ostream.writeShort(programNumber);
        retVal +=2;
        // write sourceId
        ostream.writeShort(sourceId);
        retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal +=1;
        // write bf2
        ostream.writeByte(bf2.getValue());
        retVal +=1;
        // write CaEntries
        {
            ArrayList<CaEntry> temp1 = CaEntries;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CaEntry temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("CaPmtReply_2_1\n");
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
        // write programIndex
        dc.indent();
        dc.getPs().println("programIndex="+programIndex+"(0x"+ Integer.toHexString(programIndex) + ")" );
        // write txnId
        dc.indent();
        dc.getPs().println("txnId="+txnId+"(0x"+ Integer.toHexString(txnId) + ")" );
        // write ltsid
        dc.indent();
        dc.getPs().println("ltsid="+ltsid+"(0x"+ Integer.toHexString(ltsid) + ")" );
        // write programNumber
        dc.indent();
        dc.getPs().println("programNumber="+programNumber+"(0x"+ Integer.toHexString(programNumber) + ")" );
        // write sourceId
        dc.indent();
        dc.getPs().println("sourceId="+sourceId+"(0x"+ Integer.toHexString(sourceId) + ")" );
        // write bf1
        {
            dc.indent();
            dc.getPs().print("reserved1: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved1(),2));
            dc.indent();
            dc.getPs().print("versionNumber: ");
            dc.getPs().println(BitField_8.toDisplayString(getVersionNumber(),5));
            dc.indent();
            dc.getPs().print("currentNext: ");
            dc.getPs().println(BitField_8.toDisplayString(getCurrentNext(),1));
        }
        // write bf2
        {
            dc.indent();
            dc.getPs().print("caEnableFlag: ");
            dc.getPs().println(BitField_8.toDisplayString(getCaEnableFlag(),1));
            dc.indent();
            dc.getPs().print("caEnable: ");
            dc.getPs().println(BitField_8.toDisplayString(getCaEnable(),7));
        }
        // write CaEntries
        {
            ArrayList<CaEntry> temp1 = CaEntries;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CaEntry element    = temp1.get(iIdx);
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
    // Getter for programIndex
    //public short getProgramIndex()
    //{
    //    return programIndex ;
    //}


    // Setter for programIndex
    //public void setProgramIndex(short val)
    //{
    //    this.programIndex= val;
    //}
    // Getter for txnId
    //public short getTxnId()
    //{
    //    return txnId ;
    //}


    // Setter for txnId
    //public void setTxnId(short val)
    //{
    //    this.txnId= val;
    //}
    // Getter for ltsid
    //public short getLtsid()
    //{
    //    return ltsid ;
    //}


    // Setter for ltsid
    //public void setLtsid(short val)
    //{
    //    this.ltsid= val;
    //}
    // Getter for programNumber
    //public int getProgramNumber()
    //{
    //    return programNumber ;
    //}


    // Setter for programNumber
    //public void setProgramNumber(int val)
    //{
    //    this.programNumber= val;
    //}
    // Getter for sourceId
    //public int getSourceId()
    //{
    //    return sourceId ;
    //}


    // Setter for sourceId
    //public void setSourceId(int val)
    //{
    //    this.sourceId= val;
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
    // Getter for bf2
    //public BitField_8 getBf2()
    //{
    //    return bf2 ;
    //}


    // Setter for bf2
    //public void setBf2(BitField_8 val)
    //{
    //    this.bf2= val;
    //}
    // Getter for CaEntries
    //public ArrayList<CaEntry> getCaEntries()
    //{
    //    return CaEntries ;
    //}


    // Setter for CaEntries
    //public void setCaEntries(ArrayList<CaEntry> val)
    //{
    //    this.CaEntries= val;
    //}


    public int getReserved1( )
    {
        return ( bf1.getValue() & 0x000000c0 ) >> 6 ;
    }


    public void setReserved1(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }


    public int getVersionNumber( )
    {
        return ( bf1.getValue() & 0x0000003e ) >> 1 ;
    }


    public void setVersionNumber(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
    }


    public int getCurrentNext( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }


    public void setCurrentNext(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }


    public int getCaEnableFlag( )
    {
        return ( bf2.getValue() & 0x00000080 ) >> 7 ;
    }


    public void setCaEnableFlag(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }


    public int getCaEnable( )
    {
        return ( bf2.getValue() & 0x0000007f ) >> 0 ;
    }


    public void setCaEnable(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
    }


    public int addToCaEntries(CaEntry val)
    {
        CaEntries.add(val);
        return CaEntries.size();
    }


    public int removeFromCaEntries(CaEntry val)
    {
        CaEntries.remove(val);
        return CaEntries.size();
    }


    public int removeNthFromCaEntries(int idx)
    {
        CaEntries.remove(idx);
        return CaEntries.size();
    }


    public int emptyCaEntries(int idx)
    {
        CaEntries.clear();
        return CaEntries.size();
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