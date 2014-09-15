// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.mpeg2.types;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Jul 22 13:35:02 EDT 2013")
public class DVB_StreamIdDescriptor
		extends
			DVB_DescriptorFactory.DVB_Descriptor { // Concrete type is
													// DVB_StreamIdDescriptor

	// members variables
	// header
	public UI8Header header;
	// length
	public short length;
	// streamId
	public short streamId;

	public DVB_StreamIdDescriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new UI8Header();
		// Initialize length

		// Initialize streamId

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read length
		{
			length = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read streamId
		{
			streamId = (short) (istream.readUnsignedByte());
			retVal += 1;
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
			length = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read streamId
		{
			streamId = (short) (istream.readUnsignedByte());
			retVal += 1;
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
		retVal += header.write(ostream);
		// write length
		ostream.writeByte(length);
		retVal += 1;
		// write streamId
		ostream.writeByte(streamId);
		retVal += 1;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("DVB_StreamIdDescriptor\n");
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
		// write streamId
		dc.indent();
		dc.getPs().println(
				"streamId=" + streamId + "(0x" + Integer.toHexString(streamId)
						+ ")");
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for header
	// public UI8Header getHeader()
	// {
	// return header ;
	// }

	// Setter for header
	// public void setHeader(UI8Header val)
	// {
	// this.header= val;
	// }
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
	// Getter for streamId
	// public short getStreamId()
	// {
	// return streamId ;
	// }

	// Setter for streamId
	// public void setStreamId(short val)
	// {
	// this.streamId= val;
	// }

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

	public void setHeader(UI8Header header) {
		this.header = header;
	}

	public UI8Header getHeader() {
		return this.header;
	}

}

// End of code