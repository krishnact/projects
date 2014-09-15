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
@Created(date = "Mon Jul 22 13:35:03 EDT 2013")
public class audio_stream_descriptor
		extends
			MpegTSDescriptorFactory.MpegTSDescriptor { // Concrete type is
														// audio_stream_descriptor

	// members variables
	// descriptor_tag
	public short descriptor_tag;
	// descriptor_length
	public short descriptor_length;
	// bf
	public BitField_8 bf;

	public audio_stream_descriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize descriptor_tag

		// Initialize descriptor_length

		// Initialize bf
		bf = new BitField_8();
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read descriptor_tag
		{
			descriptor_tag = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read descriptor_length
		{
			descriptor_length = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read bf
		retVal += bf.read(istream);

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write descriptor_tag
		ostream.writeByte(descriptor_tag);
		retVal += 1;
		// write descriptor_length
		ostream.writeByte(descriptor_length);
		retVal += 1;
		// write bf
		ostream.writeByte(bf.getValue());
		retVal += 1;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("audio_stream_descriptor\n");
		dc.increaseIndent();
		int retVal = 0;
		// write descriptor_tag
		dc.indent();
		dc.getPs().println(
				"descriptor_tag=" + descriptor_tag + "(0x"
						+ Integer.toHexString(descriptor_tag) + ")");
		// write descriptor_length
		dc.indent();
		dc.getPs().println(
				"descriptor_length=" + descriptor_length + "(0x"
						+ Integer.toHexString(descriptor_length) + ")");
		// write bf
		{
			dc.indent();
			dc.getPs().print("free_format_flag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getFree_format_flag(), 1));
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for descriptor_tag
	// public short getDescriptor_tag()
	// {
	// return descriptor_tag ;
	// }

	// Setter for descriptor_tag
	// public void setDescriptor_tag(short val)
	// {
	// this.descriptor_tag= val;
	// }
	// Getter for descriptor_length
	// public short getDescriptor_length()
	// {
	// return descriptor_length ;
	// }

	// Setter for descriptor_length
	// public void setDescriptor_length(short val)
	// {
	// this.descriptor_length= val;
	// }
	// Getter for bf
	// public BitField_8 getBf()
	// {
	// return bf ;
	// }

	// Setter for bf
	// public void setBf(BitField_8 val)
	// {
	// this.bf= val;
	// }

	public int getFree_format_flag() {
		return (bf.getValue() & 0x00000080) >> 7;
	}

	public void setFree_format_flag(int val) {
		bf.setValue((bf.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code