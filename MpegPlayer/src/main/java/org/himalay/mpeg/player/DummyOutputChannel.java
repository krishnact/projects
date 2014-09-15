package org.himalay.mpeg.player;

import java.util.Date;

public class DummyOutputChannel implements PacketOutputChannel{

	Date startTime;
	long bytesSent	;
	
	@Override
	public void send(byte[] packetData, int position, int count) {
		bytesSent += count;
		if ( startTime == null)
		{
			startTime = new Date();
		}
	}

	public int getRate()
	{
		Date now	= new Date();
		
		return (int) ( ( bytesSent*1000000L) / (now.getTime() - startTime.getTime()));
	}
	
}
