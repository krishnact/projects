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
public class application_storage_descriptor
    extends
    app_desc_baseFactory.app_desc_base { // Concrete type is
    // application_storage_descriptor

    // members variables
    // desc_header
    public descriptor_header desc_header;
    // storage_priority
    public int storage_priority;
    // launch_order
    public short launch_order;

    public application_storage_descriptor() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize desc_header
        desc_header = new descriptor_header();
        // Initialize storage_priority

        // Initialize launch_order

    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        DataInputStream saved = istream;
        int sizeLimit = getHeader().length + (0);
        if (sizeLimit > 0) {
            byte[] ba = new byte[sizeLimit];
            istream.readFully(ba);
            ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
            istream = new DataInputStream(baTemp);
            {
                // read storage_priority
                {
                    storage_priority = istream.readUnsignedShort();
                    retVal += 2;
                }
                // read launch_order
                {
                    launch_order = (short) (istream.readUnsignedByte());
                    retVal += 1;
                }

            }
        }
        istream = saved;
        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        DataInputStream saved = istream;
        int sizeLimit = getHeader().length + (0);
        if (sizeLimit > 0) {
            byte[] ba = new byte[sizeLimit];
            istream.readFully(ba);
            ByteArrayInputStream baTemp = new ByteArrayInputStream(ba);
            istream = new DataInputStream(baTemp);
            {
                // read desc_header
                retVal += desc_header.read(istream);
                // read storage_priority
                {
                    storage_priority = istream.readUnsignedShort();
                    retVal += 2;
                }
                // read launch_order
                {
                    launch_order = (short) (istream.readUnsignedByte());
                    retVal += 1;
                }

            }
        }
        istream = saved;
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
        // write storage_priority
        ostream.writeShort(storage_priority);
        retVal += 2;
        // write launch_order
        ostream.writeByte(launch_order);
        retVal += 1;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("application_storage_descriptor\n");
        dc.increaseIndent();
        int retVal = 0;
        // write desc_header
        if (desc_header != null) {
            dc.indent();
            dc.getPs().println("desc_header");
            retVal += desc_header.dump(dc);
        }
        // write storage_priority
        dc.indent();
        dc.getPs().println(
            "storage_priority=" + storage_priority + "(0x"
            + Integer.toHexString(storage_priority) + ")");
        // write launch_order
        dc.indent();
        dc.getPs().println(
            "launch_order=" + launch_order + "(0x"
            + Integer.toHexString(launch_order) + ")");
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
    // Getter for storage_priority
    // public int getStorage_priority()
    // {
    // return storage_priority ;
    // }

    // Setter for storage_priority
    // public void setStorage_priority(int val)
    // {
    // this.storage_priority= val;
    // }
    // Getter for launch_order
    // public short getLaunch_order()
    // {
    // return launch_order ;
    // }

    // Setter for launch_order
    // public void setLaunch_order(short val)
    // {
    // this.launch_order= val;
    // }

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