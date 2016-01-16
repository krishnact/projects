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