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
public class CDS_Record extends BinStruct implements PublicBinMsg {

	// members variables
	// number_of_carriers
	public short number_of_carriers;
	// bf1
	public BitField_16 bf1;
	// bf2
	public BitField_16 bf2;

	public CDS_Record() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize number_of_carriers

		// Initialize bf1
		bf1 = new BitField_16();
		// Initialize bf2
		bf2 = new BitField_16();
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read number_of_carriers
		{
			number_of_carriers = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read bf1
		retVal += bf1.read(istream);
		// read bf2
		retVal += bf2.read(istream);

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write number_of_carriers
		ostream.writeByte(number_of_carriers);
		retVal += 1;
		// write bf1
		ostream.writeShort(bf1.getValue());
		retVal += 2;
		// write bf2
		ostream.writeShort(bf2.getValue());
		retVal += 2;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("CDS_Record\n");
		dc.increaseIndent();
		int retVal = 0;
		// write number_of_carriers
		dc.indent();
		dc.getPs().println(
				"number_of_carriers=" + number_of_carriers + "(0x"
						+ Integer.toHexString(number_of_carriers) + ")");
		// write bf1
		{
			dc.indent();
			dc.getPs().print("spacingUnit: ");
			dc.getPs().println(BitField_8.toDisplayString(getSpacingUnit(), 1));
			dc.indent();
			dc.getPs().print("frequencySpacing: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getFrequencySpacing(), 14));
		}
		// write bf2
		{
			dc.indent();
			dc.getPs().print("frequencyUnit: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getFrequencyUnit(), 1));
			dc.indent();
			dc.getPs().print("firstCarrierFrequency: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getFirstCarrierFrequency(), 15));
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for number_of_carriers
	// public short getNumber_of_carriers()
	// {
	// return number_of_carriers ;
	// }

	// Setter for number_of_carriers
	// public void setNumber_of_carriers(short val)
	// {
	// this.number_of_carriers= val;
	// }
	// Getter for bf1
	// public BitField_16 getBf1()
	// {
	// return bf1 ;
	// }

	// Setter for bf1
	// public void setBf1(BitField_16 val)
	// {
	// this.bf1= val;
	// }
	// Getter for bf2
	// public BitField_16 getBf2()
	// {
	// return bf2 ;
	// }

	// Setter for bf2
	// public void setBf2(BitField_16 val)
	// {
	// this.bf2= val;
	// }

	public int getSpacingUnit() {
		return (bf1.getValue() & 0x00008000) >> 15;
	}

	public void setSpacingUnit(int val) {
		bf1.setValue((bf1.getValue() & 0xffff7fff) | ((val << 15) & 0x00008000));
	}

	public int getFrequencySpacing() {
		return (bf1.getValue() & 0x00003fff) >> 0;
	}

	public void setFrequencySpacing(int val) {
		bf1.setValue((bf1.getValue() & 0xffffc000) | ((val << 0) & 0x00003fff));
	}

	public int getFrequencyUnit() {
		return (bf2.getValue() & 0x00008000) >> 15;
	}

	public void setFrequencyUnit(int val) {
		bf2.setValue((bf2.getValue() & 0xffff7fff) | ((val << 15) & 0x00008000));
	}

	public int getFirstCarrierFrequency() {
		return (bf2.getValue() & 0x00007fff) >> 0;
	}

	public void setFirstCarrierFrequency(int val) {
		bf2.setValue((bf2.getValue() & 0xffff8000) | ((val << 0) & 0x00007fff));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code