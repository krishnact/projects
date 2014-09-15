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
public class MpegTSDescriptorFactory implements Factory {
	public static final int video_stream_descriptor = 0x02;
	public static final int audio_stream_descriptor = 0x03;
	public static boolean isDebug = true;
	public static MpegTSDescriptor lastParsedObject = null;
	public static MpegTSDescriptor createMsg(int messageType,
			DataInputStream dis, IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		MpegTSDescriptor retVal = null;
		try {
			switch (messageType) {
				case 0x02 : {
					retVal = new video_stream_descriptor();
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x03 : {
					retVal = new audio_stream_descriptor();
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

	public static abstract class MpegTSDescriptor extends BinMessage
			implements
				FactoryProduct {
		public MpegTSDescriptor() {
			super();
			// TODO Auto-generated constructor stub
		}

	}
}

// End of code