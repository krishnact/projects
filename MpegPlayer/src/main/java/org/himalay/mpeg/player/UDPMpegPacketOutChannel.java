package org.himalay.mpeg.player;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.SocketException;
import java.net.UnknownHostException;

public class UDPMpegPacketOutChannel extends DummyOutputChannel{

	DatagramSocket 	socket;
	InetAddress 	destination;
	//int 			destPort;
	DatagramPacket 	packet;
	
	@Override
	public void send(byte[] packetData, int position, int count) {
		super.send(packetData, position, count);
		packet.setData(packetData,position, count);
		try {
			socket.send(packet);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public UDPMpegPacketOutChannel(String destHost, int port) throws SocketException, UnknownHostException
	{

			socket	= new DatagramSocket();
			destination	= Inet4Address.getByName(destHost);
			packet	= new DatagramPacket(new byte[0],0);
			packet.setAddress(destination);
			packet.setPort(port);
	}
	

}
