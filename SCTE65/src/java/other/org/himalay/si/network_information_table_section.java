// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:36 EDT 2014")

public  class network_information_table_section extends   SCTE65TableFactory.SCTE65Table { //Concrete type is network_information_table_section


// member static classes
    public  static  class subtable extends BinStruct implements PublicBinMsg{


// member static classes
    public  static  class Record extends BinStruct implements PublicBinMsg{




    // members variables
    // cdsRecord
    public CDS_Record cdsRecord ;
    // mmsRecord
    public MMS_Record mmsRecord ;
    // descriptors
    public DescriptorCollection descriptors ;

        // Parent of this object
subtable parent;
    public Record (subtable parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public subtable getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize cdsRecord
        //Conditional, will be initialized during read
        // Initialize mmsRecord
        //Conditional, will be initialized during read
        // Initialize descriptors
        descriptors = new DescriptorCollection();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read cdsRecord
        if ( parent.getTable_subtype()==1){ cdsRecord = new CDS_Record();retVal += cdsRecord.read(istream);        }
        // read mmsRecord
        if ( parent.getTable_subtype()==2){ mmsRecord = new MMS_Record();retVal += mmsRecord.read(istream);        }
        // read descriptors
        retVal += descriptors.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for cdsRecord **/  }
        { /** fix dependent sizes for mmsRecord **/  }
        { /** fix dependent sizes for descriptors **/  }
    
                // write cdsRecord
        if (cdsRecord!=null)retVal +=cdsRecord.write(ostream);
        // write mmsRecord
        if (mmsRecord!=null)retVal +=mmsRecord.write(ostream);
        // write descriptors
        if (descriptors!=null)retVal +=descriptors.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("Record\n");
    dc.increaseIndent();
        int retVal= 0;
        // write cdsRecord
        if ( cdsRecord != null ) {dc.indent();dc.getPs().println("cdsRecord") ;retVal +=cdsRecord.dump(dc);}
        // write mmsRecord
        if ( mmsRecord != null ) {dc.indent();dc.getPs().println("mmsRecord") ;retVal +=mmsRecord.dump(dc);}
        // write descriptors
        if ( descriptors != null ) {dc.indent();dc.getPs().println("descriptors") ;retVal +=descriptors.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for cdsRecord
    //public CDS_Record getCdsRecord()
    //{
    //    return cdsRecord ;
    //}

    
    // Setter for cdsRecord
    //public void setCdsRecord(CDS_Record val)
    //{
    //    this.cdsRecord= val;
    //}
    // Getter for mmsRecord
    //public MMS_Record getMmsRecord()
    //{
    //    return mmsRecord ;
    //}

    
    // Setter for mmsRecord
    //public void setMmsRecord(MMS_Record val)
    //{
    //    this.mmsRecord= val;
    //}
    // Getter for descriptors
    //public DescriptorCollection getDescriptors()
    //{
    //    return descriptors ;
    //}

    
    // Setter for descriptors
    //public void setDescriptors(DescriptorCollection val)
    //{
    //    this.descriptors= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // firstIndex
    public short firstIndex ;
    // numberOfRecords
    public short numberOfRecords ;
    // bf3
    public BitField_8 bf3 ;
    // records
    public ArrayList<Record> records ;
    // descriptor
    public Descriptors descriptor ;

        // Parent of this object
network_information_table_section parent;
    public subtable (network_information_table_section parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public network_information_table_section getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize firstIndex
        
        // Initialize numberOfRecords
        
        // Initialize bf3
        bf3 = new BitField_8();
        // Initialize records
        records= new ArrayList<Record>();records.setMemberSize(0);
        // Initialize descriptor
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

                     // read firstIndex
        {firstIndex=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read numberOfRecords
        {numberOfRecords=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf3
        retVal += bf3.read(istream);
        // read records
        for (int iIdx=0; iIdx <numberOfRecords + (0); iIdx++){     Record temp;    temp = new Record(this);    retVal += temp.read(istream);    records.add(temp);}
        // read descriptor
        if ( (parent.tableHeader.getSection_length() - (retVal- 2) -4)  > 0 ){ descriptor = new Descriptors();retVal += descriptor.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        { /** fix dependent sizes for records**/ numberOfRecords=((short)records.getCount()); }
        { /** fix dependent sizes for descriptor **/  }
    
                // write firstIndex
        ostream.writeByte(firstIndex); retVal +=1;
        // write numberOfRecords
        ostream.writeByte(numberOfRecords); retVal +=1;
        // write bf3
        ostream.writeByte(bf3.getValue()); retVal +=1;
        // write records
        {ArrayList<Record> temp1 = records;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     Record temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
        // write descriptor
        if (descriptor!=null)retVal +=descriptor.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("subtable\n");
    dc.increaseIndent();
        int retVal= 0;
        // write firstIndex
        dc.indent();dc.getPs().println("firstIndex="+firstIndex+"(0x"+ Integer.toHexString(firstIndex) + ")" );
        // write numberOfRecords
        dc.indent();dc.getPs().println("numberOfRecords="+numberOfRecords+"(0x"+ Integer.toHexString(numberOfRecords) + ")" );
        // write bf3
        {dc.indent();dc.getPs().print("transmission_medium: ");dc.getPs().println(BitField_8.toDisplayString(getTransmission_medium(),4));dc.indent();dc.getPs().print("table_subtype: ");dc.getPs().println(BitField_8.toDisplayString(getTable_subtype(),4));}
        // write records
        { ArrayList<Record> temp1 = records;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     Record element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
        // write descriptor
        if ( descriptor != null ) {dc.indent();dc.getPs().println("descriptor") ;retVal +=descriptor.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for firstIndex
    //public short getFirstIndex()
    //{
    //    return firstIndex ;
    //}

    
    // Setter for firstIndex
    //public void setFirstIndex(short val)
    //{
    //    this.firstIndex= val;
    //}
    // Getter for numberOfRecords
    //public short getNumberOfRecords()
    //{
    //    return numberOfRecords ;
    //}

    
    // Setter for numberOfRecords
    //public void setNumberOfRecords(short val)
    //{
    //    this.numberOfRecords= val;
    //}
    // Getter for bf3
    //public BitField_8 getBf3()
    //{
    //    return bf3 ;
    //}

    
    // Setter for bf3
    //public void setBf3(BitField_8 val)
    //{
    //    this.bf3= val;
    //}
    // Getter for records
    //public ArrayList<Record> getRecords()
    //{
    //    return records ;
    //}

    
    // Setter for records
    //public void setRecords(ArrayList<Record> val)
    //{
    //    this.records= val;
    //}
    // Getter for descriptor
    //public Descriptors getDescriptor()
    //{
    //    return descriptor ;
    //}

    
    // Setter for descriptor
    //public void setDescriptor(Descriptors val)
    //{
    //    this.descriptor= val;
    //}


    public int getTransmission_medium( )
    {
        return ( bf3.getValue() & 0x000000f0 ) >> 4 ;
    }
    
    
    public void setTransmission_medium(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
    }
    
    
    public int getTable_subtype( )
    {
        return ( bf3.getValue() & 0x0000000f ) >> 0 ;
    }
    
    
    public void setTable_subtype(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
    }
    
    
    public int addToRecords(Record val)
    {
            records.add(val); return records.size();
    }
    
    
    public int removeFromRecords(Record val)
    {
            records.remove(val); return records.size();
    }
    
    
    public int removeNthFromRecords(int idx)
    {
            records.remove(idx); return records.size();
    }
    
    
    public int emptyRecords(int idx)
    {
            records.clear(); return records.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // tableHeader
    public SCTE65_TableHeader tableHeader ;
    // bf2
    public BitField_8 bf2 ;
    // subtableInstance
    public subtable subtableInstance ;
    // CRC
    public long CRC ;

        public network_information_table_section () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize tableHeader
        tableHeader = new SCTE65_TableHeader();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize subtableInstance
        subtableInstance = new subtable(this);
        // Initialize CRC
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read bf2
        retVal += bf2.read(istream);
        // read subtableInstance
            {        int iCount    = tableHeader.getSection_length()+(-5);        byte[] ba        = new byte[iCount];istream.readFully(ba);ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);        retVal+= subtableInstance.read(new DataInputStream(baTemp));}
        // read CRC
        {CRC=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

postRead();
        return retVal;
        }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read tableHeader
        retVal += tableHeader.read(istream);
        // read bf2
        retVal += bf2.read(istream);
        // read subtableInstance
            {        int iCount    = tableHeader.getSection_length()+(-5);        byte[] ba        = new byte[iCount];istream.readFully(ba);ByteArrayInputStream baTemp= new ByteArrayInputStream(ba);        retVal+= subtableInstance.read(new DataInputStream(baTemp));}
        // read CRC
        {CRC=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for tableHeader **/  }
        
        { /** fix dependent sizes for subtableInstance **/ if (subtableInstance != null )tableHeader.setSection_length((short)subtableInstance.getSize()); }
        
    
                // write tableHeader
        if (tableHeader!=null)retVal +=tableHeader.write(ostream);
        // write bf2
        ostream.writeByte(bf2.getValue()); retVal +=1;
        // write subtableInstance
        if (subtableInstance!=null)retVal +=subtableInstance.write(ostream);
        // write CRC
        BinPrimitive.writeUI32(ostream,CRC); retVal +=4;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("network_information_table_section\n");
    dc.increaseIndent();
        int retVal= 0;
        // write tableHeader
        if ( tableHeader != null ) {dc.indent();dc.getPs().println("tableHeader") ;retVal +=tableHeader.dump(dc);}
        // write bf2
        {dc.indent();dc.getPs().print("zeroVersion: ");dc.getPs().println(BitField_8.toDisplayString(getZeroVersion(),3));dc.indent();dc.getPs().print("protocol_version: ");dc.getPs().println(BitField_8.toDisplayString(getProtocol_version(),5));}
        // write subtableInstance
        if ( subtableInstance != null ) {dc.indent();dc.getPs().println("subtableInstance") ;retVal +=subtableInstance.dump(dc);}
        // write CRC
        dc.indent();dc.getPs().println("CRC="+CRC+"(0x"+ Long.toHexString(CRC)+")") ;
dc.decreaseIndent();
        return retVal;
    }


        // Getter for tableHeader
    //public SCTE65_TableHeader getTableHeader()
    //{
    //    return tableHeader ;
    //}

    
    // Setter for tableHeader
    //public void setTableHeader(SCTE65_TableHeader val)
    //{
    //    this.tableHeader= val;
    //}
    // Getter for bf2
    //public BitField_8 getBf2()
    //{
    //    return bf2 ;
    //}

    
    // Setter for bf2
    //public void setBf2(BitField_8 val)
    //{
    //    this.bf2= val;
    //}
    // Getter for subtableInstance
    //public subtable getSubtableInstance()
    //{
    //    return subtableInstance ;
    //}

    
    // Setter for subtableInstance
    //public void setSubtableInstance(subtable val)
    //{
    //    this.subtableInstance= val;
    //}
    // Getter for CRC
    //public long getCRC()
    //{
    //    return CRC ;
    //}

    
    // Setter for CRC
    //public void setCRC(long val)
    //{
    //    this.CRC= val;
    //}


    public int getZeroVersion( )
    {
        return ( bf2.getValue() & 0x000000e0 ) >> 5 ;
    }
    
    
    public void setZeroVersion(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
    }
    
    
    public int getProtocol_version( )
    {
        return ( bf2.getValue() & 0x0000001f ) >> 0 ;
    }
    
    
    public void setProtocol_version(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        
     public void setHeader(SCTE65_TableHeader header)
    {
         this.tableHeader= header;   
    }
    
    public SCTE65_TableHeader getHeader()
    {
        return this.tableHeader;
    }

}

// End of code