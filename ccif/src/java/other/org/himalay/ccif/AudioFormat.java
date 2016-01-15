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

public  class AudioFormat extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_8 bf1 ;

        public AudioFormat () // throws Exception
    {
            init();
    }
    
    private void init()
    {
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

                     // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("AudioFormat\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("audioSampleSize: ");dc.getPs().println(BitField_8.toDisplayString(getAudioSampleSize(),2));dc.indent();dc.getPs().print("audioFormat: ");dc.getPs().println(BitField_8.toDisplayString(getAudioFormat(),3));dc.indent();dc.getPs().print("audioSamplefreq: ");dc.getPs().println(BitField_8.toDisplayString(getAudioSamplefreq(),3));}
dc.decreaseIndent();
        return retVal;
    }


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


    public int getAudioSampleSize( )
    {
        return ( bf1.getValue() & 0x000000c0 ) >> 6 ;
    }
    
    
    public void setAudioSampleSize(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }
    
    
    public int getAudioFormat( )
    {
        return ( bf1.getValue() & 0x00000038 ) >> 3 ;
    }
    
    
    public void setAudioFormat(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffc7) | ( (val << 3 ) & 0x00000038));
    }
    
    
    public int getAudioSamplefreq( )
    {
        return ( bf1.getValue() & 0x00000007 ) >> 0 ;
    }
    
    
    public void setAudioSamplefreq(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff8) | ( (val << 0 ) & 0x00000007));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code