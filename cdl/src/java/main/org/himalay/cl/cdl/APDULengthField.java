package org.himalay.cl.cdl;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;

import org.himalay.msgs.runtime.BinStruct;
import org.himalay.msgs.runtime.DumpContext;

public class APDULengthField extends BinStruct {
    public int value;
    public int read(DataInputStream istream) throws IOException {
        // Read first byte.
        int firstByte	= istream.readUnsignedByte();
        if ( firstByte > 127)
        {
            int size	= firstByte & 0x7F;
            if ( size ==1 )
            {
                value = istream.readUnsignedByte();
            } else if ( size ==2)
            {
                value = istream.readUnsignedShort();
            } else if (size == 3)
            {
                value = istream.readUnsignedByte() << 16 | istream.readUnsignedShort();
            } else if (size == 4)
            {
                // Really? We have this big data?
            }
            return 1+ size;
        } else
        {
            value = firstByte;
            return 1;
        }
    }

    public int write(DataOutputStream ostream) throws IOException {
        int bytesNeeded	= 0;
        if ( value <= 127)
        {
            ostream.writeByte(value);
        } else if ( value > 127 && value < 256)
        {
            bytesNeeded= 1;
            ostream.writeByte(128+ bytesNeeded);
            ostream.writeByte(value);
        } else
        {
            bytesNeeded= 2;
            ostream.writeByte(128+ bytesNeeded);
            ostream.writeShort(value);
        }
        return 1+ bytesNeeded;
    }

    public int dump(DumpContext dc) {
        dc.increaseIndent();
        dc.indent();
        dc.getPs().println("value: "+ value);
        dc.decreaseIndent();
        return 0;
    }

    @Override
    public int getSize() throws IOException {
        int bytesNeeded	= 0;
        if ( value <= 127)
        {
        } else if ( value > 127 && value < 256)
        {
            bytesNeeded= 1;
        } else
        {
            bytesNeeded= 2;
        }
        return 1+ bytesNeeded;

    }

}
