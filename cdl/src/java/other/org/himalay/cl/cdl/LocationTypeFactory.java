// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl ;

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

@Created(date = "Fri Jan 15 01:39:12 EST 2016")
public class LocationTypeFactory implements Factory {
    public static final int LocationType_source_id = 0x00;
    public static final int LocationType_pid = 0x01;
    public static final int LocationType_program = 0x02;
    public static final int LocationType_dsg_tunnel = 0x03;
    public static final int LocationType_dsg_app_id = 0x04;
    public static boolean isDebug = true;
    public static  LocationType lastParsedObject= null;
    public static LocationType createMsg( int messageType, DataInputStream dis, IntegerHolder iHolder) throws IOException
    {
        int iRead= 0;
        LocationType retVal= null;
        try {
            switch( messageType )
            {
            case 0x00 :
            {
                retVal= new LocationType_source_id ();
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x01 :
            {
                retVal= new LocationType_pid ();
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x02 :
            {
                retVal= new LocationType_program ();
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x03 :
            {
                retVal= new LocationType_dsg_tunnel ();
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            case 0x04 :
            {
                retVal= new LocationType_dsg_app_id ();
                iRead+=retVal.readNoHeader(dis);
                break;
            }
            }
        } catch(IOException ioex)
        {
            if (isDebug)
            {
                lastParsedObject = retVal;
            }
            throw ioex;
        }
        iHolder.setValue(iRead);
        return retVal;
    }

    public static abstract class LocationType extends BinMessage implements FactoryProduct {
        public LocationType() {
            super();
            // TODO Auto-generated constructor stub
        }

    }
}

// End of code