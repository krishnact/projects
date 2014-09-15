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
public class MMS_Record extends BinStruct implements PublicBinMsg {

	// members variables
	// bf1
	public BitField_8 bf1;
	// bf2
	public BitField_8 bf2;
	// symbolRate
	public long symbolRate;

	public MMS_Record() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize bf1
		bf1 = new BitField_8();
		// Initialize bf2
		bf2 = new BitField_8();
		// Initialize symbolRate

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read bf1
		retVal += bf1.read(istream);
		// read bf2
		retVal += bf2.read(istream);
		// read symbolRate
		{
			symbolRate = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write bf1
		ostream.writeByte(bf1.getValue());
		retVal += 1;
		// write bf2
		ostream.writeByte(bf2.getValue());
		retVal += 1;
		// write symbolRate
		BinPrimitive.writeUI32(ostream, symbolRate);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("MMS_Record\n");
		dc.increaseIndent();
		int retVal = 0;
		// write bf1
		{
			dc.indent();
			dc.getPs().print("transmissionSystem: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getTransmissionSystem(), 4));
			dc.indent();
			dc.getPs().print("innerCodignMode: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getInnerCodignMode(), 4));
		}
		// write bf2
		{
			dc.indent();
			dc.getPs().print("split_bitstream_mode: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getSplit_bitstream_mode(), 1));
			dc.indent();
			dc.getPs().print("modulation_format: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getModulation_format(), 5));
		}
		// write symbolRate
		dc.indent();
		dc.getPs().println(
				"symbolRate=" + symbolRate + "(0x"
						+ Long.toHexString(symbolRate) + ")");
		dc.decreaseIndent();
		return retVal;
	}

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
	// Getter for bf2
	// public BitField_8 getBf2()
	// {
	// return bf2 ;
	// }

	// Setter for bf2
	// public void setBf2(BitField_8 val)
	// {
	// this.bf2= val;
	// }
	// Getter for symbolRate
	// public long getSymbolRate()
	// {
	// return symbolRate ;
	// }

	// Setter for symbolRate
	// public void setSymbolRate(long val)
	// {
	// this.symbolRate= val;
	// }

	public int getTransmissionSystem() {
		return (bf1.getValue() & 0x000000f0) >> 4;
	}

	public void setTransmissionSystem(int val) {
		bf1.setValue((bf1.getValue() & 0xffffff0f) | ((val << 4) & 0x000000f0));
	}

	public int getInnerCodignMode() {
		return (bf1.getValue() & 0x0000000f) >> 0;
	}

	public void setInnerCodignMode(int val) {
		bf1.setValue((bf1.getValue() & 0xfffffff0) | ((val << 0) & 0x0000000f));
	}

	public int getSplit_bitstream_mode() {
		return (bf2.getValue() & 0x00000080) >> 7;
	}

	public void setSplit_bitstream_mode(int val) {
		bf2.setValue((bf2.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
	}

	public int getModulation_format() {
		return (bf2.getValue() & 0x0000001f) >> 0;
	}

	public void setModulation_format(int val) {
		bf2.setValue((bf2.getValue() & 0xffffffe0) | ((val << 0) & 0x0000001f));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code