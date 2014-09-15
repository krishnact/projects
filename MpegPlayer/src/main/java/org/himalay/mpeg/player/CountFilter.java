package org.himalay.mpeg.player;

import org.himalay.mpeg.jdvbsnoop.Mpeg2TsFilter;
import org.himalay.mpeg2.types.Mpeg2TSPacket;

public class CountFilter implements Mpeg2TsFilter
{
	int startIndex;
	int endIndex;
	int currentPacket;
	 
	public CountFilter(int startIndex, int endIndex) {
		super();
		this.startIndex = startIndex;
		this.endIndex = endIndex;
	}

	public Mpeg2TSPacket examin(Mpeg2TSPacket packet)
	{

		if (currentPacket < startIndex )
		{
			currentPacket++;
			return null;
		}else if (currentPacket > endIndex)
		{
			currentPacket++;
			return null;
		}else
		{
			currentPacket++;
			return packet;
		}
		
	}
}