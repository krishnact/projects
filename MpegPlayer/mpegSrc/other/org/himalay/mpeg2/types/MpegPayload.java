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
public class MpegPayload extends BinStruct implements PublicBinMsg {

	// members variables
	// pointerField
	public short pointerField;
	// skip
	public ByteArray skip;
	// header
	public MpegTableHeader header;
	// table
	public MpegTableFactory.MpegTable table;

	public MpegPayload() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize pointerField

		// Initialize skip
		skip = new ByteArray();
		skip.setSizeType("EXTERNAL");
		// Initialize header
		header = new MpegTableHeader();
		// Initialize table
		/* Generic classes are abstract, so we can not invoke new */
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read pointerField
		{
			pointerField = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read skip
		{
			skip.setSizeType("EXTERNAL");
			int iRead = pointerField + (0);
			skip.setSize(iRead);
			retVal += skip.read(istream);
		}
		// read table
		{
			IntegerHolder iHolder = new IntegerHolder();
			byte[] ba = new byte[50000];
			int iCount = istream.read(ba);
			DataInputStream disTemp = new DataInputStream(
					new ByteArrayInputStream(ba, 0, iCount));
			table = MpegTableFactory.createMsg(getHeader(), disTemp, iHolder);
			retVal += iHolder.getValue();
		}

		postRead();
		return retVal;
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read pointerField
		{
			pointerField = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read skip
		{
			skip.setSizeType("EXTERNAL");
			int iRead = pointerField + (0);
			skip.setSize(iRead);
			retVal += skip.read(istream);
		}
		// read header
		retVal += header.read(istream);
		// read table
		{
			IntegerHolder iHolder = new IntegerHolder();
			byte[] ba = new byte[50000];
			int iCount = istream.read(ba);
			DataInputStream disTemp = new DataInputStream(
					new ByteArrayInputStream(ba, 0, iCount));
			table = MpegTableFactory.createMsg(getHeader(), disTemp, iHolder);
			retVal += iHolder.getValue();
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for skip **/
			pointerField = ((short) skip.getSize());
		}
		{
			/** fix dependent sizes for header **/
		}
		{
			/** fix dependent sizes for table **/
		}

		// write pointerField
		ostream.writeByte(pointerField);
		retVal += 1;
		// write skip
		{
			retVal += skip.write(ostream);
		}
		// write header
		retVal += header.write(ostream);
		// write table
		retVal += table.write(ostream);
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("MpegPayload\n");
		dc.increaseIndent();
		int retVal = 0;
		// write pointerField
		dc.indent();
		dc.getPs().println(
				"pointerField=" + pointerField + "(0x"
						+ Integer.toHexString(pointerField) + ")");
		// write skip
		dc.indent();
		dc.getPs().print(
				"skip: " + skip.getSize() + "(0x"
						+ Integer.toHexString(skip.getSize()) + ")\n");
		this.skip.dump(dc);
		// write header
		if (header != null) {
			dc.indent();
			dc.getPs().println("header");
			retVal += header.dump(dc);
		}
		// write table
		if (table != null) {
			dc.indent();
			dc.getPs().println("table");
			retVal += table.dump(dc);
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for pointerField
	// public short getPointerField()
	// {
	// return pointerField ;
	// }

	// Setter for pointerField
	// public void setPointerField(short val)
	// {
	// this.pointerField= val;
	// }
	// Getter for skip
	// public ByteArray getSkip()
	// {
	// return skip ;
	// }

	// Setter for skip
	// public void setSkip(ByteArray val)
	// {
	// this.skip= val;
	// }
	// Getter for header
	// public MpegTableHeader getHeader()
	// {
	// return header ;
	// }

	// Setter for header
	// public void setHeader(MpegTableHeader val)
	// {
	// this.header= val;
	// }
	// Getter for table
	// public MpegTableFactory.MpegTable getTable()
	// {
	// return table ;
	// }

	// Setter for table
	// public void setTable(MpegTableFactory.MpegTable val)
	// {
	// this.table= val;
	// }

	public void setSkip(byte[] val) {
		this.skip.setData(val);
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

	public void setHeader(MpegTableHeader header) {
		this.header = header;
	}

	public MpegTableHeader getHeader() {
		return this.header;
	}

}

// End of code