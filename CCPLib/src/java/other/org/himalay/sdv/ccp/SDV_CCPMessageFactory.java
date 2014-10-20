// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import org.himalay.msgs.runtime.Factory;
import org.himalay.msgs.runtime.FactoryProduct;
import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.*;

@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SDV_CCPMessageFactory implements Factory {
	public static final int SDVProgramSelectRequest = 0x0001;
	public static final int SDVProgramSelectConfirm = 0x0002;
	public static final int SDVProgramSelectIndication = 0x0003;
	public static final int SDVProgramSelectResponse = 0x0004;
	public static final int SDVUserActivityReport = 0x8000;
	public static final int SDVInitRequest = 0x8001;
	public static final int SDVInitConfirm = 0x8002;
	public static final int SDVQueryRequest = 0x8003;
	public static final int SDVQueryConfirm = 0x8004;
	public static final int SDVEventIndication = 0x8005;
	public static final int SDVEventResponse = 0x8006;
	public static boolean isDebug = true;
	public static SDV_CCPMessage lastParsedObject = null;
	public static SDV_CCPMessage createMsg(DataInputStream istream,
			IntegerHolder iHolder1) throws IOException {
		int iRead = 0;
		MessageHeader header;
		{
			int retVal = 0;
			header = new MessageHeader();
			retVal += header.read(istream);
			iRead = retVal;
		}
		SDV_CCPMessage retVal = createMsg(header, istream, iHolder1);
		iHolder1.setValue(iHolder1.getValue() + iRead);
		return retVal;
	}

	public static SDV_CCPMessage createMsg(
			org.himalay.sdv.ccp.MessageHeader temp, DataInputStream dis,
			IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		SDV_CCPMessage retVal = null;
		try {
			switch (temp.getMessageType()) {
				case 0x0001 : {
					retVal = new SDVProgramSelectRequest();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x0002 : {
					retVal = new SDVProgramSelectConfirm();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x0003 : {
					retVal = new SDVProgramSelectIndication();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x0004 : {
					retVal = new SDVProgramSelectResponse();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8000 : {
					retVal = new SDVUserActivityReport();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8001 : {
					retVal = new SDVInitRequest();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8002 : {
					retVal = new SDVInitConfirm();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8003 : {
					retVal = new SDVQueryRequest();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8004 : {
					retVal = new SDVQueryConfirm();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8005 : {
					retVal = new SDVEventIndication();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x8006 : {
					retVal = new SDVEventResponse();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
			}
		} catch (IOException ioex) {
			if (isDebug) {
				lastParsedObject = retVal;
			}
			throw ioex;
		}
		iHolder.setValue(iRead);
		return retVal;
	}

	public static abstract class SDV_CCPMessage extends BinMessage
			implements
				FactoryProduct {
		public SDV_CCPMessage() {
			super();
			// TODO Auto-generated constructor stub
		}
		public abstract void setHeader(org.himalay.sdv.ccp.MessageHeader header);
		public abstract org.himalay.sdv.ccp.MessageHeader getHeader();

	}
}

// End of code