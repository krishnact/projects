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
public class SDVInitRequest extends SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete
    // type
    // is
    // SDVInitRequest

    // members variables
    // header
    public MessageHeader header;
    // messageLength
    public int messageLength;
    // sessionId
    public SessionId sessionId;
    // reserved1
    public int reserved1;
    // serviceGroupId
    public long serviceGroupId;
    // version
    public short version;
    // reserved2
    public short reserved2;
    // descCnt
    public int descCnt;
    // sdvDescriptors
    public ArrayList<SDVDescriptorFactory.SDVDescriptor> sdvDescriptors;

    public SDVInitRequest() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new MessageHeader();
        // Initialize messageLength
        messageLength = (int) 0x0013;
        // Initialize sessionId
        sessionId = new SessionId();
        // Initialize reserved1
        reserved1 = (int) 0xFFFF;
        // Initialize serviceGroupId

        // Initialize version

        // Initialize reserved2
        reserved2 = (short) 0xFF;
        // Initialize descCnt

        // Initialize sdvDescriptors
        sdvDescriptors = new ArrayList<SDVDescriptorFactory.SDVDescriptor>();
        sdvDescriptors.setMemberSize(0);
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
        // read serviceGroupId
        {
            serviceGroupId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read version
        {
            version = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read reserved2
        {
            reserved2 = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read descCnt
        {
            descCnt = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sdvDescriptors
        for (int iIdx = 0; iIdx < descCnt + (0); iIdx++) {
            SDVDescriptorFactory.SDVDescriptor temp; /*
													 * Generic classes are
													 * abstract, so we can not
													 * invoke new
													 */
            {
                IntegerHolder iHolder = new IntegerHolder();
                DataInputStream disTemp = istream;
                temp = SDVDescriptorFactory.createMsg(disTemp, iHolder);
                retVal += iHolder.getValue();
            }
            sdvDescriptors.add(temp);
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
        // read serviceGroupId
        {
            serviceGroupId = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read version
        {
            version = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read reserved2
        {
            reserved2 = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read descCnt
        {
            descCnt = istream.readUnsignedShort();
            retVal += 2;
        }
        // read sdvDescriptors
        for (int iIdx = 0; iIdx < descCnt + (0); iIdx++) {
            SDVDescriptorFactory.SDVDescriptor temp; /*
													 * Generic classes are
													 * abstract, so we can not
													 * invoke new
													 */
            {
                IntegerHolder iHolder = new IntegerHolder();
                DataInputStream disTemp = istream;
                temp = SDVDescriptorFactory.createMsg(disTemp, iHolder);
                retVal += iHolder.getValue();
            }
            sdvDescriptors.add(temp);
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

        {
            /** fix dependent sizes for sdvDescriptors **/
            descCnt = ((short) sdvDescriptors.getCount());
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
        // write serviceGroupId
        BinPrimitive.writeUI32(ostream, serviceGroupId);
        retVal += 4;
        // write version
        ostream.writeByte(version);
        retVal += 1;
        // write reserved2
        ostream.writeByte(reserved2);
        retVal += 1;
        // write descCnt
        ostream.writeShort(descCnt);
        retVal += 2;
        // write sdvDescriptors
        {
            ArrayList<SDVDescriptorFactory.SDVDescriptor> temp1 = sdvDescriptors;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                SDVDescriptorFactory.SDVDescriptor temp2 = temp1.get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SDVInitRequest\n");
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
        // write serviceGroupId
        dc.indent();
        dc.getPs().println(
            "serviceGroupId=" + serviceGroupId + "(0x"
            + Long.toHexString(serviceGroupId) + ")");
        // write version
        dc.indent();
        dc.getPs().println(
            "version=" + version + "(0x" + Integer.toHexString(version)
            + ")");
        // write reserved2
        dc.indent();
        dc.getPs().println(
            "reserved2=" + reserved2 + "(0x"
            + Integer.toHexString(reserved2) + ")");
        // write descCnt
        dc.indent();
        dc.getPs().println(
            "descCnt=" + descCnt + "(0x" + Integer.toHexString(descCnt)
            + ")");
        // write sdvDescriptors
        {
            ArrayList<SDVDescriptorFactory.SDVDescriptor> temp1 = sdvDescriptors;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                SDVDescriptorFactory.SDVDescriptor element = temp1.get(iIdx);
                dc.indent();
                dc.getPs().println(iIdx);
                if (element != null) {
                    dc.indent();
                    dc.getPs().println("element");
                    retVal += element.dump(dc);
                }
            }
        }
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
    // Getter for version
    // public short getVersion()
    // {
    // return version ;
    // }

    // Setter for version
    // public void setVersion(short val)
    // {
    // this.version= val;
    // }
    // Getter for reserved2
    // public short getReserved2()
    // {
    // return reserved2 ;
    // }

    // Setter for reserved2
    // public void setReserved2(short val)
    // {
    // this.reserved2= val;
    // }
    // Getter for descCnt
    // public int getDescCnt()
    // {
    // return descCnt ;
    // }

    // Setter for descCnt
    // public void setDescCnt(int val)
    // {
    // this.descCnt= val;
    // }
    // Getter for sdvDescriptors
    // public ArrayList<SDVDescriptorFactory.SDVDescriptor> getSdvDescriptors()
    // {
    // return sdvDescriptors ;
    // }

    // Setter for sdvDescriptors
    // public void
    // setSdvDescriptors(ArrayList<SDVDescriptorFactory.SDVDescriptor> val)
    // {
    // this.sdvDescriptors= val;
    // }

    public int addToSdvDescriptors(SDVDescriptorFactory.SDVDescriptor val) {
        sdvDescriptors.add(val);
        return sdvDescriptors.size();
    }

    public int removeFromSdvDescriptors(SDVDescriptorFactory.SDVDescriptor val) {
        sdvDescriptors.remove(val);
        return sdvDescriptors.size();
    }

    public int removeNthFromSdvDescriptors(int idx) {
        sdvDescriptors.remove(idx);
        return sdvDescriptors.size();
    }

    public int emptySdvDescriptors(int idx) {
        sdvDescriptors.clear();
        return sdvDescriptors.size();
    }

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