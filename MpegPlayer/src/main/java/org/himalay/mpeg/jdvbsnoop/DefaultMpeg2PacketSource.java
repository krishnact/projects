package org.himalay.mpeg.jdvbsnoop;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PushbackInputStream;

import org.himalay.mpeg.player.DeferredMpeg2TsPacket;
import org.himalay.mpeg2.types.Mpeg2TSPacket;

public class DefaultMpeg2PacketSource implements Mpeg2TsPacketSource {

	DataInputStream dis;
	OutputStream baos;
	InputStream is;
	ByteArrayInputStream bais;
	//PushbackInputStream pin;
	byte[] bytes	;

	public DefaultMpeg2PacketSource(InputStream is) {
		bytes	= new byte[188];
		//pin	= new PushbackInputStream(is);
		this.is	= is;
		bais	= new ByteArrayInputStream(bytes);
		bais.mark(189);
		dis	= new DataInputStream(bais);
		try {
			dis.skip(188);
		} catch (IOException e) {
		}
		
	}

	public void resetByteStream()
	{
		bais.reset();
		bais.mark(189);

	}
	
	@Override
	public Mpeg2TSPacket getNextPacket() throws IOException {
		Mpeg2TSPacket retVal	= new Mpeg2TSPacket();
		fillBuffer();
		int iRead	= retVal.read(dis);
		if ( iRead != 188)
			throw new IOException("Bad Packet");
		return retVal;
		
	}

	private void fillBuffer() throws IOException
	{
		int available	= dis.available();
		if ( available >= 188)
		{
			return;
		}else
		{
			waitForData(188-available);
			int iRead	=is.read(bytes, available, 188-available);
			if ( iRead == (188-available))
			{
				resetByteStream();
			}
		}
	}
	public void seekToSyncByte(boolean wait) throws IOException {
		int oneByte	= 0;
		while (true) 
		{
			if (wait)
			{
				waitForData(1);
			}
			oneByte = is.read();
			if ( oneByte == 0x47)
			{
				bytes[0]	= (byte)oneByte;
				if ( wait)
				{
					waitForData(187);
					{
						is.read(bytes, 1, 187);
					}
				}
				break;
			}
			
		}
		resetByteStream();
		
	}
	
	
	private void waitForData(int size) throws IOException
	{
		//is.read(bytes,0,size);
		return;
//		while ( is.available() < size )
//		{
//			try {
//				Thread.sleep(500);
//			} catch (InterruptedException e) {
//				// TODO Auto-generated catch block
//				e.printStackTrace();
//			}
//		}

	}
	
	public byte[] getLastPacketData()
	{
		return bytes;
	}
//	public void waitForSyncByte() throws IOException {
//		int oneByte	= 0;
//		while (true) 
//		{
//			while ( pin.available() == 0)
//			{
//				try {
//					Thread.sleep(1000);
//				} catch (InterruptedException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
//			}
//			oneByte = pin.read();
//			if ( oneByte == 0x47)
//			{
//				pin.unread(oneByte);
//			}
//		}
//	}

	@Override
	public DeferredMpeg2TsPacket getNextPacket_Deferred() throws IOException {
		DeferredMpeg2TsPacket retVal	= new DeferredMpeg2TsPacket();
		fillBuffer();
		retVal.read(dis);
		return retVal;
	}

	public void setIputStream(InputStream fis) {
		this.is	= fis;
	}
	
}
