package org.himalay.mpeg2.types;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.util.HashMap;

public class MpegTSPayloadAccumulator {
	private static HashMap<Integer, PidDataHolder> payloads = new HashMap<Integer, PidDataHolder>();

	public static InputStream getInputStream(Mpeg2TSPacket packet, byte[] pu)
			throws IOException {
		PidDataHolder ph = null;
		int pid = packet.getPid();
		int contCounter = packet.getContCounter();
		if (packet.getPuStartIndicator() == 1) {

			if (payloads.containsKey(pid)) {
				ph = payloads.get(pid);
				ph.os.write(pu);
			} else {
				ph = new PidDataHolder(new ByteArrayOutputStream());
				payloads.put(pid, ph);
				ph.os.write(pu);
			}

			ph.os.write(pu);
			ByteBuffer buffer = ByteBuffer.wrap(pu);
			// First three bytes are packet start code prefix
			int startCodePrefix = (buffer.getInt(0) & 0xFFFFFF00) >> 8;
			int streamId = (buffer.getShort(2) & 0xFF);
			int packetLength = (buffer.getInt(0) & 0x0000FFFF);
			ph.readDataLengh += pu.length;
			ph.expectedLength = packetLength;
			ph.lastContCointer = contCounter;
		} else {

			if (payloads.containsKey(pid)) {
				ph = payloads.get(pid);
				if (contCounter == (ph.lastContCointer + 1)) {
					ph.os.write(pu);
					ph.lastContCointer = contCounter;
					ph.readDataLengh += pu.length;
				} else {// We missed a packet
					payloads.remove(pid);
					return null;
				}

			}
		}

		if ((ph.expectedLength) <= ph.readDataLengh) {
			payloads.remove(pid);
			return new ByteArrayInputStream(ph.os.toByteArray());
		}

		return null;
	}

	static class PidDataHolder {
		ByteArrayOutputStream os;
		int readDataLengh;
		int expectedLength;
		int lastContCointer;
		public PidDataHolder(ByteArrayOutputStream os) {
			super();
			this.os = os;
		}

	}
}
