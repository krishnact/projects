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
public class PAT extends MpegTableFactory.MpegTable { // Concrete type is PAT

	// member static classes
	public static class conditionalData extends BinStruct
			implements
				PublicBinMsg {

		// members variables
		// transport_stream_id
		public int transport_stream_id;
		// bf2
		public BitField_8 bf2;

		// Parent of this object
		PAT parent;

		public conditionalData(PAT parent) // throws Exception
		{
			this.parent = parent;
			init();
		}

		public PAT getParent() {
			return parent;
		}

		private void init() {
			// Initialize transport_stream_id

			// Initialize bf2
			bf2 = new BitField_8();
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read transport_stream_id
			{
				transport_stream_id = istream.readUnsignedShort();
				retVal += 2;
			}
			// read bf2
			retVal += bf2.read(istream);

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			// write transport_stream_id
			ostream.writeShort(transport_stream_id);
			retVal += 2;
			// write bf2
			ostream.writeByte(bf2.getValue());
			retVal += 1;
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("conditionalData\n");
			dc.increaseIndent();
			int retVal = 0;
			// write transport_stream_id
			dc.indent();
			dc.getPs().println(
					"transport_stream_id=" + transport_stream_id + "(0x"
							+ Integer.toHexString(transport_stream_id) + ")");
			// write bf2
			{
				dc.indent();
				dc.getPs().print("reserved2: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getReserved2(), 2));
				dc.indent();
				dc.getPs().print("version_number: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getVersion_number(), 5));
				dc.indent();
				dc.getPs().print("current_next_indicator: ");
				dc.getPs().println(
						BitField_8.toDisplayString(getCurrent_next_indicator(),
								1));
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for transport_stream_id
		// public int getTransport_stream_id()
		// {
		// return transport_stream_id ;
		// }

		// Setter for transport_stream_id
		// public void setTransport_stream_id(int val)
		// {
		// this.transport_stream_id= val;
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

		public int getReserved2() {
			return (bf2.getValue() & 0x000000c0) >> 6;
		}

		public void setReserved2(int val) {
			bf2.setValue((bf2.getValue() & 0xffffff3f)
					| ((val << 6) & 0x000000c0));
		}

		public int getVersion_number() {
			return (bf2.getValue() & 0x0000003e) >> 1;
		}

		public void setVersion_number(int val) {
			bf2.setValue((bf2.getValue() & 0xffffffc1)
					| ((val << 1) & 0x0000003e));
		}

		public int getCurrent_next_indicator() {
			return (bf2.getValue() & 0x00000001) >> 0;
		}

		public void setCurrent_next_indicator(int val) {
			bf2.setValue((bf2.getValue() & 0xfffffffe)
					| ((val << 0) & 0x00000001));
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
	// conditionalDataInstance
	public conditionalData conditionalDataInstance;
	// section_number
	public short section_number;
	// last_section_number
	public short last_section_number;
	// pats
	public ArrayList<PatEntry> pats;
	// CRC
	public int CRC;

	public PAT() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new MpegTableHeader();
		// Initialize bf
		bf = new BitField_16();
		// Initialize conditionalDataInstance
		// Conditional, will be initialized during read
		// Initialize section_number

		// Initialize last_section_number

		// Initialize pats
		pats = new ArrayList<PatEntry>();
		pats.setMemberSize(0);
		// Initialize CRC

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read bf
		retVal += bf.read(istream);
		// read conditionalDataInstance
		if (getSection_syntax_indicator() == 1) {
			conditionalDataInstance = new conditionalData(this);
			retVal += conditionalDataInstance.read(istream);
		}
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
		// read pats
		{
			int ilimit = retVal + (getSection_length() + (-9));
			for (; retVal < ilimit && istream.available() > 4;) {
				PatEntry temp;
				temp = new PatEntry();
				retVal += temp.read(istream);
				int iava = istream.available();
				pats.add(temp);
			}
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
		// read conditionalDataInstance
		if (getSection_syntax_indicator() == 1) {
			conditionalDataInstance = new conditionalData(this);
			retVal += conditionalDataInstance.read(istream);
		}
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
		// read pats
		{
			int ilimit = retVal + (getSection_length() + (-9));
			for (; retVal < ilimit;) {
				PatEntry temp;
				temp = new PatEntry();
				retVal += temp.read(istream);
				pats.add(temp);
			}
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
			/** fix dependent sizes for conditionalDataInstance **/
		}

		{
			/** fix dependent sizes for pats **/
			setSection_length((short) pats.getSize());
		}

		// write header
		retVal += header.write(ostream);
		// write bf
		ostream.writeShort(bf.getValue());
		retVal += 2;
		// write conditionalDataInstance
		retVal += conditionalDataInstance.write(ostream);
		// write section_number
		ostream.writeByte(section_number);
		retVal += 1;
		// write last_section_number
		ostream.writeByte(last_section_number);
		retVal += 1;
		// write pats
		{
			ArrayList<PatEntry> temp1 = pats;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				PatEntry temp2 = temp1.get(iIdx);
				retVal += temp2.write(ostream);
			}
		}
		// write CRC
		ostream.writeInt(CRC);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("PAT\n");
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
		// write conditionalDataInstance
		if (conditionalDataInstance != null) {
			dc.indent();
			dc.getPs().println("conditionalDataInstance");
			retVal += conditionalDataInstance.dump(dc);
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
		// write pats
		{
			ArrayList<PatEntry> temp1 = pats;
			for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
				PatEntry element = temp1.get(iIdx);
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
	// Getter for conditionalDataInstance
	// public conditionalData getConditionalDataInstance()
	// {
	// return conditionalDataInstance ;
	// }

	// Setter for conditionalDataInstance
	// public void setConditionalDataInstance(conditionalData val)
	// {
	// this.conditionalDataInstance= val;
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
	// Getter for pats
	// public ArrayList<PatEntry> getPats()
	// {
	// return pats ;
	// }

	// Setter for pats
	// public void setPats(ArrayList<PatEntry> val)
	// {
	// this.pats= val;
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

	public int addToPats(PatEntry val) {
		pats.add(val);
		return pats.size();
	}

	public int removeFromPats(PatEntry val) {
		pats.remove(val);
		return pats.size();
	}

	public int removeNthFromPats(int idx) {
		pats.remove(idx);
		return pats.size();
	}

	public int emptyPats(int idx) {
		pats.clear();
		return pats.size();
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