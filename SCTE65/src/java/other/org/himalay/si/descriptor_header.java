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
public class descriptor_header extends BinStruct implements PublicBinMsg {

	// members variables
	// messageType
	public short messageType;
	// length
	public short length;

	public descriptor_header() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize messageType

		// Initialize length

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
		// read length
		{
			length = (short) (istream.readUnsignedByte());
			retVal += 1;
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write messageType
		ostream.writeByte(messageType);
		retVal += 1;
		// write length
		ostream.writeByte(length);
		retVal += 1;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("descriptor_header\n");
		dc.increaseIndent();
		int retVal = 0;
		// write messageType
		dc.indent();
		dc.getPs().println(
				"messageType=" + messageType + "(0x"
						+ Integer.toHexString(messageType) + ")");
		// write length
		dc.indent();
		dc.getPs().println(
				"length=" + length + "(0x" + Integer.toHexString(length) + ")");
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
	// Getter for length
	// public short getLength()
	// {
	// return length ;
	// }

	// Setter for length
	// public void setLength(short val)
	// {
	// this.length= val;
	// }

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code