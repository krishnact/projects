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
@Created(date = "Fri Jan 15 01:32:59 EST 2016")

public  class CpDataCnfdata extends   APDUBase_1Factory.APDUBase_1 { //Concrete type is CpDataCnfdata




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // cpSystemId
    public short cpSystemId ;
    // cadatanbr
    public ArrayList<CpDataReqMsg> cadatanbr ;

        public CpDataCnfdata () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize cpSystemId
        
        // Initialize cadatanbr
        cadatanbr= new ArrayList<CpDataReqMsg>();cadatanbr.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read cpSystemId
        {cpSystemId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read cadatanbr
        for (; istream.available() > 0 ; ){     CpDataReqMsg temp;    temp = new CpDataReqMsg();    retVal += temp.read(istream);    cadatanbr.add(temp);}

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
        // read cpSystemId
        {cpSystemId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read cadatanbr
        for (; istream.available() > 0 ; ){     CpDataReqMsg temp;    temp = new CpDataReqMsg();    retVal += temp.read(istream);    cadatanbr.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        { /** fix dependent sizes for cadatanbr**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write cpSystemId
        ostream.writeByte(cpSystemId); retVal +=1;
        // write cadatanbr
        {ArrayList<CpDataReqMsg> temp1 = cadatanbr;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CpDataReqMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CpDataCnfdata\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write cpSystemId
        dc.indent();dc.getPs().println("cpSystemId="+cpSystemId+"(0x"+ Integer.toHexString(cpSystemId) + ")" );
        // write cadatanbr
        { ArrayList<CpDataReqMsg> temp1 = cadatanbr;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CpDataReqMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
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
    // Getter for cpSystemId
    //public short getCpSystemId()
    //{
    //    return cpSystemId ;
    //}

    
    // Setter for cpSystemId
    //public void setCpSystemId(short val)
    //{
    //    this.cpSystemId= val;
    //}
    // Getter for cadatanbr
    //public ArrayList<CpDataReqMsg> getCadatanbr()
    //{
    //    return cadatanbr ;
    //}

    
    // Setter for cadatanbr
    //public void setCadatanbr(ArrayList<CpDataReqMsg> val)
    //{
    //    this.cadatanbr= val;
    //}


    public int addToCadatanbr(CpDataReqMsg val)
    {
            cadatanbr.add(val); return cadatanbr.size();
    }
    
    
    public int removeFromCadatanbr(CpDataReqMsg val)
    {
            cadatanbr.remove(val); return cadatanbr.size();
    }
    
    
    public int removeNthFromCadatanbr(int idx)
    {
            cadatanbr.remove(idx); return cadatanbr.size();
    }
    
    
    public int emptyCadatanbr(int idx)
    {
            cadatanbr.clear(); return cadatanbr.size();
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