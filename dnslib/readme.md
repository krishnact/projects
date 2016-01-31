BinMsg Tutorial : MDNS
===================


BinMsg lets you define complex binary messages easily and generate Java/C++/C code to read write and dump them quickly. 
In this tutorial we are going to define MDNS protocol and parse it on a windows PC. These messages are sent by Apple devices and if you have any apple devices then you can see them in your network being sent to 224.0.0.251:5353.

A Wirekshark Capture of the data in this [image](https://raw.githubusercontent.com/krishnact/projects/master/dnslib/samples/mdns.png)

First Iteration
----------------
#### <i class="icon-pencil"></i> Defining the structure
A careful look will reveal that the structure looks like this:
Field| Type
-------- | ---
TxnId | 2 bytes
Questions    | 2 bytes
Answers Rrs    | 2 bytes
Authority Rrs   |2 bytes
Additional Rrs|2 bytes
Bunch of bytes | Till the end
If you want to really understand the format refer to [RFC 6762](https://tools.ietf.org/html/rfc6762)

Now lets define this message in BinMsg definition file. This xml content follows the scheme as specified [here](https://raw.githubusercontent.com/krishnact/binmsg/master/msgs.xsd)

    <msgs xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	xsi:noNamespaceSchemaLocation="../src/main/resources/resources/msgs.xsd" 
	packageName="org.himalay.dns">
	<msg type="DNSQuery_v1" package="org.himalay.dns">
		<ui16 name="txnId" />
		<bitField name="flags" size="2">
			<bits mask="1000 0000 0000 0000" name="response"/>
			<bits mask="0111 0000 0000 0000" name="opcode"/>
			<bits mask="0000 0010 0000 0000" name="truncated"/>
			<bits mask="0000 0001 0000 0000" name="recursionDesired"/>
			<bits mask="0000 0000 1000 0000" name="recursionAvilable"/>
			<bits mask="0000 0000 0100 0000" name="reserved"/>
			<bits mask="0000 0000 0010 0000" name="ansAuthenticated"/>
			<bits mask="0000 0000 0001 0000" name="nonAuthData"/>
			<bits mask="0000 0000 0000 1111" name="replyCode"/>
		</bitField>
		<ui16 name="questions"></ui16>
		<ui16 name="answerRrs"></ui16>
		<ui16 name="authorityRrs"></ui16>
		<ui16 name="additionalRrs"></ui16>
		<byteArray name="queriesAndAnswers" length="EOS"/>
	</msg>
    </msgs>

#### <i class="icon-pencil"></i> Compiling and running
Now visit [BinMsg UI](http://binmsgui.appspot.com/ide/ide.html) and paste the above XML content into the input text box and press compile button. After few seconds the Output tab will slide and it will have links for pom.xml and the Java code. Create a folder on machine and then create the file structure exactly as shown in the output tab, starting from your location. If you create a folder **C:\tmp\dnslib** for this tutorial then the pom.xml should be at **C:\tmp\dnslib\pom.xml**.

Now open a command window and assuming that you have got Java and Maven setup with correct path, just type.

    mvn package  exec:java -Dexec.args="dump --input udp://224.0.0.251:5353 --className org.himalay.dns.DNSQuery_v1 --verbose true"

It will start dumping MDNS messages as they arrive.

Second Iteration
----------

Note
-----
This tutorial does not produce a robust library for MDNS messages since it does not handle all the nuances of the protocol. Its supposed to be a getting started guide. It may not able to parse all the messages.
