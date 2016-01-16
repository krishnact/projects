// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SDVProgramSelectIndication
    extends
    SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete type is
    // SDVProgramSelectIndication

    // members variables
    // header
    public MessageHeader header;
    // messageLength
    public int messageLength;
    // sessionId
    public SessionId sessionId;
    // reason
    public int reason;
    // newSourceId
    public long newSourceId;
    // privateDataLength
    public int privateDataLength;
    // reserved1
    public short reserved1;
    // modulationFormat
    public short modulationFormat;
    // tuningFrequency
    public long tuningFrequency;
    // mpegProgramNumber
    public int mpegProgramNumber;
    // reserved2
    public int reserved2;
    // currentSourceId
    public long currentSourceId;

    public SDVProgramSelectIndication() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new MessageHeader();
        // Initialize messageLength
        messageLength = (int) 0x20;
        // Initialize sessionId
        sessionId = new SessionId();
        // Initialize reason

        // Initialize newSourceId

        // Initialize privateDataLength
        privateDataLength = (int) 0x0e;
        // Initialize reserved1
        reserved1 = (short) 0xff;
        // Initialize modulationFormat

        // Initialize tuningFrequency

        // Initialize mpegProgramNumber

        // Initialize reserved2
        reserved2 = (int) 0xFFFF;
        // Initialize currentSourceId

    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read messageLength
        {
            messageLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sessionId
        retVal += sessionId.read(istream);
        // read reason
        {
            reason = istream.readUnsignedShort();
            retVal += 2;
        }
        // read newSourceId
        {
            newSourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved1
        {
            reserved1 = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read modulationFormat
        {
            modulationFormat = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tuningFrequency
        {
            tuningFrequency = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read mpegProgramNumber
        {
            mpegProgramNumber = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved2
        {
            reserved2 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read currentSourceId
        {
            currentSourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read header
        retVal += header.read(istream);
        // read messageLength
        {
            messageLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sessionId
        retVal += sessionId.read(istream);
        // read reason
        {
            reason = istream.readUnsignedShort();
            retVal += 2;
        }
        // read newSourceId
        {
            newSourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved1
        {
            reserved1 = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read modulationFormat
        {
            modulationFormat = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tuningFrequency
        {
            tuningFrequency = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read mpegProgramNumber
        {
            mpegProgramNumber = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved2
        {
            reserved2 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read currentSourceId
        {
            currentSourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for header **/
        }

        {
            /** fix dependent sizes for sessionId **/
        }

        // write header
        if (header != null)
            retVal += header.write(ostream);
        // write messageLength
        ostream.writeShort(messageLength);
        retVal += 2;
        // write sessionId
        if (sessionId != null)
            retVal += sessionId.write(ostream);
        // write reason
        ostream.writeShort(reason);
        retVal += 2;
        // write newSourceId
        BinPrimitive.writeUI32(ostream, newSourceId);
        retVal += 4;
        // write privateDataLength
        ostream.writeShort(privateDataLength);
        retVal += 2;
        // write reserved1
        ostream.writeByte(reserved1);
        retVal += 1;
        // write modulationFormat
        ostream.writeByte(modulationFormat);
        retVal += 1;
        // write tuningFrequency
        BinPrimitive.writeUI32(ostream, tuningFrequency);
        retVal += 4;
        // write mpegProgramNumber
        ostream.writeShort(mpegProgramNumber);
        retVal += 2;
        // write reserved2
        ostream.writeShort(reserved2);
        retVal += 2;
        // write currentSourceId
        BinPrimitive.writeUI32(ostream, currentSourceId);
        retVal += 4;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SDVProgramSelectIndication\n");
        dc.increaseIndent();
        int retVal = 0;
        // write header
        if (header != null) {
            dc.indent();
            dc.getPs().println("header");
            retVal += header.dump(dc);
        }
        // write messageLength
        dc.indent();
        dc.getPs().println(
            "messageLength=" + messageLength + "(0x"
            + Integer.toHexString(messageLength) + ")");
        // write sessionId
        if (sessionId != null) {
            dc.indent();
            dc.getPs().println("sessionId");
            retVal += sessionId.dump(dc);
        }
        // write reason
        dc.indent();
        dc.getPs().println(
            "reason=" + reason + "(0x" + Integer.toHexString(reason) + ")");
        // write newSourceId
        dc.indent();
        dc.getPs().println(
            "newSourceId=" + newSourceId + "(0x"
            + Long.toHexString(newSourceId) + ")");
        // write privateDataLength
        dc.indent();
        dc.getPs().println(
            "privateDataLength=" + privateDataLength + "(0x"
            + Integer.toHexString(privateDataLength) + ")");
        // write reserved1
        dc.indent();
        dc.getPs().println(
            "reserved1=" + reserved1 + "(0x"
            + Integer.toHexString(reserved1) + ")");
        // write modulationFormat
        dc.indent();
        dc.getPs().println(
            "modulationFormat=" + modulationFormat + "(0x"
            + Integer.toHexString(modulationFormat) + ")");
        // write tuningFrequency
        dc.indent();
        dc.getPs().println(
            "tuningFrequency=" + tuningFrequency + "(0x"
            + Long.toHexString(tuningFrequency) + ")");
        // write mpegProgramNumber
        dc.indent();
        dc.getPs().println(
            "mpegProgramNumber=" + mpegProgramNumber + "(0x"
            + Integer.toHexString(mpegProgramNumber) + ")");
        // write reserved2
        dc.indent();
        dc.getPs().println(
            "reserved2=" + reserved2 + "(0x"
            + Integer.toHexString(reserved2) + ")");
        // write currentSourceId
        dc.indent();
        dc.getPs().println(
            "currentSourceId=" + currentSourceId + "(0x"
            + Long.toHexString(currentSourceId) + ")");
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for header
    // public MessageHeader getHeader()
    // {
    // return header ;
    // }

    // Setter for header
    // public void setHeader(MessageHeader val)
    // {
    // this.header= val;
    // }
    // Getter for messageLength
    // public int getMessageLength()
    // {
    // return messageLength ;
    // }

    // Setter for messageLength
    // public void setMessageLength(int val)
    // {
    // this.messageLength= val;
    // }
    // Getter for sessionId
    // public SessionId getSessionId()
    // {
    // return sessionId ;
    // }

    // Setter for sessionId
    // public void setSessionId(SessionId val)
    // {
    // this.sessionId= val;
    // }
    // Getter for reason
    // public int getReason()
    // {
    // return reason ;
    // }

    // Setter for reason
    // public void setReason(int val)
    // {
    // this.reason= val;
    // }
    // Getter for newSourceId
    // public long getNewSourceId()
    // {
    // return newSourceId ;
    // }

    // Setter for newSourceId
    // public void setNewSourceId(long val)
    // {
    // this.newSourceId= val;
    // }
    // Getter for privateDataLength
    // public int getPrivateDataLength()
    // {
    // return privateDataLength ;
    // }

    // Setter for privateDataLength
    // public void setPrivateDataLength(int val)
    // {
    // this.privateDataLength= val;
    // }
    // Getter for reserved1
    // public short getReserved1()
    // {
    // return reserved1 ;
    // }

    // Setter for reserved1
    // public void setReserved1(short val)
    // {
    // this.reserved1= val;
    // }
    // Getter for modulationFormat
    // public short getModulationFormat()
    // {
    // return modulationFormat ;
    // }

    // Setter for modulationFormat
    // public void setModulationFormat(short val)
    // {
    // this.modulationFormat= val;
    // }
    // Getter for tuningFrequency
    // public long getTuningFrequency()
    // {
    // return tuningFrequency ;
    // }

    // Setter for tuningFrequency
    // public void setTuningFrequency(long val)
    // {
    // this.tuningFrequency= val;
    // }
    // Getter for mpegProgramNumber
    // public int getMpegProgramNumber()
    // {
    // return mpegProgramNumber ;
    // }

    // Setter for mpegProgramNumber
    // public void setMpegProgramNumber(int val)
    // {
    // this.mpegProgramNumber= val;
    // }
    // Getter for reserved2
    // public int getReserved2()
    // {
    // return reserved2 ;
    // }

    // Setter for reserved2
    // public void setReserved2(int val)
    // {
    // this.reserved2= val;
    // }
    // Getter for currentSourceId
    // public long getCurrentSourceId()
    // {
    // return currentSourceId ;
    // }

    // Setter for currentSourceId
    // public void setCurrentSourceId(long val)
    // {
    // this.currentSourceId= val;
    // }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

    public void setHeader(MessageHeader header) {
        this.header = header;
    }

    public MessageHeader getHeader() {
        return this.header;
    }

}

// End of code