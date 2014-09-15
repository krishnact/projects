package org.himalay.mpeg.player;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;

import org.himalay.mpeg2.types.Mpeg2TSPacket;

public class DeferredMpeg2TsPacket {
	Mpeg2TSPacket packet;
	byte[] buffer	= new byte[188];
	
	public int read(DataInputStream dis) throws IOException
	{
		dis.readFully(buffer);
		return 188;
	}
	
	public int getPid()
	{
//	    int value = 0;
//	    for (int i = 1; i < 3; i++) {
//	        int shift = (4 - 1 - i) * 8;
//	        value += (b[i] & 0x000000FF) << shift;
//	    }
//	    return value;

		int retVal	=( ( (buffer[1] & 0x000000FF )<< 8 | (buffer[2]) &0x000000FF) ) & 0x1FFF;
		return retVal;
	}
	
	public void interpret() throws IOException
	{
		DataInputStream dis	= new DataInputStream(new ByteArrayInputStream(buffer));
		packet	= new Mpeg2TSPacket();
		packet.read(dis);
	}
}
