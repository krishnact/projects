// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si;

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

@Created(date = "Sun Sep 14 22:48:37 EDT 2014")
public class SCTE65TableFactory implements Factory {
    public static final int shortform_virtual_channel_table_section = 0xc4;
    public static final int network_text_table_section = 0xc3;
    public static final int system_time_table_section = 0xc5;
    public static final int network_information_table_section = 0xc2;
    public static final int code_version_table_section = 0xd9;
    public static final int generic_table_section = 0;
    public static final int ca_table_section = 0x8c;
    public static final int xait_section = 0x74;
    public static final int longform_virtual_channel_table_section = 0xc9;
    public static boolean isDebug = true;
    public static SCTE65Table lastParsedObject = null;
    public static SCTE65Table createMsg(DataInputStream istream,
                                        IntegerHolder iHolder1) throws IOException {
        int iRead = 0;
        SCTE65_TableHeader tableHeader;
        {
            int retVal = 0;
            tableHeader = new SCTE65_TableHeader();
            retVal += tableHeader.read(istream);
            iRead = retVal;
        }
        SCTE65Table retVal = createMsg(tableHeader, istream, iHolder1);
        iHolder1.setValue(iHolder1.getValue() + iRead);
        return retVal;
    }

    public static SCTE65Table createMsg(org.himalay.si.SCTE65_TableHeader temp,
                                        DataInputStream dis, IntegerHolder iHolder) throws IOException {
        int iRead = 0;
        SCTE65Table retVal = null;
        try {
            switch (temp.getMessageType()) {
            case 0xc4 : {
                retVal = new shortform_virtual_channel_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0xc3 : {
                retVal = new network_text_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0xc5 : {
                retVal = new system_time_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0xc2 : {
                retVal = new network_information_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0xd9 : {
                retVal = new code_version_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0 : {
                retVal = new generic_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0x8c : {
                retVal = new ca_table_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0x74 : {
                retVal = new xait_section();
                retVal.setHeader(temp);
                // has no spread
                iRead += retVal.readNoHeader(dis);
                break;
            }
            case 0xc9 : {
                retVal = new longform_virtual_channel_table_section();
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

    public static abstract class SCTE65Table extends BinMessage
        implements
        FactoryProduct {
        public SCTE65Table() {
            super();
            // TODO Auto-generated constructor stub
        }
        public abstract void setHeader(org.himalay.si.SCTE65_TableHeader header);
        public abstract org.himalay.si.SCTE65_TableHeader getHeader();

    }
}

// End of code