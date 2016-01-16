// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:36 EDT 2014")
public class ca_table_section_ extends SCTE65TableFactory.SCTE65Table { // Concrete
    // type
    // is
    // ca_table_section

    // members variables
    // tableHeader
    public SCTE65_TableHeader tableHeader;
    // bf2
    public BitField_8 bf2;
    // data
    public ByteArray data;
    // CRC
    public long CRC;

    public ca_table_section_() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize tableHeader
        tableHeader = new SCTE65_TableHeader();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize data
        data = new ByteArray();
        data.setSizeType("EXTERNAL");
        // Initialize CRC

    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read bf2
        retVal += bf2.read(istream);
        // read data
        {
            data.setSizeType("EXTERNAL");
            int iRead = tableHeader.getSection_length() + (-5);
            data.setSize(iRead);
            retVal += data.read(istream);
        }
        // read CRC
        {
            CRC = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read tableHeader
        retVal += tableHeader.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read data
        {
            data.setSizeType("EXTERNAL");
            int iRead = tableHeader.getSection_length() + (-5);
            data.setSize(iRead);
            retVal += data.read(istream);
        }
        // read CRC
        {
            CRC = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for tableHeader **/
        }

        {
            /** fix dependent sizes for data **/
            tableHeader.setSection_length((short) data.getSize());
        }

        // write tableHeader
        if (tableHeader != null)
            retVal += tableHeader.write(ostream);
        // write bf2
        ostream.writeByte(bf2.getValue());
        retVal += 1;
        // write data
        {
            retVal += data.write(ostream);
        }
        // write CRC
        BinPrimitive.writeUI32(ostream, CRC);
        retVal += 4;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("ca_table_section_\n");
        dc.increaseIndent();
        int retVal = 0;
        // write tableHeader
        if (tableHeader != null) {
            dc.indent();
            dc.getPs().println("tableHeader");
            retVal += tableHeader.dump(dc);
        }
        // write bf2
        {
            dc.indent();
            dc.getPs().print("zeroVersion: ");
            dc.getPs().println(BitField_8.toDisplayString(getZeroVersion(), 3));
            dc.indent();
            dc.getPs().print("protocol_version: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getProtocol_version(), 5));
        }
        // write data
        dc.indent();
        dc.getPs().print(
            "data: " + data.getSize() + "(0x"
            + Integer.toHexString(data.getSize()) + ")\n");
        this.data.dump(dc);
        // write CRC
        dc.indent();
        dc.getPs().println("CRC=" + CRC + "(0x" + Long.toHexString(CRC) + ")");
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for tableHeader
    // public SCTE65_TableHeader getTableHeader()
    // {
    // return tableHeader ;
    // }

    // Setter for tableHeader
    // public void setTableHeader(SCTE65_TableHeader val)
    // {
    // this.tableHeader= val;
    // }
    // Getter for bf2
    // public BitField_8 getBf2()
    // {
    // return bf2 ;
    // }

    // Setter for bf2
    // public void setBf2(BitField_8 val)
    // {
    // this.bf2= val;
    // }
    // Getter for data
    // public ByteArray getData()
    // {
    // return data ;
    // }

    // Setter for data
    // public void setData(ByteArray val)
    // {
    // this.data= val;
    // }
    // Getter for CRC
    // public long getCRC()
    // {
    // return CRC ;
    // }

    // Setter for CRC
    // public void setCRC(long val)
    // {
    // this.CRC= val;
    // }

    public int getZeroVersion() {
        return (bf2.getValue() & 0x000000e0) >> 5;
    }

    public void setZeroVersion(int val) {
        bf2.setValue((bf2.getValue() & 0xffffff1f) | ((val << 5) & 0x000000e0));
    }

    public int getProtocol_version() {
        return (bf2.getValue() & 0x0000001f) >> 0;
    }

    public void setProtocol_version(int val) {
        bf2.setValue((bf2.getValue() & 0xffffffe0) | ((val << 0) & 0x0000001f));
    }

    public void setData(byte[] val) {
        this.data.setData(val);
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

    public void setHeader(SCTE65_TableHeader header) {
        this.tableHeader = header;
    }

    public SCTE65_TableHeader getHeader() {
        return this.tableHeader;
    }

}

// End of code