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
public class ClientVersionDescriptor extends SDVDescriptorFactory.SDVDescriptor { // Concrete
    // type
    // is
    // ClientVersionDescriptor

    // members variables
    // header
    public resourceHeader header;
    // length
    public int length;
    // clientType
    public short clientType;
    // clientVersion
    public long clientVersion;

    public ClientVersionDescriptor() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new resourceHeader();
        // Initialize length

        // Initialize clientType

        // Initialize clientVersion

    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read length
        {
            length = istream.readUnsignedShort();
            retVal += 2;
        }
        // read clientType
        {
            clientType = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read clientVersion
        {
            clientVersion = (long) (BinPrimitive.readUI32(istream));
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
        // read length
        {
            length = istream.readUnsignedShort();
            retVal += 2;
        }
        // read clientType
        {
            clientType = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read clientVersion
        {
            clientVersion = (long) (BinPrimitive.readUI32(istream));
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

        // write header
        if (header != null)
            retVal += header.write(ostream);
        // write length
        ostream.writeShort(length);
        retVal += 2;
        // write clientType
        ostream.writeByte(clientType);
        retVal += 1;
        // write clientVersion
        BinPrimitive.writeUI32(ostream, clientVersion);
        retVal += 4;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("ClientVersionDescriptor\n");
        dc.increaseIndent();
        int retVal = 0;
        // write header
        if (header != null) {
            dc.indent();
            dc.getPs().println("header");
            retVal += header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println(
            "length=" + length + "(0x" + Integer.toHexString(length) + ")");
        // write clientType
        dc.indent();
        dc.getPs().println(
            "clientType=" + clientType + "(0x"
            + Integer.toHexString(clientType) + ")");
        // write clientVersion
        dc.indent();
        dc.getPs().println(
            "clientVersion=" + clientVersion + "(0x"
            + Long.toHexString(clientVersion) + ")");
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for header
    // public resourceHeader getHeader()
    // {
    // return header ;
    // }

    // Setter for header
    // public void setHeader(resourceHeader val)
    // {
    // this.header= val;
    // }
    // Getter for length
    // public int getLength()
    // {
    // return length ;
    // }

    // Setter for length
    // public void setLength(int val)
    // {
    // this.length= val;
    // }
    // Getter for clientType
    // public short getClientType()
    // {
    // return clientType ;
    // }

    // Setter for clientType
    // public void setClientType(short val)
    // {
    // this.clientType= val;
    // }
    // Getter for clientVersion
    // public long getClientVersion()
    // {
    // return clientVersion ;
    // }

    // Setter for clientVersion
    // public void setClientVersion(long val)
    // {
    // this.clientVersion= val;
    // }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

    public void setHeader(resourceHeader header) {
        this.header = header;
    }

    public resourceHeader getHeader() {
        return this.header;
    }

}

// End of code