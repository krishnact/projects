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

public  class ProgramReq extends   APDUBaseFactory.APDUBase { //Concrete type is ProgramReq




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // transactionId
    public short transactionId ;
    // transportStreamId
    public int transportStreamId ;
    // program_number
    public int program_number ;
    // sourceId
    public int sourceId ;
    // eventId
    public int eventId ;
    // currentNextIndicator
    public short currentNextIndicator ;
    // bf1
    public BitField_8 bf1 ;
    // descriptors
    public ArrayList<CaDescriptor> descriptors ;

        public ProgramReq () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize transactionId
        
        // Initialize transportStreamId
        
        // Initialize program_number
        
        // Initialize sourceId
        
        // Initialize eventId
        
        // Initialize currentNextIndicator
        
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize descriptors
        descriptors= new ArrayList<CaDescriptor>();descriptors.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transactionId
        {transactionId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transportStreamId
        {transportStreamId=istream.readUnsignedShort(); retVal+=2;}
        // read program_number
        {program_number=istream.readUnsignedShort(); retVal+=2;}
        // read sourceId
        {sourceId=istream.readUnsignedShort(); retVal+=2;}
        // read eventId
        {eventId=istream.readUnsignedShort(); retVal+=2;}
        // read currentNextIndicator
        {currentNextIndicator=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);
        // read descriptors
        for (; istream.available() > 0 ; ){     CaDescriptor temp;    temp = new CaDescriptor();    retVal += temp.read(istream);    descriptors.add(temp);}

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
        // read transactionId
        {transactionId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transportStreamId
        {transportStreamId=istream.readUnsignedShort(); retVal+=2;}
        // read program_number
        {program_number=istream.readUnsignedShort(); retVal+=2;}
        // read sourceId
        {sourceId=istream.readUnsignedShort(); retVal+=2;}
        // read eventId
        {eventId=istream.readUnsignedShort(); retVal+=2;}
        // read currentNextIndicator
        {currentNextIndicator=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);
        // read descriptors
        for (; istream.available() > 0 ; ){     CaDescriptor temp;    temp = new CaDescriptor();    retVal += temp.read(istream);    descriptors.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        
        
        
        
        
        { /** fix dependent sizes for descriptors**/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write transactionId
        ostream.writeByte(transactionId); retVal +=1;
        // write transportStreamId
        ostream.writeShort(transportStreamId); retVal +=2;
        // write program_number
        ostream.writeShort(program_number); retVal +=2;
        // write sourceId
        ostream.writeShort(sourceId); retVal +=2;
        // write eventId
        ostream.writeShort(eventId); retVal +=2;
        // write currentNextIndicator
        ostream.writeByte(currentNextIndicator); retVal +=1;
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write descriptors
        {ArrayList<CaDescriptor> temp1 = descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ProgramReq\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write transactionId
        dc.indent();dc.getPs().println("transactionId="+transactionId+"(0x"+ Integer.toHexString(transactionId) + ")" );
        // write transportStreamId
        dc.indent();dc.getPs().println("transportStreamId="+transportStreamId+"(0x"+ Integer.toHexString(transportStreamId) + ")" );
        // write program_number
        dc.indent();dc.getPs().println("program_number="+program_number+"(0x"+ Integer.toHexString(program_number) + ")" );
        // write sourceId
        dc.indent();dc.getPs().println("sourceId="+sourceId+"(0x"+ Integer.toHexString(sourceId) + ")" );
        // write eventId
        dc.indent();dc.getPs().println("eventId="+eventId+"(0x"+ Integer.toHexString(eventId) + ")" );
        // write currentNextIndicator
        dc.indent();dc.getPs().println("currentNextIndicator="+currentNextIndicator+"(0x"+ Integer.toHexString(currentNextIndicator) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),7));dc.indent();dc.getPs().print("currentNext: ");dc.getPs().println(BitField_8.toDisplayString(getCurrentNext(),1));}
        // write descriptors
        { ArrayList<CaDescriptor> temp1 = descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     CaDescriptor element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
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
    // Getter for transactionId
    //public short getTransactionId()
    //{
    //    return transactionId ;
    //}

    
    // Setter for transactionId
    //public void setTransactionId(short val)
    //{
    //    this.transactionId= val;
    //}
    // Getter for transportStreamId
    //public int getTransportStreamId()
    //{
    //    return transportStreamId ;
    //}

    
    // Setter for transportStreamId
    //public void setTransportStreamId(int val)
    //{
    //    this.transportStreamId= val;
    //}
    // Getter for program_number
    //public int getProgram_number()
    //{
    //    return program_number ;
    //}

    
    // Setter for program_number
    //public void setProgram_number(int val)
    //{
    //    this.program_number= val;
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
    // Getter for eventId
    //public int getEventId()
    //{
    //    return eventId ;
    //}

    
    // Setter for eventId
    //public void setEventId(int val)
    //{
    //    this.eventId= val;
    //}
    // Getter for currentNextIndicator
    //public short getCurrentNextIndicator()
    //{
    //    return currentNextIndicator ;
    //}

    
    // Setter for currentNextIndicator
    //public void setCurrentNextIndicator(short val)
    //{
    //    this.currentNextIndicator= val;
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


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000fe ) >> 1 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff01) | ( (val << 1 ) & 0x000000fe));
    }
    
    
    public int getCurrentNext( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setCurrentNext(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
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