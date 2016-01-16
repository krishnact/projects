// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import org.himalay.msgs.runtime.Factory;
import org.himalay.msgs.runtime.FactoryProduct;
import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.*;

@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SDVDescriptorFactory implements Factory {
    public static final int ClientVersionDescriptor = 0x0002;
    public static final int SettopCapabilites = 0x0001;
    public static boolean isDebug = true;
    public static SDVDescriptor lastParsedObject = null;
    public static SDVDescriptor createMsg(DataInputStream istream,
                                          IntegerHolder iHolder1) throws IOException {
        int iRead = 0;
        resourceHeader header;
        {
            int retVal = 0;
            header = new resourceHeader();
            retVal += header.read(istream);
            iRead = retVal;
        }
        SDVDescriptor retVal = createMsg(header, istream, iHolder1);
        iHolder1.setValue(iHolder1.getValue() + iRead);
        return retVal;
    }

    public static SDVDescriptor createMsg(
        org.himalay.sdv.ccp.resourceHeader temp, DataInputStream dis,
        IntegerHolder iHolder) throws IOException {
        int iRead = 0;
        SDVDescriptor retVal = null;
        try {
            switch (temp.getMessageType()) {
            case 0x0002 : {
                retVal = new ClientVersionDescriptor();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0x0001 : {
                retVal = new SettopCapabilites();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            }
        } catch (IOException ioex) {
            if (isDebug) {
                lastParsedObject = retVal;
            }
            throw ioex;
        }
        iHolder.setValue(iRead);
        return retVal;
    }

    public static abstract class SDVDescriptor extends BinMessage
        implements
        FactoryProduct {
        public SDVDescriptor() {
            super();
            // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.sdv.ccp.resourceHeader header);
        public abstract org.himalay.sdv.ccp.resourceHeader getHeader();

    }
}

// End of code