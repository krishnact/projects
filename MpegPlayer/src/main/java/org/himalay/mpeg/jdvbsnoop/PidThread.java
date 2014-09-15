package org.himalay.mpeg.jdvbsnoop;

import java.util.Queue;
import java.util.concurrent.ArrayBlockingQueue;

import org.himalay.mpeg2.types.Mpeg2TSPacket;

public class PidThread implements Runnable {
	short pid;
	Queue<Mpeg2TSPacket> packetList;
	
	public PidThread(short pid) {
		super();
		this.pid = pid;
		packetList	= new ArrayBlockingQueue<Mpeg2TSPacket>(10000);
	}

	@Override
	public void run() {
		
		Mpeg2TSPacket packet	= packetList.poll();
		
		
	}

	public void addPacket(Mpeg2TSPacket packet)
	{
		packetList.offer(packet);
	}
	
}
