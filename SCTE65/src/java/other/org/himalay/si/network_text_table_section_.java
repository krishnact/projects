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
public class network_text_table_section_ extends SCTE65TableFactory.SCTE65Table { // Concrete
																					// type
																					// is
																					// network_text_table_section

	// member static classes
	public static class subtable extends BinStruct implements PublicBinMsg {

		// member static classes
		public static class source_name_subtable extends BinStruct
				implements
					PublicBinMsg {

			// member static classes
			public static class SNSData extends BinStruct
					implements
						PublicBinMsg {

				// members variables
				// bf1
				public BitField_8 bf1;
				// appIdOrSourceType
				public int appIdOrSourceType;
				// sourceName
				public ByteArray sourceName;
				// descriptors
				public DescriptorCollection descriptors;

				// Parent of this object
				source_name_subtable parent;
				public SNSData(source_name_subtable parent) // throws Exception
				{
					this.parent = parent;
					init();
				}
				public source_name_subtable getParent() {
					return parent;
				}

				private void init() {
					// Initialize bf1
					bf1 = new BitField_8();
					// Initialize appIdOrSourceType

					// Initialize sourceName
					sourceName = new ByteArray();
					sourceName.setSizeType("FIRST_UI8");
					// Initialize descriptors
					descriptors = new DescriptorCollection();
				}

				public int readNoHeader(DataInputStream istream)
						throws IOException {

					return read(istream);
				}

				public int read(DataInputStream istream) throws IOException {
					preRead();
					int retVal = 0;

					// read bf1
					retVal += bf1.read(istream);
					// read appIdOrSourceType
					{
						appIdOrSourceType = istream.readUnsignedShort();
						retVal += 2;
					}
					// read sourceName
					{
						retVal += sourceName.read(istream);
					}
					// read descriptors
					retVal += descriptors.read(istream);

					postRead();
					return retVal;
				}

				public int write(DataOutputStream ostream) throws IOException {
					preWrite();
					int retVal = 0;

					{
						/** fix dependent sizes for sourceName **/
					}
					{
						/** fix dependent sizes for descriptors **/
					}

					// write bf1
					ostream.writeByte(bf1.getValue());
					retVal += 1;
					// write appIdOrSourceType
					ostream.writeShort(appIdOrSourceType);
					retVal += 2;
					// write sourceName
					{
						retVal += sourceName.write(ostream);
					}
					// write descriptors
					if (descriptors != null)
						retVal += descriptors.write(ostream);
					postWrite();
					return retVal;
				}

				public int dump(DumpContext dc) throws IOException {
					dc.indent();
					dc.getPs().print("SNSData\n");
					dc.increaseIndent();
					int retVal = 0;
					// write bf1
					{
						dc.indent();
						dc.getPs().print("applicationType: ");
						dc.getPs().println(
								BitField_8.toDisplayString(
										getApplicationType(), 1));
					}
					// write appIdOrSourceType
					dc.indent();
					dc.getPs().println(
							"appIdOrSourceType=" + appIdOrSourceType + "(0x"
									+ Integer.toHexString(appIdOrSourceType)
									+ ")");
					// write sourceName
					dc.indent();
					dc.getPs().print(
							"sourceName: " + sourceName.getSize() + "(0x"
									+ Integer.toHexString(sourceName.getSize())
									+ ")\n");
					this.sourceName.dump(dc);
					// write descriptors
					if (descriptors != null) {
						dc.indent();
						dc.getPs().println("descriptors");
						retVal += descriptors.dump(dc);
					}
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
				// Getter for appIdOrSourceType
				// public int getAppIdOrSourceType()
				// {
				// return appIdOrSourceType ;
				// }

				// Setter for appIdOrSourceType
				// public void setAppIdOrSourceType(int val)
				// {
				// this.appIdOrSourceType= val;
				// }
				// Getter for sourceName
				// public ByteArray getSourceName()
				// {
				// return sourceName ;
				// }

				// Setter for sourceName
				// public void setSourceName(ByteArray val)
				// {
				// this.sourceName= val;
				// }
				// Getter for descriptors
				// public DescriptorCollection getDescriptors()
				// {
				// return descriptors ;
				// }

				// Setter for descriptors
				// public void setDescriptors(DescriptorCollection val)
				// {
				// this.descriptors= val;
				// }

				public int getApplicationType() {
					return (bf1.getValue() & 0x00000080) >> 7;
				}

				public void setApplicationType(int val) {
					bf1.setValue((bf1.getValue() & 0xffffff7f)
							| ((val << 7) & 0x00000080));
				}

				public void setSourceName(byte[] val) {
					this.sourceName.setData(val);
				}

				public int getSize() throws IOException {
					DataOutputStream dos = new DataOutputStream(
							new NullStream());
					return this.write(dos);
				}

			}

			// End of code

			// members variables
			// count
			public short count;
			// snsAray
			public ArrayList<SNSData> snsAray;

			// Parent of this object
			subtable parent;
			public source_name_subtable(subtable parent) // throws Exception
			{
				this.parent = parent;
				init();
			}
			public subtable getParent() {
				return parent;
			}

			private void init() {
				// Initialize count

				// Initialize snsAray
				snsAray = new ArrayList<SNSData>();
				snsAray.setMemberSize(0);
			}

			public int readNoHeader(DataInputStream istream) throws IOException {

				return read(istream);
			}

			public int read(DataInputStream istream) throws IOException {
				preRead();
				int retVal = 0;

				// read count
				{
					count = (short) (istream.readUnsignedByte());
					retVal += 1;
				}
				// read snsAray
				for (int iIdx = 0; iIdx < count + (0); iIdx++) {
					SNSData temp;
					temp = new SNSData(this);
					retVal += temp.read(istream);
					snsAray.add(temp);
				}

				postRead();
				return retVal;
			}

			public int write(DataOutputStream ostream) throws IOException {
				preWrite();
				int retVal = 0;

				{
					/** fix dependent sizes for snsAray **/
					count = ((short) snsAray.getCount());
				}

				// write count
				ostream.writeByte(count);
				retVal += 1;
				// write snsAray
				{
					ArrayList<SNSData> temp1 = snsAray;
					for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
						SNSData temp2 = temp1.get(iIdx);
						if (temp2 != null)
							retVal += temp2.write(ostream);
					}
				}
				postWrite();
				return retVal;
			}

			public int dump(DumpContext dc) throws IOException {
				dc.indent();
				dc.getPs().print("source_name_subtable\n");
				dc.increaseIndent();
				int retVal = 0;
				// write count
				dc.indent();
				dc.getPs().println(
						"count=" + count + "(0x" + Integer.toHexString(count)
								+ ")");
				// write snsAray
				{
					ArrayList<SNSData> temp1 = snsAray;
					for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
						SNSData element = temp1.get(iIdx);
						dc.indent();
						dc.getPs().println(iIdx);
						if (element != null) {
							dc.indent();
							dc.getPs().println("element");
							retVal += element.dump(dc);
						}
					}
				}
				dc.decreaseIndent();
				return retVal;
			}

			// Getter for count
			// public short getCount()
			// {
			// return count ;
			// }

			// Setter for count
			// public void setCount(short val)
			// {
			// this.count= val;
			// }
			// Getter for snsAray
			// public ArrayList<SNSData> getSnsAray()
			// {
			// return snsAray ;
			// }

			// Setter for snsAray
			// public void setSnsAray(ArrayList<SNSData> val)
			// {
			// this.snsAray= val;
			// }

			public int addToSnsAray(SNSData val) {
				snsAray.add(val);
				return snsAray.size();
			}

			public int removeFromSnsAray(SNSData val) {
				snsAray.remove(val);
				return snsAray.size();
			}

			public int removeNthFromSnsAray(int idx) {
				snsAray.remove(idx);
				return snsAray.size();
			}

			public int emptySnsAray(int idx) {
				snsAray.clear();
				return snsAray.size();
			}

			public int getSize() throws IOException {
				DataOutputStream dos = new DataOutputStream(new NullStream());
				return this.write(dos);
			}

		}

		// End of code

		// members variables
		// source_name_subtableInstance
		public source_name_subtable source_name_subtableInstance;
		// descriptor
		public Descriptors descriptor;

		// Parent of this object
		network_text_table_section_ parent;
		public subtable(network_text_table_section_ parent) // throws Exception
		{
			this.parent = parent;
			init();
		}
		public network_text_table_section_ getParent() {
			return parent;
		}

		private void init() {
			// Initialize source_name_subtableInstance
			// Conditional, will be initialized during read
			// Initialize descriptor
			// Conditional, will be initialized during read
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read source_name_subtableInstance
			if (parent.getTable_subtype() == 6) {
				source_name_subtableInstance = new source_name_subtable(this);
				retVal += source_name_subtableInstance.read(istream);
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
				/** fix dependent sizes for source_name_subtableInstance **/
			}
			{
				/** fix dependent sizes for descriptor **/
			}

			// write source_name_subtableInstance
			if (source_name_subtableInstance != null)
				retVal += source_name_subtableInstance.write(ostream);
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
			// write source_name_subtableInstance
			if (source_name_subtableInstance != null) {
				dc.indent();
				dc.getPs().println("source_name_subtableInstance");
				retVal += source_name_subtableInstance.dump(dc);
			}
			// write descriptor
			if (descriptor != null) {
				dc.indent();
				dc.getPs().println("descriptor");
				retVal += descriptor.dump(dc);
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for source_name_subtableInstance
		// public source_name_subtable getSource_name_subtableInstance()
		// {
		// return source_name_subtableInstance ;
		// }

		// Setter for source_name_subtableInstance
		// public void setSource_name_subtableInstance(source_name_subtable val)
		// {
		// this.source_name_subtableInstance= val;
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
	// languageCode
	public ByteArray languageCode;
	// bf3
	public BitField_8 bf3;
	// subtableInstance
	public subtable subtableInstance;
	// CRC
	public long CRC;

	public network_text_table_section_() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize tableHeader
		tableHeader = new SCTE65_TableHeader();
		// Initialize bf2
		bf2 = new BitField_8();
		// Initialize languageCode
		languageCode = new ByteArray();
		languageCode.setSizeType("FIXED");
		languageCode.setSize(3);
		// Initialize bf3
		bf3 = new BitField_8();
		// Initialize subtableInstance
		subtableInstance = new subtable(this);
		// Initialize CRC

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read bf2
		retVal += bf2.read(istream);
		// read languageCode
		{
			retVal += languageCode.read(istream);
		}
		// read bf3
		retVal += bf3.read(istream);
		// read subtableInstance
		{
			int iCount = tableHeader.getSection_length() + (-9);
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
		// read languageCode
		{
			retVal += languageCode.read(istream);
		}
		// read bf3
		retVal += bf3.read(istream);
		// read subtableInstance
		{
			int iCount = tableHeader.getSection_length() + (-9);
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
			/** fix dependent sizes for languageCode **/
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
		// write languageCode
		{
			retVal += languageCode.write(ostream);
		}
		// write bf3
		ostream.writeByte(bf3.getValue());
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
		dc.getPs().print("network_text_table_section_\n");
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
		// write languageCode
		dc.indent();
		dc.getPs().print(
				"languageCode: " + languageCode.getSize() + "(0x"
						+ Integer.toHexString(languageCode.getSize()) + ")\n");
		this.languageCode.dump(dc);
		// write bf3
		{
			dc.indent();
			dc.getPs().print("transmission_medium: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getTransmission_medium(), 4));
			dc.indent();
			dc.getPs().print("table_subtype: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getTable_subtype(), 4));
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
	// Getter for languageCode
	// public ByteArray getLanguageCode()
	// {
	// return languageCode ;
	// }

	// Setter for languageCode
	// public void setLanguageCode(ByteArray val)
	// {
	// this.languageCode= val;
	// }
	// Getter for bf3
	// public BitField_8 getBf3()
	// {
	// return bf3 ;
	// }

	// Setter for bf3
	// public void setBf3(BitField_8 val)
	// {
	// this.bf3= val;
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

	public void setLanguageCode(byte[] val) {
		this.languageCode.setData(val);
	}

	public int getTransmission_medium() {
		return (bf3.getValue() & 0x000000f0) >> 4;
	}

	public void setTransmission_medium(int val) {
		bf3.setValue((bf3.getValue() & 0xffffff0f) | ((val << 4) & 0x000000f0));
	}

	public int getTable_subtype() {
		return (bf3.getValue() & 0x0000000f) >> 0;
	}

	public void setTable_subtype(int val) {
		bf3.setValue((bf3.getValue() & 0xfffffff0) | ((val << 0) & 0x0000000f));
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