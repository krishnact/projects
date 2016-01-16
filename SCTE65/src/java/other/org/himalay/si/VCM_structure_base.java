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
public class VCM_structure_base extends S_VCT_SubtableFactory.S_VCT_Subtable { // Concrete
    // type
    // is
    // VCM_structure

    // member static classes
    public static class virtual_channel extends BinStruct
        implements
        PublicBinMsg {

        // member static classes
        public static class MpegInfo extends BinStruct implements PublicBinMsg {

            // members variables
            // CDS_reference
            public short CDS_reference;
            // program_number
            public int program_number;
            // MMS_reference
            public short MMS_reference;

            // Parent of this object
            virtual_channel parent;
            public MpegInfo(virtual_channel parent) // throws Exception
            {
                this.parent = parent;
                init();
            }
            public virtual_channel getParent() {
                return parent;
            }

            private void init() {
                // Initialize CDS_reference

                // Initialize program_number

                // Initialize MMS_reference

            }

            public int readNoHeader(DataInputStream istream) throws IOException {

                return read(istream);
            }

            public int read(DataInputStream istream) throws IOException {
                preRead();
                int retVal = 0;

                // read CDS_reference
                {
                    CDS_reference = (short) (istream.readUnsignedByte());
                    retVal += 1;
                }
                // read program_number
                {
                    program_number = istream.readUnsignedShort();
                    retVal += 2;
                }
                // read MMS_reference
                {
                    MMS_reference = (short) (istream.readUnsignedByte());
                    retVal += 1;
                }

                postRead();
                return retVal;
            }

            public int write(DataOutputStream ostream) throws IOException {
                preWrite();
                int retVal = 0;

                // write CDS_reference
                ostream.writeByte(CDS_reference);
                retVal += 1;
                // write program_number
                ostream.writeShort(program_number);
                retVal += 2;
                // write MMS_reference
                ostream.writeByte(MMS_reference);
                retVal += 1;
                postWrite();
                return retVal;
            }

            public int dump(DumpContext dc) throws IOException {
                dc.indent();
                dc.getPs().print("MpegInfo\n");
                dc.increaseIndent();
                int retVal = 0;
                // write CDS_reference
                dc.indent();
                dc.getPs().println(
                    "CDS_reference=" + CDS_reference + "(0x"
                    + Integer.toHexString(CDS_reference) + ")");
                // write program_number
                dc.indent();
                dc.getPs().println(
                    "program_number=" + program_number + "(0x"
                    + Integer.toHexString(program_number) + ")");
                // write MMS_reference
                dc.indent();
                dc.getPs().println(
                    "MMS_reference=" + MMS_reference + "(0x"
                    + Integer.toHexString(MMS_reference) + ")");
                dc.decreaseIndent();
                return retVal;
            }

            // Getter for CDS_reference
            // public short getCDS_reference()
            // {
            // return CDS_reference ;
            // }

            // Setter for CDS_reference
            // public void setCDS_reference(short val)
            // {
            // this.CDS_reference= val;
            // }
            // Getter for program_number
            // public int getProgram_number()
            // {
            // return program_number ;
            // }

            // Setter for program_number
            // public void setProgram_number(int val)
            // {
            // this.program_number= val;
            // }
            // Getter for MMS_reference
            // public short getMMS_reference()
            // {
            // return MMS_reference ;
            // }

            // Setter for MMS_reference
            // public void setMMS_reference(short val)
            // {
            // this.MMS_reference= val;
            // }

            public int getSize() throws IOException {
                DataOutputStream dos = new DataOutputStream(new NullStream());
                return this.write(dos);
            }

        }

        // End of code
        // member static classes
        public static class Non_MpegInfo extends BinStruct
            implements
            PublicBinMsg {

            // members variables
            // CDS_reference
            public short CDS_reference;
            // bf41
            public BitField_8 bf41;
            // reserver_zero
            public int reserver_zero;

            // Parent of this object
            virtual_channel parent;
            public Non_MpegInfo(virtual_channel parent) // throws Exception
            {
                this.parent = parent;
                init();
            }
            public virtual_channel getParent() {
                return parent;
            }

            private void init() {
                // Initialize CDS_reference

                // Initialize bf41
                bf41 = new BitField_8();
                // Initialize reserver_zero

            }

            public int readNoHeader(DataInputStream istream) throws IOException {

                return read(istream);
            }

            public int read(DataInputStream istream) throws IOException {
                preRead();
                int retVal = 0;

                // read CDS_reference
                {
                    CDS_reference = (short) (istream.readUnsignedByte());
                    retVal += 1;
                }
                // read bf41
                retVal += bf41.read(istream);
                // read reserver_zero
                {
                    reserver_zero = istream.readUnsignedShort();
                    retVal += 2;
                }

                postRead();
                return retVal;
            }

            public int write(DataOutputStream ostream) throws IOException {
                preWrite();
                int retVal = 0;

                // write CDS_reference
                ostream.writeByte(CDS_reference);
                retVal += 1;
                // write bf41
                ostream.writeByte(bf41.getValue());
                retVal += 1;
                // write reserver_zero
                ostream.writeShort(reserver_zero);
                retVal += 2;
                postWrite();
                return retVal;
            }

            public int dump(DumpContext dc) throws IOException {
                dc.indent();
                dc.getPs().print("Non_MpegInfo\n");
                dc.increaseIndent();
                int retVal = 0;
                // write CDS_reference
                dc.indent();
                dc.getPs().println(
                    "CDS_reference=" + CDS_reference + "(0x"
                    + Integer.toHexString(CDS_reference) + ")");
                // write bf41
                {
                    dc.indent();
                    dc.getPs().print("scrambled: ");
                    dc.getPs().println(
                        BitField_8.toDisplayString(getScrambled(), 1));
                    dc.indent();
                    dc.getPs().print("video_standard: ");
                    dc.getPs().println(
                        BitField_8.toDisplayString(getVideo_standard(), 4));
                }
                // write reserver_zero
                dc.indent();
                dc.getPs().println(
                    "reserver_zero=" + reserver_zero + "(0x"
                    + Integer.toHexString(reserver_zero) + ")");
                dc.decreaseIndent();
                return retVal;
            }

            // Getter for CDS_reference
            // public short getCDS_reference()
            // {
            // return CDS_reference ;
            // }

            // Setter for CDS_reference
            // public void setCDS_reference(short val)
            // {
            // this.CDS_reference= val;
            // }
            // Getter for bf41
            // public BitField_8 getBf41()
            // {
            // return bf41 ;
            // }

            // Setter for bf41
            // public void setBf41(BitField_8 val)
            // {
            // this.bf41= val;
            // }
            // Getter for reserver_zero
            // public int getReserver_zero()
            // {
            // return reserver_zero ;
            // }

            // Setter for reserver_zero
            // public void setReserver_zero(int val)
            // {
            // this.reserver_zero= val;
            // }

            public int getScrambled() {
                return (bf41.getValue() & 0x00000080) >> 7;
            }

            public void setScrambled(int val) {
                bf41.setValue((bf41.getValue() & 0xffffff7f)
                              | ((val << 7) & 0x00000080));
            }

            public int getVideo_standard() {
                return (bf41.getValue() & 0x0000000f) >> 0;
            }

            public void setVideo_standard(int val) {
                bf41.setValue((bf41.getValue() & 0xfffffff0)
                              | ((val << 0) & 0x0000000f));
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
        // src_or_app_id
        public int src_or_app_id;
        // MpegInfoInstance
        public MpegInfo MpegInfoInstance;
        // Non_MpegInfoInstance
        public Non_MpegInfo Non_MpegInfoInstance;
        // descriptors
        public DescriptorCollection descriptors;

        // Parent of this object
        VCM_structure_base parent;
        public virtual_channel(VCM_structure_base parent) // throws Exception
        {
            this.parent = parent;
            init();
        }
        public VCM_structure_base getParent() {
            return parent;
        }

        private void init() {
            // Initialize bf1
            bf1 = new BitField_16();
            // Initialize bf2
            bf2 = new BitField_8();
            // Initialize src_or_app_id

            // Initialize MpegInfoInstance
            // Conditional, will be initialized during read
            // Initialize Non_MpegInfoInstance
            // Conditional, will be initialized during read
            // Initialize descriptors
            // Conditional, will be initialized during read
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
            // read src_or_app_id
            {
                src_or_app_id = istream.readUnsignedShort();
                retVal += 2;
            }
            // read MpegInfoInstance
            if (getTransport_type() == 0) {
                MpegInfoInstance = new MpegInfo(this);
                retVal += MpegInfoInstance.read(istream);
            }
            // read Non_MpegInfoInstance
            if (getTransport_type() != 0) {
                Non_MpegInfoInstance = new Non_MpegInfo(this);
                retVal += Non_MpegInfoInstance.read(istream);
            }
            // read descriptors
            if (parent.getDescriptorsIncluded() == 1) {
                descriptors = new DescriptorCollection();
                retVal += descriptors.read(istream);
            }

            postRead();
            return retVal;
        }

        public int write(DataOutputStream ostream) throws IOException {
            preWrite();
            int retVal = 0;

            {
                /** fix dependent sizes for MpegInfoInstance **/
            }
            {
                /** fix dependent sizes for Non_MpegInfoInstance **/
            }
            {
                /** fix dependent sizes for descriptors **/
            }

            // write bf1
            ostream.writeShort(bf1.getValue());
            retVal += 2;
            // write bf2
            ostream.writeByte(bf2.getValue());
            retVal += 1;
            // write src_or_app_id
            ostream.writeShort(src_or_app_id);
            retVal += 2;
            // write MpegInfoInstance
            if (MpegInfoInstance != null)
                retVal += MpegInfoInstance.write(ostream);
            // write Non_MpegInfoInstance
            if (Non_MpegInfoInstance != null)
                retVal += Non_MpegInfoInstance.write(ostream);
            // write descriptors
            if (descriptors != null)
                retVal += descriptors.write(ostream);
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException {
            dc.indent();
            dc.getPs().print("virtual_channel\n");
            dc.increaseIndent();
            int retVal = 0;
            // write bf1
            {
                dc.indent();
                dc.getPs().print("virtual_channel_number: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getVirtual_channel_number(),
                                               12));
            }
            // write bf2
            {
                dc.indent();
                dc.getPs().print("application_virtual_channel: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(
                        getApplication_virtual_channel(), 1));
                dc.indent();
                dc.getPs().print("path_select: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getPath_select(), 1));
                dc.indent();
                dc.getPs().print("transport_type: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getTransport_type(), 1));
                dc.indent();
                dc.getPs().print("channel_type: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getChannel_type(), 4));
            }
            // write src_or_app_id
            dc.indent();
            dc.getPs().println(
                "src_or_app_id=" + src_or_app_id + "(0x"
                + Integer.toHexString(src_or_app_id) + ")");
            // write MpegInfoInstance
            if (MpegInfoInstance != null) {
                dc.indent();
                dc.getPs().println("MpegInfoInstance");
                retVal += MpegInfoInstance.dump(dc);
            }
            // write Non_MpegInfoInstance
            if (Non_MpegInfoInstance != null) {
                dc.indent();
                dc.getPs().println("Non_MpegInfoInstance");
                retVal += Non_MpegInfoInstance.dump(dc);
            }
            // write descriptors
            if (descriptors != null) {
                dc.indent();
                dc.getPs().println("descriptors");
                retVal += descriptors.dump(dc);
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
        // Getter for src_or_app_id
        // public int getSrc_or_app_id()
        // {
        // return src_or_app_id ;
        // }

        // Setter for src_or_app_id
        // public void setSrc_or_app_id(int val)
        // {
        // this.src_or_app_id= val;
        // }
        // Getter for MpegInfoInstance
        // public MpegInfo getMpegInfoInstance()
        // {
        // return MpegInfoInstance ;
        // }

        // Setter for MpegInfoInstance
        // public void setMpegInfoInstance(MpegInfo val)
        // {
        // this.MpegInfoInstance= val;
        // }
        // Getter for Non_MpegInfoInstance
        // public Non_MpegInfo getNon_MpegInfoInstance()
        // {
        // return Non_MpegInfoInstance ;
        // }

        // Setter for Non_MpegInfoInstance
        // public void setNon_MpegInfoInstance(Non_MpegInfo val)
        // {
        // this.Non_MpegInfoInstance= val;
        // }
        // Getter for descriptors
        // public DescriptorCollection getDescriptors()
        // {
        // return descriptors ;
        // }

        // Setter for descriptors
        // public void setDescriptors(DescriptorCollection val)
        // {
        // this.descriptors= val;
        // }

        public int getVirtual_channel_number() {
            return (bf1.getValue() & 0x00000fff) >> 0;
        }

        public void setVirtual_channel_number(int val) {
            bf1.setValue((bf1.getValue() & 0xfffff000)
                         | ((val << 0) & 0x00000fff));
        }

        public int getApplication_virtual_channel() {
            return (bf2.getValue() & 0x00000080) >> 7;
        }

        public void setApplication_virtual_channel(int val) {
            bf2.setValue((bf2.getValue() & 0xffffff7f)
                         | ((val << 7) & 0x00000080));
        }

        public int getPath_select() {
            return (bf2.getValue() & 0x00000020) >> 5;
        }

        public void setPath_select(int val) {
            bf2.setValue((bf2.getValue() & 0xffffffdf)
                         | ((val << 5) & 0x00000020));
        }

        public int getTransport_type() {
            return (bf2.getValue() & 0x00000010) >> 4;
        }

        public void setTransport_type(int val) {
            bf2.setValue((bf2.getValue() & 0xffffffef)
                         | ((val << 4) & 0x00000010));
        }

        public int getChannel_type() {
            return (bf2.getValue() & 0x0000000f) >> 0;
        }

        public void setChannel_type(int val) {
            bf2.setValue((bf2.getValue() & 0xfffffff0)
                         | ((val << 0) & 0x0000000f));
        }

        public int getSize() throws IOException {
            DataOutputStream dos = new DataOutputStream(new NullStream());
            return this.write(dos);
        }

    }

    // End of code

    // members variables
    // bf1
    public BitField_8 bf1;
    // bf2
    public BitField_8 bf2;
    // activationTime
    public long activationTime;
    // numberOfVCRecords
    public short numberOfVCRecords;
    // vcRecords
    public ArrayList<virtual_channel> vcRecords;

    public VCM_structure_base() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize activationTime

        // Initialize numberOfVCRecords

        // Initialize vcRecords
        vcRecords = new ArrayList<virtual_channel>();
        vcRecords.setMemberSize(0);
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
        // read activationTime
        {
            activationTime = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read numberOfVCRecords
        {
            numberOfVCRecords = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read vcRecords
        for (int iIdx = 0; iIdx < numberOfVCRecords + (0); iIdx++) {
            virtual_channel temp;
            temp = new virtual_channel(this);
            retVal += temp.read(istream);
            vcRecords.add(temp);
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for vcRecords **/
            numberOfVCRecords = ((short) vcRecords.getCount());
        }

        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal += 1;
        // write bf2
        ostream.writeByte(bf2.getValue());
        retVal += 1;
        // write activationTime
        BinPrimitive.writeUI32(ostream, activationTime);
        retVal += 4;
        // write numberOfVCRecords
        ostream.writeByte(numberOfVCRecords);
        retVal += 1;
        // write vcRecords
        {
            ArrayList<virtual_channel> temp1 = vcRecords;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                virtual_channel temp2 = temp1.get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("VCM_structure_base\n");
        dc.increaseIndent();
        int retVal = 0;
        // write bf1
        {
            dc.indent();
            dc.getPs().print("zero1: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero1(), 2));
            dc.indent();
            dc.getPs().print("descriptorsIncluded: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getDescriptorsIncluded(), 1));
            dc.indent();
            dc.getPs().print("zero2: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero2(), 5));
        }
        // write bf2
        {
            dc.indent();
            dc.getPs().print("splice: ");
            dc.getPs().println(BitField_8.toDisplayString(getSplice(), 1));
            dc.indent();
            dc.getPs().print("zero3: ");
            dc.getPs().println(BitField_8.toDisplayString(getZero3(), 7));
        }
        // write activationTime
        dc.indent();
        dc.getPs().println(
            "activationTime=" + activationTime + "(0x"
            + Long.toHexString(activationTime) + ")");
        // write numberOfVCRecords
        dc.indent();
        dc.getPs().println(
            "numberOfVCRecords=" + numberOfVCRecords + "(0x"
            + Integer.toHexString(numberOfVCRecords) + ")");
        // write vcRecords
        {
            ArrayList<virtual_channel> temp1 = vcRecords;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                virtual_channel element = temp1.get(iIdx);
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
    // public BitField_8 getBf1()
    // {
    // return bf1 ;
    // }

    // Setter for bf1
    // public void setBf1(BitField_8 val)
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
    // Getter for activationTime
    // public long getActivationTime()
    // {
    // return activationTime ;
    // }

    // Setter for activationTime
    // public void setActivationTime(long val)
    // {
    // this.activationTime= val;
    // }
    // Getter for numberOfVCRecords
    // public short getNumberOfVCRecords()
    // {
    // return numberOfVCRecords ;
    // }

    // Setter for numberOfVCRecords
    // public void setNumberOfVCRecords(short val)
    // {
    // this.numberOfVCRecords= val;
    // }
    // Getter for vcRecords
    // public ArrayList<virtual_channel> getVcRecords()
    // {
    // return vcRecords ;
    // }

    // Setter for vcRecords
    // public void setVcRecords(ArrayList<virtual_channel> val)
    // {
    // this.vcRecords= val;
    // }

    public int getZero1() {
        return (bf1.getValue() & 0x000000c0) >> 6;
    }

    public void setZero1(int val) {
        bf1.setValue((bf1.getValue() & 0xffffff3f) | ((val << 6) & 0x000000c0));
    }

    public int getDescriptorsIncluded() {
        return (bf1.getValue() & 0x00000020) >> 5;
    }

    public void setDescriptorsIncluded(int val) {
        bf1.setValue((bf1.getValue() & 0xffffffdf) | ((val << 5) & 0x00000020));
    }

    public int getZero2() {
        return (bf1.getValue() & 0x0000001f) >> 0;
    }

    public void setZero2(int val) {
        bf1.setValue((bf1.getValue() & 0xffffffe0) | ((val << 0) & 0x0000001f));
    }

    public int getSplice() {
        return (bf2.getValue() & 0x00000080) >> 7;
    }

    public void setSplice(int val) {
        bf2.setValue((bf2.getValue() & 0xffffff7f) | ((val << 7) & 0x00000080));
    }

    public int getZero3() {
        return (bf2.getValue() & 0x0000007f) >> 0;
    }

    public void setZero3(int val) {
        bf2.setValue((bf2.getValue() & 0xffffff80) | ((val << 0) & 0x0000007f));
    }

    public int addToVcRecords(virtual_channel val) {
        vcRecords.add(val);
        return vcRecords.size();
    }

    public int removeFromVcRecords(virtual_channel val) {
        vcRecords.remove(val);
        return vcRecords.size();
    }

    public int removeNthFromVcRecords(int idx) {
        vcRecords.remove(idx);
        return vcRecords.size();
    }

    public int emptyVcRecords(int idx) {
        vcRecords.clear();
        return vcRecords.size();
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

}

// End of code