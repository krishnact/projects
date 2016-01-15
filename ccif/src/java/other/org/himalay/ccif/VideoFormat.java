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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class VideoFormat extends BinStruct implements PublicBinMsg{




    // members variables
    // horizontalLine
    public int horizontalLine ;
    // verticalline
    public int verticalline ;
    // frameRate
    public short frameRate ;
    // bf1
    public BitField_8 bf1 ;

        public VideoFormat () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize horizontalLine
        
        // Initialize verticalline
        
        // Initialize frameRate
        
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

                     // read horizontalLine
        {horizontalLine=istream.readUnsignedShort(); retVal+=2;}
        // read verticalline
        {verticalline=istream.readUnsignedShort(); retVal+=2;}
        // read frameRate
        {frameRate=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
    
                // write horizontalLine
        ostream.writeShort(horizontalLine); retVal +=2;
        // write verticalline
        ostream.writeShort(verticalline); retVal +=2;
        // write frameRate
        ostream.writeByte(frameRate); retVal +=1;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("VideoFormat\n");
    dc.increaseIndent();
        int retVal= 0;
        // write horizontalLine
        dc.indent();dc.getPs().println("horizontalLine="+horizontalLine+"(0x"+ Integer.toHexString(horizontalLine) + ")" );
        // write verticalline
        dc.indent();dc.getPs().println("verticalline="+verticalline+"(0x"+ Integer.toHexString(verticalline) + ")" );
        // write frameRate
        dc.indent();dc.getPs().println("frameRate="+frameRate+"(0x"+ Integer.toHexString(frameRate) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("aspectRatio: ");dc.getPs().println(BitField_8.toDisplayString(getAspectRatio(),2));dc.indent();dc.getPs().print("progInterType: ");dc.getPs().println(BitField_8.toDisplayString(getProgInterType(),1));dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),5));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for horizontalLine
    //public int getHorizontalLine()
    //{
    //    return horizontalLine ;
    //}

    
    // Setter for horizontalLine
    //public void setHorizontalLine(int val)
    //{
    //    this.horizontalLine= val;
    //}
    // Getter for verticalline
    //public int getVerticalline()
    //{
    //    return verticalline ;
    //}

    
    // Setter for verticalline
    //public void setVerticalline(int val)
    //{
    //    this.verticalline= val;
    //}
    // Getter for frameRate
    //public short getFrameRate()
    //{
    //    return frameRate ;
    //}

    
    // Setter for frameRate
    //public void setFrameRate(short val)
    //{
    //    this.frameRate= val;
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


    public int getAspectRatio( )
    {
        return ( bf1.getValue() & 0x000000c0 ) >> 6 ;
    }
    
    
    public void setAspectRatio(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }
    
    
    public int getProgInterType( )
    {
        return ( bf1.getValue() & 0x00000020 ) >> 5 ;
    }
    
    
    public void setProgInterType(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
    }
    
    
    public int getReserved( )
    {
        return ( bf1.getValue() & 0x0000001f ) >> 0 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code