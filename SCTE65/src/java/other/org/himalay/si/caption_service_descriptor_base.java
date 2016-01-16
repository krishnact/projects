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
public class caption_service_descriptor_base
    extends
    SCTE65DescriptorFactory.SCTE65Descriptor { // Concrete type is
    // caption_service_descriptor

    // member static classes
    public static class services extends BinStruct implements PublicBinMsg {

        // members variables
        // lnaguage
        public ByteArray lnaguage;
        // line21OrCaptionService
        public short line21OrCaptionService;
        // bf33
        public BitField_16 bf33;

        // Parent of this object
        caption_service_descriptor_base parent;
        public services(caption_service_descriptor_base parent) // throws
        // Exception
        {
            this.parent = parent;
            init();
        }
        public caption_service_descriptor_base getParent() {
            return parent;
        }

        private void init() {
            // Initialize lnaguage
            lnaguage = new ByteArray();
            lnaguage.setSizeType("FIXED");
            lnaguage.setSize(3);
            // Initialize line21OrCaptionService

            // Initialize bf33
            bf33 = new BitField_16();
        }

        public int readNoHeader(DataInputStream istream) throws IOException {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException {
            preRead();
            int retVal = 0;

            // read lnaguage
            {
                retVal += lnaguage.read(istream);
            }
            // read line21OrCaptionService
            {
                line21OrCaptionService = (short) (istream.readUnsignedByte());
                retVal += 1;
            }
            // read bf33
            retVal += bf33.read(istream);

            postRead();
            return retVal;
        }

        public int write(DataOutputStream ostream) throws IOException {
            preWrite();
            int retVal = 0;

            {
                /** fix dependent sizes for lnaguage **/
            }

            // write lnaguage
            {
                retVal += lnaguage.write(ostream);
            }
            // write line21OrCaptionService
            ostream.writeByte(line21OrCaptionService);
            retVal += 1;
            // write bf33
            ostream.writeShort(bf33.getValue());
            retVal += 2;
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException {
            dc.indent();
            dc.getPs().print("services\n");
            dc.increaseIndent();
            int retVal = 0;
            // write lnaguage
            dc.indent();
            dc.getPs().print(
                "lnaguage: " + lnaguage.getSize() + "(0x"
                + Integer.toHexString(lnaguage.getSize()) + ")\n");
            this.lnaguage.dump(dc);
            // write line21OrCaptionService
            dc.indent();
            dc.getPs()
            .println(
                "line21OrCaptionService="
                + line21OrCaptionService
                + "(0x"
                + Integer
                .toHexString(line21OrCaptionService)
                + ")");
            // write bf33
            {
                dc.indent();
                dc.getPs().print("easy_reader: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getEasy_reader(), 1));
                dc.indent();
                dc.getPs().print("wide_aspect_ratio: ");
                dc.getPs().println(
                    BitField_8.toDisplayString(getWide_aspect_ratio(), 1));
            }
            dc.decreaseIndent();
            return retVal;
        }

        // Getter for lnaguage
        // public ByteArray getLnaguage()
        // {
        // return lnaguage ;
        // }

        // Setter for lnaguage
        // public void setLnaguage(ByteArray val)
        // {
        // this.lnaguage= val;
        // }
        // Getter for line21OrCaptionService
        // public short getLine21OrCaptionService()
        // {
        // return line21OrCaptionService ;
        // }

        // Setter for line21OrCaptionService
        // public void setLine21OrCaptionService(short val)
        // {
        // this.line21OrCaptionService= val;
        // }
        // Getter for bf33
        // public BitField_16 getBf33()
        // {
        // return bf33 ;
        // }

        // Setter for bf33
        // public void setBf33(BitField_16 val)
        // {
        // this.bf33= val;
        // }

        public void setLnaguage(byte[] val) {
            this.lnaguage.setData(val);
        }

        public int getEasy_reader() {
            return (bf33.getValue() & 0x00008000) >> 15;
        }

        public void setEasy_reader(int val) {
            bf33.setValue((bf33.getValue() & 0xffff7fff)
                          | ((val << 15) & 0x00008000));
        }

        public int getWide_aspect_ratio() {
            return (bf33.getValue() & 0x00004000) >> 14;
        }

        public void setWide_aspect_ratio(int val) {
            bf33.setValue((bf33.getValue() & 0xffffbfff)
                          | ((val << 14) & 0x00004000));
        }

        public int getSize() throws IOException {
            DataOutputStream dos = new DataOutputStream(new NullStream());
            return this.write(dos);
        }

    }

    // End of code

    // members variables
    // desc_header
    public descriptor_header desc_header;
    // bf1
    public BitField_8 bf1;

    public caption_service_descriptor_base() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize bf1
        bf1 = new BitField_8();
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read desc_header
        retVal += desc_header.read(istream);
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for desc_header **/
        }

        // write desc_header
        if (desc_header != null)
            retVal += desc_header.write(ostream);
        // write bf1
        ostream.writeByte(bf1.getValue());
        retVal += 1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("caption_service_descriptor_base\n");
        dc.increaseIndent();
        int retVal = 0;
        // write desc_header
        if (desc_header != null) {
            dc.indent();
            dc.getPs().println("desc_header");
            retVal += desc_header.dump(dc);
        }
        // write bf1
        {
            dc.indent();
            dc.getPs().print("number_of_service: ");
            dc.getPs().println(
                BitField_8.toDisplayString(getNumber_of_service(), 5));
        }
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for desc_header
    // public descriptor_header getDesc_header()
    // {
    // return desc_header ;
    // }

    // Setter for desc_header
    // public void setDesc_header(descriptor_header val)
    // {
    // this.desc_header= val;
    // }
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

    public int getNumber_of_service() {
        return (bf1.getValue() & 0x0000001f) >> 0;
    }

    public void setNumber_of_service(int val) {
        bf1.setValue((bf1.getValue() & 0xffffffe0) | ((val << 0) & 0x0000001f));
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

    public void setHeader(descriptor_header header) {
        this.desc_header = header;
    }

    public descriptor_header getHeader() {
        return this.desc_header;
    }

}

// End of code