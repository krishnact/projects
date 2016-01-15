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
@Created(date = "Fri Jan 15 01:32:58 EST 2016")

public  class CurrentChannel extends BinStruct implements PublicBinMsg{




    // members variables
    // header
    public APDUHeader header ;
    // currentChannel
    public int currentChannel ;
    // bf1
    public BitField_8 bf1 ;

        public CurrentChannel () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize currentChannel
        
        // Initialize bf1
        bf1 = new BitField_8();
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
        // read currentChannel
        {currentChannel=istream.readUnsignedShort(); retVal+=2;}
        // read bf1
        retVal += bf1.read(istream);

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
        // write currentChannel
        ostream.writeShort(currentChannel); retVal +=2;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CurrentChannel\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write currentChannel
        dc.indent();dc.getPs().println("currentChannel="+currentChannel+"(0x"+ Integer.toHexString(currentChannel) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),2));dc.indent();dc.getPs().print("channelType: ");dc.getPs().println(BitField_8.toDisplayString(getChannelType(),1));dc.indent();dc.getPs().print("authorizationFlag: ");dc.getPs().println(BitField_8.toDisplayString(getAuthorizationFlag(),1));dc.indent();dc.getPs().print("purchasableFlag: ");dc.getPs().println(BitField_8.toDisplayString(getPurchasableFlag(),1));dc.indent();dc.getPs().print("purchasedFlag: ");dc.getPs().println(BitField_8.toDisplayString(getPurchasedFlag(),1));dc.indent();dc.getPs().print("previewFlag: ");dc.getPs().println(BitField_8.toDisplayString(getPreviewFlag(),1));dc.indent();dc.getPs().print("parentalControlFlag: ");dc.getPs().println(BitField_8.toDisplayString(getParentalControlFlag(),1));}
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
    // Getter for currentChannel
    //public int getCurrentChannel()
    //{
    //    return currentChannel ;
    //}

    
    // Setter for currentChannel
    //public void setCurrentChannel(int val)
    //{
    //    this.currentChannel= val;
    //}
    // Getter for bf1
    //public BitField_8 getBf1()
    //{
    //    return bf1 ;
    //}

    
    // Setter for bf1
    //public void setBf1(BitField_8 val)
    //{
    //    this.bf1= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000c0 ) >> 6 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }
    
    
    public int getChannelType( )
    {
        return ( bf1.getValue() & 0x00000020 ) >> 5 ;
    }
    
    
    public void setChannelType(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
    }
    
    
    public int getAuthorizationFlag( )
    {
        return ( bf1.getValue() & 0x00000010 ) >> 4 ;
    }
    
    
    public void setAuthorizationFlag(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffef) | ( (val << 4 ) & 0x00000010));
    }
    
    
    public int getPurchasableFlag( )
    {
        return ( bf1.getValue() & 0x00000008 ) >> 3 ;
    }
    
    
    public void setPurchasableFlag(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
    }
    
    
    public int getPurchasedFlag( )
    {
        return ( bf1.getValue() & 0x00000004 ) >> 2 ;
    }
    
    
    public void setPurchasedFlag(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
    }
    
    
    public int getPreviewFlag( )
    {
        return ( bf1.getValue() & 0x00000002 ) >> 1 ;
    }
    
    
    public void setPreviewFlag(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
    }
    
    
    public int getParentalControlFlag( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setParentalControlFlag(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code