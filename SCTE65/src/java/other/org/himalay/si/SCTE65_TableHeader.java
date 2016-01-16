// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:36 EDT 2014")
public class SCTE65_TableHeader extends BinStruct implements PublicBinMsg {

    // members variables
    // messageType
    public short messageType;
    // bf1
    public BitField_16 bf1;

    public SCTE65_TableHeader() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize messageType

        // Initialize bf1
        bf1 = new BitField_16();
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read messageType
        {
            messageType = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        // write messageType
        ostream.writeByte(messageType);
        retVal += 1;
        // write bf1
        ostream.writeShort(bf1.getValue());
        retVal += 2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SCTE65_TableHeader\n");
        dc.increaseIndent();
        int retVal = 0;
        // write messageType
        dc.indent();
        dc.getPs().println(
            "messageType=" + messageType + "(0x"
            + Integer.toHexString(messageType) + ")");
        // write bf1
        {
            dc.indent();
            dc.getPs().print("zero: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero(), 2));
            dc.indent();
            dc.getPs().print("reserved: ");
            dc.getPs().println(BitField_8.toDisplayString(getReserved(), 2));
            dc.indent();
            dc.getPs().print("section_length: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getSection_length(), 12));
        }
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for messageType
    public short getMessageType() {
        return messageType;
    }

    // Setter for messageType
    public void setMessageType(short val) {
        this.messageType = val;
    }
    // Getter for bf1
    // public BitField_16 getBf1()
    // {
    // return bf1 ;
    // }

    // Setter for bf1
    // public void setBf1(BitField_16 val)
    // {
    // this.bf1= val;
    // }

    public int getZero() {
        return (bf1.getValue() & 0x0000c000) >> 14;
    }

    public void setZero(int val) {
        bf1.setValue((bf1.getValue() & 0xffff3fff) | ((val << 14) & 0x0000c000));
    }

    public int getReserved() {
        return (bf1.getValue() & 0x00003000) >> 12;
    }

    public void setReserved(int val) {
        bf1.setValue((bf1.getValue() & 0xffffcfff) | ((val << 12) & 0x00003000));
    }

    public int getSection_length() {
        return (bf1.getValue() & 0x00000fff) >> 0;
    }

    public void setSection_length(int val) {
        bf1.setValue((bf1.getValue() & 0xfffff000) | ((val << 0) & 0x00000fff));
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

}

// End of code