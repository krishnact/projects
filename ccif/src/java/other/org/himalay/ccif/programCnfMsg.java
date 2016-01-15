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
@Created(date = "Fri Jan 15 01:32:55 EST 2016")

public  class programCnfMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // purchaseType
    public short purchaseType ;
    // purchasePrice
    public int purchasePrice ;
    // purchaseValidation
    public short purchaseValidation ;
    // expirationdatee
    public long expirationdatee ;
    // ProgramStartTim
    public long ProgramStartTim ;
    // initialFreepreviewDuration
    public int initialFreepreviewDuration ;
    // anyTimeFreepreviewDuration
    public int anyTimeFreepreviewDuration ;
    // data
    public ByteArray data ;
    // data1
    public ByteArray data1 ;
    // descriptors
    public ArrayList<CaDescriptor> descriptors ;

        public programCnfMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize purchaseType
        
        // Initialize purchasePrice
        
        // Initialize purchaseValidation
        
        // Initialize expirationdatee
        
        // Initialize ProgramStartTim
        
        // Initialize initialFreepreviewDuration
        
        // Initialize anyTimeFreepreviewDuration
        
        // Initialize data
        data= new ByteArray();data.setSizeType("FIRST_UI8");
        // Initialize data1
        data1= new ByteArray();data1.setSizeType("FIRST_UI8");
        // Initialize descriptors
        descriptors= new ArrayList<CaDescriptor>();descriptors.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read purchaseType
        {purchaseType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read purchasePrice
        {purchasePrice=istream.readUnsignedShort(); retVal+=2;}
        // read purchaseValidation
        {purchaseValidation=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read expirationdatee
        {expirationdatee=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}
        // read ProgramStartTim
        {ProgramStartTim=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}
        // read initialFreepreviewDuration
        {initialFreepreviewDuration=istream.readUnsignedShort(); retVal+=2;}
        // read anyTimeFreepreviewDuration
        {anyTimeFreepreviewDuration=istream.readUnsignedShort(); retVal+=2;}
        // read data
        {retVal+=data.read(istream); }
        // read data1
        {retVal+=data1.read(istream); }
        // read descriptors
        for (; istream.available() > 0 ; ){     CaDescriptor temp;    temp = new CaDescriptor();    retVal += temp.read(istream);    descriptors.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
        
        
        
        { /** fix dependent sizes for data**/  }
        { /** fix dependent sizes for data1**/  }
        { /** fix dependent sizes for descriptors**/  }
    
                // write purchaseType
        ostream.writeByte(purchaseType); retVal +=1;
        // write purchasePrice
        ostream.writeShort(purchasePrice); retVal +=2;
        // write purchaseValidation
        ostream.writeByte(purchaseValidation); retVal +=1;
        // write expirationdatee
        BinPrimitive.writeUI32(ostream,expirationdatee); retVal +=4;
        // write ProgramStartTim
        BinPrimitive.writeUI32(ostream,ProgramStartTim); retVal +=4;
        // write initialFreepreviewDuration
        ostream.writeShort(initialFreepreviewDuration); retVal +=2;
        // write anyTimeFreepreviewDuration
        ostream.writeShort(anyTimeFreepreviewDuration); retVal +=2;
        // write data
        {retVal += data.write(ostream);}
        // write data1
        {retVal += data1.write(ostream);}
        // write descriptors
        {ArrayList<CaDescriptor> temp1 = descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("programCnfMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write purchaseType
        dc.indent();dc.getPs().println("purchaseType="+purchaseType+"(0x"+ Integer.toHexString(purchaseType) + ")" );
        // write purchasePrice
        dc.indent();dc.getPs().println("purchasePrice="+purchasePrice+"(0x"+ Integer.toHexString(purchasePrice) + ")" );
        // write purchaseValidation
        dc.indent();dc.getPs().println("purchaseValidation="+purchaseValidation+"(0x"+ Integer.toHexString(purchaseValidation) + ")" );
        // write expirationdatee
        dc.indent();dc.getPs().println("expirationdatee="+expirationdatee+"(0x"+ Long.toHexString(expirationdatee)+")") ;
        // write ProgramStartTim
        dc.indent();dc.getPs().println("ProgramStartTim="+ProgramStartTim+"(0x"+ Long.toHexString(ProgramStartTim)+")") ;
        // write initialFreepreviewDuration
        dc.indent();dc.getPs().println("initialFreepreviewDuration="+initialFreepreviewDuration+"(0x"+ Integer.toHexString(initialFreepreviewDuration) + ")" );
        // write anyTimeFreepreviewDuration
        dc.indent();dc.getPs().println("anyTimeFreepreviewDuration="+anyTimeFreepreviewDuration+"(0x"+ Integer.toHexString(anyTimeFreepreviewDuration) + ")" );
        // write data
        dc.indent();dc.getPs().print("data: "+data.getSize()+"(0x"+Integer.toHexString(data.getSize())+")\n");this.data.dump(dc);
        // write data1
        dc.indent();dc.getPs().print("data1: "+data1.getSize()+"(0x"+Integer.toHexString(data1.getSize())+")\n");this.data1.dump(dc);
        // write descriptors
        { ArrayList<CaDescriptor> temp1 = descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for purchaseType
    //public short getPurchaseType()
    //{
    //    return purchaseType ;
    //}

    
    // Setter for purchaseType
    //public void setPurchaseType(short val)
    //{
    //    this.purchaseType= val;
    //}
    // Getter for purchasePrice
    //public int getPurchasePrice()
    //{
    //    return purchasePrice ;
    //}

    
    // Setter for purchasePrice
    //public void setPurchasePrice(int val)
    //{
    //    this.purchasePrice= val;
    //}
    // Getter for purchaseValidation
    //public short getPurchaseValidation()
    //{
    //    return purchaseValidation ;
    //}

    
    // Setter for purchaseValidation
    //public void setPurchaseValidation(short val)
    //{
    //    this.purchaseValidation= val;
    //}
    // Getter for expirationdatee
    //public long getExpirationdatee()
    //{
    //    return expirationdatee ;
    //}

    
    // Setter for expirationdatee
    //public void setExpirationdatee(long val)
    //{
    //    this.expirationdatee= val;
    //}
    // Getter for ProgramStartTim
    //public long getProgramStartTim()
    //{
    //    return ProgramStartTim ;
    //}

    
    // Setter for ProgramStartTim
    //public void setProgramStartTim(long val)
    //{
    //    this.ProgramStartTim= val;
    //}
    // Getter for initialFreepreviewDuration
    //public int getInitialFreepreviewDuration()
    //{
    //    return initialFreepreviewDuration ;
    //}

    
    // Setter for initialFreepreviewDuration
    //public void setInitialFreepreviewDuration(int val)
    //{
    //    this.initialFreepreviewDuration= val;
    //}
    // Getter for anyTimeFreepreviewDuration
    //public int getAnyTimeFreepreviewDuration()
    //{
    //    return anyTimeFreepreviewDuration ;
    //}

    
    // Setter for anyTimeFreepreviewDuration
    //public void setAnyTimeFreepreviewDuration(int val)
    //{
    //    this.anyTimeFreepreviewDuration= val;
    //}
    // Getter for data
    //public ByteArray getData()
    //{
    //    return data ;
    //}

    
    // Setter for data
    //public void setData(ByteArray val)
    //{
    //    this.data= val;
    //}
    // Getter for data1
    //public ByteArray getData1()
    //{
    //    return data1 ;
    //}

    
    // Setter for data1
    //public void setData1(ByteArray val)
    //{
    //    this.data1= val;
    //}
    // Getter for descriptors
    //public ArrayList<CaDescriptor> getDescriptors()
    //{
    //    return descriptors ;
    //}

    
    // Setter for descriptors
    //public void setDescriptors(ArrayList<CaDescriptor> val)
    //{
    //    this.descriptors= val;
    //}


    public void setData(byte[] val)
    {
        this.data.setData(val);
    }
    
    
    public void setData1(byte[] val)
    {
        this.data1.setData(val);
    }
    
    
    public int addToDescriptors(CaDescriptor val)
    {
            descriptors.add(val); return descriptors.size();
    }
    
    
    public int removeFromDescriptors(CaDescriptor val)
    {
            descriptors.remove(val); return descriptors.size();
    }
    
    
    public int removeNthFromDescriptors(int idx)
    {
            descriptors.remove(idx); return descriptors.size();
    }
    
    
    public int emptyDescriptors(int idx)
    {
            descriptors.clear(); return descriptors.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code