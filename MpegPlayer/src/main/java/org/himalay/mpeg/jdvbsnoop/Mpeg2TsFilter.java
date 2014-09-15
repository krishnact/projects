package org.himalay.mpeg.jdvbsnoop;

import org.himalay.mpeg2.types.Mpeg2TSPacket;

public interface Mpeg2TsFilter
{
	public Mpeg2TSPacket examin(Mpeg2TSPacket packet);
}