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
public class UnknowMpegTable extends MpegTableFactory.MpegTable { // Concrete
																	// type is
																	// UnknowMpegTable

	// members variables
	// header
	public MpegTableHeader header;
	// data
	public ByteArray data;

	public UnknowMpegTable() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new MpegTableHeader();
		// Initialize data
		data = new ByteArray();
		data.setSizeType("EOS");
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read data
		{
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
		// read data
		{
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
		}

		// write header
		retVal += header.write(ostream);
		// write data
		{
			retVal += data.write(ostream);
		}
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("UnknowMpegTable\n");
		dc.increaseIndent();
		int retVal = 0;
		// write header
		if (header != null) {
			dc.indent();
			dc.getPs().println("header");
			retVal += header.dump(dc);
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
	// public MpegTableHeader getHeader()
	// {
	// return header ;
	// }

	// Setter for header
	// public void setHeader(MpegTableHeader val)
	// {
	// this.header= val;
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

	public void setData(byte[] val) {
		this.data.setData(val);
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