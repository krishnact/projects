///**
// * Copyright (2016) Krishna C Tripathi. All rights reserved.
// * This software is provided "as is" with no explicit or implicit warranties whatsoever.
// * This SW is released under 2-clause BSD license ("Simplified BSD License" or "FreeBSD License") license.
// * Please see https://en.wikipedia.org/wiki/FreeBSD_Documentation_License or make good faith effort to find the
// * referred BSD license text.
// */
//package org.himalay.dns;
//import java.io.DataInputStream;
//import java.io.DataOutputStream;
//import java.io.IOException;
//
//import org.himalay.msgs.runtime.BinStruct;
//import org.himalay.msgs.runtime.ByteArray;
//import org.himalay.msgs.runtime.Created;
//import org.himalay.msgs.runtime.DumpContext;
//import org.himalay.msgs.runtime.NullStream;
//import org.himalay.msgs.runtime.PublicBinMsg;
//
//@Created(date = "Wed Jan 27 15:42:00 EST 2016")
//public class OneArray extends BinStruct implements PublicBinMsg {
//
//
//  public ByteArray oneArray;
//  
//
//  public OneArray() // throws Exception
//       {
//    init();
//  }
//
//  private void init() {
//    oneArray = new ByteArray();
//    oneArray.setSizeType("FIXED");
//    oneArray.setSize(4);
//
//  }
//
//  public int readNoHeader(DataInputStream istream) throws IOException {
//
//    return read(istream);
//  }
//
//  public int read(DataInputStream istream) throws IOException {
//    preRead();
//    int retVal = 0;
//    // read queriesAndAnswers
//    {
//      retVal += oneArray.read(istream);
//    }
//
//    postRead();
//    return retVal;
//  }
//
//  public int write(DataOutputStream ostream) throws IOException {
//    preWrite();
//    int retVal = 0;
//
//    {
//      /** fix dependent sizes for queriesAndAnswers**/
//    }
//
//    // write queriesAndAnswers
//    {
//      retVal += oneArray.write(ostream);
//    }
//    postWrite();
//    return retVal;
//  }
//
//  public int dump(DumpContext dc) throws IOException {
//    dc.indent();
//    dc.getPs().print("DNSQuery\n");
//    dc.increaseIndent();
//    int retVal = 0;
//    dc.indent();
//    dc.getPs()
//        .print(
//            "queriesAndAnswers: "
//                + oneArray.getSize()
//                + "(0x"
//                + Integer.toHexString(oneArray.getSize())
//                + ")\n");
//    this.oneArray.dump(dc);
//    dc.decreaseIndent();
//    return retVal;
//  }
//
//
//  public void setOneArray(byte[] val) {
//    this.oneArray.setData(val);
//  }
//
//  public int getSize() throws IOException {
//    DataOutputStream dos = new DataOutputStream(new NullStream());
//    return this.write(dos);
//  }
//}
//
//
//// End of code
