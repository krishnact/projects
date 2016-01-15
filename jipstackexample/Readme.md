# Introduction.
JipStack is an implementation of TCP/IP stack in Java. It accesses the underlying HW using pcap library and does not use host OS implementation of TCP/IP stack. JipStack is known to work on Windows and Linux.

- It supports arbitrary assignment of IP addresses.
- It can support thousands of IP assignments per machine.
- It provides implementation of TCP and UDP protocols for IPv4 and IPv6.
- It has additional features to support very large number of open sockets. It provides data receive handlers such that the a handler can be specified for each socket. Upon receiving data, the handler is called thus there is no need to maintain a thread for each socket read.
- It is geared towards low traffic with large number of open sockets or simulation of large number of IPs. We have tested it with simulating sixty thousand IPs on one machine and sending/receiving 500 packets per second. The number of IPs is limited by available RAM and packets per second is limited by available CPU.

# Including in your project.
Add following sections in your pom file to include the repository.
add a repository:
```
    <repositories>
		<repository>
			<id>himalayanRepo</id>
			<url>https://raw.githubusercontent.com/krishnact/mvnrepo/master/snapshots/</url>
		</repository>
	</repositories>
```
And then add a dependency
```
		<dependency>
			<groupId>org.himalay</groupId>
			<artifactId>jipstack</artifactId>
			<version>0.0.1-SNAPSHOT</version>
		</dependency>
```

# Configuration files
These configuration files are placed in a folder named conf inside applications working folder.
## arp_cache.txt
JipStack does not do ARP requests. Any IP that you need to send packets to, has to have its MAC address in this file. On Windows, use "arp -a" to produce this file. This file can be edited manually to add IP addresses.
```
Interface: 192.168.10.101 --- 0xe
  Internet Address      Physical Address      Type
  192.168.10.1          d8-eb-97-1a-50-59     dynamic
  192.168.10.255        ff-ff-ff-ff-ff-ff     static

Interface: 192.168.126.1 --- 0x31
  Internet Address      Physical Address      Type
  192.168.126.255       ff-ff-ff-ff-ff-ff     static
  224.0.0.2             01-00-5e-00-00-02     static
  192.168.11.234        2c-d0-5a-df-3a-3d     dynamic
  192.168.11.255        ff-ff-ff-ff-ff-ff     static
  
192.168.1.1                    		b8-27-eb-73-2e-bd
fe80::4ee6:76ff:fec4:699e      		4c-e6-76-c4-69-9e
127:0:0:0:0:0:0:1              		00:00:00:00:00:01
fe80:0:0:0:6ef0:49ff:fe0e:b2c3 		6c-f0-49-0e-b2-c3
```
## config.properties
This file has configuration variable for configuring JipStack. Additional configuration values to configure your app can also be added in this file if needed. A Sample is shown below.
```
# MAC address of the Ethernet adapter
MY_LOCAL_ETHERNET_ADDRESS=00-24-D7-7B-2D-B4

# IPv4 Gateway IP
getGW_IPv4=192.168.11.14

# IPv6 Gateway IP
getGW_IPv6=fe80::4ee6:76ff:fec4:699e

#The subnet being sumulated for IPv4. This is used for populating the IPPool.
IPv4_SIMULATED_IPS=192.168.11.32/28

#IPv6 of Host
LOCAL_IPV6=fe80::4ee6:76ff:fec4:dead
#IPv4 of the Host
LOCAL_IPV4=192.168.10.210

#Should an IP be added to ARP Pool when it a socket is bound to it?
AddToArpPoolOnBind=true
```
## log4j.properties

This is a typical log4j properties file. A sample is shown below.
```
log4j.rootLogger=DEBUG, A1
#log4j.rootLogger=DEBUG, FILE

log4j.appender.A1=org.apache.log4j.ConsoleAppender
log4j.appender.A1.layout=org.apache.log4j.PatternLayout
# Print the date in ISO 8601 format
log4j.appender.A1.layout.ConversionPattern=%d [%t] %-5p %c - %m%n

# Define the file appender
log4j.appender.FILE=org.apache.log4j.RollingFileAppender
# Set the name of the file
log4j.appender.FILE.File=./log/myapp.log
log4j.appender.FILE.Append=true

# Set the maximum file size before rollover
log4j.appender.FILE.MaxFileSize=5MB

# Set the the backup index
log4j.appender.FILE.MaxBackupIndex=20

# Define the layout for file appender
log4j.appender.FILE.layout=org.apache.log4j.PatternLayout
log4j.appender.FILE.layout.ConversionPattern=%d [%t] %-5p %c - %m%n
```

# Examples
Each of these examples show creation of 16 clients in app. Each client has its own IP address. In these examples we are pickings IPs that belong the same subnet as the native IP of the host machine so that you do not have add any new routes for testing. If you need to create more IPs (e.g. thousands of IPs), we suggest using a new subnet for them. You will have to set your host IP as the gateway for that subnet and omit from adding into ARP Pool.

You need two separate machines for running these examples. In the examples below, JipStack runs on Windows 7 and the echo server runs on Linux.

## UDP client example
  In this example we create 16 sockets and uses them to send a message. It also receives the replies back and prints them. It can be tested against any UDP echo server program (for example http://www.cs.rpi.edu/~goldsd/docs/spring2014-csci4220/echo-server-udp.c.txt).
```
package org.himalay.jipstack.sample;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Date;

import org.himalay.config.Config;
import org.himalay.jipstack.IPPool;
import org.himalay.jipstack.JipStackHelper;
import org.himalay.net.udp.AbstractDatagramSocketImpl;
import org.himalay.net.util.UDPDataReceiveHandler;


public class UDPClients {
	/**
	 * How many sockets to open?
	 */
	static int sockCount = 16;
	/**
	 * How many times we need to send the messages?
	 */
	static int loopCount = 20000;

	/**
	 * Seriously? We need to document what this method does?
	 * @param args
	 * @throws UnknownHostException
	 */
	public static void main(String args[]) throws UnknownHostException {
		/**
		 * Initialize the stack
		 */
		initStack();
		/**
		 * To store the destination address
		 */
		InetAddress destAddress;
		/**
		 * To store the destination port
		 */
		int destPort;

		/**
		 * Read values from config and create Objects
		 */
		destAddress = InetAddress.getByName(Config.getInstance().getProperty(
				"Sample_DEST_ADDRESS"));
		destPort = Integer.parseInt(Config.getInstance().getProperty(
				"Sample_DEST_PORT"));

		/*
		 * The array to hold datagram sockets
		 */
		DatagramSocket[] sockets = new DatagramSocket[sockCount];
		try {
			// Process in a loop.
			for (int i = 0; i < sockets.length; i++) {
				// Get an IP address from the pool
				InetAddress localAddr = IPPool.defaultIpPool
						.getNextInetAddress(null);
				System.out.println("Using IP " + localAddr.toString());
				// Add the localAddress to ARP pool
				JipStackHelper.addToArpPool(localAddr);
				// Create a data gram socket bound to the localAddr
				sockets[i] = new DatagramSocket(5555, localAddr);
				// Add a receive handler. This receive handler will be called for each packet received. 
				// This is a custom method in JipStack and helps in avoiding to create thread for 
				// each socket and do blocking read. When you have a large number of sockets (say 50000 of them) 
				// to process, creating a thread for each one may not be a good idea :)
				JipStackHelper.setRecieveHandler(sockets[i], new Handler());
				
			}
		} catch (SocketException e) {
			// Lets just print the stack trace and exit
			e.printStackTrace();
			System.exit(-3);
		}

		// Process in loop
		for (int i = 0; i < loopCount; i++) {
			DatagramSocket ds = sockets[i % sockCount];
			// Wait for 10 ms between sending two messages. 
			// There is no need to wait in real life scenario, we are doing it just 
			// to not overload the UDP Server program.
			try {
				Thread.sleep(10);
			} catch (InterruptedException e) {
				// Ignore
			}
			// Compose a message string
			String msg = "Hello at " + new Date() + " from "
					+ ds.getLocalAddress().toString();
			// Create a Datagram packet using the string above
			DatagramPacket dp = new DatagramPacket(msg.getBytes(), msg.length());
			// Set destination details
			dp.setAddress(destAddress);
			dp.setPort(destPort);
			// Now send the packet
			try {
				ds.send(dp);
			} catch (IOException e) {
				e.printStackTrace();
			}
			
			// Occasionally print the progress
			if (i % 100 == 0) {
				System.out.println("Done " + i);
			}
		}

		// Exit happily
		System.out.println("Exiting");
	}

	/**
	 * This method initializes and installs JipStack
	 */
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
		} catch (Exception e) {
			e.printStackTrace();
			// If we could not install the stack then we will not proceed.
			System.exit(-2);
		}
	}

}

/**
 * Implementation for Datagram packet handler.
 * @author krishna
 *
 */
class Handler implements UDPDataReceiveHandler {

	public void received(AbstractDatagramSocketImpl ds,DatagramPacket arg0) {
		System.out.println("Received from " + arg0.getAddress().toString());
	}

}
```

## TCP client example
This example is similar to UDP client example except here we use TCP instead of UDP. It can be tested against a TCP echo server program like https://gist.github.com/silv3rm00n/5821760.
This example is not commented as verbosely as the UDP example since most of the steps are similar.
```
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
```
