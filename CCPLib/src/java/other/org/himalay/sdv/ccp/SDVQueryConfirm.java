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
public class SDVQueryConfirm extends SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete
    // type
    // is
    // SDVQueryConfirm

    // members variables
    // header
    public MessageHeader header;
    // messageLength
    public int messageLength;
    // sessionId
    public SessionId sessionId;
    // sourceId
    public long sourceId;
    // privateDataLength
    public int privateDataLength;
    // tunerUse
    public short tunerUse;
    // reserved
    public short reserved;
    // serviceGroupId
    public long serviceGroupId;
    // lastUserActivity
    public long lastUserActivity;

    public SDVQueryConfirm() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new MessageHeader();
        // Initialize messageLength
        messageLength = (int) 0x001C;
        // Initialize sessionId
        sessionId = new SessionId();
        // Initialize sourceId

        // Initialize privateDataLength

        // Initialize tunerUse

        // Initialize reserved

        // Initialize serviceGroupId

        // Initialize lastUserActivity

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
        // read tunerUse
        {
            tunerUse = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read reserved
        {
            reserved = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read serviceGroupId
        {
            serviceGroupId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read lastUserActivity
        {
            lastUserActivity = (long) (BinPrimitive.readUI32(istream));
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
        // read tunerUse
        {
            tunerUse = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read reserved
        {
            reserved = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read serviceGroupId
        {
            serviceGroupId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read lastUserActivity
        {
            lastUserActivity = (long) (BinPrimitive.readUI32(istream));
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
        // write sourceId
        BinPrimitive.writeUI32(ostream, sourceId);
        retVal += 4;
        // write privateDataLength
        ostream.writeShort(privateDataLength);
        retVal += 2;
        // write tunerUse
        ostream.writeByte(tunerUse);
        retVal += 1;
        // write reserved
        ostream.writeByte(reserved);
        retVal += 1;
        // write serviceGroupId
        BinPrimitive.writeUI32(ostream, serviceGroupId);
        retVal += 4;
        // write lastUserActivity
        BinPrimitive.writeUI32(ostream, lastUserActivity);
        retVal += 4;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SDVQueryConfirm\n");
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
        // write tunerUse
        dc.indent();
        dc.getPs().println(
            "tunerUse=" + tunerUse + "(0x" + Integer.toHexString(tunerUse)
            + ")");
        // write reserved
        dc.indent();
        dc.getPs().println(
            "reserved=" + reserved + "(0x" + Integer.toHexString(reserved)
            + ")");
        // write serviceGroupId
        dc.indent();
        dc.getPs().println(
            "serviceGroupId=" + serviceGroupId + "(0x"
            + Long.toHexString(serviceGroupId) + ")");
        // write lastUserActivity
        dc.indent();
        dc.getPs().println(
            "lastUserActivity=" + lastUserActivity + "(0x"
            + Long.toHexString(lastUserActivity) + ")");
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
    // Getter for tunerUse
    // public short getTunerUse()
    // {
    // return tunerUse ;
    // }

    // Setter for tunerUse
    // public void setTunerUse(short val)
    // {
    // this.tunerUse= val;
    // }
    // Getter for reserved
    // public short getReserved()
    // {
    // return reserved ;
    // }

    // Setter for reserved
    // public void setReserved(short val)
    // {
    // this.reserved= val;
    // }
    // Getter for serviceGroupId
    // public long getServiceGroupId()
    // {
    // return serviceGroupId ;
    // }

    // Setter for serviceGroupId
    // public void setServiceGroupId(long val)
    // {
    // this.serviceGroupId= val;
    // }
    // Getter for lastUserActivity
    // public long getLastUserActivity()
    // {
    // return lastUserActivity ;
    // }

    // Setter for lastUserActivity
    // public void setLastUserActivity(long val)
    // {
    // this.lastUserActivity= val;
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