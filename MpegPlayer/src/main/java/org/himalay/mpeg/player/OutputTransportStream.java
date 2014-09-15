package org.himalay.mpeg.player;

public interface OutputTransportStream {

	void send(DeferredMpeg2TsPacket defferedPacket);
	void setPacketOutputChannel(PacketOutputChannel pochannel);
	PacketOutputChannel getPacketOutputChannel();

}
