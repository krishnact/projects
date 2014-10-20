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
public class SDVUserActivityReport extends SDV_CCPMessageFactory.SDV_CCPMessage { // Concrete
																					// type
																					// is
																					// SDVUserActivityReport

	// members variables
	// header
	public MessageHeader header;
	// messageLength
	public int messageLength;
	// sessionId
	public SessionId sessionId;
	// ProgramNotAvailableCt
	public int ProgramNotAvailableCt;
	// sourceId
	public long sourceId;
	// lastUserActivity
	public long lastUserActivity;

	public SDVUserActivityReport() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize header
		header = new MessageHeader();
		// Initialize messageLength
		messageLength = (int) 0x0014;
		// Initialize sessionId
		sessionId = new SessionId();
		// Initialize ProgramNotAvailableCt

		// Initialize sourceId

		// Initialize lastUserActivity

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		preRead();
		int retVal = 0;
		// read messageLength
		{
			messageLength = istream.readUnsignedShort();
			retVal += 2;
		}
		// read sessionId
		retVal += sessionId.read(istream);
		// read ProgramNotAvailableCt
		{
			ProgramNotAvailableCt = istream.readUnsignedShort();
			retVal += 2;
		}
		// read sourceId
		{
			sourceId = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}
		// read lastUserActivity
		{
			lastUserActivity = (long) (BinPrimitive.readUI32(istream));
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
		// read messageLength
		{
			messageLength = istream.readUnsignedShort();
			retVal += 2;
		}
		// read sessionId
		retVal += sessionId.read(istream);
		// read ProgramNotAvailableCt
		{
			ProgramNotAvailableCt = istream.readUnsignedShort();
			retVal += 2;
		}
		// read sourceId
		{
			sourceId = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}
		// read lastUserActivity
		{
			lastUserActivity = (long) (BinPrimitive.readUI32(istream));
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
			/** fix dependent sizes for sessionId **/
		}

		// write header
		if (header != null)
			retVal += header.write(ostream);
		// write messageLength
		ostream.writeShort(messageLength);
		retVal += 2;
		// write sessionId
		if (sessionId != null)
			retVal += sessionId.write(ostream);
		// write ProgramNotAvailableCt
		ostream.writeShort(ProgramNotAvailableCt);
		retVal += 2;
		// write sourceId
		BinPrimitive.writeUI32(ostream, sourceId);
		retVal += 4;
		// write lastUserActivity
		BinPrimitive.writeUI32(ostream, lastUserActivity);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("SDVUserActivityReport\n");
		dc.increaseIndent();
		int retVal = 0;
		// write header
		if (header != null) {
			dc.indent();
			dc.getPs().println("header");
			retVal += header.dump(dc);
		}
		// write messageLength
		dc.indent();
		dc.getPs().println(
				"messageLength=" + messageLength + "(0x"
						+ Integer.toHexString(messageLength) + ")");
		// write sessionId
		if (sessionId != null) {
			dc.indent();
			dc.getPs().println("sessionId");
			retVal += sessionId.dump(dc);
		}
		// write ProgramNotAvailableCt
		dc.indent();
		dc.getPs().println(
				"ProgramNotAvailableCt=" + ProgramNotAvailableCt + "(0x"
						+ Integer.toHexString(ProgramNotAvailableCt) + ")");
		// write sourceId
		dc.indent();
		dc.getPs().println(
				"sourceId=" + sourceId + "(0x" + Long.toHexString(sourceId)
						+ ")");
		// write lastUserActivity
		dc.indent();
		dc.getPs().println(
				"lastUserActivity=" + lastUserActivity + "(0x"
						+ Long.toHexString(lastUserActivity) + ")");
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for header
	// public MessageHeader getHeader()
	// {
	// return header ;
	// }

	// Setter for header
	// public void setHeader(MessageHeader val)
	// {
	// this.header= val;
	// }
	// Getter for messageLength
	// public int getMessageLength()
	// {
	// return messageLength ;
	// }

	// Setter for messageLength
	// public void setMessageLength(int val)
	// {
	// this.messageLength= val;
	// }
	// Getter for sessionId
	// public SessionId getSessionId()
	// {
	// return sessionId ;
	// }

	// Setter for sessionId
	// public void setSessionId(SessionId val)
	// {
	// this.sessionId= val;
	// }
	// Getter for ProgramNotAvailableCt
	// public int getProgramNotAvailableCt()
	// {
	// return ProgramNotAvailableCt ;
	// }

	// Setter for ProgramNotAvailableCt
	// public void setProgramNotAvailableCt(int val)
	// {
	// this.ProgramNotAvailableCt= val;
	// }
	// Getter for sourceId
	// public long getSourceId()
	// {
	// return sourceId ;
	// }

	// Setter for sourceId
	// public void setSourceId(long val)
	// {
	// this.sourceId= val;
	// }
	// Getter for lastUserActivity
	// public long getLastUserActivity()
	// {
	// return lastUserActivity ;
	// }

	// Setter for lastUserActivity
	// public void setLastUserActivity(long val)
	// {
	// this.lastUserActivity= val;
	// }

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

	public void setHeader(MessageHeader header) {
		this.header = header;
	}

	public MessageHeader getHeader() {
		return this.header;
	}

}

// End of code