// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si;

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

@Created(date = "Sun Sep 14 22:48:37 EDT 2014")
public class S_VCT_SubtableFactory implements Factory {
	public static final int DCM_structure = 1;
	public static final int ICM_structure = 3;
	public static final int VCM_structure = 0;
	public static boolean isDebug = true;
	public static S_VCT_Subtable lastParsedObject = null;
	public static S_VCT_Subtable createMsg(int messageType,
			DataInputStream dis, IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		S_VCT_Subtable retVal = null;
		try {
			switch (messageType) {
				case 1 : {
					retVal = new DCM_structure();
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 3 : {
					retVal = new ICM_structure();
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0 : {
					retVal = new VCM_structure();
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

	public static abstract class S_VCT_Subtable extends BinMessage
			implements
				FactoryProduct {
		public S_VCT_Subtable() {
			super();
			// TODO Auto-generated constructor stub
		}

	}
}

// End of code