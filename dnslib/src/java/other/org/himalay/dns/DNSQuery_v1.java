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

@Created(date = "Thu Jan 28 21:09:46 EST 2016")
public class DNSQuery_v1 extends BinStruct implements PublicBinMsg {

  // members variables
  // txnId
  public int txnId;
  // flags
  public BitField_16 flags;
  // questions
  public int questions;
  // answerRrs
  public int answerRrs;
  // authorityRrs
  public int authorityRrs;
  // additionalRrs
  public int additionalRrs;
  // queriesAndAnswers
  public ByteArray queriesAndAnswers;

  public DNSQuery_v1() // throws Exception
       {
    init();
  }

  private void init() {
    // Initialize txnId

    // Initialize flags
    flags = new BitField_16();
    // Initialize questions

    // Initialize answerRrs

    // Initialize authorityRrs

    // Initialize additionalRrs

    // Initialize queriesAndAnswers
    queriesAndAnswers = new ByteArray();
    queriesAndAnswers.setSizeType("EOS");
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
    // read flags
    retVal += flags.read(istream);
    // read questions
    {
      questions = istream.readUnsignedShort();
      retVal += 2;
    }
    // read answerRrs
    {
      answerRrs = istream.readUnsignedShort();
      retVal += 2;
    }
    // read authorityRrs
    {
      authorityRrs = istream.readUnsignedShort();
      retVal += 2;
    }
    // read additionalRrs
    {
      additionalRrs = istream.readUnsignedShort();
      retVal += 2;
    }
    // read queriesAndAnswers
    {
      retVal += queriesAndAnswers.read(istream);
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
    // write flags
    ostream.writeShort(flags.getValue());
    retVal += 2;
    // write questions
    ostream.writeShort(questions);
    retVal += 2;
    // write answerRrs
    ostream.writeShort(answerRrs);
    retVal += 2;
    // write authorityRrs
    ostream.writeShort(authorityRrs);
    retVal += 2;
    // write additionalRrs
    ostream.writeShort(additionalRrs);
    retVal += 2;
    // write queriesAndAnswers
    {
      retVal += queriesAndAnswers.write(ostream);
    }
    postWrite();
    return retVal;
  }

  public int dump(DumpContext dc) throws IOException {
    dc.indent();
    dc.getPs().print("DNSQuery_v1\n");
    dc.increaseIndent();
    int retVal = 0;
    // write txnId
    dc.indent();
    dc.getPs().println("txnId=" + txnId + "(0x" + Integer.toHexString(txnId) + ")");
    // write flags
    {
      dc.indent();
      dc.getPs().print("response: ");
      dc.getPs().println(BitField_8.toDisplayString(getResponse(), 1));
      dc.indent();
      dc.getPs().print("opcode: ");
      dc.getPs().println(BitField_8.toDisplayString(getOpcode(), 3));
      dc.indent();
      dc.getPs().print("truncated: ");
      dc.getPs().println(BitField_8.toDisplayString(getTruncated(), 1));
      dc.indent();
      dc.getPs().print("recursionDesired: ");
      dc.getPs().println(BitField_8.toDisplayString(getRecursionDesired(), 1));
      dc.indent();
      dc.getPs().print("recursionAvilable: ");
      dc.getPs().println(BitField_8.toDisplayString(getRecursionAvilable(), 1));
      dc.indent();
      dc.getPs().print("reserved: ");
      dc.getPs().println(BitField_8.toDisplayString(getReserved(), 1));
      dc.indent();
      dc.getPs().print("ansAuthenticated: ");
      dc.getPs().println(BitField_8.toDisplayString(getAnsAuthenticated(), 1));
      dc.indent();
      dc.getPs().print("nonAuthData: ");
      dc.getPs().println(BitField_8.toDisplayString(getNonAuthData(), 1));
      dc.indent();
      dc.getPs().print("replyCode: ");
      dc.getPs().println(BitField_8.toDisplayString(getReplyCode(), 4));
    }
    // write questions
    dc.indent();
    dc.getPs().println("questions=" + questions + "(0x" + Integer.toHexString(questions) + ")");
    // write answerRrs
    dc.indent();
    dc.getPs().println("answerRrs=" + answerRrs + "(0x" + Integer.toHexString(answerRrs) + ")");
    // write authorityRrs
    dc.indent();
    dc.getPs()
        .println("authorityRrs=" + authorityRrs + "(0x" + Integer.toHexString(authorityRrs) + ")");
    // write additionalRrs
    dc.indent();
    dc.getPs()
        .println(
            "additionalRrs=" + additionalRrs + "(0x" + Integer.toHexString(additionalRrs) + ")");
    // write queriesAndAnswers
    dc.indent();
    dc.getPs()
        .print(
            "queriesAndAnswers: "
                + queriesAndAnswers.getSize()
                + "(0x"
                + Integer.toHexString(queriesAndAnswers.getSize())
                + ")\n");
    this.queriesAndAnswers.dump(dc);
    dc.decreaseIndent();
    return retVal;
  }

  // Getter for txnId
  //public int getTxnId()
  //{
  //    return txnId ;
  //}

  // Setter for txnId
  //public void setTxnId(int val)
  //{
  //    this.txnId= val;
  //}
  // Getter for flags
  //public BitField_16 getFlags()
  //{
  //    return flags ;
  //}

  // Setter for flags
  //public void setFlags(BitField_16 val)
  //{
  //    this.flags= val;
  //}
  // Getter for questions
  //public int getQuestions()
  //{
  //    return questions ;
  //}

  // Setter for questions
  //public void setQuestions(int val)
  //{
  //    this.questions= val;
  //}
  // Getter for answerRrs
  //public int getAnswerRrs()
  //{
  //    return answerRrs ;
  //}

  // Setter for answerRrs
  //public void setAnswerRrs(int val)
  //{
  //    this.answerRrs= val;
  //}
  // Getter for authorityRrs
  //public int getAuthorityRrs()
  //{
  //    return authorityRrs ;
  //}

  // Setter for authorityRrs
  //public void setAuthorityRrs(int val)
  //{
  //    this.authorityRrs= val;
  //}
  // Getter for additionalRrs
  //public int getAdditionalRrs()
  //{
  //    return additionalRrs ;
  //}

  // Setter for additionalRrs
  //public void setAdditionalRrs(int val)
  //{
  //    this.additionalRrs= val;
  //}
  // Getter for queriesAndAnswers
  //public ByteArray getQueriesAndAnswers()
  //{
  //    return queriesAndAnswers ;
  //}

  // Setter for queriesAndAnswers
  //public void setQueriesAndAnswers(ByteArray val)
  //{
  //    this.queriesAndAnswers= val;
  //}

  public int getResponse() {
    return (flags.getValue() & 0x00008000) >> 15;
  }

  public void setResponse(int val) {
    flags.setValue((flags.getValue() & 0xffff7fff) | ((val << 15) & 0x00008000));
  }

  public int getOpcode() {
    return (flags.getValue() & 0x00007000) >> 12;
  }

  public void setOpcode(int val) {
    flags.setValue((flags.getValue() & 0xffff8fff) | ((val << 12) & 0x00007000));
  }

  public int getTruncated() {
    return (flags.getValue() & 0x00000200) >> 9;
  }

  public void setTruncated(int val) {
    flags.setValue((flags.getValue() & 0xfffffdff) | ((val << 9) & 0x00000200));
  }

  public int getRecursionDesired() {
    return (flags.getValue() & 0x00000100) >> 8;
  }

  public void setRecursionDesired(int val) {
    flags.setValue((flags.getValue() & 0xfffffeff) | ((val << 8) & 0x00000100));
  }

  public int getRecursionAvilable() {
    return (flags.getValue() & 0x00000080) >> 7;
  }

  public void setRecursionAvilable(int val) {
    flags.setValue((flags.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
  }

  public int getReserved() {
    return (flags.getValue() & 0x00000040) >> 6;
  }

  public void setReserved(int val) {
    flags.setValue((flags.getValue() & 0xffffffbf) | ((val << 6) & 0x00000040));
  }

  public int getAnsAuthenticated() {
    return (flags.getValue() & 0x00000020) >> 5;
  }

  public void setAnsAuthenticated(int val) {
    flags.setValue((flags.getValue() & 0xffffffdf) | ((val << 5) & 0x00000020));
  }

  public int getNonAuthData() {
    return (flags.getValue() & 0x00000010) >> 4;
  }

  public void setNonAuthData(int val) {
    flags.setValue((flags.getValue() & 0xffffffef) | ((val << 4) & 0x00000010));
  }

  public int getReplyCode() {
    return (flags.getValue() & 0x0000000f) >> 0;
  }

  public void setReplyCode(int val) {
    flags.setValue((flags.getValue() & 0xfffffff0) | ((val << 0) & 0x0000000f));
  }

  public void setQueriesAndAnswers(byte[] val) {
    this.queriesAndAnswers.setData(val);
  }

  public int getSize() throws IOException {
    DataOutputStream dos = new DataOutputStream(new NullStream());
    return this.write(dos);
  }
}


// End of code
