package org.himalay.mpeg.player;

import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.net.SocketException;
import java.net.UnknownHostException;

import org.himalay.mpeg.jdvbsnoop.DefaultMpeg2PacketSource;

public class SimplePlayer extends Thread implements Player {

	DefaultMpeg2PacketSource packetSource;
	PacketOutputChannel poChannel;
	InputTransportStream  inTs;
	OutputTransportStream outTs;
	String fileName;
	boolean bLoop	= true;
	
	@Override
	public void run() {
		try {
			setName("SimplePlayer");
			DefaultInputOutputTransportStream ts = new DefaultInputOutputTransportStream(packetSource, this);
			ts.setPacketOutputChannel(poChannel);
			inTs	= ts;
			outTs	= ts;
			while(true)
			{
				try{
					ts.run();
				}catch(EOFException eof)
				{
					if (bLoop)
					{
						FileInputStream fis	= new FileInputStream(fileName);
						packetSource.setIputStream(fis);
					}
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

	@Override
	public Program createProgram(int programNumber, InputTransportStream inTs) {
		return new Program(programNumber, inTs, outTs);
	}

	public SimplePlayer(String fileName, String destHost, int destPort, boolean loop)
			throws FileNotFoundException, SocketException, UnknownHostException {
		this.bLoop	= loop;
		this.fileName	= fileName;
		FileInputStream fis	= new FileInputStream(fileName);
		
		packetSource = new DefaultMpeg2PacketSource(fis);
		
		poChannel= new UDPMpegPacketOutChannel(destHost, destPort) ;
	}
}
