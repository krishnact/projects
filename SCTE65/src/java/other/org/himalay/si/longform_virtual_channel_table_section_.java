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
public class longform_virtual_channel_table_section_
		extends
			SCTE65TableFactory.SCTE65Table { // Concrete type is
												// longform_virtual_channel_table_section

	// member static classes
	public static class record extends BinStruct implements PublicBinMsg {

		// members variables
		// short_name
		public ByteArray short_name;
		// bf1
		public BitField_32 bf1;
		// carrierFrequency
		public long carrierFrequency;
		// channelTSID
		public int channelTSID;
		// programNumber
		public int programNumber;
		// bf2
		public BitField_16 bf2;
		// sourceType
		public int sourceType;
		// bf3
		public BitField_16 bf3;
		// descriptors
		public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> descriptors;

		// Parent of this object
		longform_virtual_channel_table_section_ parent;
		public record(longform_virtual_channel_table_section_ parent) // throws
																		// Exception
		{
			this.parent = parent;
			init();
		}
		public longform_virtual_channel_table_section_ getParent() {
			return parent;
		}

		private void init() {
			// Initialize short_name
			short_name = new ByteArray();
			short_name.setSizeType("FIXED");
			short_name.setSize(14);
			// Initialize bf1
			bf1 = new BitField_32();
			// Initialize carrierFrequency

			// Initialize channelTSID

			// Initialize programNumber

			// Initialize bf2
			bf2 = new BitField_16();
			// Initialize sourceType

			// Initialize bf3
			bf3 = new BitField_16();
			// Initialize descriptors
			descriptors = new ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>();
			descriptors.setMemberSize(0);
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read short_name
			{
				retVal += short_name.read(istream);
			}
			// read bf1
			retVal += bf1.read(istream);
			// read carrierFrequency
			{
				carrierFrequency = (long) (BinPrimitive.readUI32(istream));
				retVal += 4;
			}
			// read channelTSID
			{
				channelTSID = istream.readUnsignedShort();
				retVal += 2;
			}
			// read programNumber
			{
				programNumber = istream.readUnsignedShort();
				retVal += 2;
			}
			// read bf2
			retVal += bf2.read(istream);
			// read sourceType
			{
				sourceType = istream.readUnsignedShort();
				retVal += 2;
			}
			// read bf3
			retVal += bf3.read(istream);
			// read descriptors
			for (int iIdx = 0; iIdx < getDescriptorsLength() + (0); iIdx++) {
				SCTE65DescriptorFactory.SCTE65Descriptor temp; /*
																 * Generic
																 * classes are
																 * abstract, so
																 * we can not
																 * invoke new
																 */
				{
					IntegerHolder iHolder = new IntegerHolder();
					DataInputStream disTemp = istream;
					temp = SCTE65DescriptorFactory.createMsg(disTemp, iHolder);
					retVal += iHolder.getValue();
				}
				descriptors.add(temp);
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			{
				/** fix dependent sizes for short_name **/
			}

			{
				/** fix dependent sizes for descriptors **/
				setDescriptorsLength((short) descriptors.getCount());
			}

			// write short_name
			{
				retVal += short_name.write(ostream);
			}
			// write bf1

			// write carrierFrequency
			BinPrimitive.writeUI32(ostream, carrierFrequency);
			retVal += 4;
			// write channelTSID
			ostream.writeShort(channelTSID);
			retVal += 2;
			// write programNumber
			ostream.writeShort(programNumber);
			retVal += 2;
			// write bf2
			ostream.writeShort(bf2.getValue());
			retVal += 2;
			// write sourceType
			ostream.writeShort(sourceType);
			retVal += 2;
			// write bf3
			ostream.writeShort(bf3.getValue());
			retVal += 2;
			// write descriptors
			{
				ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
				for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
					SCTE65DescriptorFactory.SCTE65Descriptor temp2 = temp1
							.get(iIdx);
					if (temp2 != null)
						retVal += temp2.write(ostream);
				}
			}
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("record\n");
			dc.increaseIndent();
			int retVal = 0;
			// write short_name
			dc.indent();
			dc.getPs()
					.print("short_name: " + short_name.getSize() + "(0x"
							+ Integer.toHexString(short_name.getSize()) + ")\n");
			this.short_name.dump(dc);
			// write bf1
			{
				dc.indent();
				dc.getPs().print("reserved_: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved_(), 4));
				dc.indent();
				dc.getPs().print("majorChannelNumber: ");
				dc.getPs()
						.println(
								BitField_8.toDisplayString(
										getMajorChannelNumber(), 10));
				dc.indent();
				dc.getPs().print("minorChannelNumber: ");
				dc.getPs()
						.println(
								BitField_8.toDisplayString(
										getMinorChannelNumber(), 10));
				dc.indent();
				dc.getPs().print("modulationMode: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getModulationMode(), 8));
			}
			// write carrierFrequency
			dc.indent();
			dc.getPs().println(
					"carrierFrequency=" + carrierFrequency + "(0x"
							+ Long.toHexString(carrierFrequency) + ")");
			// write channelTSID
			dc.indent();
			dc.getPs().println(
					"channelTSID=" + channelTSID + "(0x"
							+ Integer.toHexString(channelTSID) + ")");
			// write programNumber
			dc.indent();
			dc.getPs().println(
					"programNumber=" + programNumber + "(0x"
							+ Integer.toHexString(programNumber) + ")");
			// write bf2
			{
				dc.indent();
				dc.getPs().print("reserved2_: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved2_(), 2));
				dc.indent();
				dc.getPs().print("accessControlled: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getAccessControlled(), 1));
				dc.indent();
				dc.getPs().print("hidden: ");
				dc.getPs().println(BitField_8.toDisplayString(getHidden(), 1));
				dc.indent();
				dc.getPs().print("pathSelect: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getPathSelect(), 1));
				dc.indent();
				dc.getPs().print("outOfBand: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getOutOfBand(), 1));
				dc.indent();
				dc.getPs().print("hideGuide: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getHideGuide(), 1));
				dc.indent();
				dc.getPs().print("reserved3_: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved3_(), 3));
				dc.indent();
				dc.getPs().print("serviceType: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getServiceType(), 6));
			}
			// write sourceType
			dc.indent();
			dc.getPs().println(
					"sourceType=" + sourceType + "(0x"
							+ Integer.toHexString(sourceType) + ")");
			// write bf3
			{
				dc.indent();
				dc.getPs().print("reserved4_: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved4_(), 6));
				dc.indent();
				dc.getPs().print("descriptorsLength: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getDescriptorsLength(), 10));
			}
			// write descriptors
			{
				ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
				for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
					SCTE65DescriptorFactory.SCTE65Descriptor element = temp1
							.get(iIdx);
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

		// Getter for short_name
		// public ByteArray getShort_name()
		// {
		// return short_name ;
		// }

		// Setter for short_name
		// public void setShort_name(ByteArray val)
		// {
		// this.short_name= val;
		// }
		// Getter for bf1
		// public BitField_32 getBf1()
		// {
		// return bf1 ;
		// }

		// Setter for bf1
		// public void setBf1(BitField_32 val)
		// {
		// this.bf1= val;
		// }
		// Getter for carrierFrequency
		// public long getCarrierFrequency()
		// {
		// return carrierFrequency ;
		// }

		// Setter for carrierFrequency
		// public void setCarrierFrequency(long val)
		// {
		// this.carrierFrequency= val;
		// }
		// Getter for channelTSID
		// public int getChannelTSID()
		// {
		// return channelTSID ;
		// }

		// Setter for channelTSID
		// public void setChannelTSID(int val)
		// {
		// this.channelTSID= val;
		// }
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
		// Getter for sourceType
		// public int getSourceType()
		// {
		// return sourceType ;
		// }

		// Setter for sourceType
		// public void setSourceType(int val)
		// {
		// this.sourceType= val;
		// }
		// Getter for bf3
		// public BitField_16 getBf3()
		// {
		// return bf3 ;
		// }

		// Setter for bf3
		// public void setBf3(BitField_16 val)
		// {
		// this.bf3= val;
		// }
		// Getter for descriptors
		// public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>
		// getDescriptors()
		// {
		// return descriptors ;
		// }

		// Setter for descriptors
		// public void
		// setDescriptors(ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>
		// val)
		// {
		// this.descriptors= val;
		// }

		public void setShort_name(byte[] val) {
			this.short_name.setData(val);
		}

		public int getReserved_() {
			return (bf1.getValue() & 0xf0000000) >> 28;
		}

		public void setReserved_(int val) {
			bf1.setValue((bf1.getValue() & 0x0fffffff)
					| ((val << 28) & 0xf0000000));
		}

		public int getMajorChannelNumber() {
			return (bf1.getValue() & 0x0ffc0000) >> 18;
		}

		public void setMajorChannelNumber(int val) {
			bf1.setValue((bf1.getValue() & 0xf003ffff)
					| ((val << 18) & 0x0ffc0000));
		}

		public int getMinorChannelNumber() {
			return (bf1.getValue() & 0x0003ff00) >> 8;
		}

		public void setMinorChannelNumber(int val) {
			bf1.setValue((bf1.getValue() & 0xfffc00ff)
					| ((val << 8) & 0x0003ff00));
		}

		public int getModulationMode() {
			return (bf1.getValue() & 0x000000ff) >> 0;
		}

		public void setModulationMode(int val) {
			bf1.setValue((bf1.getValue() & 0xffffff00)
					| ((val << 0) & 0x000000ff));
		}

		public int getReserved2_() {
			return (bf2.getValue() & 0x0000c000) >> 14;
		}

		public void setReserved2_(int val) {
			bf2.setValue((bf2.getValue() & 0xffff3fff)
					| ((val << 14) & 0x0000c000));
		}

		public int getAccessControlled() {
			return (bf2.getValue() & 0x00002000) >> 13;
		}

		public void setAccessControlled(int val) {
			bf2.setValue((bf2.getValue() & 0xffffdfff)
					| ((val << 13) & 0x00002000));
		}

		public int getHidden() {
			return (bf2.getValue() & 0x00001000) >> 12;
		}

		public void setHidden(int val) {
			bf2.setValue((bf2.getValue() & 0xffffefff)
					| ((val << 12) & 0x00001000));
		}

		public int getPathSelect() {
			return (bf2.getValue() & 0x00000800) >> 11;
		}

		public void setPathSelect(int val) {
			bf2.setValue((bf2.getValue() & 0xfffff7ff)
					| ((val << 11) & 0x00000800));
		}

		public int getOutOfBand() {
			return (bf2.getValue() & 0x00000400) >> 10;
		}

		public void setOutOfBand(int val) {
			bf2.setValue((bf2.getValue() & 0xfffffbff)
					| ((val << 10) & 0x00000400));
		}

		public int getHideGuide() {
			return (bf2.getValue() & 0x00000200) >> 9;
		}

		public void setHideGuide(int val) {
			bf2.setValue((bf2.getValue() & 0xfffffdff)
					| ((val << 9) & 0x00000200));
		}

		public int getReserved3_() {
			return (bf2.getValue() & 0x000001c0) >> 6;
		}

		public void setReserved3_(int val) {
			bf2.setValue((bf2.getValue() & 0xfffffe3f)
					| ((val << 6) & 0x000001c0));
		}

		public int getServiceType() {
			return (bf2.getValue() & 0x0000003f) >> 0;
		}

		public void setServiceType(int val) {
			bf2.setValue((bf2.getValue() & 0xffffffc0)
					| ((val << 0) & 0x0000003f));
		}

		public int getReserved4_() {
			return (bf3.getValue() & 0x0000fc00) >> 10;
		}

		public void setReserved4_(int val) {
			bf3.setValue((bf3.getValue() & 0xffff03ff)
					| ((val << 10) & 0x0000fc00));
		}

		public int getDescriptorsLength() {
			return (bf3.getValue() & 0x000003ff) >> 0;
		}

		public void setDescriptorsLength(int val) {
			bf3.setValue((bf3.getValue() & 0xfffffc00)
					| ((val << 0) & 0x000003ff));
		}

		public int addToDescriptors(SCTE65DescriptorFactory.SCTE65Descriptor val) {
			descriptors.add(val);
			return descriptors.size();
		}

		public int removeFromDescriptors(
				SCTE65DescriptorFactory.SCTE65Descriptor val) {
			descriptors.remove(val);
			return descriptors.size();
		}

		public int removeNthFromDescriptors(int idx) {
			descriptors.remove(idx);
			return descriptors.size();
		}

		public int emptyDescriptors(int idx) {
			descriptors.clear();
			return descriptors.size();
		}

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code

	// members variables
	// tableHeader
	public SCTE65_TableHeader tableHeader;
	// mapId
	public int mapId;
	// bf3
	public BitField_8 bf3;
	// section_number
	public short section_number;
	// last_section_number
	public short last_section_number;
	// protocol_version
	public short protocol_version;
	// num_channel_in_section
	public short num_channel_in_section;
	// records
	public ArrayList<record> records;
	// bf4
	public BitField_16 bf4;
	// descriptors
	public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> descriptors;
	// CRC
	public long CRC;

	public longform_virtual_channel_table_section_() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize tableHeader
		tableHeader = new SCTE65_TableHeader();
		// Initialize mapId

		// Initialize bf3
		bf3 = new BitField_8();
		// Initialize section_number

		// Initialize last_section_number

		// Initialize protocol_version

		// Initialize num_channel_in_section

		// Initialize records
		records = new ArrayList<record>();
		records.setMemberSize(0);
		// Initialize bf4
		bf4 = new BitField_16();
		// Initialize descriptors
		descriptors = new ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>();
		descriptors.setMemberSize(0);
		// Initialize CRC

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read mapId
		{
			mapId = istream.readUnsignedShort();
			retVal += 2;
		}
		// read bf3
		retVal += bf3.read(istream);
		// read section_number
		{
			section_number = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read last_section_number
		{
			last_section_number = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read protocol_version
		{
			protocol_version = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read num_channel_in_section
		{
			num_channel_in_section = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read records
		for (int iIdx = 0; iIdx < num_channel_in_section + (0); iIdx++) {
			record temp;
			temp = new record(this);
			retVal += temp.read(istream);
			records.add(temp);
		}
		// read bf4
		retVal += bf4.read(istream);
		// read descriptors
		for (int iIdx = 0; iIdx < getAdditionalDescriptorsLength() + (0); iIdx++) {
			SCTE65DescriptorFactory.SCTE65Descriptor temp; /*
															 * Generic classes
															 * are abstract, so
															 * we can not invoke
															 * new
															 */
			{
				IntegerHolder iHolder = new IntegerHolder();
				DataInputStream disTemp = istream;
				temp = SCTE65DescriptorFactory.createMsg(disTemp, iHolder);
				retVal += iHolder.getValue();
			}
			descriptors.add(temp);
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
		// read mapId
		{
			mapId = istream.readUnsignedShort();
			retVal += 2;
		}
		// read bf3
		retVal += bf3.read(istream);
		// read section_number
		{
			section_number = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read last_section_number
		{
			last_section_number = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read protocol_version
		{
			protocol_version = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read num_channel_in_section
		{
			num_channel_in_section = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read records
		for (int iIdx = 0; iIdx < num_channel_in_section + (0); iIdx++) {
			record temp;
			temp = new record(this);
			retVal += temp.read(istream);
			records.add(temp);
		}
		// read bf4
		retVal += bf4.read(istream);
		// read descriptors
		for (int iIdx = 0; iIdx < getAdditionalDescriptorsLength() + (0); iIdx++) {
			SCTE65DescriptorFactory.SCTE65Descriptor temp; /*
															 * Generic classes
															 * are abstract, so
															 * we can not invoke
															 * new
															 */
			{
				IntegerHolder iHolder = new IntegerHolder();
				DataInputStream disTemp = istream;
				temp = SCTE65DescriptorFactory.createMsg(disTemp, iHolder);
				retVal += iHolder.getValue();
			}
			descriptors.add(temp);
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
			/** fix dependent sizes for records **/
			num_channel_in_section = ((short) records.getCount());
		}

		{
			/** fix dependent sizes for descriptors **/
			setAdditionalDescriptorsLength((short) descriptors.getCount());
		}

		// write tableHeader
		if (tableHeader != null)
			retVal += tableHeader.write(ostream);
		// write mapId
		ostream.writeShort(mapId);
		retVal += 2;
		// write bf3
		ostream.writeByte(bf3.getValue());
		retVal += 1;
		// write section_number
		ostream.writeByte(section_number);
		retVal += 1;
		// write last_section_number
		ostream.writeByte(last_section_number);
		retVal += 1;
		// write protocol_version
		ostream.writeByte(protocol_version);
		retVal += 1;
		// write num_channel_in_section
		ostream.writeByte(num_channel_in_section);
		retVal += 1;
		// write records
		{
			ArrayList<record> temp1 = records;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				record temp2 = temp1.get(iIdx);
				if (temp2 != null)
					retVal += temp2.write(ostream);
			}
		}
		// write bf4
		ostream.writeShort(bf4.getValue());
		retVal += 2;
		// write descriptors
		{
			ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				SCTE65DescriptorFactory.SCTE65Descriptor temp2 = temp1
						.get(iIdx);
				if (temp2 != null)
					retVal += temp2.write(ostream);
			}
		}
		// write CRC
		BinPrimitive.writeUI32(ostream, CRC);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("longform_virtual_channel_table_section_\n");
		dc.increaseIndent();
		int retVal = 0;
		// write tableHeader
		if (tableHeader != null) {
			dc.indent();
			dc.getPs().println("tableHeader");
			retVal += tableHeader.dump(dc);
		}
		// write mapId
		dc.indent();
		dc.getPs().println(
				"mapId=" + mapId + "(0x" + Integer.toHexString(mapId) + ")");
		// write bf3
		{
			dc.indent();
			dc.getPs().print("reserved2: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved2(), 2));
			dc.indent();
			dc.getPs().print("version_number: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getVersion_number(), 5));
			dc.indent();
			dc.getPs().print("current_next_indicator: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getCurrent_next_indicator(), 1));
		}
		// write section_number
		dc.indent();
		dc.getPs().println(
				"section_number=" + section_number + "(0x"
						+ Integer.toHexString(section_number) + ")");
		// write last_section_number
		dc.indent();
		dc.getPs().println(
				"last_section_number=" + last_section_number + "(0x"
						+ Integer.toHexString(last_section_number) + ")");
		// write protocol_version
		dc.indent();
		dc.getPs().println(
				"protocol_version=" + protocol_version + "(0x"
						+ Integer.toHexString(protocol_version) + ")");
		// write num_channel_in_section
		dc.indent();
		dc.getPs().println(
				"num_channel_in_section=" + num_channel_in_section + "(0x"
						+ Integer.toHexString(num_channel_in_section) + ")");
		// write records
		{
			ArrayList<record> temp1 = records;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				record element = temp1.get(iIdx);
				dc.indent();
				dc.getPs().println(iIdx);
				if (element != null) {
					dc.indent();
					dc.getPs().println("element");
					retVal += element.dump(dc);
				}
			}
		}
		// write bf4
		{
			dc.indent();
			dc.getPs().print("reserved4_: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved4_(), 6));
			dc.indent();
			dc.getPs().print("additionalDescriptorsLength: ");
			dc.getPs().println(
					BitField_8.toDisplayString(
							getAdditionalDescriptorsLength(), 10));
		}
		// write descriptors
		{
			ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				SCTE65DescriptorFactory.SCTE65Descriptor element = temp1
						.get(iIdx);
				dc.indent();
				dc.getPs().println(iIdx);
				if (element != null) {
					dc.indent();
					dc.getPs().println("element");
					retVal += element.dump(dc);
				}
			}
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
	// Getter for mapId
	// public int getMapId()
	// {
	// return mapId ;
	// }

	// Setter for mapId
	// public void setMapId(int val)
	// {
	// this.mapId= val;
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
	// Getter for section_number
	// public short getSection_number()
	// {
	// return section_number ;
	// }

	// Setter for section_number
	// public void setSection_number(short val)
	// {
	// this.section_number= val;
	// }
	// Getter for last_section_number
	// public short getLast_section_number()
	// {
	// return last_section_number ;
	// }

	// Setter for last_section_number
	// public void setLast_section_number(short val)
	// {
	// this.last_section_number= val;
	// }
	// Getter for protocol_version
	// public short getProtocol_version()
	// {
	// return protocol_version ;
	// }

	// Setter for protocol_version
	// public void setProtocol_version(short val)
	// {
	// this.protocol_version= val;
	// }
	// Getter for num_channel_in_section
	// public short getNum_channel_in_section()
	// {
	// return num_channel_in_section ;
	// }

	// Setter for num_channel_in_section
	// public void setNum_channel_in_section(short val)
	// {
	// this.num_channel_in_section= val;
	// }
	// Getter for records
	// public ArrayList<record> getRecords()
	// {
	// return records ;
	// }

	// Setter for records
	// public void setRecords(ArrayList<record> val)
	// {
	// this.records= val;
	// }
	// Getter for bf4
	// public BitField_16 getBf4()
	// {
	// return bf4 ;
	// }

	// Setter for bf4
	// public void setBf4(BitField_16 val)
	// {
	// this.bf4= val;
	// }
	// Getter for descriptors
	// public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>
	// getDescriptors()
	// {
	// return descriptors ;
	// }

	// Setter for descriptors
	// public void
	// setDescriptors(ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> val)
	// {
	// this.descriptors= val;
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

	public int getReserved2() {
		return (bf3.getValue() & 0x000000c0) >> 6;
	}

	public void setReserved2(int val) {
		bf3.setValue((bf3.getValue() & 0xffffff3f) | ((val << 6) & 0x000000c0));
	}

	public int getVersion_number() {
		return (bf3.getValue() & 0x0000003e) >> 1;
	}

	public void setVersion_number(int val) {
		bf3.setValue((bf3.getValue() & 0xffffffc1) | ((val << 1) & 0x0000003e));
	}

	public int getCurrent_next_indicator() {
		return (bf3.getValue() & 0x00000001) >> 0;
	}

	public void setCurrent_next_indicator(int val) {
		bf3.setValue((bf3.getValue() & 0xfffffffe) | ((val << 0) & 0x00000001));
	}

	public int addToRecords(record val) {
		records.add(val);
		return records.size();
	}

	public int removeFromRecords(record val) {
		records.remove(val);
		return records.size();
	}

	public int removeNthFromRecords(int idx) {
		records.remove(idx);
		return records.size();
	}

	public int emptyRecords(int idx) {
		records.clear();
		return records.size();
	}

	public int getReserved4_() {
		return (bf4.getValue() & 0x0000fc00) >> 10;
	}

	public void setReserved4_(int val) {
		bf4.setValue((bf4.getValue() & 0xffff03ff) | ((val << 10) & 0x0000fc00));
	}

	public int getAdditionalDescriptorsLength() {
		return (bf4.getValue() & 0x000003ff) >> 0;
	}

	public void setAdditionalDescriptorsLength(int val) {
		bf4.setValue((bf4.getValue() & 0xfffffc00) | ((val << 0) & 0x000003ff));
	}

	public int addToDescriptors(SCTE65DescriptorFactory.SCTE65Descriptor val) {
		descriptors.add(val);
		return descriptors.size();
	}

	public int removeFromDescriptors(
			SCTE65DescriptorFactory.SCTE65Descriptor val) {
		descriptors.remove(val);
		return descriptors.size();
	}

	public int removeNthFromDescriptors(int idx) {
		descriptors.remove(idx);
		return descriptors.size();
	}

	public int emptyDescriptors(int idx) {
		descriptors.clear();
		return descriptors.size();
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