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
@Created(date = "Mon Jul 22 13:35:04 EDT 2013")
public class ESInfo extends BinStruct implements PublicBinMsg {

	// members variables
	// stream_type
	public short stream_type;
	// pidField
	public BitField_16 pidField;
	// infoField
	public BitField_16 infoField;
	// esDescriptor
	public DVB_DescriptorFactory.DVB_Descriptor esDescriptor;

	public ESInfo() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize stream_type

		// Initialize pidField
		pidField = new BitField_16();
		// Initialize infoField
		infoField = new BitField_16();
		// Initialize esDescriptor
		/* Generic classes are abstract, so we can not invoke new */
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read stream_type
		{
			stream_type = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read pidField
		retVal += pidField.read(istream);
		// read infoField
		retVal += infoField.read(istream);
		// read esDescriptor
		{
			IntegerHolder iHolder = new IntegerHolder();
			DataInputStream disTemp = istream;
			esDescriptor = DVB_DescriptorFactory.createMsg(disTemp, iHolder);
			retVal += iHolder.getValue();
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for esDescriptor **/
		}

		// write stream_type
		ostream.writeByte(stream_type);
		retVal += 1;
		// write pidField
		ostream.writeShort(pidField.getValue());
		retVal += 2;
		// write infoField
		ostream.writeShort(infoField.getValue());
		retVal += 2;
		// write esDescriptor
		retVal += esDescriptor.write(ostream);
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("ESInfo\n");
		dc.increaseIndent();
		int retVal = 0;
		// write stream_type
		dc.indent();
		dc.getPs().println(
				"stream_type=" + stream_type + "(0x"
						+ Integer.toHexString(stream_type) + ")");
		// write pidField
		{
			dc.indent();
			dc.getPs().print("reserved1: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved1(), 3));
			dc.indent();
			dc.getPs().print("elementary_PID: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getElementary_PID(), 13));
		}
		// write infoField
		{
			dc.indent();
			dc.getPs().print("reserved2: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved2(), 4));
			dc.indent();
			dc.getPs().print("ES_info_length: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getES_info_length(), 12));
		}
		// write esDescriptor
		if (esDescriptor != null) {
			dc.indent();
			dc.getPs().println("esDescriptor");
			retVal += esDescriptor.dump(dc);
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for stream_type
	// public short getStream_type()
	// {
	// return stream_type ;
	// }

	// Setter for stream_type
	// public void setStream_type(short val)
	// {
	// this.stream_type= val;
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
	// Getter for infoField
	// public BitField_16 getInfoField()
	// {
	// return infoField ;
	// }

	// Setter for infoField
	// public void setInfoField(BitField_16 val)
	// {
	// this.infoField= val;
	// }
	// Getter for esDescriptor
	// public DVB_DescriptorFactory.DVB_Descriptor getEsDescriptor()
	// {
	// return esDescriptor ;
	// }

	// Setter for esDescriptor
	// public void setEsDescriptor(DVB_DescriptorFactory.DVB_Descriptor val)
	// {
	// this.esDescriptor= val;
	// }

	public int getReserved1() {
		return (pidField.getValue() & 0x0000e000) >> 13;
	}

	public void setReserved1(int val) {
		pidField.setValue((pidField.getValue() & 0xffff1fff)
				| ((val << 13) & 0x0000e000));
	}

	public int getElementary_PID() {
		return (pidField.getValue() & 0x00001fff) >> 0;
	}

	public void setElementary_PID(int val) {
		pidField.setValue((pidField.getValue() & 0xffffe000)
				| ((val << 0) & 0x00001fff));
	}

	public int getReserved2() {
		return (infoField.getValue() & 0x0000f000) >> 12;
	}

	public void setReserved2(int val) {
		infoField.setValue((infoField.getValue() & 0xffff0fff)
				| ((val << 12) & 0x0000f000));
	}

	public int getES_info_length() {
		return (infoField.getValue() & 0x00000fff) >> 0;
	}

	public void setES_info_length(int val) {
		infoField.setValue((infoField.getValue() & 0xfffff000)
				| ((val << 0) & 0x00000fff));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code