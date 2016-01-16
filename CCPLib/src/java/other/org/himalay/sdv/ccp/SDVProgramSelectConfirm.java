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
public class SDVProgramSelectConfirm
    extends
    SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete type is
    // SDVProgramSelectConfirm

    // members variables
    // header
    public MessageHeader header;
    // messageLength
    public int messageLength;
    // sessionId
    public SessionId sessionId;
    // response
    public int response;
    // sourceId
    public long sourceId;
    // privateDataLength
    public int privateDataLength;
    // signaling
    public short signaling;
    // modulationFormat
    public short modulationFormat;
    // tuningFrequency
    public long tuningFrequency;
    // mpegProgramNumber
    public int mpegProgramNumber;
    // reserved
    public int reserved;

    public SDVProgramSelectConfirm() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new MessageHeader();
        // Initialize messageLength
        messageLength = (int) 0x1c;
        // Initialize sessionId
        sessionId = new SessionId();
        // Initialize response

        // Initialize sourceId

        // Initialize privateDataLength
        privateDataLength = (int) 0x0a;
        // Initialize signaling

        // Initialize modulationFormat

        // Initialize tuningFrequency

        // Initialize mpegProgramNumber

        // Initialize reserved
        reserved = (int) 0xFFFF;
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
        // read response
        {
            response = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sourceId
        {
            sourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read signaling
        {
            signaling = (short) (istream.readUnsignedByte());
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
        // read reserved
        {
            reserved = istream.readUnsignedShort();
            retVal += 2;
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
        // read response
        {
            response = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sourceId
        {
            sourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read signaling
        {
            signaling = (short) (istream.readUnsignedByte());
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
        // read reserved
        {
            reserved = istream.readUnsignedShort();
            retVal += 2;
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
        // write response
        ostream.writeShort(response);
        retVal += 2;
        // write sourceId
        BinPrimitive.writeUI32(ostream, sourceId);
        retVal += 4;
        // write privateDataLength
        ostream.writeShort(privateDataLength);
        retVal += 2;
        // write signaling
        ostream.writeByte(signaling);
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
        // write reserved
        ostream.writeShort(reserved);
        retVal += 2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SDVProgramSelectConfirm\n");
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
        // write response
        dc.indent();
        dc.getPs().println(
            "response=" + response + "(0x" + Integer.toHexString(response)
            + ")");
        // write sourceId
        dc.indent();
        dc.getPs().println(
            "sourceId=" + sourceId + "(0x" + Long.toHexString(sourceId)
            + ")");
        // write privateDataLength
        dc.indent();
        dc.getPs().println(
            "privateDataLength=" + privateDataLength + "(0x"
            + Integer.toHexString(privateDataLength) + ")");
        // write signaling
        dc.indent();
        dc.getPs().println(
            "signaling=" + signaling + "(0x"
            + Integer.toHexString(signaling) + ")");
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
        // write reserved
        dc.indent();
        dc.getPs().println(
            "reserved=" + reserved + "(0x" + Integer.toHexString(reserved)
            + ")");
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
    // Getter for response
    // public int getResponse()
    // {
    // return response ;
    // }

    // Setter for response
    // public void setResponse(int val)
    // {
    // this.response= val;
    // }
    // Getter for sourceId
    // public long getSourceId()
    // {
    // return sourceId ;
    // }

    // Setter for sourceId
    // public void setSourceId(long val)
    // {
    // this.sourceId= val;
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
    // Getter for signaling
    // public short getSignaling()
    // {
    // return signaling ;
    // }

    // Setter for signaling
    // public void setSignaling(short val)
    // {
    // this.signaling= val;
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
    // Getter for reserved
    // public int getReserved()
    // {
    // return reserved ;
    // }

    // Setter for reserved
    // public void setReserved(int val)
    // {
    // this.reserved= val;
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