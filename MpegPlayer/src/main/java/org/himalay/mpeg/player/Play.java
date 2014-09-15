package org.himalay.mpeg.player;

import java.io.FileNotFoundException;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Date;

public class Play {
	
	public static void main(String[] args) {
	
		if ( args.length < 3)
		{
			usage();
			System.exit(1);
		}
		Play snoop	= new Play();
		long t1	=0;
		t1	= new Date().getTime();
		try {
			//SimplePlayer sp	= new SimplePlayer(args[0], "192.168.41.20", 7878);
			SimplePlayer sp	= new SimplePlayer(args[0], args[1], Integer.parseInt(args[2]), true);
			sp.start();
			sp.join();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SocketException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (UnknownHostException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		long t2	= new Date().getTime();
		System.err.println("Total time =" + (t2-t1));
	}

	public static void usage()
	{
		System.out.println("Usage  : org.himalay.mpeg.player.Play fileName destinationIP destinationPort");
		System.out.println("Example:");
		System.out.println("java -cp MpegPlayer.jar org.himalay.mpeg.player.Play sample.ts 192.168.1.4 4444");
	}
	
	public Play() {
	}


//	private void dumpPackatesDetails(Mpeg2TSPacket packet) throws IOException
//	{
//		if ( packet != null)
//		{
//
//			
//			System.out.println(new Date() + ": Packet Index: "+ cf.currentPacket +", bits " + cf.currentPacket*188*8);
//			packet.dump(dc);
//			dc.increaseIndent();
//			if ( packet.getPayloadExists() > 0 && packet.getPuStartIndicator() > 0)
//			{
//				byte [] payloadBytes	= packet.getPayLoad().getData().getData();
//				DataInputStream dis	= new DataInputStream(new ByteArrayInputStream(payloadBytes));
//				MpegPayload pat = new MpegPayload();
//				pat.read(dis);
//				pat.dump(dc);
//			}
//			dc.decreaseIndent();
//		}
//	}
	
//	public boolean isPMTPid(Mpeg2TSPacket packet)
//	{
//		boolean retVal	= false;
//		// Do we have PAT?
//		if ( patFilter.pat != null )
//		{
//			for ( PatEntry patEntry: patFilter.pat.getPats())
//			{
//				if ( packet.getPid() == patEntry.getPid())
//				{
//					retVal	= true;
//					break;
//				}
//			}
//
//			
//		}	
//		return retVal;
//	}
//
}
