package org.himalay.mpeg.jdvbsnoop;

import java.io.IOException;

import org.himalay.mpeg.player.DeferredMpeg2TsPacket;
import org.himalay.mpeg2.types.Mpeg2TSPacket;

public interface Mpeg2TsPacketSource {
	public Mpeg2TSPacket getNextPacket() throws IOException;
	public DeferredMpeg2TsPacket getNextPacket_Deferred() throws IOException;
}
