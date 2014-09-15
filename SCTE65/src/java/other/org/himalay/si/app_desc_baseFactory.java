// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si;

import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import org.himalay.msgs.runtime.Factory;
import org.himalay.msgs.runtime.FactoryProduct;
import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.*;

@Created(date = "Sun Sep 14 22:48:37 EDT 2014")
public class app_desc_baseFactory implements Factory {
	public static final int unbound_application_descriptor = 0x67;
	public static final int abstract_service_descriptor = 0x66;
	public static final int privileged_certificate_descriptor = 0x68;
	public static final int application_storage_descriptor = 0x69;
	public static final int application_name_descriptor = 0x01;
	public static final int application_descriptor = 0x00;
	public static final int transport_protocol_descriptor = 0x02;
	public static final int dvbJapp_descriptor = 0x03;
	public static final int dvbJapp_locator_descriptor = 0x04;

	public static boolean isDebug = true;
	public static app_desc_base lastParsedObject = null;
	public static app_desc_base createMsg(DataInputStream istream,
			IntegerHolder iHolder1) throws IOException {
		int iRead = 0;
		descriptor_header desc_header;
		{
			int retVal = 0;
			desc_header = new descriptor_header();
			retVal += desc_header.read(istream);
			iRead = retVal;
		}
		app_desc_base retVal = createMsg(desc_header, istream, iHolder1);
		iHolder1.setValue(iHolder1.getValue() + iRead);
		return retVal;
	}

	public static app_desc_base createMsg(
			org.himalay.si.descriptor_header temp, DataInputStream dis,
			IntegerHolder iHolder) throws IOException {
		int iRead = 0;
		app_desc_base retVal = null;
		try {
			switch (temp.getMessageType()) {
				case 0x67 : {
					retVal = new unbound_application_descriptor();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x66 : {
					retVal = new abstract_service_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x68 : {
					retVal = new privileged_certificate_descriptor();
					retVal.setHeader(temp);
					// has no spread
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x69 : {
					retVal = new application_storage_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x01 : {
					retVal = new application_name_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x00 : {
					retVal = new application_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x02 : {
					retVal = new transport_protocol_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x03 : {
					retVal = new dvbJapp_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				case 0x04 : {
					retVal = new dvbJapp_locator_descriptor();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
				default : {
					retVal = new generic_app_desc();
					retVal.setHeader(temp);
					{
						// int iLength= retVal.getHeader().length + (0);
						// byte[] ba= new byte[iLength];
						// dis.readFully(ba);
						// dis= new DataInputStream(new
						// ByteArrayInputStream(ba));
					}
					iRead += retVal.readNoHeader(dis);
					break;
				}
			}
		} catch (IOException ioex) {
			if (isDebug) {
				lastParsedObject = retVal;
			}
			throw ioex;
		}
		iHolder.setValue(iRead);
		return retVal;
	}

	public static abstract class app_desc_base extends BinMessage
			implements
				FactoryProduct {
		public app_desc_base() {
			super();
			// TODO Auto-generated constructor stub
		}
		public abstract void setHeader(org.himalay.si.descriptor_header header);
		public abstract org.himalay.si.descriptor_header getHeader();

	}
}

// End of code