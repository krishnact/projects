package org.himalay.mpeg.player;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;

import org.himalay.mpeg2.types.AdaptationHeader;
import org.himalay.mpeg2.types.ESInfo;
import org.himalay.mpeg2.types.Mpeg2TSPacket;
import org.himalay.mpeg2.types.MpegPayload;
import org.himalay.mpeg2.types.MpegTableFactory.MpegTable;
import org.himalay.mpeg2.types.PMT;
import org.himalay.mpeg2.types.PMT.section;

public class Program {
	public static final int MASK 	= 0xFF000000;
	public static final int VALUE 	= 0x00000001;
	
	
	InputTransportStream 	inputTs;
	OutputTransportStream 	outputTs;
	public int programNumnber;
	public int pmtCRC;
	PMT        currentPmt;
	int        pcrPid;
	PCRControlledPipe pcrControlledPipe;
	long       lastPCR;
	
	/**
	 * This is a variable used for keeping track of the PAT change
	 */
	public transient long scanId;
	
	/**
	 * Constructor
	 * @param programNumnber
	 * @param ts
	 */
	public Program(int programNumnber, InputTransportStream ts, OutputTransportStream outTs) {
		super();
		this.programNumnber = programNumnber;
		this.inputTs = ts;
		this.outputTs	= outTs;
		// Set up the output pipe
		pcrControlledPipe	= new PCRControlledPipe(this.outputTs.getPacketOutputChannel());
		pcrControlledPipe.start();
	}
	
	
	public static PMT getPMT(Mpeg2TSPacket packet)
	{
		if ( packet.getPayloadExists() > 0 && packet.getPuStartIndicator() > 0)
		{
			byte [] payloadBytes	= packet.payLoad.data.getData();
			DataInputStream dis	= new DataInputStream(new ByteArrayInputStream(payloadBytes));
			MpegPayload payload = new MpegPayload();
			try {
				payload.read(dis);
				MpegTable table	= payload.table;
				if ( table instanceof PMT)
				{
					return (PMT) table;
				}
			} catch (IOException e) {
				e.printStackTrace();
			}
			
		}

		return null;
	}


	public void pmtArrived(DeferredMpeg2TsPacket defferedPacket, PMT pmt) throws InterruptedException {
		if ( pmtCRC != pmt.CRC)
		{
			if ( this.currentPmt != null)
			{ // clear old entries in pid array
				List<ESInfo> esInfoDescritpors	= this.currentPmt.sectionInstance.descriptors;
				for (Iterator<ESInfo> iterator = esInfoDescritpors.iterator(); iterator
						.hasNext();) {
					ESInfo esInfo = (ESInfo) iterator.next();
					inputTs.setPid2Types(esInfo.getElementary_PID(), 0);
					inputTs.setPid2Object(esInfo.getElementary_PID(),null);
				}
				int pcrPid	= currentPmt.sectionInstance.getPCR_PID();
				inputTs.setPid2Types(pcrPid, 0);
				inputTs.setPid2Object(pcrPid,null);

			}
			
			
			this.currentPmt	= pmt;
			// Assign my self into new location in pid array
			List<ESInfo> esInfoDescritpors	= this.currentPmt.sectionInstance.descriptors;
			for (Iterator<ESInfo> iterator = esInfoDescritpors.iterator(); iterator
					.hasNext();) {
				ESInfo esInfo = (ESInfo) iterator.next();
				int pid	= esInfo.getElementary_PID();
				int streamType	= esInfo.stream_type;
				inputTs.setPid2Types (pid, VALUE );//| streamType;
				inputTs.setPid2Object(pid, this);
			}
			int pcrPid	= currentPmt.sectionInstance.getPCR_PID();
			inputTs.setPid2Types(pcrPid, VALUE );//| streamType;
			inputTs.setPid2Object(pcrPid, this);

			pmtCRC	= pmt.CRC;
			this.pcrPid	= pmt.sectionInstance.getPCR_PID();
		}
		pcrControlledPipe.add(defferedPacket, this.lastPCR);
	}


	public static boolean hasAProgram(int pid, DefaultInputOutputTransportStream ts) {
		//if ( (ts.pid2Types[pid] & MASK) ==  VALUE)
		if ( (ts.pid2Types[pid] ) ==  VALUE)
			return true;
		else
			return false;
	}


	public void packetArrived(DeferredMpeg2TsPacket packet) throws IOException, InterruptedException {
		if (this.pcrPid == packet.getPid())
		{
			packet.interpret();
			section aSection = currentPmt.sectionInstance;
			if ( aSection != null )
			{
				int pcrPid	= aSection.getPCR_PID();
				if ( pcrPid == packet.getPid())
				{
			
					if ( packet.packet.getAdaptationFieldExists() > 0)
					{
						AdaptationHeader ah	= packet.packet.AdaptationHeaderStartInstance.adaptationHeader;
						if ( ah.getPcrFlag() > 0)
						{
							lastPCR	= ah.pcrClock.getBase();
							//System.out.print("PCR: " + lastPCR + "("+(long)(lastPCR/0.9) +")");
						}
//						if ( ah.getOpcrFlag() > 0 )
//							//System.out.println(", OPCR: " + ah.getPcrClock().getBase());
//						else
//							//System.out.println("");
					}
				}
			}
		}
		this.pcrControlledPipe.add(packet, lastPCR);
	}
	
}
