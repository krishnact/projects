package org.himalay.mpeg.player;

import java.io.EOFException;
import java.io.IOException;
import java.util.Date;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

import org.himalay.mpeg.jdvbsnoop.Mpeg2TsPacketSource;
import org.himalay.mpeg2.types.PAT;
import org.himalay.mpeg2.types.PMT;
import org.himalay.mpeg2.types.PatEntry;

public class DefaultInputOutputTransportStream implements InputTransportStream, OutputTransportStream{
	public static final int PMT_PID_TYPE	= 0x80000001;
	public static final int NIT_PID_TYPE	= 0x80000002;
	public static final int CAT_PID_TYPE	= 0x80000003;
	
	PAT 			pat;
	// members to input ts
	Object[]		pid2Object;
	int[]    	    pid2Types;
	int             patCRC;
	Mpeg2TsPacketSource packetSource;
	PATFilter 		patFilter;

	// Members to support output TS
	DeferredMpeg2TsPacket 	patPacket;
	private PacketOutputChannel 	outChannel;
	PATSender               patSender;
	
	// The driver class
	Player player;
	
	public void patArrived(DeferredMpeg2TsPacket patPacket, PAT pat){
		this.patPacket	= patPacket;
		if ( pat.CRC != patCRC)//
		{
			patCRC	= pat.CRC;
			long lTime	= new Date().getTime();
			
			for (PatEntry entry : pat.pats)
			{
				int pn	= entry.programNumber;
				int pmtPid	= entry.getPid();
				Program program	= null;
				if ( pid2Types[pmtPid] == PMT_PID_TYPE && pid2Object[pmtPid] != null)
					program	= (Program)pid2Object[pmtPid];
				if ( program != null )
				{
					if (program.programNumnber == pn)
					{
						program.scanId	= lTime;
					}else
					{
						
					}
				}else
				{
					program 	= player.createProgram(pn, this);//new Program(pn, this, this);
					program.scanId	= lTime;
					pid2Object[pmtPid]	= program;
					pid2Types[pmtPid] = PMT_PID_TYPE;
					
				}
			}
			
			
			// Clear stale Program entries from array
			for (int i = 0; i < pid2Types.length; i++) {
				if ( pid2Types[i] == PMT_PID_TYPE && ((Program)pid2Object[i]).scanId != lTime)
				{
					pid2Types[i] 	= 0;
					pid2Object[i]	= null;
				}
			}
		}
	}
	
	public boolean isPmtPid(int pid)
	{
		return pid2Types[pid] == PMT_PID_TYPE;
	}
	
	public DefaultInputOutputTransportStream(Mpeg2TsPacketSource packetSource, Player player)
	{
		pid2Types	= new int[0x1FFF+1];
		pid2Object 	= new Program[0x1FFF+1];
		this.packetSource	= packetSource;
		this.player			= player;
		patFilter	= new PATFilter();

		ScheduledExecutorService tsTablesSchedule	= new ScheduledThreadPoolExecutor(2);
		patSender	= new PATSender();
		tsTablesSchedule.scheduleAtFixedRate(patSender, 200, 100, TimeUnit.MILLISECONDS);
	}
	
	void pmtArrived(DeferredMpeg2TsPacket packet, PMT pmt, int pid) throws InterruptedException
	{
		int pn	= pmt.program_number;
		Program pgm	= null;
		if ( pid2Types[pid] == PMT_PID_TYPE && pid2Object[pid] != null)
			pgm	= (Program)pid2Object[pid];

		if ( pgm == null)
		{
			// How come? Oh, of course there can be a PMT packets before PAT, but we will ignore it.
		}else
		{
			pgm.pmtArrived(packet,pmt);
		}
	}

	@Override
	public void setPid2Types(int pid, int type) {
		pid2Types[pid] = type;
	}

	@Override
	public void setPid2Object(int pid, Object obj) {
		pid2Object[pid] = obj;

	}
	
	class PATSender implements Runnable
	{

		@Override
		public void run() {
			outChannel.send(patPacket.buffer, 0, 188);
		}
		
	}

	@Override
	public void send(DeferredMpeg2TsPacket defferedPacket) {
		outChannel.send(defferedPacket.buffer, 0, 0);
	}

	@Override
	public void setPacketOutputChannel(PacketOutputChannel pochannel) {
		this.outChannel	= pochannel;
	}

	@Override
	public PacketOutputChannel getPacketOutputChannel() {
		return outChannel;
	}

	public void run() throws IOException
	{
		while(true)
		{
			try {
				DeferredMpeg2TsPacket packet	= this.packetSource.getNextPacket_Deferred();
				int pid	= packet.getPid() ;
				//System.out.println("pid:"+ pid);
				if ( pid == 0)
				{
					packet.interpret();
					patFilter.examin(packet.packet);
					if ( patFilter.pat != null)
					{
						this.patArrived(packet,patFilter.pat);
					}
				}else if (this.isPmtPid(pid))
				{
					packet.interpret();
					PMT pmt	= Program.getPMT(packet.packet);
					if ( pmt != null)
					{
						this.pmtArrived(packet,pmt, pid);
					}
				}else if (Program.hasAProgram(pid, this) && this.pid2Object[pid] != null )
				{
					Program pgm = (Program)this.pid2Object[pid];
					pgm.packetArrived(packet);
				}
			}catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
		
}
//
//class Reader implements Runnable
//{
//	DefaultInputTransportStream ts;
//	PATFilter patFilter;
//	
//	public Reader(DefaultInputTransportStream ts) {
//		super();
//		this.ts = ts;
//		patFilter	= new PATFilter();
//	}
//	public void run()
//	{
//		while(true)
//		{
//			try {
//				DeferredMpeg2TsPacket packet	= ts.packetSource.getNextPacket_Deferred();
//				int pid	= packet.getPid() ;
//				//System.out.println("pid:"+ pid);
//				if ( pid == 0)
//				{
//					packet.interpret();
//					patFilter.examin(packet.packet);
//					if ( patFilter.pat != null)
//					{
//						ts.patArrived(packet,patFilter.pat);
//					}
//				}else if (ts.isPmtPid(pid))
//				{
//					packet.interpret();
//					PMT pmt	= Program.getPMT(packet.packet);
//					if ( pmt != null)
//					{
//						ts.pmtArrived(packet,pmt, pid);
//					}
//				}else if (Program.hasAProgram(pid, ts) && ts.pid2Object[pid] != null )
//				{
//					Program pgm = (Program)ts.pid2Object[pid];
//					pgm.packetArrived(packet);
//				}
//			} catch (IOException e) {
//				e.printStackTrace();
//				break;
//			} catch (InterruptedException e) {
//				// TODO Auto-generated catch block
//				e.printStackTrace();
//			}
//		}
//	}
//	
//}
