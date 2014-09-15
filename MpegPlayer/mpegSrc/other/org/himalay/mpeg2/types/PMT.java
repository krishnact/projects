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
public class PMT extends MpegTableFactory.MpegTable { // Concrete type is PMT

	// member static classes
	public static class section extends BinStruct implements PublicBinMsg {

		// members variables
		// section_number
		public short section_number;
		// last_section_number
		public short last_section_number;
		// pidField
		public BitField_16 pidField;
		// pinfo
		public BitField_16 pinfo;
		// programDesc
		public ByteArray programDesc;
		// descriptors
		public ArrayList<ESInfo> descriptors;

		// Parent of this object
		PMT parent;
		public section(PMT parent) // throws Exception
		{
			this.parent = parent;
			init();
		}
		public PMT getParent() {
			return parent;
		}

		private void init() {
			// Initialize section_number

			// Initialize last_section_number

			// Initialize pidField
			pidField = new BitField_16();
			// Initialize pinfo
			pinfo = new BitField_16();
			// Initialize programDesc
			programDesc = new ByteArray();
			programDesc.setSizeType("EXTERNAL");
			// Initialize descriptors
			descriptors = new ArrayList<ESInfo>();
			descriptors.setMemberSize(0);
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

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
			// read pidField
			retVal += pidField.read(istream);
			// read pinfo
			retVal += pinfo.read(istream);
			// read programDesc
			{
				programDesc.setSizeType("EXTERNAL");
				int iRead = getProgram_info_length() + (0);
				programDesc.setSize(iRead);
				retVal += programDesc.read(istream);
			}
			// read descriptors
			for (; istream.available() > 0;) {
				ESInfo temp;
				temp = new ESInfo();
				retVal += temp.read(istream);
				descriptors.add(temp);
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			{
				/** fix dependent sizes for programDesc **/
				setProgram_info_length((short) programDesc.getSize());
			}
			{
				/** fix dependent sizes for descriptors **/
			}

			// write section_number
			ostream.writeByte(section_number);
			retVal += 1;
			// write last_section_number
			ostream.writeByte(last_section_number);
			retVal += 1;
			// write pidField
			ostream.writeShort(pidField.getValue());
			retVal += 2;
			// write pinfo
			ostream.writeShort(pinfo.getValue());
			retVal += 2;
			// write programDesc
			{
				retVal += programDesc.write(ostream);
			}
			// write descriptors
			{
				ArrayList<ESInfo> temp1 = descriptors;
				for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
					ESInfo temp2 = temp1.get(iIdx);
					retVal += temp2.write(ostream);
				}
			}
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("section\n");
			dc.increaseIndent();
			int retVal = 0;
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
			// write pidField
			{
				dc.indent();
				dc.getPs().print("reserved1: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved1(), 3));
				dc.indent();
				dc.getPs().print("PCR_PID: ");
				dc.getPs()
						.println(BitField_8.toDisplayString(getPCR_PID(), 13));
			}
			// write pinfo
			{
				dc.indent();
				dc.getPs().print("reserved2: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved2(), 4));
				dc.indent();
				dc.getPs().print("program_info_length: ");
				dc.getPs().println(
						BitField_8
								.toDisplayString(getProgram_info_length(), 12));
			}
			// write programDesc
			dc.indent();
			dc.getPs().print(
					"programDesc: " + programDesc.getSize() + "(0x"
							+ Integer.toHexString(programDesc.getSize())
							+ ")\n");
			this.programDesc.dump(dc);
			// write descriptors
			{
				ArrayList<ESInfo> temp1 = descriptors;
				for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
					ESInfo element = temp1.get(iIdx);
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
		// Getter for pinfo
		// public BitField_16 getPinfo()
		// {
		// return pinfo ;
		// }

		// Setter for pinfo
		// public void setPinfo(BitField_16 val)
		// {
		// this.pinfo= val;
		// }
		// Getter for programDesc
		// public ByteArray getProgramDesc()
		// {
		// return programDesc ;
		// }

		// Setter for programDesc
		// public void setProgramDesc(ByteArray val)
		// {
		// this.programDesc= val;
		// }
		// Getter for descriptors
		// public ArrayList<ESInfo> getDescriptors()
		// {
		// return descriptors ;
		// }

		// Setter for descriptors
		// public void setDescriptors(ArrayList<ESInfo> val)
		// {
		// this.descriptors= val;
		// }

		public int getReserved1() {
			return (pidField.getValue() & 0x0000e000) >> 13;
		}

		public void setReserved1(int val) {
			pidField.setValue((pidField.getValue() & 0xffff1fff)
					| ((val << 13) & 0x0000e000));
		}

		public int getPCR_PID() {
			return (pidField.getValue() & 0x00001fff) >> 0;
		}

		public void setPCR_PID(int val) {
			pidField.setValue((pidField.getValue() & 0xffffe000)
					| ((val << 0) & 0x00001fff));
		}

		public int getReserved2() {
			return (pinfo.getValue() & 0x0000f000) >> 12;
		}

		public void setReserved2(int val) {
			pinfo.setValue((pinfo.getValue() & 0xffff0fff)
					| ((val << 12) & 0x0000f000));
		}

		public int getProgram_info_length() {
			return (pinfo.getValue() & 0x00000fff) >> 0;
		}

		public void setProgram_info_length(int val) {
			pinfo.setValue((pinfo.getValue() & 0xfffff000)
					| ((val << 0) & 0x00000fff));
		}

		public void setProgramDesc(byte[] val) {
			this.programDesc.setData(val);
		}

		public int addToDescriptors(ESInfo val) {
			descriptors.add(val);
			return descriptors.size();
		}

		public int removeFromDescriptors(ESInfo val) {
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
	// header
	public MpegTableHeader header;
	// bf
	public BitField_16 bf;
	// program_number
	public int program_number;
	// bf2
	public BitField_8 bf2;
	// sectionInstance
	public section sectionInstance;
	// CRC
	public int CRC;

	public PMT() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new MpegTableHeader();
		// Initialize bf
		bf = new BitField_16();
		// Initialize program_number

		// Initialize bf2
		bf2 = new BitField_8();
		// Initialize sectionInstance
		sectionInstance = new section(this);
		// Initialize CRC

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read bf
		retVal += bf.read(istream);
		// read program_number
		{
			program_number = istream.readUnsignedShort();
			retVal += 2;
		}
		// read bf2
		retVal += bf2.read(istream);
		// read sectionInstance
		{
			int iCount = getSection_length() + (-7);
			byte[] ba = new byte[iCount];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			retVal += sectionInstance.read(new DataInputStream(baTemp));
		}
		// read CRC
		{
			CRC = (int) (istream.readInt());
			retVal += 4;
		}

		postRead();
		return retVal;
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read header
		retVal += header.read(istream);
		// read bf
		retVal += bf.read(istream);
		// read program_number
		{
			program_number = istream.readUnsignedShort();
			retVal += 2;
		}
		// read bf2
		retVal += bf2.read(istream);
		// read sectionInstance
		{
			int iCount = getSection_length() + (-7);
			byte[] ba = new byte[iCount];
			istream.readFully(ba);
			ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
			retVal += sectionInstance.read(new DataInputStream(baTemp));
		}
		// read CRC
		{
			CRC = (int) (istream.readInt());
			retVal += 4;
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
			/** fix dependent sizes for sectionInstance **/
			setSection_length((short) sectionInstance.getSize());
		}

		// write header
		retVal += header.write(ostream);
		// write bf
		ostream.writeShort(bf.getValue());
		retVal += 2;
		// write program_number
		ostream.writeShort(program_number);
		retVal += 2;
		// write bf2
		ostream.writeByte(bf2.getValue());
		retVal += 1;
		// write sectionInstance
		retVal += sectionInstance.write(ostream);
		// write CRC
		ostream.writeInt(CRC);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("PMT\n");
		dc.increaseIndent();
		int retVal = 0;
		// write header
		if (header != null) {
			dc.indent();
			dc.getPs().println("header");
			retVal += header.dump(dc);
		}
		// write bf
		{
			dc.indent();
			dc.getPs().print("section_syntax_indicator: ");
			dc.getPs().println(
					BitField_8
							.toDisplayString(getSection_syntax_indicator(), 1));
			dc.indent();
			dc.getPs().print("reserved: ");
			dc.getPs().println(BitField_8.toDisplayString(getReserved(), 2));
			dc.indent();
			dc.getPs().print("section_length: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getSection_length(), 12));
		}
		// write program_number
		dc.indent();
		dc.getPs().println(
				"program_number=" + program_number + "(0x"
						+ Integer.toHexString(program_number) + ")");
		// write bf2
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
		// write sectionInstance
		if (sectionInstance != null) {
			dc.indent();
			dc.getPs().println("sectionInstance");
			retVal += sectionInstance.dump(dc);
		}
		// write CRC
		dc.indent();
		dc.getPs().println(
				"CRC=" + CRC + "(0x" + Integer.toHexString(CRC) + ")");
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
	// Getter for bf
	// public BitField_16 getBf()
	// {
	// return bf ;
	// }

	// Setter for bf
	// public void setBf(BitField_16 val)
	// {
	// this.bf= val;
	// }
	// Getter for program_number
	// public int getProgram_number()
	// {
	// return program_number ;
	// }

	// Setter for program_number
	// public void setProgram_number(int val)
	// {
	// this.program_number= val;
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
	// Getter for sectionInstance
	// public section getSectionInstance()
	// {
	// return sectionInstance ;
	// }

	// Setter for sectionInstance
	// public void setSectionInstance(section val)
	// {
	// this.sectionInstance= val;
	// }
	// Getter for CRC
	// public int getCRC()
	// {
	// return CRC ;
	// }

	// Setter for CRC
	// public void setCRC(int val)
	// {
	// this.CRC= val;
	// }

	public int getSection_syntax_indicator() {
		return (bf.getValue() & 0x00008000) >> 15;
	}

	public void setSection_syntax_indicator(int val) {
		bf.setValue((bf.getValue() & 0xffff7fff) | ((val << 15) & 0x00008000));
	}

	public int getReserved() {
		return (bf.getValue() & 0x00003000) >> 12;
	}

	public void setReserved(int val) {
		bf.setValue((bf.getValue() & 0xffffcfff) | ((val << 12) & 0x00003000));
	}

	public int getSection_length() {
		return (bf.getValue() & 0x00000fff) >> 0;
	}

	public void setSection_length(int val) {
		bf.setValue((bf.getValue() & 0xfffff000) | ((val << 0) & 0x00000fff));
	}

	public int getReserved2() {
		return (bf2.getValue() & 0x000000c0) >> 6;
	}

	public void setReserved2(int val) {
		bf2.setValue((bf2.getValue() & 0xffffff3f) | ((val << 6) & 0x000000c0));
	}

	public int getVersion_number() {
		return (bf2.getValue() & 0x0000003e) >> 1;
	}

	public void setVersion_number(int val) {
		bf2.setValue((bf2.getValue() & 0xffffffc1) | ((val << 1) & 0x0000003e));
	}

	public int getCurrent_next_indicator() {
		return (bf2.getValue() & 0x00000001) >> 0;
	}

	public void setCurrent_next_indicator(int val) {
		bf2.setValue((bf2.getValue() & 0xfffffffe) | ((val << 0) & 0x00000001));
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