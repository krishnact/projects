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

public  class CaPmtMMode2_1 extends   APDUBase_1Factory.APDUBase_1 { //Concrete type is CaPmtMMode2_1


// member static classes
    public  static  class StatusfieldCheck extends BinStruct implements PublicBinMsg{




    // members variables
    // prgmInfoLength
    public ArrayList<CaDescriptor> prgmInfoLength ;

        // Parent of this object
CaPmtMMode2_1 parent;
    public StatusfieldCheck (CaPmtMMode2_1 parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public CaPmtMMode2_1 getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize prgmInfoLength
        prgmInfoLength= new ArrayList<CaDescriptor>();prgmInfoLength.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read prgmInfoLength
        for (; istream.available() > 0 ; ){     CaDescriptor temp;    temp = new CaDescriptor();    retVal += temp.read(istream);    prgmInfoLength.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for prgmInfoLength**/  }
    
                // write prgmInfoLength
        {ArrayList<CaDescriptor> temp1 = prgmInfoLength;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("StatusfieldCheck\n");
    dc.increaseIndent();
        int retVal= 0;
        // write prgmInfoLength
        { ArrayList<CaDescriptor> temp1 = prgmInfoLength;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for prgmInfoLength
    //public ArrayList<CaDescriptor> getPrgmInfoLength()
    //{
    //    return prgmInfoLength ;
    //}

    
    // Setter for prgmInfoLength
    //public void setPrgmInfoLength(ArrayList<CaDescriptor> val)
    //{
    //    this.prgmInfoLength= val;
    //}


    public int addToPrgmInfoLength(CaDescriptor val)
    {
            prgmInfoLength.add(val); return prgmInfoLength.size();
    }
    
    
    public int removeFromPrgmInfoLength(CaDescriptor val)
    {
            prgmInfoLength.remove(val); return prgmInfoLength.size();
    }
    
    
    public int removeNthFromPrgmInfoLength(int idx)
    {
            prgmInfoLength.remove(idx); return prgmInfoLength.size();
    }
    
    
    public int emptyPrgmInfoLength(int idx)
    {
            prgmInfoLength.clear(); return prgmInfoLength.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // programIndex
    public short programIndex ;
    // txnId
    public short txnId ;
    // ltsid
    public short ltsid ;
    // programNumber
    public int programNumber ;
    // sourceId
    public int sourceId ;
    // caPmtCmdId
    public short caPmtCmdId ;
    // bf2
    public BitField_16 bf2 ;
    // StatusfieldCheckInstance
    public StatusfieldCheck StatusfieldCheckInstance ;
    // CaEntries
    public ArrayList<CaPmtModeMsg> CaEntries ;

        public CaPmtMMode2_1 () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize programIndex
        
        // Initialize txnId
        
        // Initialize ltsid
        
        // Initialize programNumber
        
        // Initialize sourceId
        
        // Initialize caPmtCmdId
        
        // Initialize bf2
        bf2 = new BitField_16();
        // Initialize StatusfieldCheckInstance
        //Conditional, will be initialized during read
        // Initialize CaEntries
        CaEntries= new ArrayList<CaPmtModeMsg>();CaEntries.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read programIndex
        {programIndex=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read txnId
        {txnId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read ltsid
        {ltsid=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read programNumber
        {programNumber=istream.readUnsignedShort(); retVal+=2;}
        // read sourceId
        {sourceId=istream.readUnsignedShort(); retVal+=2;}
        // read caPmtCmdId
        {caPmtCmdId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf2
        retVal += bf2.read(istream);
        // read StatusfieldCheckInstance
        if(getProgramInfoLength()!= 0){ StatusfieldCheckInstance = new StatusfieldCheck(this);retVal += StatusfieldCheckInstance.read(istream);        }
        // read CaEntries
        for (; istream.available() > 0 ; ){     CaPmtModeMsg temp;    temp = new CaPmtModeMsg();    retVal += temp.read(istream);    CaEntries.add(temp);}

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read header
        retVal += header.read(istream);
        // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read programIndex
        {programIndex=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read txnId
        {txnId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read ltsid
        {ltsid=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read programNumber
        {programNumber=istream.readUnsignedShort(); retVal+=2;}
        // read sourceId
        {sourceId=istream.readUnsignedShort(); retVal+=2;}
        // read caPmtCmdId
        {caPmtCmdId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf2
        retVal += bf2.read(istream);
        // read StatusfieldCheckInstance
        if(getProgramInfoLength()!= 0){ StatusfieldCheckInstance = new StatusfieldCheck(this);retVal += StatusfieldCheckInstance.read(istream);        }
        // read CaEntries
        for (; istream.available() > 0 ; ){     CaPmtModeMsg temp;    temp = new CaPmtModeMsg();    retVal += temp.read(istream);    CaEntries.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        
        
        
        
        
        { /** fix dependent sizes for StatusfieldCheckInstance **/  }
        { /** fix dependent sizes for CaEntries**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write programIndex
        ostream.writeByte(programIndex); retVal +=1;
        // write txnId
        ostream.writeByte(txnId); retVal +=1;
        // write ltsid
        ostream.writeByte(ltsid); retVal +=1;
        // write programNumber
        ostream.writeShort(programNumber); retVal +=2;
        // write sourceId
        ostream.writeShort(sourceId); retVal +=2;
        // write caPmtCmdId
        ostream.writeByte(caPmtCmdId); retVal +=1;
        // write bf2
        ostream.writeShort(bf2.getValue()); retVal +=2;
        // write StatusfieldCheckInstance
        if (StatusfieldCheckInstance!=null)retVal +=StatusfieldCheckInstance.write(ostream);
        // write CaEntries
        {ArrayList<CaPmtModeMsg> temp1 = CaEntries;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaPmtModeMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CaPmtMMode2_1\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write programIndex
        dc.indent();dc.getPs().println("programIndex="+programIndex+"(0x"+ Integer.toHexString(programIndex) + ")" );
        // write txnId
        dc.indent();dc.getPs().println("txnId="+txnId+"(0x"+ Integer.toHexString(txnId) + ")" );
        // write ltsid
        dc.indent();dc.getPs().println("ltsid="+ltsid+"(0x"+ Integer.toHexString(ltsid) + ")" );
        // write programNumber
        dc.indent();dc.getPs().println("programNumber="+programNumber+"(0x"+ Integer.toHexString(programNumber) + ")" );
        // write sourceId
        dc.indent();dc.getPs().println("sourceId="+sourceId+"(0x"+ Integer.toHexString(sourceId) + ")" );
        // write caPmtCmdId
        dc.indent();dc.getPs().println("caPmtCmdId="+caPmtCmdId+"(0x"+ Integer.toHexString(caPmtCmdId) + ")" );
        // write bf2
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),5));dc.indent();dc.getPs().print("programInfoLength: ");dc.getPs().println(BitField_8.toDisplayString(getProgramInfoLength(),12));}
        // write StatusfieldCheckInstance
        if ( StatusfieldCheckInstance != null ) {dc.indent();dc.getPs().println("StatusfieldCheckInstance") ;retVal +=StatusfieldCheckInstance.dump(dc);}
        // write CaEntries
        { ArrayList<CaPmtModeMsg> temp1 = CaEntries;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaPmtModeMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
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
    // Getter for length
    //public short getLength()
    //{
    //    return length ;
    //}

    
    // Setter for length
    //public void setLength(short val)
    //{
    //    this.length= val;
    //}
    // Getter for programIndex
    //public short getProgramIndex()
    //{
    //    return programIndex ;
    //}

    
    // Setter for programIndex
    //public void setProgramIndex(short val)
    //{
    //    this.programIndex= val;
    //}
    // Getter for txnId
    //public short getTxnId()
    //{
    //    return txnId ;
    //}

    
    // Setter for txnId
    //public void setTxnId(short val)
    //{
    //    this.txnId= val;
    //}
    // Getter for ltsid
    //public short getLtsid()
    //{
    //    return ltsid ;
    //}

    
    // Setter for ltsid
    //public void setLtsid(short val)
    //{
    //    this.ltsid= val;
    //}
    // Getter for programNumber
    //public int getProgramNumber()
    //{
    //    return programNumber ;
    //}

    
    // Setter for programNumber
    //public void setProgramNumber(int val)
    //{
    //    this.programNumber= val;
    //}
    // Getter for sourceId
    //public int getSourceId()
    //{
    //    return sourceId ;
    //}

    
    // Setter for sourceId
    //public void setSourceId(int val)
    //{
    //    this.sourceId= val;
    //}
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
    // Getter for StatusfieldCheckInstance
    //public StatusfieldCheck getStatusfieldCheckInstance()
    //{
    //    return StatusfieldCheckInstance ;
    //}

    
    // Setter for StatusfieldCheckInstance
    //public void setStatusfieldCheckInstance(StatusfieldCheck val)
    //{
    //    this.StatusfieldCheckInstance= val;
    //}
    // Getter for CaEntries
    //public ArrayList<CaPmtModeMsg> getCaEntries()
    //{
    //    return CaEntries ;
    //}

    
    // Setter for CaEntries
    //public void setCaEntries(ArrayList<CaPmtModeMsg> val)
    //{
    //    this.CaEntries= val;
    //}


    public int getReserved( )
    {
        return ( bf2.getValue() & 0x0000f080 ) >> 7 ;
    }
    
    
    public void setReserved(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
    }
    
    
    public int getProgramInfoLength( )
    {
        return ( bf2.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setProgramInfoLength(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int addToCaEntries(CaPmtModeMsg val)
    {
            CaEntries.add(val); return CaEntries.size();
    }
    
    
    public int removeFromCaEntries(CaPmtModeMsg val)
    {
            CaEntries.remove(val); return CaEntries.size();
    }
    
    
    public int removeNthFromCaEntries(int idx)
    {
            CaEntries.remove(idx); return CaEntries.size();
    }
    
    
    public int emptyCaEntries(int idx)
    {
            CaEntries.clear(); return CaEntries.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        
     public void setHeader(APDUHeader header)
    {
         this.header= header;   
    }
    
    public APDUHeader getHeader()
    {
        return this.header;
    }

}

// End of code