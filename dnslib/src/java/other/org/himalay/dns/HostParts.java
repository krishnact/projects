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

@Created(date = "Fri Jan 29 01:34:32 EST 2016")
public class HostParts extends BinStruct implements PublicBinMsg {

  // members variables
  // hostParts
  public ArrayList<HostPart> hostParts;

  public HostParts() // throws Exception
       {
    init();
  }

  private void init() {
    // Initialize hostParts
    hostParts = new ArrayList<HostPart>();
    hostParts.setMemberSize(0);
  }

  public int readNoHeader(DataInputStream istream) throws IOException {

    return read(istream);
  }

  public int read(DataInputStream istream) throws IOException {
    preRead();
    int retVal = 0;

    // read hostParts
    for (; istream.available() > 0; ) {
      HostPart temp;
      temp = new HostPart();
      retVal += temp.read(istream);
      hostParts.add(temp);
    }

    postRead();
    return retVal;
  }

  public int write(DataOutputStream ostream) throws IOException {
    preWrite();
    int retVal = 0;

    {
      /** fix dependent sizes for hostParts**/
    }

    // write hostParts
    {
      ArrayList<HostPart> temp1 = hostParts;
      for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
        HostPart temp2 = temp1.get(iIdx);
        if (temp2 != null) retVal += temp2.write(ostream);
      }
    }
    postWrite();
    return retVal;
  }

  public int dump(DumpContext dc) throws IOException {
    dc.indent();
    dc.getPs().print("HostParts\n");
    dc.increaseIndent();
    int retVal = 0;
    // write hostParts
    {
      ArrayList<HostPart> temp1 = hostParts;
      for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
        HostPart element = temp1.get(iIdx);
        dc.indent();
        dc.getPs().println(iIdx);
        if (element != null) {
          dc.indent();
          dc.getPs().println("element");
          retVal += element.dump(dc);
        }
      }
    }
    dc.decreaseIndent();
    return retVal;
  }

  // Getter for hostParts
  //public ArrayList<HostPart> getHostParts()
  //{
  //    return hostParts ;
  //}

  // Setter for hostParts
  //public void setHostParts(ArrayList<HostPart> val)
  //{
  //    this.hostParts= val;
  //}

  public int addToHostParts(HostPart val) {
    hostParts.add(val);
    return hostParts.size();
  }

  public int removeFromHostParts(HostPart val) {
    hostParts.remove(val);
    return hostParts.size();
  }

  public int removeNthFromHostParts(int idx) {
    hostParts.remove(idx);
    return hostParts.size();
  }

  public int emptyHostParts(int idx) {
    hostParts.clear();
    return hostParts.size();
  }

  public int getSize() throws IOException {
    DataOutputStream dos = new DataOutputStream(new NullStream());
    return this.write(dos);
  }
}


// End of code
