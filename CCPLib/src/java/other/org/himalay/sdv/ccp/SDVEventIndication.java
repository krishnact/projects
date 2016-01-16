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
public class SDVEventIndication extends SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete
    // type
    // is
    // SDVEventIndication

    // members variables
    // header
    public MessageHeader header;
    // messageLength
    public int messageLength;
    // sessionId
    public SessionId sessionId;
    // reserved1
    public int reserved1;
    // privateDataLength
    public int privateDataLength;
    // reserved2
    public int reserved2;
    // sourceId
    public long sourceId;
    // attributeTag
    public short attributeTag;
    // attributeLength
    public short attributeLength;
    // attributeData
    public int attributeData;

    public SDVEventIndication() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new MessageHeader();
        // Initialize messageLength
        messageLength = (int) 0x0016;
        // Initialize sessionId
        sessionId = new SessionId();
        // Initialize reserved1

        // Initialize privateDataLength

        // Initialize reserved2

        // Initialize sourceId

        // Initialize attributeTag

        // Initialize attributeLength
        attributeLength = (short) 0x02;
        // Initialize attributeData

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
        // read reserved1
        {
            reserved1 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved2
        {
            reserved2 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sourceId
        {
            sourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read attributeTag
        {
            attributeTag = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read attributeLength
        {
            attributeLength = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read attributeData
        {
            attributeData = istream.readUnsignedShort();
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
        // read reserved1
        {
            reserved1 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read privateDataLength
        {
            privateDataLength = istream.readUnsignedShort();
            retVal += 2;
        }
        // read reserved2
        {
            reserved2 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sourceId
        {
            sourceId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read attributeTag
        {
            attributeTag = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read attributeLength
        {
            attributeLength = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read attributeData
        {
            attributeData = istream.readUnsignedShort();
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
        // write reserved1
        ostream.writeShort(reserved1);
        retVal += 2;
        // write privateDataLength
        ostream.writeShort(privateDataLength);
        retVal += 2;
        // write reserved2
        ostream.writeShort(reserved2);
        retVal += 2;
        // write sourceId
        BinPrimitive.writeUI32(ostream, sourceId);
        retVal += 4;
        // write attributeTag
        ostream.writeByte(attributeTag);
        retVal += 1;
        // write attributeLength
        ostream.writeByte(attributeLength);
        retVal += 1;
        // write attributeData
        ostream.writeShort(attributeData);
        retVal += 2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SDVEventIndication\n");
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
        // write reserved1
        dc.indent();
        dc.getPs().println(
            "reserved1=" + reserved1 + "(0x"
            + Integer.toHexString(reserved1) + ")");
        // write privateDataLength
        dc.indent();
        dc.getPs().println(
            "privateDataLength=" + privateDataLength + "(0x"
            + Integer.toHexString(privateDataLength) + ")");
        // write reserved2
        dc.indent();
        dc.getPs().println(
            "reserved2=" + reserved2 + "(0x"
            + Integer.toHexString(reserved2) + ")");
        // write sourceId
        dc.indent();
        dc.getPs().println(
            "sourceId=" + sourceId + "(0x" + Long.toHexString(sourceId)
            + ")");
        // write attributeTag
        dc.indent();
        dc.getPs().println(
            "attributeTag=" + attributeTag + "(0x"
            + Integer.toHexString(attributeTag) + ")");
        // write attributeLength
        dc.indent();
        dc.getPs().println(
            "attributeLength=" + attributeLength + "(0x"
            + Integer.toHexString(attributeLength) + ")");
        // write attributeData
        dc.indent();
        dc.getPs().println(
            "attributeData=" + attributeData + "(0x"
            + Integer.toHexString(attributeData) + ")");
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
    // Getter for reserved1
    // public int getReserved1()
    // {
    // return reserved1 ;
    // }

    // Setter for reserved1
    // public void setReserved1(int val)
    // {
    // this.reserved1= val;
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
    // Getter for attributeTag
    // public short getAttributeTag()
    // {
    // return attributeTag ;
    // }

    // Setter for attributeTag
    // public void setAttributeTag(short val)
    // {
    // this.attributeTag= val;
    // }
    // Getter for attributeLength
    // public short getAttributeLength()
    // {
    // return attributeLength ;
    // }

    // Setter for attributeLength
    // public void setAttributeLength(short val)
    // {
    // this.attributeLength= val;
    // }
    // Getter for attributeData
    // public int getAttributeData()
    // {
    // return attributeData ;
    // }

    // Setter for attributeData
    // public void setAttributeData(int val)
    // {
    // this.attributeData= val;
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