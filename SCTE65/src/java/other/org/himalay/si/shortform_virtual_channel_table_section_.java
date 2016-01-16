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
public class shortform_virtual_channel_table_section_
    extends
    SCTE65TableFactory.SCTE65Table { // Concrete type is
    // shortform_virtual_channel_table_section

    // members variables
    // tableHeader
    public SCTE65_TableHeader tableHeader;
    // bf2
    public BitField_8 bf2;
    // bf3
    public BitField_8 bf3;
    // VCT_ID
    public int VCT_ID;
    // subTable
    public S_VCT_SubtableFactory.S_VCT_Subtable subTable;
    // CRC
    public long CRC;

    public shortform_virtual_channel_table_section_() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize tableHeader
        tableHeader = new SCTE65_TableHeader();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize bf3
        bf3 = new BitField_8();
        // Initialize VCT_ID

        // Initialize subTable
        /* Generic classes are abstract, so we can not invoke new */
        // Initialize CRC

    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read bf2
        retVal += bf2.read(istream);
        // read bf3
        retVal += bf3.read(istream);
        // read VCT_ID
        {
            VCT_ID = istream.readUnsignedShort();
            retVal += 2;
        }
        // read subTable
        {
            IntegerHolder iHolder = new IntegerHolder();
            DataInputStream disTemp = istream;
            subTable = S_VCT_SubtableFactory.createMsg(getTable_subtype(),
                       disTemp, iHolder);
            retVal += iHolder.getValue();
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
        // read bf3
        retVal += bf3.read(istream);
        // read VCT_ID
        {
            VCT_ID = istream.readUnsignedShort();
            retVal += 2;
        }
        // read subTable
        {
            IntegerHolder iHolder = new IntegerHolder();
            DataInputStream disTemp = istream;
            subTable = S_VCT_SubtableFactory.createMsg(getTable_subtype(),
                       disTemp, iHolder);
            retVal += iHolder.getValue();
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
            /** fix dependent sizes for subTable **/
        }

        // write tableHeader
        if (tableHeader != null)
            retVal += tableHeader.write(ostream);
        // write bf2
        ostream.writeByte(bf2.getValue());
        retVal += 1;
        // write bf3
        ostream.writeByte(bf3.getValue());
        retVal += 1;
        // write VCT_ID
        ostream.writeShort(VCT_ID);
        retVal += 2;
        // write subTable
        if (subTable != null)
            retVal += subTable.write(ostream);
        // write CRC
        BinPrimitive.writeUI32(ostream, CRC);
        retVal += 4;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("shortform_virtual_channel_table_section_\n");
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
        // write bf3
        {
            dc.indent();
            dc.getPs().print("transmission_medium: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getTransmission_medium(), 4));
            dc.indent();
            dc.getPs().print("table_subtype: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getTable_subtype(), 4));
        }
        // write VCT_ID
        dc.indent();
        dc.getPs().println(
            "VCT_ID=" + VCT_ID + "(0x" + Integer.toHexString(VCT_ID) + ")");
        // write subTable
        if (subTable != null) {
            dc.indent();
            dc.getPs().println("subTable");
            retVal += subTable.dump(dc);
        }
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
    // Getter for bf3
    // public BitField_8 getBf3()
    // {
    // return bf3 ;
    // }

    // Setter for bf3
    // public void setBf3(BitField_8 val)
    // {
    // this.bf3= val;
    // }
    // Getter for VCT_ID
    // public int getVCT_ID()
    // {
    // return VCT_ID ;
    // }

    // Setter for VCT_ID
    // public void setVCT_ID(int val)
    // {
    // this.VCT_ID= val;
    // }
    // Getter for subTable
    // public S_VCT_SubtableFactory.S_VCT_Subtable getSubTable()
    // {
    // return subTable ;
    // }

    // Setter for subTable
    // public void setSubTable(S_VCT_SubtableFactory.S_VCT_Subtable val)
    // {
    // this.subTable= val;
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

    public int getTransmission_medium() {
        return (bf3.getValue() & 0x000000f0) >> 4;
    }

    public void setTransmission_medium(int val) {
        bf3.setValue((bf3.getValue() & 0xffffff0f) | ((val << 4) & 0x000000f0));
    }

    public int getTable_subtype() {
        return (bf3.getValue() & 0x0000000f) >> 0;
    }

    public void setTable_subtype(int val) {
        bf3.setValue((bf3.getValue() & 0xfffffff0) | ((val << 0) & 0x0000000f));
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