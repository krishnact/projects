/**
 * Copyright (2016) Krishna C Tripathi. All rights reserved.
 * This software is provided "as is" with no explicit or implicit warranties whatsoever.
 * This SW is released under 2-clause BSD license ("Simplified BSD License" or "FreeBSD License") license.
 * Please see https://en.wikipedia.org/wiki/FreeBSD_Documentation_License or make good faith effort to find the
 * referred BSD license text.
 */
package org.himalay.dns;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;

import javax.annotation.PostConstruct;

import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.DumpContext;

import org.himalay.msgs.runtime.*;

@Created(date = "Fri Jan 29 01:21:48 EST 2016")
public class Question_ extends Question { //Concrete type is Question_
	HostParts hp ;
	@Override
	public void postRead() {
		hp = new HostParts();
		try {
			hp.read(new DataInputStream(new ByteArrayInputStream(this.host.getData())));
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	@Override
	public int dump(DumpContext dc) throws IOException {
		return hp.dump(dc);
	}
}


// End of code
