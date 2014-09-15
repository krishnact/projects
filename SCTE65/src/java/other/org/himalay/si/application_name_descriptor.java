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
public class application_name_descriptor
		extends
			app_desc_baseFactory.app_desc_base { // Concrete type is
													// application_name_descriptor

	// members variables
	// desc_header
	public descriptor_header desc_header;
	// ISO_639_Language_Code
	public ByteArray ISO_639_Language_Code;
	// app_name
	public ByteArray app_name;

	public application_name_descriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize desc_header
		desc_header = new descriptor_header();
		// Initialize ISO_639_Language_Code
		ISO_639_Language_Code = new ByteArray();
		ISO_639_Language_Code.setSizeType("FIXED");
		ISO_639_Language_Code.setSize(3);
		// Initialize app_name
		app_name = new ByteArray();
		app_name.setSizeType("FIRST_UI8");
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		DataInputStream saved = istream;
		int sizeLimit = getHeader().length + (0);
		if (sizeLimit > 0) {
			byte[] ba = new byte[sizeLimit];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			istream = new DataInputStream(baTemp);
			{
				// read ISO_639_Language_Code
				{
					retVal += ISO_639_Language_Code.read(istream);
				}
				// read app_name
				{
					retVal += app_name.read(istream);
				}

			}
		}
		istream = saved;
		postRead();
		return retVal;
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		DataInputStream saved = istream;
		int sizeLimit = getHeader().length + (0);
		if (sizeLimit > 0) {
			byte[] ba = new byte[sizeLimit];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			istream = new DataInputStream(baTemp);
			{
				// read desc_header
				retVal += desc_header.read(istream);
				// read ISO_639_Language_Code
				{
					retVal += ISO_639_Language_Code.read(istream);
				}
				// read app_name
				{
					retVal += app_name.read(istream);
				}

			}
		}
		istream = saved;
		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for desc_header **/
		}
		{
			/** fix dependent sizes for ISO_639_Language_Code **/
		}
		{
			/** fix dependent sizes for app_name **/
		}

		// write desc_header
		if (desc_header != null)
			retVal += desc_header.write(ostream);
		// write ISO_639_Language_Code
		{
			retVal += ISO_639_Language_Code.write(ostream);
		}
		// write app_name
		{
			retVal += app_name.write(ostream);
		}
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("application_name_descriptor\n");
		dc.increaseIndent();
		int retVal = 0;
		// write desc_header
		if (desc_header != null) {
			dc.indent();
			dc.getPs().println("desc_header");
			retVal += desc_header.dump(dc);
		}
		// write ISO_639_Language_Code
		dc.indent();
		dc.getPs().print(
				"ISO_639_Language_Code: " + ISO_639_Language_Code.getSize()
						+ "(0x"
						+ Integer.toHexString(ISO_639_Language_Code.getSize())
						+ ")\n");
		this.ISO_639_Language_Code.dump(dc);
		// write app_name
		dc.indent();
		dc.getPs().print(
				"app_name: " + app_name.getSize() + "(0x"
						+ Integer.toHexString(app_name.getSize()) + ")\n");
		this.app_name.dump(dc);
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for desc_header
	// public descriptor_header getDesc_header()
	// {
	// return desc_header ;
	// }

	// Setter for desc_header
	// public void setDesc_header(descriptor_header val)
	// {
	// this.desc_header= val;
	// }
	// Getter for ISO_639_Language_Code
	// public ByteArray getISO_639_Language_Code()
	// {
	// return ISO_639_Language_Code ;
	// }

	// Setter for ISO_639_Language_Code
	// public void setISO_639_Language_Code(ByteArray val)
	// {
	// this.ISO_639_Language_Code= val;
	// }
	// Getter for app_name
	// public ByteArray getApp_name()
	// {
	// return app_name ;
	// }

	// Setter for app_name
	// public void setApp_name(ByteArray val)
	// {
	// this.app_name= val;
	// }

	public void setISO_639_Language_Code(byte[] val) {
		this.ISO_639_Language_Code.setData(val);
	}

	public void setApp_name(byte[] val) {
		this.app_name.setData(val);
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

	public void setHeader(descriptor_header header) {
		this.desc_header = header;
	}

	public descriptor_header getHeader() {
		return this.desc_header;
	}

}

// End of code