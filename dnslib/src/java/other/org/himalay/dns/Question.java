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

@Created(date = "Fri Jan 29 01:21:45 EST 2016")
public class Question extends BinStruct implements PublicBinMsg {

  // members variables
  // host
  public ByteArray host;
  // qType
  public int qType;
  // qClass
  public int qClass;

  public Question() // throws Exception
       {
    init();
  }

  private void init() {
    // Initialize host
    host = new ByteArray();
    host.setSizeType("NULLTERMINATED");
    // Initialize qType

    // Initialize qClass

  }

  public int readNoHeader(DataInputStream istream) throws IOException {

    return read(istream);
  }

  public int read(DataInputStream istream) throws IOException {
    preRead();
    int retVal = 0;

    // read host
    {
      retVal += host.read(istream);
    }
    // read qType
    {
      qType = istream.readUnsignedShort();
      retVal += 2;
    }
    // read qClass
    {
      qClass = istream.readUnsignedShort();
      retVal += 2;
    }

    postRead();
    return retVal;
  }

  public int write(DataOutputStream ostream) throws IOException {
    preWrite();
    int retVal = 0;

    {
      /** fix dependent sizes for host**/
    }

    // write host
    {
      retVal += host.write(ostream);
    }
    // write qType
    ostream.writeShort(qType);
    retVal += 2;
    // write qClass
    ostream.writeShort(qClass);
    retVal += 2;
    postWrite();
    return retVal;
  }

  public int dump(DumpContext dc) throws IOException {
    dc.indent();
    dc.getPs().print("Question\n");
    dc.increaseIndent();
    int retVal = 0;
    // write host
    dc.indent();
    dc.getPs()
        .print("host: " + host.getSize() + "(0x" + Integer.toHexString(host.getSize()) + ")\n");
    this.host.dump(dc);
    // write qType
    dc.indent();
    dc.getPs().println("qType=" + qType + "(0x" + Integer.toHexString(qType) + ")");
    // write qClass
    dc.indent();
    dc.getPs().println("qClass=" + qClass + "(0x" + Integer.toHexString(qClass) + ")");
    dc.decreaseIndent();
    return retVal;
  }

  // Getter for host
  //public ByteArray getHost()
  //{
  //    return host ;
  //}

  // Setter for host
  //public void setHost(ByteArray val)
  //{
  //    this.host= val;
  //}
  // Getter for qType
  //public int getQType()
  //{
  //    return qType ;
  //}

  // Setter for qType
  //public void setQType(int val)
  //{
  //    this.qType= val;
  //}
  // Getter for qClass
  //public int getQClass()
  //{
  //    return qClass ;
  //}

  // Setter for qClass
  //public void setQClass(int val)
  //{
  //    this.qClass= val;
  //}

  public void setHost(byte[] val) {
    this.host.setData(val);
  }

  public int getSize() throws IOException {
    DataOutputStream dos = new DataOutputStream(new NullStream());
    return this.write(dos);
  }
}


// End of code
