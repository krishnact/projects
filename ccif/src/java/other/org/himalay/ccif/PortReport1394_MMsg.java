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
@Created(date = "Fri Jan 15 01:33:03 EST 2016")

public  class PortReport1394_MMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // eui64
    public Eui64 eui64 ;

        public PortReport1394_MMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize eui64
        eui64 = new Eui64();
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
        // read eui64
        retVal += eui64.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for eui64 **/  }
    
                // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write eui64
        if (eui64!=null)retVal +=eui64.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("PortReport1394_MMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("deviceSubUnitType: ");dc.getPs().println(BitField_8.toDisplayString(getDeviceSubUnitType(),5));dc.indent();dc.getPs().print("DeviceSourceSelectionStatus: ");dc.getPs().println(BitField_8.toDisplayString(getDeviceSourceSelectionStatus(),1));dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),2));}
        // write eui64
        if ( eui64 != null ) {dc.indent();dc.getPs().println("eui64") ;retVal +=eui64.dump(dc);}
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
    // Getter for eui64
    //public Eui64 getEui64()
    //{
    //    return eui64 ;
    //}

    
    // Setter for eui64
    //public void setEui64(Eui64 val)
    //{
    //    this.eui64= val;
    //}


    public int getDeviceSubUnitType( )
    {
        return ( bf1.getValue() & 0x000000f8 ) >> 3 ;
    }
    
    
    public void setDeviceSubUnitType(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff07) | ( (val << 3 ) & 0x000000f8));
    }
    
    
    public int getDeviceSourceSelectionStatus( )
    {
        return ( bf1.getValue() & 0x00000004 ) >> 2 ;
    }
    
    
    public void setDeviceSourceSelectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
    }
    
    
    public int getReserved( )
    {
        return ( bf1.getValue() & 0x00000003 ) >> 0 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code