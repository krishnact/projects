package org.himalay.mpeg2.types;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;

import org.himalay.msgs.runtime.BinStruct;
import org.himalay.msgs.runtime.DumpContext;
import org.himalay.msgs.runtime.NullStream;

public class PCRClock extends BinStruct {

	// members variables
	long pcr;

	public PCRClock() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize pcr0_31

		// Initialize pcr32_47

	}

	public int readNoHeader(DataInputStream istream) throws IOException {
		long i1 = istream.readUnsignedShort();
		long i2 = istream.readUnsignedShort();
		long i3 = istream.readUnsignedShort();
		pcr = i1 << 32 | i2 << 16 | i3;
		return 6;
	}

	public int read(DataInputStream istream) throws IOException {
		return readNoHeader(istream);
	}

	public int write(DataOutputStream ostream) throws IOException {
		ostream.writeInt((int) (pcr >> 16));
		ostream.writeShort((int) (pcr >> 32));

		return 6;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.increaseIndent();
		dc.indent();
		dc.getPs().print("PCRClock: ");
		dc.getPs().println(
				"Base: " + Long.toHexString(getBase()) + ", extension: "
						+ Integer.toHexString(getExtension()));
		dc.decreaseIndent();
		return 6;
	}

	public long getBase() {
		return (pcr >> 15);
	}

	public short getExtension() {
		return (short) (pcr & 0x0000000000007FFFL);
	}

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}
