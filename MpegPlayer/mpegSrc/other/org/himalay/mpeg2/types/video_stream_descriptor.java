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
public class video_stream_descriptor
		extends
			MpegTSDescriptorFactory.MpegTSDescriptor { // Concrete type is
														// video_stream_descriptor

	// member static classes
	public static class mpegOneStruct extends BinStruct implements PublicBinMsg {

		// members variables
		// profile_and_level_indication
		public short profile_and_level_indication;
		// bf1
		public BitField_8 bf1;

		// Parent of this object
		video_stream_descriptor parent;
		public mpegOneStruct(video_stream_descriptor parent) // throws Exception
		{
			this.parent = parent;
			init();
		}
		public video_stream_descriptor getParent() {
			return parent;
		}

		private void init() {
			// Initialize profile_and_level_indication

			// Initialize bf1
			bf1 = new BitField_8();
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read profile_and_level_indication
			{
				profile_and_level_indication = (short) (istream
						.readUnsignedByte());
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

			// write profile_and_level_indication
			ostream.writeByte(profile_and_level_indication);
			retVal += 1;
			// write bf1
			ostream.writeByte(bf1.getValue());
			retVal += 1;
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("mpegOneStruct\n");
			dc.increaseIndent();
			int retVal = 0;
			// write profile_and_level_indication
			dc.indent();
			dc.getPs().println(
					"profile_and_level_indication="
							+ profile_and_level_indication + "(0x"
							+ Integer.toHexString(profile_and_level_indication)
							+ ")");
			// write bf1
			{
				dc.indent();
				dc.getPs().print("chroma_format: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getChroma_format(), 2));
				dc.indent();
				dc.getPs().print("frame_rate_extension_flag: ");
				dc.getPs().println(
						BitField_8.toDisplayString(
								getFrame_rate_extension_flag(), 1));
				dc.indent();
				dc.getPs().print("reserved: ");
				dc.getPs()
						.println(BitField_8.toDisplayString(getReserved(), 5));
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for profile_and_level_indication
		// public short getProfile_and_level_indication()
		// {
		// return profile_and_level_indication ;
		// }

		// Setter for profile_and_level_indication
		// public void setProfile_and_level_indication(short val)
		// {
		// this.profile_and_level_indication= val;
		// }
		// Getter for bf1
		// public BitField_8 getBf1()
		// {
		// return bf1 ;
		// }

		// Setter for bf1
		// public void setBf1(BitField_8 val)
		// {
		// this.bf1= val;
		// }

		public int getChroma_format() {
			return (bf1.getValue() & 0x000000c0) >> 6;
		}

		public void setChroma_format(int val) {
			bf1.setValue((bf1.getValue() & 0xffffff3f)
					| ((val << 6) & 0x000000c0));
		}

		public int getFrame_rate_extension_flag() {
			return (bf1.getValue() & 0x00000020) >> 5;
		}

		public void setFrame_rate_extension_flag(int val) {
			bf1.setValue((bf1.getValue() & 0xffffffdf)
					| ((val << 5) & 0x00000020));
		}

		public int getReserved() {
			return (bf1.getValue() & 0x0000001f) >> 0;
		}

		public void setReserved(int val) {
			bf1.setValue((bf1.getValue() & 0xffffffe0)
					| ((val << 0) & 0x0000001f));
		}

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code

	// members variables
	// descriptor_tag
	public short descriptor_tag;
	// descriptor_length
	public short descriptor_length;
	// bf
	public BitField_8 bf;
	// mpegOneStructInstance
	public mpegOneStruct mpegOneStructInstance;

	public video_stream_descriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize descriptor_tag

		// Initialize descriptor_length

		// Initialize bf
		bf = new BitField_8();
		// Initialize mpegOneStructInstance
		// Conditional, will be initialized during read
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
		// read mpegOneStructInstance
		if (getMPEG_1_only_flag() == 1) {
			mpegOneStructInstance = new mpegOneStruct(this);
			retVal += mpegOneStructInstance.read(istream);
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for mpegOneStructInstance **/
		}

		// write descriptor_tag
		ostream.writeByte(descriptor_tag);
		retVal += 1;
		// write descriptor_length
		ostream.writeByte(descriptor_length);
		retVal += 1;
		// write bf
		ostream.writeByte(bf.getValue());
		retVal += 1;
		// write mpegOneStructInstance
		retVal += mpegOneStructInstance.write(ostream);
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("video_stream_descriptor\n");
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
			dc.getPs().print("multiple_frame_rate_flag: ");
			dc.getPs().println(
					BitField_8
							.toDisplayString(getMultiple_frame_rate_flag(), 1));
			dc.indent();
			dc.getPs().print("frame_rate_code: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getFrame_rate_code(), 4));
			dc.indent();
			dc.getPs().print("MPEG_1_only_flag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getMPEG_1_only_flag(), 1));
			dc.indent();
			dc.getPs().print("constrained_parameter_flag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getConstrained_parameter_flag(),
							1));
			dc.indent();
			dc.getPs().print("still_picture_flag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getStill_picture_flag(), 1));
		}
		// write mpegOneStructInstance
		if (mpegOneStructInstance != null) {
			dc.indent();
			dc.getPs().println("mpegOneStructInstance");
			retVal += mpegOneStructInstance.dump(dc);
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
	// Getter for mpegOneStructInstance
	// public mpegOneStruct getMpegOneStructInstance()
	// {
	// return mpegOneStructInstance ;
	// }

	// Setter for mpegOneStructInstance
	// public void setMpegOneStructInstance(mpegOneStruct val)
	// {
	// this.mpegOneStructInstance= val;
	// }

	public int getMultiple_frame_rate_flag() {
		return (bf.getValue() & 0x00000080) >> 7;
	}

	public void setMultiple_frame_rate_flag(int val) {
		bf.setValue((bf.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
	}

	public int getFrame_rate_code() {
		return (bf.getValue() & 0x00000078) >> 3;
	}

	public void setFrame_rate_code(int val) {
		bf.setValue((bf.getValue() & 0xffffff87) | ((val << 3) & 0x00000078));
	}

	public int getMPEG_1_only_flag() {
		return (bf.getValue() & 0x00000004) >> 2;
	}

	public void setMPEG_1_only_flag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffb) | ((val << 2) & 0x00000004));
	}

	public int getConstrained_parameter_flag() {
		return (bf.getValue() & 0x00000002) >> 1;
	}

	public void setConstrained_parameter_flag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffd) | ((val << 1) & 0x00000002));
	}

	public int getStill_picture_flag() {
		return (bf.getValue() & 0x00000001) >> 0;
	}

	public void setStill_picture_flag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffe) | ((val << 0) & 0x00000001));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code