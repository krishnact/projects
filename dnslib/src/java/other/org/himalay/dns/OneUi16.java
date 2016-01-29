/**
 * Copyright (2016) Krishna C Tripathi. All rights reserved.
 * This software is provided "as is" with no explicit or implicit warranties whatsoever.
 * This SW is released under 2-clause BSD license ("Simplified BSD License" or "FreeBSD License") license.
 * Please see https://en.wikipedia.org/wiki/FreeBSD_Documentation_License or make good faith effort to find the
 * referred BSD license text.
 */
package org.himalay.dns;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;

@Created(date = "Wed Jan 27 15:42:00 EST 2016")
public class OneUi16 extends BinStruct implements PublicBinMsg {

  // members variables
  // txnId
  public int txnId;

  public OneUi16() // throws Exception
       {
    init();
  }

  private void init() {
  }

  public int readNoHeader(DataInputStream istream) throws IOException {

    return read(istream);
  }

  public int read(DataInputStream istream) throws IOException {
    preRead();
    int retVal = 0;

    // read txnId
    {
      txnId = istream.readUnsignedShort();
      retVal += 2;
    }

    postRead();
    return retVal;
  }

  public int write(DataOutputStream ostream) throws IOException {
    preWrite();
    int retVal = 0;

    {
      /** fix dependent sizes for queriesAndAnswers**/
    }

    // write txnId
    ostream.writeShort(txnId);
    retVal += 2;
    postWrite();
    return retVal;
  }

  public int dump(DumpContext dc) throws IOException {
    dc.indent();
    dc.getPs().print("DNSQuery\n");
    dc.increaseIndent();
    int retVal = 0;
    // write txnId
    dc.indent();
    dc.getPs().println("txnId=" + txnId + "(0x" + Integer.toHexString(txnId) + ")");
    dc.decreaseIndent();
    return retVal;
  }


  public int getSize() throws IOException {
    DataOutputStream dos = new DataOutputStream(new NullStream());
    return this.write(dos);
  }
}


// End of code
