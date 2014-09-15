package org.himalay.mpeg.player;

import java.util.ArrayList;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingDeque;

public class PCRControlledPipe extends Thread{
	PacketHolder currentPacketHolder= new PacketHolder();
	BlockingQueue<PacketHolder> queue = new LinkedBlockingDeque<PacketHolder>(4);
	PacketOutputChannel outChannel;
	boolean bContinue	= true;
	
	// How many packets did we drop?
	int droppedPacketCount	= 0;
	// How much time did we wait?
	long waitedTime	= 0;
	
	public void add(DeferredMpeg2TsPacket packet, long pcr) throws InterruptedException
	{
		currentPacketHolder	= currentPacketHolder.add(packet, pcr);
	}
	
	public PCRControlledPipe(PacketOutputChannel outChannel) {
		super();
		setOutChannel(outChannel);
		
	}

	class PacketHolder
	{
		ArrayList<DeferredMpeg2TsPacket> 	packets;
		long 								spreadInMs;
		transient long pcr;
		transient long lastPcr;
		public PacketHolder add(DeferredMpeg2TsPacket packet, long pcr) throws InterruptedException
		{
			PacketHolder retVal = this;
			packets.add(packet);
			if ( this.pcr == 0)
			{
				this.pcr	= pcr;
			}else if ( this.pcr != pcr)
			{
				retVal	= new PacketHolder();
				retVal.pcr	= pcr;
				retVal.lastPcr	= this.pcr;
				
				// Final calculations for us
				if ( ( lastPcr - this.pcr ) > 900000 ||  ( this.pcr -lastPcr  ) > 900000 )
				{
					 lastPcr	= this.pcr - getAvgPCTInterval();
				}else
				{
					storePcrDiff( this.pcr -lastPcr);
				}
				spreadInMs	= (long)(( this.pcr-lastPcr)/90); // Since pcr is based upon 90 kHz (.090 Mhz) clock
				queue.put(this);
			}
			return retVal;
		}
		public PacketHolder() {
			super();
			this.packets = new ArrayList<DeferredMpeg2TsPacket>();
			this.spreadInMs = 0;
			this.pcr = 0;
		}
	}

	void storePcrDiff( long interval)
	{
		
	}
	
	public long getAvgPCTInterval()
	{
		return 5000;
	}
	
	public PacketOutputChannel getOutChannel() {
		return outChannel;
	}

	public void setOutChannel(PacketOutputChannel outChannel) {
		this.outChannel = outChannel;
	}

	
	@Override
	public void run() {
		setName("PCRControlledPipe");
		byte[] dataToSend	= new byte [1500];
		while (bContinue) {
			try {
				PacketHolder packetHolder = queue.take();
				int packetsSent	= 0;
				int packetCount	= packetHolder.packets.size();;
				int remainingPackets	= packetCount;
				if (remainingPackets == 0)
					continue;
				
				long raceStartsAt	= System.currentTimeMillis(); 
				long raceShouldFinishAt = packetHolder.spreadInMs + raceStartsAt;

				// How many packets per second we have to send?
				
				int timeBetweenPackets = 
						(int) (packetHolder.spreadInMs / (remainingPackets+1));
				long distanceRun	= 0;
				int  byteCount		= 0;
				long currentTime	= 0;
				for (DeferredMpeg2TsPacket packet : packetHolder.packets)
				{
					currentTime	= System.currentTimeMillis();
					if ( (currentTime -100) > raceShouldFinishAt) // We ourselves 100 ms liberty to catch up
					{// We are too slow, the time is already over, abandon this run
						droppedPacketCount += remainingPackets;
						System.out.println("Dropped packets: "+ droppedPacketCount);
						break;
					}
					distanceRun = (packetsSent*packetHolder.spreadInMs)/(packetCount+1);
					System.arraycopy(packet.buffer, 0, dataToSend, byteCount, 188);
					byteCount += 188;
					remainingPackets--;
					packetsSent++;
					//lets run till we go just ahead of time then wait and let time catch up
					if ( ( raceStartsAt + distanceRun ) < currentTime && (byteCount < 1200) )
					{
					}else
					{
						outChannel.send(dataToSend,0, byteCount);
						long timetoWait	= raceStartsAt + distanceRun - currentTime;
						//System.out.println("Time to wait :"+ timetoWait);
						if ( timetoWait > 5)
						{
							waitedTime += (raceStartsAt + distanceRun - currentTime);
							Thread.sleep(timetoWait);
						}
						byteCount		= 0;
					}
					
				}
				if ( byteCount > 0)
				{
					outChannel.send(dataToSend,0, byteCount);
				}
				currentTime	= System.currentTimeMillis();
				long timetoWait	= raceShouldFinishAt - currentTime;
				if ( timetoWait > 5)
				{
					//System.out.println(currentTime+ ", Waiting for "+ timetoWait + ", "+ packetHolder.spreadInMs);
					waitedTime += timetoWait;
					Thread.sleep(timetoWait);
				}
				byteCount		= 0;

			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}
}


