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
public class CA_Descriptor extends DVB_DescriptorFactory.DVB_Descriptor { // Concrete
																			// type
																			// is
																			// CA_Descriptor

	// members variables
	// header
	public UI8Header header;
	// length
	public short length;
	// CA_system_ID
	public int CA_system_ID;
	// pidField
	public BitField_16 pidField;
	// data
	public ByteArray data;

	public CA_Descriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new UI8Header();
		// Initialize length

		// Initialize CA_system_ID

		// Initialize pidField
		pidField = new BitField_16();
		// Initialize data
		data = new ByteArray();
		data.setSizeType("EXTERNAL");
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read length
		{
			length = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read CA_system_ID
		{
			CA_system_ID = istream.readUnsignedShort();
			retVal += 2;
		}
		// read pidField
		retVal += pidField.read(istream);
		// read data
		{
			data.setSizeType("EXTERNAL");
			int iRead = length + (-4);
			data.setSize(iRead);
			retVal += data.read(istream);
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
		// read CA_system_ID
		{
			CA_system_ID = istream.readUnsignedShort();
			retVal += 2;
		}
		// read pidField
		retVal += pidField.read(istream);
		// read data
		{
			data.setSizeType("EXTERNAL");
			int iRead = length + (-4);
			data.setSize(iRead);
			retVal += data.read(istream);
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
			/** fix dependent sizes for data **/
			length = ((short) data.getSize());
		}

		// write header
		retVal += header.write(ostream);
		// write length
		ostream.writeByte(length);
		retVal += 1;
		// write CA_system_ID
		ostream.writeShort(CA_system_ID);
		retVal += 2;
		// write pidField
		ostream.writeShort(pidField.getValue());
		retVal += 2;
		// write data
		{
			retVal += data.write(ostream);
		}
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("CA_Descriptor\n");
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
		// write CA_system_ID
		dc.indent();
		dc.getPs().println(
				"CA_system_ID=" + CA_system_ID + "(0x"
						+ Integer.toHexString(CA_system_ID) + ")");
		// write pidField
		{
			dc.indent();
			dc.getPs().print("reserved1: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved1(), 3));
			dc.indent();
			dc.getPs().print("CA_PID: ");
			dc.getPs().println(BitField_8.toDisplayString(getCA_PID(), 13));
		}
		// write data
		dc.indent();
		dc.getPs().print(
				"data: " + data.getSize() + "(0x"
						+ Integer.toHexString(data.getSize()) + ")\n");
		this.data.dump(dc);
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
	// Getter for CA_system_ID
	// public int getCA_system_ID()
	// {
	// return CA_system_ID ;
	// }

	// Setter for CA_system_ID
	// public void setCA_system_ID(int val)
	// {
	// this.CA_system_ID= val;
	// }
	// Getter for pidField
	// public BitField_16 getPidField()
	// {
	// return pidField ;
	// }

	// Setter for pidField
	// public void setPidField(BitField_16 val)
	// {
	// this.pidField= val;
	// }
	// Getter for data
	// public ByteArray getData()
	// {
	// return data ;
	// }

	// Setter for data
	// public void setData(ByteArray val)
	// {
	// this.data= val;
	// }

	public int getReserved1() {
		return (pidField.getValue() & 0x0000e000) >> 13;
	}

	public void setReserved1(int val) {
		pidField.setValue((pidField.getValue() & 0xffff1fff)
				| ((val << 13) & 0x0000e000));
	}

	public int getCA_PID() {
		return (pidField.getValue() & 0x00001fff) >> 0;
	}

	public void setCA_PID(int val) {
		pidField.setValue((pidField.getValue() & 0xffffe000)
				| ((val << 0) & 0x00001fff));
	}

	public void setData(byte[] val) {
		this.data.setData(val);
	}

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