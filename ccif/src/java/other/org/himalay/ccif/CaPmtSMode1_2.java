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

public  class CaPmtSMode1_2 extends   APDUBaseFactory.APDUBase { //Concrete type is CaPmtSMode1_2


// member static classes
    public  static  class StatusfieldCheck extends BinStruct implements PublicBinMsg {




        // members variables
        // caPmtCmdId
        public short caPmtCmdId ;
        // programInfoLength
        public ArrayList<CaDescriptor> programInfoLength ;

        // Parent of this object
        CaPmtSMode1_2 parent;
        public StatusfieldCheck (CaPmtSMode1_2 parent) // throws Exception
        {
            this.parent= parent;
            init();
        }
        public CaPmtSMode1_2 getParent()
        {
            return parent;
        }

        private void init()
        {
            // Initialize caPmtCmdId

            // Initialize programInfoLength
            programInfoLength= new ArrayList<CaDescriptor>();
            programInfoLength.setMemberSize(0);
        }

        public int readNoHeader(DataInputStream istream) throws IOException
        {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException
        {
            preRead();
            int retVal= 0;

            // read caPmtCmdId
            {
                caPmtCmdId=(short)(istream.readUnsignedByte());
                retVal+=1;
            }
            // read programInfoLength
            for (; istream.available() > 0 ; ) {
                CaDescriptor temp;
                temp = new CaDescriptor();
                retVal += temp.read(istream);
                programInfoLength.add(temp);
            }

            postRead();
            return retVal;
        }


        public int write(DataOutputStream ostream) throws IOException
        {
            preWrite();
            int retVal= 0;


            {   /** fix dependent sizes for programInfoLength**/
            }

            // write caPmtCmdId
            ostream.writeByte(caPmtCmdId);
            retVal +=1;
            // write programInfoLength
            {
                ArrayList<CaDescriptor> temp1 = programInfoLength;
                for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                    CaDescriptor temp2    =    temp1.get(iIdx);
                    if (temp2!=null)retVal +=temp2.write(ostream);
                }
            }
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException
        {
            dc.indent();
            dc.getPs().print("StatusfieldCheck\n");
            dc.increaseIndent();
            int retVal= 0;
            // write caPmtCmdId
            dc.indent();
            dc.getPs().println("caPmtCmdId="+caPmtCmdId+"(0x"+ Integer.toHexString(caPmtCmdId) + ")" );
            // write programInfoLength
            {
                ArrayList<CaDescriptor> temp1 = programInfoLength;
                for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                    CaDescriptor element    = temp1.get(iIdx);
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


        // Getter for caPmtCmdId
        //public short getCaPmtCmdId()
        //{
        //    return caPmtCmdId ;
        //}


        // Setter for caPmtCmdId
        //public void setCaPmtCmdId(short val)
        //{
        //    this.caPmtCmdId= val;
        //}
        // Getter for programInfoLength
        //public ArrayList<CaDescriptor> getProgramInfoLength()
        //{
        //    return programInfoLength ;
        //}


        // Setter for programInfoLength
        //public void setProgramInfoLength(ArrayList<CaDescriptor> val)
        //{
        //    this.programInfoLength= val;
        //}


        public int addToProgramInfoLength(CaDescriptor val)
        {
            programInfoLength.add(val);
            return programInfoLength.size();
        }


        public int removeFromProgramInfoLength(CaDescriptor val)
        {
            programInfoLength.remove(val);
            return programInfoLength.size();
        }


        public int removeNthFromProgramInfoLength(int idx)
        {
            programInfoLength.remove(idx);
            return programInfoLength.size();
        }


        public int emptyProgramInfoLength(int idx)
        {
            programInfoLength.clear();
            return programInfoLength.size();
        }


        public int getSize() throws IOException
        {
            DataOutputStream dos= new DataOutputStream(new NullStream());
            return this.write(dos);
        }



    }

// End of code


    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // caPmtlisMngement
    public short caPmtlisMngement ;
    // programNumber
    public int programNumber ;
    // bf1
    public BitField_8 bf1 ;
    // bf2
    public BitField_16 bf2 ;
    // StatusfieldCheckInstance
    public StatusfieldCheck StatusfieldCheckInstance ;
    // CaEntries
    public ArrayList<CaPmtModeMsg> CaEntries ;

    public CaPmtSMode1_2 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize caPmtlisMngement

        // Initialize programNumber

        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize bf2
        bf2 = new BitField_16();
        // Initialize StatusfieldCheckInstance
        //Conditional, will be initialized during read
        // Initialize CaEntries
        CaEntries= new ArrayList<CaPmtModeMsg>();
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
        // read caPmtlisMngement
        {
            caPmtlisMngement=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read programNumber
        {
            programNumber=istream.readUnsignedShort();
            retVal+=2;
        }
        // read bf1
        retVal += bf1.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read StatusfieldCheckInstance
        if(getProgramInfoLength() != 0) {
            StatusfieldCheckInstance = new StatusfieldCheck(this);
            retVal += StatusfieldCheckInstance.read(istream);
        }
        // read CaEntries
        for (; istream.available() > 0 ; ) {
            CaPmtModeMsg temp;
            temp = new CaPmtModeMsg();
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
        // read caPmtlisMngement
        {
            caPmtlisMngement=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read programNumber
        {
            programNumber=istream.readUnsignedShort();
            retVal+=2;
        }
        // read bf1
        retVal += bf1.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read StatusfieldCheckInstance
        if(getProgramInfoLength() != 0) {
            StatusfieldCheckInstance = new StatusfieldCheck(this);
            retVal += StatusfieldCheckInstance.read(istream);
        }
        // read CaEntries
        for (; istream.available() > 0 ; ) {
            CaPmtModeMsg temp;
            temp = new CaPmtModeMsg();
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





        {   /** fix dependent sizes for StatusfieldCheckInstance **/
        }
        {   /** fix dependent sizes for CaEntries**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write caPmtlisMngement
        ostream.writeByte(caPmtlisMngement);
        retVal +=1;
        // write programNumber
        ostream.writeShort(programNumber);
        retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal +=1;
        // write bf2
        ostream.writeShort(bf2.getValue());
        retVal +=2;
        // write StatusfieldCheckInstance
        if (StatusfieldCheckInstance!=null)retVal +=StatusfieldCheckInstance.write(ostream);
        // write CaEntries
        {
            ArrayList<CaPmtModeMsg> temp1 = CaEntries;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CaPmtModeMsg temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("CaPmtSMode1_2\n");
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
        // write caPmtlisMngement
        dc.indent();
        dc.getPs().println("caPmtlisMngement="+caPmtlisMngement+"(0x"+ Integer.toHexString(caPmtlisMngement) + ")" );
        // write programNumber
        dc.indent();
        dc.getPs().println("programNumber="+programNumber+"(0x"+ Integer.toHexString(programNumber) + ")" );
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
            dc.getPs().print("reserved: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved(),5));
            dc.indent();
            dc.getPs().print("programInfoLength: ");
            dc.getPs().println(BitField_8.toDisplayString(getProgramInfoLength(),12));
        }
        // write StatusfieldCheckInstance
        if ( StatusfieldCheckInstance != null ) {
            dc.indent();
            dc.getPs().println("StatusfieldCheckInstance") ;
            retVal +=StatusfieldCheckInstance.dump(dc);
        }
        // write CaEntries
        {
            ArrayList<CaPmtModeMsg> temp1 = CaEntries;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CaPmtModeMsg element    = temp1.get(iIdx);
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
    // Getter for caPmtlisMngement
    //public short getCaPmtlisMngement()
    //{
    //    return caPmtlisMngement ;
    //}


    // Setter for caPmtlisMngement
    //public void setCaPmtlisMngement(short val)
    //{
    //    this.caPmtlisMngement= val;
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
    //public BitField_16 getBf2()
    //{
    //    return bf2 ;
    //}


    // Setter for bf2
    //public void setBf2(BitField_16 val)
    //{
    //    this.bf2= val;
    //}
    // Getter for StatusfieldCheckInstance
    //public StatusfieldCheck getStatusfieldCheckInstance()
    //{
    //    return StatusfieldCheckInstance ;
    //}


    // Setter for StatusfieldCheckInstance
    //public void setStatusfieldCheckInstance(StatusfieldCheck val)
    //{
    //    this.StatusfieldCheckInstance= val;
    //}
    // Getter for CaEntries
    //public ArrayList<CaPmtModeMsg> getCaEntries()
    //{
    //    return CaEntries ;
    //}


    // Setter for CaEntries
    //public void setCaEntries(ArrayList<CaPmtModeMsg> val)
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


    public int getReserved( )
    {
        return ( bf2.getValue() & 0x0000f080 ) >> 7 ;
    }


    public void setReserved(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
    }


    public int getProgramInfoLength( )
    {
        return ( bf2.getValue() & 0x00000fff ) >> 0 ;
    }


    public void setProgramInfoLength(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }


    public int addToCaEntries(CaPmtModeMsg val)
    {
        CaEntries.add(val);
        return CaEntries.size();
    }


    public int removeFromCaEntries(CaPmtModeMsg val)
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