package org.himalay.mpeg.tools;

import java.io.IOException;
import java.io.InputStream;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.UnknownHostException;

import org.himalay.mpeg2.types.Mpeg2TSPacket;

public class PrivateDataPacketsCreator {

	InputStream is;
	short       pid;
	byte        contCounter	=0;
	
	/**
	 * Gets next packet
	 * @return
	 */
	public Mpeg2TSPacket getNextPacket() throws IOException
	{
		Mpeg2TSPacket retPacket	= new Mpeg2TSPacket();
		retPacket.setPid(this.pid);
		retPacket.setPayloadExists(0x01);
		retPacket.setAdaptationFieldExists(0x00);
		retPacket.setContCounter(this.contCounter++); contCounter = (byte)(contCounter % 16); 
		return retPacket;
	}


	public PrivateDataPacketsCreator(InputStream is, short pid) {
		super();
		this.is = is;
		this.pid = pid;
	}
	
	
	public static void main(String[] args) {
		InetAddress[] addresses;
		try {
			String host	= "go6.si";
			addresses = Inet4Address.getAllByName(host);
			for (int i = 0; i < addresses.length; i++) {
				System.out.println(addresses[i]);
			}
			addresses = Inet6Address.getAllByName(host);
			for (int i = 0; i < addresses.length; i++) {
				System.out.println(addresses[i]);
			}			
		} catch (UnknownHostException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		

	}
}
