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
public class AdaptationHeader extends BinStruct implements PublicBinMsg {

	// member static classes
	public static class splicingPoint extends BinStruct implements PublicBinMsg {

		// members variables
		// splice_countdown
		public short splice_countdown;

		// Parent of this object
		AdaptationHeader parent;
		public splicingPoint(AdaptationHeader parent) // throws Exception
		{
			this.parent = parent;
			init();
		}
		public AdaptationHeader getParent() {
			return parent;
		}

		private void init() {
			// Initialize splice_countdown

		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read splice_countdown
			{
				splice_countdown = (short) (istream.readUnsignedByte());
				retVal += 1;
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			// write splice_countdown
			ostream.writeByte(splice_countdown);
			retVal += 1;
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("splicingPoint\n");
			dc.increaseIndent();
			int retVal = 0;
			// write splice_countdown
			dc.indent();
			dc.getPs().println(
					"splice_countdown=" + splice_countdown + "(0x"
							+ Integer.toHexString(splice_countdown) + ")");
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for splice_countdown
		// public short getSplice_countdown()
		// {
		// return splice_countdown ;
		// }

		// Setter for splice_countdown
		// public void setSplice_countdown(short val)
		// {
		// this.splice_countdown= val;
		// }

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code
	// member static classes
	public static class AdaptationFieldExtension extends BinStruct
			implements
				PublicBinMsg {

		// member static classes
		public static class LTWData extends BinStruct implements PublicBinMsg {

			// members variables
			// bf_flags
			public BitField_16 bf_flags;

			// Parent of this object
			AdaptationFieldExtension parent;
			public LTWData(AdaptationFieldExtension parent) // throws Exception
			{
				this.parent = parent;
				init();
			}
			public AdaptationFieldExtension getParent() {
				return parent;
			}

			private void init() {
				// Initialize bf_flags
				bf_flags = new BitField_16();
			}

			public int readNoHeader(DataInputStream istream) throws IOException {

				return read(istream);
			}

			public int read(DataInputStream istream) throws IOException {
				preRead();
				int retVal = 0;

				// read bf_flags
				retVal += bf_flags.read(istream);

				postRead();
				return retVal;
			}

			public int write(DataOutputStream ostream) throws IOException {
				preWrite();
				int retVal = 0;

				// write bf_flags
				ostream.writeShort(bf_flags.getValue());
				retVal += 2;
				postWrite();
				return retVal;
			}

			public int dump(DumpContext dc) throws IOException {
				dc.indent();
				dc.getPs().print("LTWData\n");
				dc.increaseIndent();
				int retVal = 0;
				// write bf_flags
				{
					dc.indent();
					dc.getPs().print("ltw_valid_flag: ");
					dc.getPs().println(
							BitField_8.toDisplayString(getLtw_valid_flag(), 1));
					dc.indent();
					dc.getPs().print("ltw_offset: ");
					dc.getPs().println(
							BitField_8.toDisplayString(getLtw_offset(), 15));
				}
				dc.decreaseIndent();
				return retVal;
			}

			// Getter for bf_flags
			// public BitField_16 getBf_flags()
			// {
			// return bf_flags ;
			// }

			// Setter for bf_flags
			// public void setBf_flags(BitField_16 val)
			// {
			// this.bf_flags= val;
			// }

			public int getLtw_valid_flag() {
				return (bf_flags.getValue() & 0x00008000) >> 15;
			}

			public void setLtw_valid_flag(int val) {
				bf_flags.setValue((bf_flags.getValue() & 0xffff7fff)
						| ((val << 15) & 0x00008000));
			}

			public int getLtw_offset() {
				return (bf_flags.getValue() & 0x00007fff) >> 0;
			}

			public void setLtw_offset(int val) {
				bf_flags.setValue((bf_flags.getValue() & 0xffff8000)
						| ((val << 0) & 0x00007fff));
			}

			public int getSize() throws IOException {
				DataOutputStream dos = new DataOutputStream(new NullStream());
				return this.write(dos);
			}

		}

		// End of code
		// member static classes
		public static class PieceWiseData extends BinStruct
				implements
					PublicBinMsg {

			// members variables
			// bf_flags
			public BitField_24 bf_flags;

			// Parent of this object
			AdaptationFieldExtension parent;
			public PieceWiseData(AdaptationFieldExtension parent) // throws
																	// Exception
			{
				this.parent = parent;
				init();
			}
			public AdaptationFieldExtension getParent() {
				return parent;
			}

			private void init() {
				// Initialize bf_flags
				bf_flags = new BitField_24();
			}

			public int readNoHeader(DataInputStream istream) throws IOException {

				return read(istream);
			}

			public int read(DataInputStream istream) throws IOException {
				preRead();
				int retVal = 0;

				// read bf_flags
				retVal += bf_flags.read(istream);

				postRead();
				return retVal;
			}

			public int write(DataOutputStream ostream) throws IOException {
				preWrite();
				int retVal = 0;

				// write bf_flags

				postWrite();
				return retVal;
			}

			public int dump(DumpContext dc) throws IOException {
				dc.indent();
				dc.getPs().print("PieceWiseData\n");
				dc.increaseIndent();
				int retVal = 0;
				// write bf_flags
				{
					dc.indent();
					dc.getPs().print("reserved: ");
					dc.getPs().println(
							BitField_8.toDisplayString(getReserved(), 2));
					dc.indent();
					dc.getPs().print("piecewise_rate: ");
					dc.getPs()
							.println(
									BitField_8.toDisplayString(
											getPiecewise_rate(), 14));
				}
				dc.decreaseIndent();
				return retVal;
			}

			// Getter for bf_flags
			// public BitField_24 getBf_flags()
			// {
			// return bf_flags ;
			// }

			// Setter for bf_flags
			// public void setBf_flags(BitField_24 val)
			// {
			// this.bf_flags= val;
			// }

			public int getReserved() {
				return (bf_flags.getValue() & 0x00c00000) >> 22;
			}

			public void setReserved(int val) {
				bf_flags.setValue((bf_flags.getValue() & 0xff3fffff)
						| ((val << 22) & 0x00c00000));
			}

			public int getPiecewise_rate() {
				return (bf_flags.getValue() & 0x003fff00) >> 8;
			}

			public void setPiecewise_rate(int val) {
				bf_flags.setValue((bf_flags.getValue() & 0xffc000ff)
						| ((val << 8) & 0x003fff00));
			}

			public int getSize() throws IOException {
				DataOutputStream dos = new DataOutputStream(new NullStream());
				return this.write(dos);
			}

		}

		// End of code

		// members variables
		// adaptation_field_extension_length
		public short adaptation_field_extension_length;
		// bf_flags
		public BitField_8 bf_flags;
		// LTWDataInstance
		public LTWData LTWDataInstance;
		// PieceWiseDataInstance
		public PieceWiseData PieceWiseDataInstance;

		// Parent of this object
		AdaptationHeader parent;
		public AdaptationFieldExtension(AdaptationHeader parent) // throws
																	// Exception
		{
			this.parent = parent;
			init();
		}
		public AdaptationHeader getParent() {
			return parent;
		}

		private void init() {
			// Initialize adaptation_field_extension_length

			// Initialize bf_flags
			bf_flags = new BitField_8();
			// Initialize LTWDataInstance
			// Conditional, will be initialized during read
			// Initialize PieceWiseDataInstance
			// Conditional, will be initialized during read
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read adaptation_field_extension_length
			{
				adaptation_field_extension_length = (short) (istream
						.readUnsignedByte());
				retVal += 1;
			}
			// read bf_flags
			retVal += bf_flags.read(istream);
			// read LTWDataInstance
			if (getLtw_flag() == 1) {
				LTWDataInstance = new LTWData(this);
				retVal += LTWDataInstance.read(istream);
			}
			// read PieceWiseDataInstance
			if (getPiecewise_rate_flag() == 1) {
				PieceWiseDataInstance = new PieceWiseData(this);
				retVal += PieceWiseDataInstance.read(istream);
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			{
				/** fix dependent sizes for LTWDataInstance **/
			}
			{
				/** fix dependent sizes for PieceWiseDataInstance **/
			}

			// write adaptation_field_extension_length
			ostream.writeByte(adaptation_field_extension_length);
			retVal += 1;
			// write bf_flags
			ostream.writeByte(bf_flags.getValue());
			retVal += 1;
			// write LTWDataInstance
			retVal += LTWDataInstance.write(ostream);
			// write PieceWiseDataInstance
			retVal += PieceWiseDataInstance.write(ostream);
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("AdaptationFieldExtension\n");
			dc.increaseIndent();
			int retVal = 0;
			// write adaptation_field_extension_length
			dc.indent();
			dc.getPs()
					.println(
							"adaptation_field_extension_length="
									+ adaptation_field_extension_length
									+ "(0x"
									+ Integer
											.toHexString(adaptation_field_extension_length)
									+ ")");
			// write bf_flags
			{
				dc.indent();
				dc.getPs().print("ltw_flag: ");
				dc.getPs()
						.println(BitField_8.toDisplayString(getLtw_flag(), 1));
				dc.indent();
				dc.getPs().print("piecewise_rate_flag: ");
				dc.getPs()
						.println(
								BitField_8.toDisplayString(
										getPiecewise_rate_flag(), 1));
				dc.indent();
				dc.getPs().print("seamless_splice_flag: ");
				dc.getPs().println(
						BitField_8
								.toDisplayString(getSeamless_splice_flag(), 1));
				dc.indent();
				dc.getPs().print("reserved: ");
				dc.getPs()
						.println(BitField_8.toDisplayString(getReserved(), 5));
			}
			// write LTWDataInstance
			if (LTWDataInstance != null) {
				dc.indent();
				dc.getPs().println("LTWDataInstance");
				retVal += LTWDataInstance.dump(dc);
			}
			// write PieceWiseDataInstance
			if (PieceWiseDataInstance != null) {
				dc.indent();
				dc.getPs().println("PieceWiseDataInstance");
				retVal += PieceWiseDataInstance.dump(dc);
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for adaptation_field_extension_length
		// public short getAdaptation_field_extension_length()
		// {
		// return adaptation_field_extension_length ;
		// }

		// Setter for adaptation_field_extension_length
		// public void setAdaptation_field_extension_length(short val)
		// {
		// this.adaptation_field_extension_length= val;
		// }
		// Getter for bf_flags
		// public BitField_8 getBf_flags()
		// {
		// return bf_flags ;
		// }

		// Setter for bf_flags
		// public void setBf_flags(BitField_8 val)
		// {
		// this.bf_flags= val;
		// }
		// Getter for LTWDataInstance
		// public LTWData getLTWDataInstance()
		// {
		// return LTWDataInstance ;
		// }

		// Setter for LTWDataInstance
		// public void setLTWDataInstance(LTWData val)
		// {
		// this.LTWDataInstance= val;
		// }
		// Getter for PieceWiseDataInstance
		// public PieceWiseData getPieceWiseDataInstance()
		// {
		// return PieceWiseDataInstance ;
		// }

		// Setter for PieceWiseDataInstance
		// public void setPieceWiseDataInstance(PieceWiseData val)
		// {
		// this.PieceWiseDataInstance= val;
		// }

		public int getLtw_flag() {
			return (bf_flags.getValue() & 0x00000080) >> 7;
		}

		public void setLtw_flag(int val) {
			bf_flags.setValue((bf_flags.getValue() & 0xffffff7f)
					| ((val << 7) & 0x00000080));
		}

		public int getPiecewise_rate_flag() {
			return (bf_flags.getValue() & 0x00000040) >> 6;
		}

		public void setPiecewise_rate_flag(int val) {
			bf_flags.setValue((bf_flags.getValue() & 0xffffffbf)
					| ((val << 6) & 0x00000040));
		}

		public int getSeamless_splice_flag() {
			return (bf_flags.getValue() & 0x00000020) >> 5;
		}

		public void setSeamless_splice_flag(int val) {
			bf_flags.setValue((bf_flags.getValue() & 0xffffffdf)
					| ((val << 5) & 0x00000020));
		}

		public int getReserved() {
			return (bf_flags.getValue() & 0x0000001f) >> 0;
		}

		public void setReserved(int val) {
			bf_flags.setValue((bf_flags.getValue() & 0xffffffe0)
					| ((val << 0) & 0x0000001f));
		}

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code

	// members variables
	// bf
	public BitField_8 bf;
	// pcrClock
	public PCRClock pcrClock;
	// opcrClock
	public PCRClock opcrClock;
	// splicingPointInstance
	public splicingPoint splicingPointInstance;
	// privateData
	public MpegPrivateDataBytes privateData;
	// AdaptationFieldExtensionInstance
	public AdaptationFieldExtension AdaptationFieldExtensionInstance;
	// stuff
	public ByteArray stuff;

	public AdaptationHeader() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize bf
		bf = new BitField_8();
		// Initialize pcrClock
		// Conditional, will be initialized during read
		// Initialize opcrClock
		// Conditional, will be initialized during read
		// Initialize splicingPointInstance
		// Conditional, will be initialized during read
		// Initialize privateData
		// Conditional, will be initialized during read
		// Initialize AdaptationFieldExtensionInstance
		// Conditional, will be initialized during read
		// Initialize stuff
		stuff = new ByteArray();
		stuff.setSizeType("EOS");
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read bf
		retVal += bf.read(istream);
		// read pcrClock
		if (getPcrFlag() == 1) {
			pcrClock = new PCRClock();
			retVal += pcrClock.read(istream);
		}
		// read opcrClock
		if (getOpcrFlag() == 1) {
			opcrClock = new PCRClock();
			retVal += opcrClock.read(istream);
		}
		// read splicingPointInstance
		if (getSplicingPointFlag() == 1) {
			splicingPointInstance = new splicingPoint(this);
			retVal += splicingPointInstance.read(istream);
		}
		// read privateData
		if (getTransportPvtDataFlag() == 1) {
			privateData = new MpegPrivateDataBytes();
			retVal += privateData.read(istream);
		}
		// read AdaptationFieldExtensionInstance
		if (getAdaptationExtFlag() == 1) {
			AdaptationFieldExtensionInstance = new AdaptationFieldExtension(
					this);
			retVal += AdaptationFieldExtensionInstance.read(istream);
		}
		// read stuff
		{
			retVal += stuff.read(istream);
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for pcrClock **/
		}
		{
			/** fix dependent sizes for opcrClock **/
		}
		{
			/** fix dependent sizes for splicingPointInstance **/
		}
		{
			/** fix dependent sizes for privateData **/
		}
		{
			/** fix dependent sizes for AdaptationFieldExtensionInstance **/
		}
		{
			/** fix dependent sizes for stuff **/
		}

		// write bf
		ostream.writeByte(bf.getValue());
		retVal += 1;
		// write pcrClock
		retVal += pcrClock.write(ostream);
		// write opcrClock
		retVal += opcrClock.write(ostream);
		// write splicingPointInstance
		retVal += splicingPointInstance.write(ostream);
		// write privateData
		retVal += privateData.write(ostream);
		// write AdaptationFieldExtensionInstance
		retVal += AdaptationFieldExtensionInstance.write(ostream);
		// write stuff
		{
			retVal += stuff.write(ostream);
		}
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("AdaptationHeader\n");
		dc.increaseIndent();
		int retVal = 0;
		// write bf
		{
			dc.indent();
			dc.getPs().print("discontunuityIndicator: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getDiscontunuityIndicator(), 1));
			dc.indent();
			dc.getPs().print("randomAccessIndicator: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getRandomAccessIndicator(), 1));
			dc.indent();
			dc.getPs().print("elementaryStreamPriorityIndicator: ");
			dc.getPs().println(
					BitField_8.toDisplayString(
							getElementaryStreamPriorityIndicator(), 1));
			dc.indent();
			dc.getPs().print("pcrFlag: ");
			dc.getPs().println(BitField_8.toDisplayString(getPcrFlag(), 1));
			dc.indent();
			dc.getPs().print("opcrFlag: ");
			dc.getPs().println(BitField_8.toDisplayString(getOpcrFlag(), 1));
			dc.indent();
			dc.getPs().print("splicingPointFlag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getSplicingPointFlag(), 1));
			dc.indent();
			dc.getPs().print("transportPvtDataFlag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getTransportPvtDataFlag(), 1));
			dc.indent();
			dc.getPs().print("adaptationExtFlag: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getAdaptationExtFlag(), 1));
		}
		// write pcrClock
		if (pcrClock != null) {
			dc.indent();
			dc.getPs().println("pcrClock");
			retVal += pcrClock.dump(dc);
		}
		// write opcrClock
		if (opcrClock != null) {
			dc.indent();
			dc.getPs().println("opcrClock");
			retVal += opcrClock.dump(dc);
		}
		// write splicingPointInstance
		if (splicingPointInstance != null) {
			dc.indent();
			dc.getPs().println("splicingPointInstance");
			retVal += splicingPointInstance.dump(dc);
		}
		// write privateData
		if (privateData != null) {
			dc.indent();
			dc.getPs().println("privateData");
			retVal += privateData.dump(dc);
		}
		// write AdaptationFieldExtensionInstance
		if (AdaptationFieldExtensionInstance != null) {
			dc.indent();
			dc.getPs().println("AdaptationFieldExtensionInstance");
			retVal += AdaptationFieldExtensionInstance.dump(dc);
		}
		// write stuff
		dc.indent();
		dc.getPs().print(
				"stuff: " + stuff.getSize() + "(0x"
						+ Integer.toHexString(stuff.getSize()) + ")\n");
		this.stuff.dump(dc);
		dc.decreaseIndent();
		return retVal;
	}

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
	// Getter for pcrClock
	// public PCRClock getPcrClock()
	// {
	// return pcrClock ;
	// }

	// Setter for pcrClock
	// public void setPcrClock(PCRClock val)
	// {
	// this.pcrClock= val;
	// }
	// Getter for opcrClock
	// public PCRClock getOpcrClock()
	// {
	// return opcrClock ;
	// }

	// Setter for opcrClock
	// public void setOpcrClock(PCRClock val)
	// {
	// this.opcrClock= val;
	// }
	// Getter for splicingPointInstance
	// public splicingPoint getSplicingPointInstance()
	// {
	// return splicingPointInstance ;
	// }

	// Setter for splicingPointInstance
	// public void setSplicingPointInstance(splicingPoint val)
	// {
	// this.splicingPointInstance= val;
	// }
	// Getter for privateData
	// public MpegPrivateDataBytes getPrivateData()
	// {
	// return privateData ;
	// }

	// Setter for privateData
	// public void setPrivateData(MpegPrivateDataBytes val)
	// {
	// this.privateData= val;
	// }
	// Getter for AdaptationFieldExtensionInstance
	// public AdaptationFieldExtension getAdaptationFieldExtensionInstance()
	// {
	// return AdaptationFieldExtensionInstance ;
	// }

	// Setter for AdaptationFieldExtensionInstance
	// public void setAdaptationFieldExtensionInstance(AdaptationFieldExtension
	// val)
	// {
	// this.AdaptationFieldExtensionInstance= val;
	// }
	// Getter for stuff
	// public ByteArray getStuff()
	// {
	// return stuff ;
	// }

	// Setter for stuff
	// public void setStuff(ByteArray val)
	// {
	// this.stuff= val;
	// }

	public int getDiscontunuityIndicator() {
		return (bf.getValue() & 0x00000080) >> 7;
	}

	public void setDiscontunuityIndicator(int val) {
		bf.setValue((bf.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
	}

	public int getRandomAccessIndicator() {
		return (bf.getValue() & 0x00000040) >> 6;
	}

	public void setRandomAccessIndicator(int val) {
		bf.setValue((bf.getValue() & 0xffffffbf) | ((val << 6) & 0x00000040));
	}

	public int getElementaryStreamPriorityIndicator() {
		return (bf.getValue() & 0x00000020) >> 5;
	}

	public void setElementaryStreamPriorityIndicator(int val) {
		bf.setValue((bf.getValue() & 0xffffffdf) | ((val << 5) & 0x00000020));
	}

	public int getPcrFlag() {
		return (bf.getValue() & 0x00000010) >> 4;
	}

	public void setPcrFlag(int val) {
		bf.setValue((bf.getValue() & 0xffffffef) | ((val << 4) & 0x00000010));
	}

	public int getOpcrFlag() {
		return (bf.getValue() & 0x00000008) >> 3;
	}

	public void setOpcrFlag(int val) {
		bf.setValue((bf.getValue() & 0xfffffff7) | ((val << 3) & 0x00000008));
	}

	public int getSplicingPointFlag() {
		return (bf.getValue() & 0x00000004) >> 2;
	}

	public void setSplicingPointFlag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffb) | ((val << 2) & 0x00000004));
	}

	public int getTransportPvtDataFlag() {
		return (bf.getValue() & 0x00000002) >> 1;
	}

	public void setTransportPvtDataFlag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffd) | ((val << 1) & 0x00000002));
	}

	public int getAdaptationExtFlag() {
		return (bf.getValue() & 0x00000001) >> 0;
	}

	public void setAdaptationExtFlag(int val) {
		bf.setValue((bf.getValue() & 0xfffffffe) | ((val << 0) & 0x00000001));
	}

	public void setStuff(byte[] val) {
		this.stuff.setData(val);
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code