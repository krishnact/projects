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
public class ICM_structure_base extends S_VCT_SubtableFactory.S_VCT_Subtable { // Concrete
    // type
    // is
    // ICM_structure

    // member static classes
    public static class icmData extends BinStruct implements PublicBinMsg {

        // members variables
        // sourceId
        public int sourceId;
        // bf5
        public BitField_16 bf5;

        // Parent of this object
        ICM_structure_base parent;
        public icmData(ICM_structure_base parent) // throws Exception
        {
            this.parent = parent;
            init();
        }
        public ICM_structure_base getParent() {
            return parent;
        }

        private void init() {
            // Initialize sourceId

            // Initialize bf5
            bf5 = new BitField_16();
        }

        public int readNoHeader(DataInputStream istream) throws IOException {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException {
            preRead();
            int retVal = 0;

            // read sourceId
            {
                sourceId = istream.readUnsignedShort();
                retVal += 2;
            }
            // read bf5
            retVal += bf5.read(istream);

            postRead();
            return retVal;
        }

        public int write(DataOutputStream ostream) throws IOException {
            preWrite();
            int retVal = 0;

            // write sourceId
            ostream.writeShort(sourceId);
            retVal += 2;
            // write bf5
            ostream.writeShort(bf5.getValue());
            retVal += 2;
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException {
            dc.indent();
            dc.getPs().print("icmData\n");
            dc.increaseIndent();
            int retVal = 0;
            // write sourceId
            dc.indent();
            dc.getPs().println(
                "sourceId=" + sourceId + "(0x"
                + Integer.toHexString(sourceId) + ")");
            // write bf5
            {
                dc.indent();
                dc.getPs().print("zero: ");
                dc.getPs().println(BitField_8.toDisplayString(getZero(), 4));
                dc.indent();
                dc.getPs().print("virtual_channel_number: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getVirtual_channel_number(),
                                               12));
            }
            dc.decreaseIndent();
            return retVal;
        }

        // Getter for sourceId
        // public int getSourceId()
        // {
        // return sourceId ;
        // }

        // Setter for sourceId
        // public void setSourceId(int val)
        // {
        // this.sourceId= val;
        // }
        // Getter for bf5
        // public BitField_16 getBf5()
        // {
        // return bf5 ;
        // }

        // Setter for bf5
        // public void setBf5(BitField_16 val)
        // {
        // this.bf5= val;
        // }

        public int getZero() {
            return (bf5.getValue() & 0x0000f000) >> 12;
        }

        public void setZero(int val) {
            bf5.setValue((bf5.getValue() & 0xffff0fff)
                         | ((val << 12) & 0x0000f000));
        }

        public int getVirtual_channel_number() {
            return (bf5.getValue() & 0x00000fff) >> 0;
        }

        public void setVirtual_channel_number(int val) {
            bf5.setValue((bf5.getValue() & 0xfffff000)
                         | ((val << 0) & 0x00000fff));
        }

        public int getSize() throws IOException {
            DataOutputStream dos = new DataOutputStream(new NullStream());
            return this.write(dos);
        }

    }

    // End of code

    // members variables
    // bf1
    public BitField_16 bf1;
    // bf2
    public BitField_8 bf2;
    // icmDatum
    public ArrayList<icmData> icmDatum;

    public ICM_structure_base() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize bf1
        bf1 = new BitField_16();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize icmDatum
        icmDatum = new ArrayList<icmData>();
        icmDatum.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read bf1
        retVal += bf1.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read icmDatum
        for (int iIdx = 0; iIdx < getRecord_count() + (0); iIdx++) {
            icmData temp;
            temp = new icmData(this);
            retVal += temp.read(istream);
            icmDatum.add(temp);
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for icmDatum **/
            setRecord_count((short) icmDatum.getCount());
        }

        // write bf1
        ostream.writeShort(bf1.getValue());
        retVal += 2;
        // write bf2
        ostream.writeByte(bf2.getValue());
        retVal += 1;
        // write icmDatum
        {
            ArrayList<icmData> temp1 = icmDatum;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                icmData temp2 = temp1.get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("ICM_structure_base\n");
        dc.increaseIndent();
        int retVal = 0;
        // write bf1
        {
            dc.indent();
            dc.getPs().print("zero: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero(), 4));
            dc.indent();
            dc.getPs().print("first_map_index: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getFirst_map_index(), 12));
        }
        // write bf2
        {
            dc.indent();
            dc.getPs().print("zero2: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero2(), 1));
            dc.indent();
            dc.getPs().print("record_count: ");
            dc.getPs()
            .println(BitField_8.toDisplayString(getRecord_count(), 7));
        }
        // write icmDatum
        {
            ArrayList<icmData> temp1 = icmDatum;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                icmData element = temp1.get(iIdx);
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

    // Getter for bf1
    // public BitField_16 getBf1()
    // {
    // return bf1 ;
    // }

    // Setter for bf1
    // public void setBf1(BitField_16 val)
    // {
    // this.bf1= val;
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
    // Getter for icmDatum
    // public ArrayList<icmData> getIcmDatum()
    // {
    // return icmDatum ;
    // }

    // Setter for icmDatum
    // public void setIcmDatum(ArrayList<icmData> val)
    // {
    // this.icmDatum= val;
    // }

    public int getZero() {
        return (bf1.getValue() & 0x0000f000) >> 12;
    }

    public void setZero(int val) {
        bf1.setValue((bf1.getValue() & 0xffff0fff) | ((val << 12) & 0x0000f000));
    }

    public int getFirst_map_index() {
        return (bf1.getValue() & 0x00000fff) >> 0;
    }

    public void setFirst_map_index(int val) {
        bf1.setValue((bf1.getValue() & 0xfffff000) | ((val << 0) & 0x00000fff));
    }

    public int getZero2() {
        return (bf2.getValue() & 0x00000080) >> 7;
    }

    public void setZero2(int val) {
        bf2.setValue((bf2.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
    }

    public int getRecord_count() {
        return (bf2.getValue() & 0x0000007f) >> 0;
    }

    public void setRecord_count(int val) {
        bf2.setValue((bf2.getValue() & 0xffffff80) | ((val << 0) & 0x0000007f));
    }

    public int addToIcmDatum(icmData val) {
        icmDatum.add(val);
        return icmDatum.size();
    }

    public int removeFromIcmDatum(icmData val) {
        icmDatum.remove(val);
        return icmDatum.size();
    }

    public int removeNthFromIcmDatum(int idx) {
        icmDatum.remove(idx);
        return icmDatum.size();
    }

    public int emptyIcmDatum(int idx) {
        icmDatum.clear();
        return icmDatum.size();
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

}

// End of code