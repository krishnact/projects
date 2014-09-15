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
public class PatEntry extends BinStruct implements PublicBinMsg {

	// members variables
	// programNumber
	public int programNumber;
	// bf1
	public BitField_16 bf1;

	public PatEntry() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize programNumber

		// Initialize bf1
		bf1 = new BitField_16();
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read programNumber
		{
			programNumber = istream.readUnsignedShort();
			retVal += 2;
		}
		// read bf1
		retVal += bf1.read(istream);

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write programNumber
		ostream.writeShort(programNumber);
		retVal += 2;
		// write bf1
		ostream.writeShort(bf1.getValue());
		retVal += 2;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("PatEntry\n");
		dc.increaseIndent();
		int retVal = 0;
		// write programNumber
		dc.indent();
		dc.getPs().println(
				"programNumber=" + programNumber + "(0x"
						+ Integer.toHexString(programNumber) + ")");
		// write bf1
		{
			dc.indent();
			dc.getPs().print("reserved: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved(), 3));
			dc.indent();
			dc.getPs().print("pid: ");
			dc.getPs().println(BitField_8.toDisplayString(getPid(), 13));
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for programNumber
	// public int getProgramNumber()
	// {
	// return programNumber ;
	// }

	// Setter for programNumber
	// public void setProgramNumber(int val)
	// {
	// this.programNumber= val;
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

	public int getReserved() {
		return (bf1.getValue() & 0x0000e000) >> 13;
	}

	public void setReserved(int val) {
		bf1.setValue((bf1.getValue() & 0xffff1fff) | ((val << 13) & 0x0000e000));
	}

	public int getPid() {
		return (bf1.getValue() & 0x00001fff) >> 0;
	}

	public void setPid(int val) {
		bf1.setValue((bf1.getValue() & 0xffffe000) | ((val << 0) & 0x00001fff));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code