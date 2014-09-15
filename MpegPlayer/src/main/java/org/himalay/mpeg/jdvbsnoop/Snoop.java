package org.himalay.mpeg.jdvbsnoop;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.net.InetAddress;
import java.util.Date;

import org.himalay.mpeg2.types.Mpeg2TSPacket;
import org.himalay.mpeg2.types.MpegPayload;
import org.himalay.mpeg2.types.MpegTSPayloadAccumulator;
import org.himalay.mpeg2.types.PAT;
import org.himalay.mpeg2.types.PatEntry;
import org.himalay.msgs.runtime.ByteArray;
import org.himalay.msgs.runtime.DumpContext;

public class Snoop {
	DumpContext dc;
	PATFilter patFilter;
	CountFilter cf;
	
	public static void main(String[] args) {
		Snoop snoop	= new Snoop();
		// Create a file source 
		try {
			DefaultMpeg2PacketSource src	= new DefaultMpeg2PacketSource(new FileInputStream(args[0]));
			//int skipBytes	= Integer.parseInt(args[1]);
			//src.is.skip(skipBytes);
			//src.seekToSyncByte(true);
			//src.seekToSyncByte(true);
			while ( true)
			{
				Mpeg2TSPacket packet	= null;
				try
				{
					packet	= src.getNextPacket();
					if ( packet.getPid() == 1379)
					{
						//packet.dump(new DumpContext());
						snoop.process(packet);
					}
				}catch (IOException ioex)
				{
					src.seekToSyncByte(true);
				}catch (Exception e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
					System.out.println("Dumped ofending bytes data:");
					ByteArray.dump(snoop.dc, src.getLastPacketData());
					src.resetByteStream();
					packet	= src.getNextPacket();
					System.exit(1);
					//src.seekToSyncByte(false); 
				}
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	private void process(Mpeg2TSPacket packet) throws IOException
	{
		
		cf.examin(packet);
		if (packet.getPayloadExists() != 0)
		{
			int pid	= packet.getPid();
			byte [] payloadBytes	= packet.payLoad.data.getData();
//			InputStream is	= MpegTSPayloadAccumulator.getInputStream(packet, payloadBytes);
//			if ( is != null)
//			{
////				MpegPayload mpp	= new MpegPayload();
////				int iRead	= mpp.read(new DataInputStream(is));
////				//mpp.dump(new DumpContext());
////				//if (! ( mpp.table.getHeader().messageType == 0 || mpp.table.getHeader().messageType == 143) )
////				if (mpp.table.getHeader().messageType == 176) 
////				{
////					//System.out.println( Integer.toHexString(mpp.table.getHeader().messageType));
////					mpp.dump(new DumpContext());
////				}
//				
//				byte[] ba	= new byte[100000];
//				int iRead	= is.read(ba);
//				byte[] ba2	= new byte[iRead];
//				System.arraycopy(ba, 0, ba2, 0, iRead);
//				ByteArray.dump(new DumpContext(),ba2);
//			}
			ByteArray.dump(new DumpContext(),payloadBytes);
		}


	}
	
	public Snoop() {
		try {
			dc	= new DumpContext(new PrintStream("c:\\tmp\\dump-176.txt"));
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}		
		cf	= new CountFilter(0, 10000);
		patFilter	= new PATFilter(dc);
	}


	private void dumpPackatesDetails(Mpeg2TSPacket packet) throws IOException
	{
		if ( packet != null)
		{

			
			System.out.println(new Date() + ": Packet Index: "+ cf.currentPacket +", bits " + cf.currentPacket*188*8);
			packet.dump(dc);
			//dc.increaseIndent();
			if ( packet.getPayloadExists() > 0 && packet.getPuStartIndicator() > 0)
			{
				byte [] payloadBytes	= packet.payLoad.data.getData();
				DataInputStream dis	= new DataInputStream(new ByteArrayInputStream(payloadBytes));
				MpegPayload pat = new MpegPayload();
				pat.read(dis);
				pat.dump(dc);
			}
			//dc.decreaseIndent();
		}
	}
	
	public boolean isPMTPid(Mpeg2TSPacket packet)
	{
		boolean retVal	= false;
		// Do we have PAT?
		if ( patFilter.pat != null )
		{
			for ( PatEntry patEntry: patFilter.pat.pats)
			{
				if ( packet.getPid() == patEntry.getPid())
				{
					retVal	= true;
					break;
				}
			}

			
		}	
		return retVal;
	}
	
	public static class CountFilter implements Mpeg2TsFilter
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

	public static class PATFilter implements Mpeg2TsFilter
	{
		public PAT pat;
		DumpContext dc;
		public PATFilter(DumpContext dc) {
			super();
			this.dc	= dc;
		}

		public Mpeg2TSPacket examin(Mpeg2TSPacket packet) 
		{
			if ( packet!= null && packet.getPid() == 0 && 
					packet.getPayloadExists() > 0 && 
					packet.getPuStartIndicator() > 0
					)
			{
				byte [] payloadBytes	= packet.payLoad.data.getData();
				DataInputStream dis	= new DataInputStream(new ByteArrayInputStream(payloadBytes));
				MpegPayload payload = new MpegPayload();
					try {
						payload.read(dis);
						if ( payload.getHeader().getMessageType() == 0x00 )
						{
							Object newPat	= payload.table;
							if (newPat != null)
							{
								this.pat	= (PAT) newPat;
							}
						}
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
						try {
							packet.dump(dc);
						} catch (IOException e1) {
							// TODO Auto-generated catch block
							e1.printStackTrace();
						}

					}

			}
			
			return packet;
		}
	}

}