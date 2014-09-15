package org.himalay.mpeg.player;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;

import org.himalay.mpeg.jdvbsnoop.Mpeg2TsFilter;
import org.himalay.mpeg2.types.Mpeg2TSPacket;
import org.himalay.mpeg2.types.MpegPayload;
import org.himalay.mpeg2.types.PAT;
import org.himalay.msgs.runtime.DumpContext;

public class PATFilter implements Mpeg2TsFilter
{
	public PAT pat;
	//DumpContext dc;
	public PATFilter() {
		super();
		
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
				}

		}
		
		return packet;
	}
}