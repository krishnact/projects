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

public  class CaPmtModeMsg extends BinStruct implements PublicBinMsg{


// member static classes
    public  static  class esfieldCheck extends BinStruct implements PublicBinMsg{




    // members variables
    // caPmtCmdId
    public short caPmtCmdId ;
    // programInfoLength
    public ArrayList<CaDescriptor> programInfoLength ;

        // Parent of this object
CaPmtModeMsg parent;
    public esfieldCheck (CaPmtModeMsg parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public CaPmtModeMsg getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize caPmtCmdId
        
        // Initialize programInfoLength
        programInfoLength= new ArrayList<CaDescriptor>();programInfoLength.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read caPmtCmdId
        {caPmtCmdId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read programInfoLength
        for (; istream.available() > 0 ; ){     CaDescriptor temp;    temp = new CaDescriptor();    retVal += temp.read(istream);    programInfoLength.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for programInfoLength**/  }
    
                // write caPmtCmdId
        ostream.writeByte(caPmtCmdId); retVal +=1;
        // write programInfoLength
        {ArrayList<CaDescriptor> temp1 = programInfoLength;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("esfieldCheck\n");
    dc.increaseIndent();
        int retVal= 0;
        // write caPmtCmdId
        dc.indent();dc.getPs().println("caPmtCmdId="+caPmtCmdId+"(0x"+ Integer.toHexString(caPmtCmdId) + ")" );
        // write programInfoLength
        { ArrayList<CaDescriptor> temp1 = programInfoLength;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for caPmtCmdId
    //public short getCaPmtCmdId()
    //{
    //    return caPmtCmdId ;
    //}

    
    // Setter for caPmtCmdId
    //public void setCaPmtCmdId(short val)
    //{
    //    this.caPmtCmdId= val;
    //}
    // Getter for programInfoLength
    //public ArrayList<CaDescriptor> getProgramInfoLength()
    //{
    //    return programInfoLength ;
    //}

    
    // Setter for programInfoLength
    //public void setProgramInfoLength(ArrayList<CaDescriptor> val)
    //{
    //    this.programInfoLength= val;
    //}


    public int addToProgramInfoLength(CaDescriptor val)
    {
            programInfoLength.add(val); return programInfoLength.size();
    }
    
    
    public int removeFromProgramInfoLength(CaDescriptor val)
    {
            programInfoLength.remove(val); return programInfoLength.size();
    }
    
    
    public int removeNthFromProgramInfoLength(int idx)
    {
            programInfoLength.remove(idx); return programInfoLength.size();
    }
    
    
    public int emptyProgramInfoLength(int idx)
    {
            programInfoLength.clear(); return programInfoLength.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // streamType
    public short streamType ;
    // bf2
    public BitField_16 bf2 ;
    // bf3
    public BitField_16 bf3 ;
    // esfieldCheckInstance
    public esfieldCheck esfieldCheckInstance ;

        public CaPmtModeMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize streamType
        
        // Initialize bf2
        bf2 = new BitField_16();
        // Initialize bf3
        bf3 = new BitField_16();
        // Initialize esfieldCheckInstance
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read streamType
        {streamType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf2
        retVal += bf2.read(istream);
        // read bf3
        retVal += bf3.read(istream);
        // read esfieldCheckInstance
        if(getEsInfoLength()!= 0){ esfieldCheckInstance = new esfieldCheck(this);retVal += esfieldCheckInstance.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        { /** fix dependent sizes for esfieldCheckInstance **/  }
    
                // write streamType
        ostream.writeByte(streamType); retVal +=1;
        // write bf2
        ostream.writeShort(bf2.getValue()); retVal +=2;
        // write bf3
        ostream.writeShort(bf3.getValue()); retVal +=2;
        // write esfieldCheckInstance
        if (esfieldCheckInstance!=null)retVal +=esfieldCheckInstance.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CaPmtModeMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write streamType
        dc.indent();dc.getPs().println("streamType="+streamType+"(0x"+ Integer.toHexString(streamType) + ")" );
        // write bf2
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),5));dc.indent();dc.getPs().print("esInfoLength: ");dc.getPs().println(BitField_8.toDisplayString(getEsInfoLength(),12));}
        // write bf3
        {dc.indent();dc.getPs().print("reserved1: ");dc.getPs().println(BitField_8.toDisplayString(getReserved1(),3));dc.indent();dc.getPs().print("elementryPid: ");dc.getPs().println(BitField_8.toDisplayString(getElementryPid(),13));}
        // write esfieldCheckInstance
        if ( esfieldCheckInstance != null ) {dc.indent();dc.getPs().println("esfieldCheckInstance") ;retVal +=esfieldCheckInstance.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for streamType
    //public short getStreamType()
    //{
    //    return streamType ;
    //}

    
    // Setter for streamType
    //public void setStreamType(short val)
    //{
    //    this.streamType= val;
    //}
    // Getter for bf2
    //public BitField_16 getBf2()
    //{
    //    return bf2 ;
    //}

    
    // Setter for bf2
    //public void setBf2(BitField_16 val)
    //{
    //    this.bf2= val;
    //}
    // Getter for bf3
    //public BitField_16 getBf3()
    //{
    //    return bf3 ;
    //}

    
    // Setter for bf3
    //public void setBf3(BitField_16 val)
    //{
    //    this.bf3= val;
    //}
    // Getter for esfieldCheckInstance
    //public esfieldCheck getEsfieldCheckInstance()
    //{
    //    return esfieldCheckInstance ;
    //}

    
    // Setter for esfieldCheckInstance
    //public void setEsfieldCheckInstance(esfieldCheck val)
    //{
    //    this.esfieldCheckInstance= val;
    //}


    public int getReserved( )
    {
        return ( bf2.getValue() & 0x0000f080 ) >> 7 ;
    }
    
    
    public void setReserved(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
    }
    
    
    public int getEsInfoLength( )
    {
        return ( bf2.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setEsInfoLength(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int getReserved1( )
    {
        return ( bf3.getValue() & 0x0000e000 ) >> 13 ;
    }
    
    
    public void setReserved1(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }
    
    
    public int getElementryPid( )
    {
        return ( bf3.getValue() & 0x00001fff ) >> 0 ;
    }
    
    
    public void setElementryPid(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code