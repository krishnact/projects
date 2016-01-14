package org.himalay.jipstack.sample;

import java.io.IOException;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Date;

import org.apache.log4j.net.SocketAppender;
import org.himalay.config.Config;
import org.himalay.jipstack.IPPool;
import org.himalay.jipstack.JipStackHelper;
import org.himalay.net.tcp.TCPSocketImpl;
import org.himalay.net.util.TCPDataRecieveHandler;

public class TCPClients {
	static int loopCount = 2000; 
	static int sockCount = 16;	
	
	static InetAddress destAddress;
	static int destPort;

	public static void main(String args[]) throws UnknownHostException {
		initStack();

		destAddress = InetAddress.getByName(Config.getInstance().getProperty(
				"Sample_DEST_ADDRESS"));
		destPort = Integer.parseInt(Config.getInstance().getProperty(
				"Sample_DEST_PORT"));

		Socket[] sockets = new Socket[sockCount];
		
		try {

			for (int i = 0; i < sockets.length; i++) {
				InetAddress addr = IPPool.defaultIpPool
						.getNextInetAddress(null);
				System.out.println("Using IP " + addr.toString());
				JipStackHelper.addToArpPool(addr);
				Socket ss = new Socket();
				ss.bind(new InetSocketAddress(addr, 0));

				sockets[i] = ss;
				
			}

			for (int i = 0; i < sockets.length; i++) {
				Socket ss= sockets[i]; 
				ss.connect(new InetSocketAddress(destAddress,  4547));
				// Comment the line below to test in blocking mode
				JipStackHelper.setRecieveHandler(sockets[i], new TCPHandler());
			}
		} catch (SocketException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		for (int i = 0; i < loopCount; i++) {
			Socket ds = sockets[i % sockets.length];
			try {
				Thread.sleep(10);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			String msg = "Hello at " + new Date() + " from "
					+ ds.getLocalAddress().toString() + "\n";
			
			try {
				OutputStream os = ds.getOutputStream();
				os.write(msg.getBytes());
				os.flush();
				// Uncomment this section below to test in blocking mode
				/**
				byte[] bb = new byte[1500];
				int iRead = ds.getInputStream().read(bb);
				System.out.println("Got " + new String(bb,0,iRead)); 
				 */

			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			if (i % 100 == 0) {
				System.out.println("Done " + i);
			}
		}

		for (int i = 0; i < sockets.length; i++) {
			try {
				sockets[i].close();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		try {
			Thread.sleep(1000000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	private static void initStack() {

		// Create an instance of the config
		Config cfg = Config.getInstance();

		try {
			// Load the config file
			cfg.load("conf/config.properties");

			// make changes to config if you want.
			// ....

			// Install the stack
			JipStackHelper.installStack(cfg);
			// Time to relax !
			Thread.sleep(2000);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

class TCPHandler implements TCPDataRecieveHandler {
	byte [] buff = new byte[1500];
	public void received(TCPSocketImpl arg0) {
		int iRead= 0;
		try {
			iRead = arg0.getInputStream().read(buff);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Received " + iRead + " bytes from " + arg0.getInetAddress().toString() + " for " + arg0.getLocalAddress().toString()+ ":->"+ new String(buff,0,iRead)+"<-") ;
	}

}