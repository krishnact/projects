// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.mpeg2.types;

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

@Created(date = "Mon Jul 22 13:35:04 EDT 2013")
public class MpegTableFactory implements Factory {

	public static final int PAT = 0x00;
	public static final int PMT = 0x02;
	public static boolean isDebug = true;
	public static MpegTable lastParsedObject = null;

	public static MpegTable createMsg(DataInputStream istream,
			IntegerHolder iHolder1) throws IOException {
		int iRead = 0;
		MpegTableHeader header;
		{
			int retVal = 0;
			header = new MpegTableHeader();
			retVal += header.read(istream);
			iRead = retVal;
		}
		MpegTable retVal = createMsg(header, istream, iHolder1);
		iHolder1.setValue(iHolder1.getValue() + iRead);
		return retVal;
	}

	public static MpegTable createMsg(
			org.himalay.mpeg2.types.MpegTableHeader temp, DataInputStream dis,
			IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		MpegTable retVal = null;
		try {
			switch (temp.getMessageType()) {
				case 0x00 : {
					retVal = new PAT();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x02 : {
					retVal = new PMT();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				default : {
					retVal = new UnknowMpegTable();
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

	public static abstract class MpegTable extends BinMessage
			implements
				FactoryProduct {
		public MpegTable() {
			super();
			// TODO Auto-generated constructor stub
		}

		public abstract void setHeader(
				org.himalay.mpeg2.types.MpegTableHeader header);

		public abstract org.himalay.mpeg2.types.MpegTableHeader getHeader();

	}
}

// End of code