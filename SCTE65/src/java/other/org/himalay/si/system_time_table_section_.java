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
public class system_time_table_section_ extends SCTE65TableFactory.SCTE65Table { // Concrete
																					// type
																					// is
																					// system_time_table_section

	// member static classes
	public static class subtable extends BinStruct implements PublicBinMsg {

		// members variables
		// zero
		public short zero;
		// systemTime
		public long systemTime;
		// GPS_UTC_Offset
		public short GPS_UTC_Offset;
		// descriptor
		public Descriptors descriptor;

		// Parent of this object
		system_time_table_section_ parent;
		public subtable(system_time_table_section_ parent) // throws Exception
		{
			this.parent = parent;
			init();
		}
		public system_time_table_section_ getParent() {
			return parent;
		}

		private void init() {
			// Initialize zero

			// Initialize systemTime

			// Initialize GPS_UTC_Offset

			// Initialize descriptor
			// Conditional, will be initialized during read
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read zero
			{
				zero = (short) (istream.readUnsignedByte());
				retVal += 1;
			}
			// read systemTime
			{
				systemTime = (long) (BinPrimitive.readUI32(istream));
				retVal += 4;
			}
			// read GPS_UTC_Offset
			{
				GPS_UTC_Offset = (short) (istream.readUnsignedByte());
				retVal += 1;
			}
			// read descriptor
			if ((parent.tableHeader.getSection_length() - (retVal - 2) - 4) > 0) {
				descriptor = new Descriptors();
				retVal += descriptor.read(istream);
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			{
				/** fix dependent sizes for descriptor **/
			}

			// write zero
			ostream.writeByte(zero);
			retVal += 1;
			// write systemTime
			BinPrimitive.writeUI32(ostream, systemTime);
			retVal += 4;
			// write GPS_UTC_Offset
			ostream.writeByte(GPS_UTC_Offset);
			retVal += 1;
			// write descriptor
			if (descriptor != null)
				retVal += descriptor.write(ostream);
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("subtable\n");
			dc.increaseIndent();
			int retVal = 0;
			// write zero
			dc.indent();
			dc.getPs().println(
					"zero=" + zero + "(0x" + Integer.toHexString(zero) + ")");
			// write systemTime
			dc.indent();
			dc.getPs().println(
					"systemTime=" + systemTime + "(0x"
							+ Long.toHexString(systemTime) + ")");
			// write GPS_UTC_Offset
			dc.indent();
			dc.getPs().println(
					"GPS_UTC_Offset=" + GPS_UTC_Offset + "(0x"
							+ Integer.toHexString(GPS_UTC_Offset) + ")");
			// write descriptor
			if (descriptor != null) {
				dc.indent();
				dc.getPs().println("descriptor");
				retVal += descriptor.dump(dc);
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for zero
		// public short getZero()
		// {
		// return zero ;
		// }

		// Setter for zero
		// public void setZero(short val)
		// {
		// this.zero= val;
		// }
		// Getter for systemTime
		// public long getSystemTime()
		// {
		// return systemTime ;
		// }

		// Setter for systemTime
		// public void setSystemTime(long val)
		// {
		// this.systemTime= val;
		// }
		// Getter for GPS_UTC_Offset
		// public short getGPS_UTC_Offset()
		// {
		// return GPS_UTC_Offset ;
		// }

		// Setter for GPS_UTC_Offset
		// public void setGPS_UTC_Offset(short val)
		// {
		// this.GPS_UTC_Offset= val;
		// }
		// Getter for descriptor
		// public Descriptors getDescriptor()
		// {
		// return descriptor ;
		// }

		// Setter for descriptor
		// public void setDescriptor(Descriptors val)
		// {
		// this.descriptor= val;
		// }

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code

	// members variables
	// tableHeader
	public SCTE65_TableHeader tableHeader;
	// bf2
	public BitField_8 bf2;
	// subtableInstance
	public subtable subtableInstance;
	// CRC
	public long CRC;

	public system_time_table_section_() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize tableHeader
		tableHeader = new SCTE65_TableHeader();
		// Initialize bf2
		bf2 = new BitField_8();
		// Initialize subtableInstance
		subtableInstance = new subtable(this);
		// Initialize CRC

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read bf2
		retVal += bf2.read(istream);
		// read subtableInstance
		{
			int iCount = tableHeader.getSection_length() + (-5);
			byte[] ba = new byte[iCount];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			retVal += subtableInstance.read(new DataInputStream(baTemp));
		}
		// read CRC
		{
			CRC = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}

		postRead();
		return retVal;
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read tableHeader
		retVal += tableHeader.read(istream);
		// read bf2
		retVal += bf2.read(istream);
		// read subtableInstance
		{
			int iCount = tableHeader.getSection_length() + (-5);
			byte[] ba = new byte[iCount];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			retVal += subtableInstance.read(new DataInputStream(baTemp));
		}
		// read CRC
		{
			CRC = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for tableHeader **/
		}

		{
			/** fix dependent sizes for subtableInstance **/
			if (subtableInstance != null)
				tableHeader.setSection_length((short) subtableInstance
						.getSize());
		}

		// write tableHeader
		if (tableHeader != null)
			retVal += tableHeader.write(ostream);
		// write bf2
		ostream.writeByte(bf2.getValue());
		retVal += 1;
		// write subtableInstance
		if (subtableInstance != null)
			retVal += subtableInstance.write(ostream);
		// write CRC
		BinPrimitive.writeUI32(ostream, CRC);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("system_time_table_section_\n");
		dc.increaseIndent();
		int retVal = 0;
		// write tableHeader
		if (tableHeader != null) {
			dc.indent();
			dc.getPs().println("tableHeader");
			retVal += tableHeader.dump(dc);
		}
		// write bf2
		{
			dc.indent();
			dc.getPs().print("zeroVersion: ");
			dc.getPs().println(BitField_8.toDisplayString(getZeroVersion(), 3));
			dc.indent();
			dc.getPs().print("protocol_version: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getProtocol_version(), 5));
		}
		// write subtableInstance
		if (subtableInstance != null) {
			dc.indent();
			dc.getPs().println("subtableInstance");
			retVal += subtableInstance.dump(dc);
		}
		// write CRC
		dc.indent();
		dc.getPs().println("CRC=" + CRC + "(0x" + Long.toHexString(CRC) + ")");
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for tableHeader
	// public SCTE65_TableHeader getTableHeader()
	// {
	// return tableHeader ;
	// }

	// Setter for tableHeader
	// public void setTableHeader(SCTE65_TableHeader val)
	// {
	// this.tableHeader= val;
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
	// Getter for subtableInstance
	// public subtable getSubtableInstance()
	// {
	// return subtableInstance ;
	// }

	// Setter for subtableInstance
	// public void setSubtableInstance(subtable val)
	// {
	// this.subtableInstance= val;
	// }
	// Getter for CRC
	// public long getCRC()
	// {
	// return CRC ;
	// }

	// Setter for CRC
	// public void setCRC(long val)
	// {
	// this.CRC= val;
	// }

	public int getZeroVersion() {
		return (bf2.getValue() & 0x000000e0) >> 5;
	}

	public void setZeroVersion(int val) {
		bf2.setValue((bf2.getValue() & 0xffffff1f) | ((val << 5) & 0x000000e0));
	}

	public int getProtocol_version() {
		return (bf2.getValue() & 0x0000001f) >> 0;
	}

	public void setProtocol_version(int val) {
		bf2.setValue((bf2.getValue() & 0xffffffe0) | ((val << 0) & 0x0000001f));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

	public void setHeader(SCTE65_TableHeader header) {
		this.tableHeader = header;
	}

	public SCTE65_TableHeader getHeader() {
		return this.tableHeader;
	}

}

// End of code