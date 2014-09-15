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
public class DVB_DescriptorFactory implements Factory {
	public static final int DVB_StreamIdDescriptor = 0x52;
	public static final int CA_Descriptor = 0x09;

	public static boolean isDebug = true;
	public static DVB_Descriptor lastParsedObject = null;
	public static DVB_Descriptor createMsg(DataInputStream istream,
			IntegerHolder iHolder1) throws IOException {
		int iRead = 0;
		UI8Header header;
		{
			int retVal = 0;
			header = new UI8Header();
			retVal += header.read(istream);
			iRead = retVal;
		}
		DVB_Descriptor retVal = createMsg(header, istream, iHolder1);
		iHolder1.setValue(iHolder1.getValue() + iRead);
		return retVal;
	}

	public static DVB_Descriptor createMsg(
			org.himalay.msgs.runtime.UI8Header temp, DataInputStream dis,
			IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		DVB_Descriptor retVal = null;
		try {
			switch (temp.getMessageType()) {
				case 0x52 : {
					retVal = new DVB_StreamIdDescriptor();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x09 : {
					retVal = new CA_Descriptor();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				default : {
					retVal = new DVB_GenericDescriptor();
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

	public static abstract class DVB_Descriptor extends BinMessage
			implements
				FactoryProduct {
		public DVB_Descriptor() {
			super();
			// TODO Auto-generated constructor stub
		}
		public abstract void setHeader(org.himalay.msgs.runtime.UI8Header header);
		public abstract org.himalay.msgs.runtime.UI8Header getHeader();

	}
}

// End of code