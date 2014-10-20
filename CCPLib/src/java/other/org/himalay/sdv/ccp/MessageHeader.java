// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class MessageHeader extends BinStruct implements PublicBinMsg {

	// members variables
	// protocolDiscriminator
	public short protocolDiscriminator;
	// dsmccType
	public short dsmccType;
	// messageType
	public int messageType;
	// transactionId
	public long transactionId;
	// Reserved
	public short Reserved;
	// adaptationLength
	public short adaptationLength;

	public MessageHeader() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize protocolDiscriminator
		protocolDiscriminator = (short) 0x11;
		// Initialize dsmccType
		dsmccType = (short) 0x04;
		// Initialize messageType

		// Initialize transactionId

		// Initialize Reserved

		// Initialize adaptationLength

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read protocolDiscriminator
		{
			protocolDiscriminator = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read dsmccType
		{
			dsmccType = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read messageType
		{
			messageType = istream.readUnsignedShort();
			retVal += 2;
		}
		// read transactionId
		{
			transactionId = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}
		// read Reserved
		{
			Reserved = (short) (istream.readUnsignedByte());
			retVal += 1;
		}
		// read adaptationLength
		{
			adaptationLength = (short) (istream.readUnsignedByte());
			retVal += 1;
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		// write protocolDiscriminator
		ostream.writeByte(protocolDiscriminator);
		retVal += 1;
		// write dsmccType
		ostream.writeByte(dsmccType);
		retVal += 1;
		// write messageType
		ostream.writeShort(messageType);
		retVal += 2;
		// write transactionId
		BinPrimitive.writeUI32(ostream, transactionId);
		retVal += 4;
		// write Reserved
		ostream.writeByte(Reserved);
		retVal += 1;
		// write adaptationLength
		ostream.writeByte(adaptationLength);
		retVal += 1;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("MessageHeader\n");
		dc.increaseIndent();
		int retVal = 0;
		// write protocolDiscriminator
		dc.indent();
		dc.getPs().println(
				"protocolDiscriminator=" + protocolDiscriminator + "(0x"
						+ Integer.toHexString(protocolDiscriminator) + ")");
		// write dsmccType
		dc.indent();
		dc.getPs().println(
				"dsmccType=" + dsmccType + "(0x"
						+ Integer.toHexString(dsmccType) + ")");
		// write messageType
		dc.indent();
		dc.getPs().println(
				"messageType=" + messageType + "(0x"
						+ Integer.toHexString(messageType) + ")");
		// write transactionId
		dc.indent();
		dc.getPs().println(
				"transactionId=" + transactionId + "(0x"
						+ Long.toHexString(transactionId) + ")");
		// write Reserved
		dc.indent();
		dc.getPs().println(
				"Reserved=" + Reserved + "(0x" + Integer.toHexString(Reserved)
						+ ")");
		// write adaptationLength
		dc.indent();
		dc.getPs().println(
				"adaptationLength=" + adaptationLength + "(0x"
						+ Integer.toHexString(adaptationLength) + ")");
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for protocolDiscriminator
	// public short getProtocolDiscriminator()
	// {
	// return protocolDiscriminator ;
	// }

	// Setter for protocolDiscriminator
	// public void setProtocolDiscriminator(short val)
	// {
	// this.protocolDiscriminator= val;
	// }
	// Getter for dsmccType
	// public short getDsmccType()
	// {
	// return dsmccType ;
	// }

	// Setter for dsmccType
	// public void setDsmccType(short val)
	// {
	// this.dsmccType= val;
	// }
	// Getter for messageType
	public int getMessageType() {
		return messageType;
	}

	// Setter for messageType
	public void setMessageType(int val) {
		this.messageType = val;
	}
	// Getter for transactionId
	// public long getTransactionId()
	// {
	// return transactionId ;
	// }

	// Setter for transactionId
	// public void setTransactionId(long val)
	// {
	// this.transactionId= val;
	// }
	// Getter for Reserved
	// public short getReserved()
	// {
	// return Reserved ;
	// }

	// Setter for Reserved
	// public void setReserved(short val)
	// {
	// this.Reserved= val;
	// }
	// Getter for adaptationLength
	// public short getAdaptationLength()
	// {
	// return adaptationLength ;
	// }

	// Setter for adaptationLength
	// public void setAdaptationLength(short val)
	// {
	// this.adaptationLength= val;
	// }

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code