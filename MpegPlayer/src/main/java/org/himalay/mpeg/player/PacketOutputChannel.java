package org.himalay.mpeg.player;

public interface PacketOutputChannel {

	public void send(byte[] packetData, int position , int count);
}
