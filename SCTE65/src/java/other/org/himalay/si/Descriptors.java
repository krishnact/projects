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
public class Descriptors extends BinStruct implements PublicBinMsg {

    // members variables
    // descriptors
    public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> descriptors;

    public Descriptors() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize descriptors
        descriptors = new ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>();
        descriptors.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read descriptors
        for (; istream.available() > 0;) {
            SCTE65DescriptorFactory.SCTE65Descriptor temp; /*
															 * Generic classes
															 * are abstract, so
															 * we can not invoke
															 * new
															 */
            {
                IntegerHolder iHolder = new IntegerHolder();
                DataInputStream disTemp = istream;
                temp = SCTE65DescriptorFactory.createMsg(disTemp, iHolder);
                retVal += iHolder.getValue();
            }
            descriptors.add(temp);
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for descriptors **/
        }

        // write descriptors
        {
            ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                SCTE65DescriptorFactory.SCTE65Descriptor temp2 = temp1
                        .get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("Descriptors\n");
        dc.increaseIndent();
        int retVal = 0;
        // write descriptors
        {
            ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> temp1 = descriptors;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                SCTE65DescriptorFactory.SCTE65Descriptor element = temp1
                        .get(iIdx);
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

    // Getter for descriptors
    // public ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor>
    // getDescriptors()
    // {
    // return descriptors ;
    // }

    // Setter for descriptors
    // public void
    // setDescriptors(ArrayList<SCTE65DescriptorFactory.SCTE65Descriptor> val)
    // {
    // this.descriptors= val;
    // }

    public int addToDescriptors(SCTE65DescriptorFactory.SCTE65Descriptor val) {
        descriptors.add(val);
        return descriptors.size();
    }

    public int removeFromDescriptors(
        SCTE65DescriptorFactory.SCTE65Descriptor val) {
        descriptors.remove(val);
        return descriptors.size();
    }

    public int removeNthFromDescriptors(int idx) {
        descriptors.remove(idx);
        return descriptors.size();
    }

    public int emptyDescriptors(int idx) {
        descriptors.clear();
        return descriptors.size();
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

}

// End of code