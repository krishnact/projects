// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.ccif ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:33:07 EST 2016")

public  class RfOutput_channel extends BinStruct implements PublicBinMsg{




    // members variables
    // header
    public APDUHeader header ;
    // outputChannel
    public short outputChannel ;
    // outputChannelUi
    public short outputChannelUi ;

        public RfOutput_channel () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize outputChannel
        
        // Initialize outputChannelUi
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read outputChannel
        {outputChannel=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read outputChannelUi
        {outputChannelUi=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write outputChannel
        ostream.writeByte(outputChannel); retVal +=1;
        // write outputChannelUi
        ostream.writeByte(outputChannelUi); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("RfOutput_channel\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write outputChannel
        dc.indent();dc.getPs().println("outputChannel="+outputChannel+"(0x"+ Integer.toHexString(outputChannel) + ")" );
        // write outputChannelUi
        dc.indent();dc.getPs().println("outputChannelUi="+outputChannelUi+"(0x"+ Integer.toHexString(outputChannelUi) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for header
    //public APDUHeader getHeader()
    //{
    //    return header ;
    //}

    
    // Setter for header
    //public void setHeader(APDUHeader val)
    //{
    //    this.header= val;
    //}
    // Getter for outputChannel
    //public short getOutputChannel()
    //{
    //    return outputChannel ;
    //}

    
    // Setter for outputChannel
    //public void setOutputChannel(short val)
    //{
    //    this.outputChannel= val;
    //}
    // Getter for outputChannelUi
    //public short getOutputChannelUi()
    //{
    //    return outputChannelUi ;
    //}

    
    // Setter for outputChannelUi
    //public void setOutputChannelUi(short val)
    //{
    //    this.outputChannelUi= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code