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
public class dvbJapp_locator_descriptor
		extends
			app_desc_baseFactory.app_desc_base { // Concrete type is
													// dvbJapp_locator_descriptor

	// members variables
	// desc_header
	public descriptor_header desc_header;
	// base_directory
	public ByteArray base_directory;
	// class_path
	public ByteArray class_path;
	// initial_class
	public ByteArray initial_class;

	public dvbJapp_locator_descriptor() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize desc_header
		desc_header = new descriptor_header();
		// Initialize base_directory
		base_directory = new ByteArray();
		base_directory.setSizeType("FIRST_UI8");
		// Initialize class_path
		class_path = new ByteArray();
		class_path.setSizeType("FIRST_UI8");
		// Initialize initial_class
		initial_class = new ByteArray();
		initial_class.setSizeType("EOS");
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
				// read base_directory
				{
					retVal += base_directory.read(istream);
				}
				// read class_path
				{
					retVal += class_path.read(istream);
				}
				// read initial_class
				{
					retVal += initial_class.read(istream);
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
				// read base_directory
				{
					retVal += base_directory.read(istream);
				}
				// read class_path
				{
					retVal += class_path.read(istream);
				}
				// read initial_class
				{
					retVal += initial_class.read(istream);
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
			/** fix dependent sizes for base_directory **/
		}
		{
			/** fix dependent sizes for class_path **/
		}
		{
			/** fix dependent sizes for initial_class **/
		}

		// write desc_header
		if (desc_header != null)
			retVal += desc_header.write(ostream);
		// write base_directory
		{
			retVal += base_directory.write(ostream);
		}
		// write class_path
		{
			retVal += class_path.write(ostream);
		}
		// write initial_class
		{
			retVal += initial_class.write(ostream);
		}
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("dvbJapp_locator_descriptor\n");
		dc.increaseIndent();
		int retVal = 0;
		// write desc_header
		if (desc_header != null) {
			dc.indent();
			dc.getPs().println("desc_header");
			retVal += desc_header.dump(dc);
		}
		// write base_directory
		dc.indent();
		dc.getPs()
				.print("base_directory: " + base_directory.getSize() + "(0x"
						+ Integer.toHexString(base_directory.getSize()) + ")\n");
		this.base_directory.dump(dc);
		// write class_path
		dc.indent();
		dc.getPs().print(
				"class_path: " + class_path.getSize() + "(0x"
						+ Integer.toHexString(class_path.getSize()) + ")\n");
		this.class_path.dump(dc);
		// write initial_class
		dc.indent();
		dc.getPs().print(
				"initial_class: " + initial_class.getSize() + "(0x"
						+ Integer.toHexString(initial_class.getSize()) + ")\n");
		this.initial_class.dump(dc);
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
	// Getter for base_directory
	// public ByteArray getBase_directory()
	// {
	// return base_directory ;
	// }

	// Setter for base_directory
	// public void setBase_directory(ByteArray val)
	// {
	// this.base_directory= val;
	// }
	// Getter for class_path
	// public ByteArray getClass_path()
	// {
	// return class_path ;
	// }

	// Setter for class_path
	// public void setClass_path(ByteArray val)
	// {
	// this.class_path= val;
	// }
	// Getter for initial_class
	// public ByteArray getInitial_class()
	// {
	// return initial_class ;
	// }

	// Setter for initial_class
	// public void setInitial_class(ByteArray val)
	// {
	// this.initial_class= val;
	// }

	public void setBase_directory(byte[] val) {
		this.base_directory.setData(val);
	}

	public void setClass_path(byte[] val) {
		this.class_path.setData(val);
	}

	public void setInitial_class(byte[] val) {
		this.initial_class.setData(val);
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