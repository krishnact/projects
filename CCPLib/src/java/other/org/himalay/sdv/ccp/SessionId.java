// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;
import org.himalay.binmsg.util.MacAddress;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SessionId extends BinStruct implements PublicBinMsg {

	// members variables
	// macAddress
	public MacAddress macAddress;
	// tunerId
	public long tunerId;

	public SessionId() // throws Exception
	{
		init();
	}

	private void init() {
		// Initialize macAddress
		macAddress = new MacAddress();
		// Initialize tunerId

	}

	public int readNoHeader(DataInputStream istream) throws IOException {

		return read(istream);
	}

	public int read(DataInputStream istream) throws IOException {
		preRead();
		int retVal = 0;

		// read macAddress
		retVal += macAddress.read(istream);
		// read tunerId
		{
			tunerId = (long) (BinPrimitive.readUI32(istream));
			retVal += 4;
		}

		postRead();
		return retVal;
	}

	public int write(DataOutputStream ostream) throws IOException {
		preWrite();
		int retVal = 0;

		{
			/** fix dependent sizes for macAddress **/
		}

		// write macAddress
		if (macAddress != null)
			retVal += macAddress.write(ostream);
		// write tunerId
		BinPrimitive.writeUI32(ostream, tunerId);
		retVal += 4;
		postWrite();
		return retVal;
	}

	public int dump(DumpContext dc) throws IOException {
		dc.indent();
		dc.getPs().print("SessionId\n");
		dc.increaseIndent();
		int retVal = 0;
		// write macAddress
		if (macAddress != null) {
			dc.indent();
			dc.getPs().println("macAddress");
			retVal += macAddress.dump(dc);
		}
		// write tunerId
		dc.indent();
		dc.getPs().println(
				"tunerId=" + tunerId + "(0x" + Long.toHexString(tunerId) + ")");
		dc.decreaseIndent();
		return retVal;
	}

	// Getter for macAddress
	// public MacAddress getMacAddress()
	// {
	// return macAddress ;
	// }

	// Setter for macAddress
	// public void setMacAddress(MacAddress val)
	// {
	// this.macAddress= val;
	// }
	// Getter for tunerId
	// public long getTunerId()
	// {
	// return tunerId ;
	// }

	// Setter for tunerId
	// public void setTunerId(long val)
	// {
	// this.tunerId= val;
	// }

	public int getSize() throws IOException {
		DataOutputStream dos = new DataOutputStream(new NullStream());
		return this.write(dos);
	}

}

// End of code