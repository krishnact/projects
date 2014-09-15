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
@Created(date = "Sun Sep 14 22:48:35 EDT 2014")

public  class DCM_structure_base extends   S_VCT_SubtableFactory.S_VCT_Subtable { //Concrete type is DCM_structure


// member static classes
    public  static  class dcmData extends BinStruct implements PublicBinMsg{




    // members variables
    // bf5
    public BitField_8 bf5 ;

        // Parent of this object
DCM_structure_base parent;
    public dcmData (DCM_structure_base parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public DCM_structure_base getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize bf5
        bf5 = new BitField_8();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read bf5
        retVal += bf5.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write bf5
        ostream.writeByte(bf5.getValue()); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("dcmData\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf5
        {dc.indent();dc.getPs().print("range_defined: ");dc.getPs().println(BitField_8.toDisplayString(getRange_defined(),1));dc.indent();dc.getPs().print("channelsCount: ");dc.getPs().println(BitField_8.toDisplayString(getChannelsCount(),7));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for bf5
    //public BitField_8 getBf5()
    //{
    //    return bf5 ;
    //}

    
    // Setter for bf5
    //public void setBf5(BitField_8 val)
    //{
    //    this.bf5= val;
    //}


    public int getRange_defined( )
    {
        return ( bf5.getValue() & 0x00000080 ) >> 7 ;
    }
    
    
    public void setRange_defined(int val)
    {
        bf5.setValue ( (bf5.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }
    
    
    public int getChannelsCount( )
    {
        return ( bf5.getValue() & 0x0000007f ) >> 0 ;
    }
    
    
    public void setChannelsCount(int val)
    {
        bf5.setValue ( (bf5.getValue() & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // bf1
    public BitField_16 bf1 ;
    // bf2
    public BitField_8 bf2 ;
    // dcmDatum
    public ArrayList<dcmData> dcmDatum ;

        public DCM_structure_base () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_16();
        // Initialize bf2
        bf2 = new BitField_8();
        // Initialize dcmDatum
        dcmDatum= new ArrayList<dcmData>();dcmDatum.setMemberSize(0);
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
        // read bf2
        retVal += bf2.read(istream);
        // read dcmDatum
        { int ilimit= retVal + (getDCM_data_length() + (0)); for (; retVal < ilimit;){     dcmData temp;    temp = new dcmData(this);    retVal += temp.read(istream);    dcmDatum.add(temp);}}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        { /** fix dependent sizes for dcmDatum**/ setDCM_data_length((short)dcmDatum.getSize()); }
    
                // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
        // write bf2
        ostream.writeByte(bf2.getValue()); retVal +=1;
        // write dcmDatum
        {ArrayList<dcmData> temp1 = dcmDatum;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     dcmData temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("DCM_structure_base\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("zero: ");dc.getPs().println(BitField_8.toDisplayString(getZero(),4));dc.indent();dc.getPs().print("first_virtual_channel: ");dc.getPs().println(BitField_8.toDisplayString(getFirst_virtual_channel(),12));}
        // write bf2
        {dc.indent();dc.getPs().print("zero2: ");dc.getPs().println(BitField_8.toDisplayString(getZero2(),1));dc.indent();dc.getPs().print("DCM_data_length: ");dc.getPs().println(BitField_8.toDisplayString(getDCM_data_length(),7));}
        // write dcmDatum
        { ArrayList<dcmData> temp1 = dcmDatum;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     dcmData element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for bf1
    //public BitField_16 getBf1()
    //{
    //    return bf1 ;
    //}

    
    // Setter for bf1
    //public void setBf1(BitField_16 val)
    //{
    //    this.bf1= val;
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
    // Getter for dcmDatum
    //public ArrayList<dcmData> getDcmDatum()
    //{
    //    return dcmDatum ;
    //}

    
    // Setter for dcmDatum
    //public void setDcmDatum(ArrayList<dcmData> val)
    //{
    //    this.dcmDatum= val;
    //}


    public int getZero( )
    {
        return ( bf1.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setZero(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getFirst_virtual_channel( )
    {
        return ( bf1.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setFirst_virtual_channel(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int getZero2( )
    {
        return ( bf2.getValue() & 0x00000080 ) >> 7 ;
    }
    
    
    public void setZero2(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
    }
    
    
    public int getDCM_data_length( )
    {
        return ( bf2.getValue() & 0x0000007f ) >> 0 ;
    }
    
    
    public void setDCM_data_length(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
    }
    
    
    public int addToDcmDatum(dcmData val)
    {
            dcmDatum.add(val); return dcmDatum.size();
    }
    
    
    public int removeFromDcmDatum(dcmData val)
    {
            dcmDatum.remove(val); return dcmDatum.size();
    }
    
    
    public int removeNthFromDcmDatum(int idx)
    {
            dcmDatum.remove(idx); return dcmDatum.size();
    }
    
    
    public int emptyDcmDatum(int idx)
    {
            dcmDatum.clear(); return dcmDatum.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code