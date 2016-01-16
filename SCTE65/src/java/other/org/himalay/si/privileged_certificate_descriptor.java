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
public class privileged_certificate_descriptor
    extends
    app_desc_baseFactory.app_desc_base { // Concrete type is
    // privileged_certificate_descriptor

    // member static classes
    public static class certificate_identifier_byte extends BinStruct
        implements
        PublicBinMsg {

        // members variables
        // data
        public ByteArray data;

        // Parent of this object
        privileged_certificate_descriptor parent;
        public certificate_identifier_byte(
            privileged_certificate_descriptor parent) // throws Exception
        {
            this.parent = parent;
            init();
        }
        public privileged_certificate_descriptor getParent() {
            return parent;
        }

        private void init() {
            // Initialize data
            data = new ByteArray();
            data.setSizeType("FIXED");
            data.setSize(20);
        }

        public int readNoHeader(DataInputStream istream) throws IOException {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException {
            preRead();
            int retVal = 0;

            // read data
            {
                retVal += data.read(istream);
            }

            postRead();
            return retVal;
        }

        public int write(DataOutputStream ostream) throws IOException {
            preWrite();
            int retVal = 0;

            {
                /** fix dependent sizes for data **/
            }

            // write data
            {
                retVal += data.write(ostream);
            }
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException {
            dc.indent();
            dc.getPs().print("certificate_identifier_byte\n");
            dc.increaseIndent();
            int retVal = 0;
            // write data
            dc.indent();
            dc.getPs().print(
                "data: " + data.getSize() + "(0x"
                + Integer.toHexString(data.getSize()) + ")\n");
            this.data.dump(dc);
            dc.decreaseIndent();
            return retVal;
        }

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

        public void setData(byte[] val) {
            this.data.setData(val);
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
    // certificates
    public ArrayList<certificate_identifier_byte> certificates;

    public privileged_certificate_descriptor() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize certificates
        certificates = new ArrayList<certificate_identifier_byte>();
        certificates.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read certificates
        {
            int ilimit = retVal + (desc_header.length + (0));
            for (; retVal < ilimit;) {
                certificate_identifier_byte temp;
                temp = new certificate_identifier_byte(this);
                retVal += temp.read(istream);
                certificates.add(temp);
            }
        }

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read desc_header
        retVal += desc_header.read(istream);
        // read certificates
        {
            int ilimit = retVal + (desc_header.length + (0));
            for (; retVal < ilimit;) {
                certificate_identifier_byte temp;
                temp = new certificate_identifier_byte(this);
                retVal += temp.read(istream);
                certificates.add(temp);
            }
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for desc_header **/
        }
        {
            /** fix dependent sizes for certificates **/
            desc_header.length = ((short) certificates.getSize());
        }

        // write desc_header
        if (desc_header != null)
            retVal += desc_header.write(ostream);
        // write certificates
        {
            ArrayList<certificate_identifier_byte> temp1 = certificates;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                certificate_identifier_byte temp2 = temp1.get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("privileged_certificate_descriptor\n");
        dc.increaseIndent();
        int retVal = 0;
        // write desc_header
        if (desc_header != null) {
            dc.indent();
            dc.getPs().println("desc_header");
            retVal += desc_header.dump(dc);
        }
        // write certificates
        {
            ArrayList<certificate_identifier_byte> temp1 = certificates;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                certificate_identifier_byte element = temp1.get(iIdx);
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
    // Getter for certificates
    // public ArrayList<certificate_identifier_byte> getCertificates()
    // {
    // return certificates ;
    // }

    // Setter for certificates
    // public void setCertificates(ArrayList<certificate_identifier_byte> val)
    // {
    // this.certificates= val;
    // }

    public int addToCertificates(certificate_identifier_byte val) {
        certificates.add(val);
        return certificates.size();
    }

    public int removeFromCertificates(certificate_identifier_byte val) {
        certificates.remove(val);
        return certificates.size();
    }

    public int removeNthFromCertificates(int idx) {
        certificates.remove(idx);
        return certificates.size();
    }

    public int emptyCertificates(int idx) {
        certificates.clear();
        return certificates.size();
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