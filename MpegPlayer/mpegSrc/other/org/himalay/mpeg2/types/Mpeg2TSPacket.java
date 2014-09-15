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
public class Mpeg2TSPacket extends BinStruct implements PublicBinMsg {

	// member static classes
	public static class AdaptationHeaderStart extends BinStruct
			implements
				PublicBinMsg {

		// members variables
		// length
		public short length;
		// adaptationHeader
		public AdaptationHeader adaptationHeader;

		// Parent of this object
		Mpeg2TSPacket parent;

		public AdaptationHeaderStart(Mpeg2TSPacket parent) // throws Exception
		{
			this.parent = parent;
			init();
		}

		public Mpeg2TSPacket getParent() {
			return parent;
		}

		private void init() {
			// Initialize length

			// Initialize adaptationHeader
			adaptationHeader = new AdaptationHeader();
		}

		public int readNoHeader(DataInputStream istream) throws IOException {

			return read(istream);
		}

		public int read(DataInputStream istream) throws IOException {
			preRead();
			int retVal = 0;

			// read length
			{
				length = (short) (istream.readUnsignedByte());
				retVal += 1;
			}
			// read adaptationHeader
			{
				int iCount = length + (0);
				byte[] ba = new byte[iCount];
				istream.readFully(ba);
				ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
				retVal += adaptationHeader.read(new DataInputStream(baTemp));
			}

			postRead();
			return retVal;
		}

		public int write(DataOutputStream ostream) throws IOException {
			preWrite();
			int retVal = 0;

			{
				/** fix dependent sizes for adaptationHeader **/
				length = ((short) adaptationHeader.getSize());
			}

			// write length
			ostream.writeByte(length);
			retVal += 1;
			// write adaptationHeader
			retVal += adaptationHeader.write(ostream);
			postWrite();
			return retVal;
		}

		public int dump(DumpContext dc) throws IOException {
			dc.indent();
			dc.getPs().print("AdaptationHeaderStart\n");
			dc.increaseIndent();
			int retVal = 0;
			// write length
			dc.indent();
			dc.getPs().println(
					"length=" + length + "(0x" + Integer.toHexString(length)
							+ ")");
			// write adaptationHeader
			if (adaptationHeader != null) {
				dc.indent();
				dc.getPs().println("adaptationHeader");
				retVal += adaptationHeader.dump(dc);
			}
			dc.decreaseIndent();
			return retVal;
		}

		// Getter for length
		// public short getLength()
		// {
		// return length ;
		// }

		// Setter for length
		// public void setLength(short val)
		// {
		// this.length= val;
		// }
		// Getter for adaptationHeader
		// public AdaptationHeader getAdaptationHeader()
		// {
		// return adaptationHeader ;
		// }

		// Setter for adaptationHeader
		// public void setAdaptationHeader(AdaptationHeader val)
		// {
		// this.adaptationHeader= val;
		// }

		public int getSize() throws IOException {
			DataOutputStream dos = new DataOutputStream(new NullStream());
			return this.write(dos);
		}

	}

	// End of code

	// members variables
	// syncByte
	public short syncByte;
	// bf1
	public BitField_16 bf1;
	// bf2
	public BitField_8 bf2;
	// AdaptationHeaderStartInstance
	public AdaptationHeaderStart AdaptationHeaderStartInstance;
	// payLoad
	public ComplexbyteArrayEOS payLoad;

	public Mpeg2TSPacket() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize syncByte

		// Initialize bf1
		bf1 = new BitField_16();
		// Initialize bf2
		bf2 = new BitField_8();
		// Initialize AdaptationHeaderStartInstance
		// Conditional, will be initialized during read
		// Initialize payLoad
		// Conditional, will be initialized during read
	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read syncByte
		{
			syncByte = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read bf1
		retVal += bf1.read(istream);
		// read bf2
		retVal += bf2.read(istream);
		// read AdaptationHeaderStartInstance
		if (getAdaptationFieldExists() > 0) {
			AdaptationHeaderStartInstance = new AdaptationHeaderStart(this);
			retVal += AdaptationHeaderStartInstance.read(istream);
		}
		// read payLoad
		if (getPayloadExists() > 0) {
			payLoad = new ComplexbyteArrayEOS();
			{
				byte[] ba = new byte[50000];
				int iCount = istream.read(ba);
				ByteArrayInputStream baTemp = new ByteArrayInputStream(ba, 0,
						iCount);
				retVal += payLoad.read(new DataInputStream(baTemp));
			}

			// byte [] ba = new byte[188];
			// int iRead = istream.read(ba,0,188 - retVal );
			// retVal += iRead;
		}

		this.postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for AdaptationHeaderStartInstance **/
		}
		{
			/** fix dependent sizes for payLoad **/
		}

		// write syncByte
		ostream.writeByte(syncByte);
		retVal += 1;
		// write bf1
		ostream.writeShort(bf1.getValue());
		retVal += 2;
		// write bf2
		ostream.writeByte(bf2.getValue());
		retVal += 1;
		// write AdaptationHeaderStartInstance
		retVal += AdaptationHeaderStartInstance.write(ostream);
		// write payLoad
		retVal += payLoad.write(ostream);
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("Mpeg2TSPacket\n");
		dc.increaseIndent();
		int retVal = 0;
		// write syncByte
		dc.indent();
		dc.getPs().println(
				"syncByte=" + syncByte + "(0x" + Integer.toHexString(syncByte)
						+ ")");
		// write bf1
		{
			dc.indent();
			dc.getPs().print("transportErrorIndicator: ");
			dc.getPs()
					.println(
							BitField_8.toDisplayString(
									getTransportErrorIndicator(), 1));
			dc.indent();
			dc.getPs().print("puStartIndicator: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getPuStartIndicator(), 1));
			dc.indent();
			dc.getPs().print("transportPriority: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getTransportPriority(), 1));
			dc.indent();
			dc.getPs().print("pid: ");
			dc.getPs().println(BitField_8.toDisplayString(getPid(), 13));
		}
		// write bf2
		{
			dc.indent();
			dc.getPs().print("scramblingControl: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getScramblingControl(), 2));
			dc.indent();
			dc.getPs().print("adaptationFieldExists: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getAdaptationFieldExists(), 1));
			dc.indent();
			dc.getPs().print("payloadExists: ");
			dc.getPs().println(
					BitField_8.toDisplayString(getPayloadExists(), 1));
			dc.indent();
			dc.getPs().print("contCounter: ");
			dc.getPs().println(BitField_8.toDisplayString(getContCounter(), 4));
		}
		// write AdaptationHeaderStartInstance
		if (AdaptationHeaderStartInstance != null) {
			dc.indent();
			dc.getPs().println("AdaptationHeaderStartInstance");
			retVal += AdaptationHeaderStartInstance.dump(dc);
		}
		// write payLoad
		if (payLoad != null) {
			dc.indent();
			dc.getPs().println("payLoad");
			retVal += payLoad.dump(dc);
		}
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for syncByte
	// public short getSyncByte()
	// {
	// return syncByte ;
	// }

	// Setter for syncByte
	// public void setSyncByte(short val)
	// {
	// this.syncByte= val;
	// }
	// Getter for bf1
	// public BitField_16 getBf1()
	// {
	// return bf1 ;
	// }

	// Setter for bf1
	// public void setBf1(BitField_16 val)
	// {
	// this.bf1= val;
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
	// Getter for AdaptationHeaderStartInstance
	// public AdaptationHeaderStart getAdaptationHeaderStartInstance()
	// {
	// return AdaptationHeaderStartInstance ;
	// }

	// Setter for AdaptationHeaderStartInstance
	// public void setAdaptationHeaderStartInstance(AdaptationHeaderStart val)
	// {
	// this.AdaptationHeaderStartInstance= val;
	// }
	// Getter for payLoad
	// public ComplexbyteArrayEOS getPayLoad()
	// {
	// return payLoad ;
	// }

	// Setter for payLoad
	// public void setPayLoad(ComplexbyteArrayEOS val)
	// {
	// this.payLoad= val;
	// }

	public int getTransportErrorIndicator() {
		return (bf1.getValue() & 0x00008000) >> 15;
	}

	public void setTransportErrorIndicator(int val) {
		bf1.setValue((bf1.getValue() & 0xffff7fff) | ((val << 15) & 0x00008000));
	}

	public int getPuStartIndicator() {
		return (bf1.getValue() & 0x00004000) >> 14;
	}

	public void setPuStartIndicator(int val) {
		bf1.setValue((bf1.getValue() & 0xffffbfff) | ((val << 14) & 0x00004000));
	}

	public int getTransportPriority() {
		return (bf1.getValue() & 0x00002000) >> 13;
	}

	public void setTransportPriority(int val) {
		bf1.setValue((bf1.getValue() & 0xffffdfff) | ((val << 13) & 0x00002000));
	}

	public int getPid() {
		return (bf1.getValue() & 0x00001fff) >> 0;
	}

	public void setPid(int val) {
		bf1.setValue((bf1.getValue() & 0xffffe000) | ((val << 0) & 0x00001fff));
	}

	public int getScramblingControl() {
		return (bf2.getValue() & 0x000000c0) >> 6;
	}

	public void setScramblingControl(int val) {
		bf2.setValue((bf2.getValue() & 0xffffff3f) | ((val << 6) & 0x000000c0));
	}

	public int getAdaptationFieldExists() {
		return (bf2.getValue() & 0x00000020) >> 5;
	}

	public void setAdaptationFieldExists(int val) {
		bf2.setValue((bf2.getValue() & 0xffffffdf) | ((val << 5) & 0x00000020));
	}

	public int getPayloadExists() {
		return (bf2.getValue() & 0x00000010) >> 4;
	}

	public void setPayloadExists(int val) {
		bf2.setValue((bf2.getValue() & 0xffffffef) | ((val << 4) & 0x00000010));
	}

	public int getContCounter() {
		return (bf2.getValue() & 0x0000000f) >> 0;
	}

	public void setContCounter(int val) {
		bf2.setValue((bf2.getValue() & 0xfffffff0) | ((val << 0) & 0x0000000f));
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code