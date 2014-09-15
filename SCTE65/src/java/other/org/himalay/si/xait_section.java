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

public  class xait_section extends   SCTE65TableFactory.SCTE65Table { //Concrete type is xait_section


// member static classes
    public  static  class app_data extends BinStruct implements PublicBinMsg{




    // members variables
    // org_id
    public long org_id ;
    // app_id
    public int app_id ;
    // app_control_code
    public short app_control_code ;
    // bf
    public BitField_16 bf ;
    // app_descriptors
    public ArrayList<app_desc_baseFactory.app_desc_base> app_descriptors ;

        // Parent of this object
xait_section parent;
    public app_data (xait_section parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public xait_section getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize org_id
        
        // Initialize app_id
        
        // Initialize app_control_code
        
        // Initialize bf
        bf = new BitField_16();
        // Initialize app_descriptors
        app_descriptors= new ArrayList<app_desc_baseFactory.app_desc_base>();app_descriptors.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read org_id
        {org_id=(long)(BinPrimitive.readUI32(istream) ); retVal+=4;}
        // read app_id
        {app_id=istream.readUnsignedShort(); retVal+=2;}
        // read app_control_code
        {app_control_code=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf
        retVal += bf.read(istream);
        // read app_descriptors
        { int ilimit= retVal + (getApplication_descriptors_loop_length() + (0)); for (; retVal < ilimit;){     app_desc_baseFactory.app_desc_base temp;    /* Generic classes are abstract, so we can not invoke new*/    {IntegerHolder iHolder= new IntegerHolder();DataInputStream disTemp = istream;temp=app_desc_baseFactory.createMsg(disTemp,iHolder); retVal+= iHolder.getValue();        }    app_descriptors.add(temp);}}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
        
        { /** fix dependent sizes for app_descriptors**/ setApplication_descriptors_loop_length((short)app_descriptors.getSize()); }
    
                // write org_id
        BinPrimitive.writeUI32(ostream,org_id); retVal +=4;
        // write app_id
        ostream.writeShort(app_id); retVal +=2;
        // write app_control_code
        ostream.writeByte(app_control_code); retVal +=1;
        // write bf
        ostream.writeShort(bf.getValue()); retVal +=2;
        // write app_descriptors
        {ArrayList<app_desc_baseFactory.app_desc_base> temp1 = app_descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_desc_baseFactory.app_desc_base temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("app_data\n");
    dc.increaseIndent();
        int retVal= 0;
        // write org_id
        dc.indent();dc.getPs().println("org_id="+org_id+"(0x"+ Long.toHexString(org_id)+")") ;
        // write app_id
        dc.indent();dc.getPs().println("app_id="+app_id+"(0x"+ Integer.toHexString(app_id) + ")" );
        // write app_control_code
        dc.indent();dc.getPs().println("app_control_code="+app_control_code+"(0x"+ Integer.toHexString(app_control_code) + ")" +  " (" + Table_AppControlCode.getMnemonic(app_control_code) +")" );
        // write bf
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),4));dc.indent();dc.getPs().print("application_descriptors_loop_length: ");dc.getPs().println(BitField_8.toDisplayString(getApplication_descriptors_loop_length(),12));}
        // write app_descriptors
        { ArrayList<app_desc_baseFactory.app_desc_base> temp1 = app_descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_desc_baseFactory.app_desc_base element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for org_id
    //public long getOrg_id()
    //{
    //    return org_id ;
    //}

    
    // Setter for org_id
    //public void setOrg_id(long val)
    //{
    //    this.org_id= val;
    //}
    // Getter for app_id
    //public int getApp_id()
    //{
    //    return app_id ;
    //}

    
    // Setter for app_id
    //public void setApp_id(int val)
    //{
    //    this.app_id= val;
    //}
    // Getter for app_control_code
    //public short getApp_control_code()
    //{
    //    return app_control_code ;
    //}

    
    // Setter for app_control_code
    //public void setApp_control_code(short val)
    //{
    //    this.app_control_code= val;
    //}
    // Getter for bf
    //public BitField_16 getBf()
    //{
    //    return bf ;
    //}

    
    // Setter for bf
    //public void setBf(BitField_16 val)
    //{
    //    this.bf= val;
    //}
    // Getter for app_descriptors
    //public ArrayList<app_desc_baseFactory.app_desc_base> getApp_descriptors()
    //{
    //    return app_descriptors ;
    //}

    
    // Setter for app_descriptors
    //public void setApp_descriptors(ArrayList<app_desc_baseFactory.app_desc_base> val)
    //{
    //    this.app_descriptors= val;
    //}


    public int getReserved( )
    {
        return ( bf.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setReserved(int val)
    {
        bf.setValue ( (bf.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getApplication_descriptors_loop_length( )
    {
        return ( bf.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setApplication_descriptors_loop_length(int val)
    {
        bf.setValue ( (bf.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int addToApp_descriptors(app_desc_baseFactory.app_desc_base val)
    {
            app_descriptors.add(val); return app_descriptors.size();
    }
    
    
    public int removeFromApp_descriptors(app_desc_baseFactory.app_desc_base val)
    {
            app_descriptors.remove(val); return app_descriptors.size();
    }
    
    
    public int removeNthFromApp_descriptors(int idx)
    {
            app_descriptors.remove(idx); return app_descriptors.size();
    }
    
    
    public int emptyApp_descriptors(int idx)
    {
            app_descriptors.clear(); return app_descriptors.size();
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
    public BitField_16 bf2 ;
    // bf3
    public BitField_8 bf3 ;
    // section_number
    public short section_number ;
    // last_section_number
    public short last_section_number ;
    // bf4
    public BitField_16 bf4 ;
    // common_descriptors
    public ArrayList<app_desc_baseFactory.app_desc_base> common_descriptors ;
    // bf5
    public BitField_16 bf5 ;
    // appDatum
    public ArrayList<app_data> appDatum ;
    // CRC
    public long CRC ;

        public xait_section () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize tableHeader
        tableHeader = new SCTE65_TableHeader();
        // Initialize bf2
        bf2 = new BitField_16();
        // Initialize bf3
        bf3 = new BitField_8();
        // Initialize section_number
        
        // Initialize last_section_number
        
        // Initialize bf4
        bf4 = new BitField_16();
        // Initialize common_descriptors
        common_descriptors= new ArrayList<app_desc_baseFactory.app_desc_base>();common_descriptors.setMemberSize(0);
        // Initialize bf5
        bf5 = new BitField_16();
        // Initialize appDatum
        appDatum= new ArrayList<app_data>();appDatum.setMemberSize(0);
        // Initialize CRC
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read bf2
        retVal += bf2.read(istream);
        // read bf3
        retVal += bf3.read(istream);
        // read section_number
        {section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read last_section_number
        {last_section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf4
        retVal += bf4.read(istream);
        // read common_descriptors
        { int ilimit= retVal + (getCommon_descriptors_length() + (0)); for (; retVal < ilimit;){     app_desc_baseFactory.app_desc_base temp;    /* Generic classes are abstract, so we can not invoke new*/    {IntegerHolder iHolder= new IntegerHolder();DataInputStream disTemp = istream;temp=app_desc_baseFactory.createMsg(disTemp,iHolder); retVal+= iHolder.getValue();        }    common_descriptors.add(temp);}}
        // read bf5
        retVal += bf5.read(istream);
        // read appDatum
        { int ilimit= retVal + (getApplication_loop_length() + (0)); for (; retVal < ilimit;){     app_data temp;    temp = new app_data(this);    retVal += temp.read(istream);    appDatum.add(temp);}}
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
        // read bf3
        retVal += bf3.read(istream);
        // read section_number
        {section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read last_section_number
        {last_section_number=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf4
        retVal += bf4.read(istream);
        // read common_descriptors
        { int ilimit= retVal + (getCommon_descriptors_length() + (0)); for (; retVal < ilimit;){     app_desc_baseFactory.app_desc_base temp;    /* Generic classes are abstract, so we can not invoke new*/    {IntegerHolder iHolder= new IntegerHolder();DataInputStream disTemp = istream;temp=app_desc_baseFactory.createMsg(disTemp,iHolder); retVal+= iHolder.getValue();        }    common_descriptors.add(temp);}}
        // read bf5
        retVal += bf5.read(istream);
        // read appDatum
        { int ilimit= retVal + (getApplication_loop_length() + (0)); for (; retVal < ilimit;){     app_data temp;    temp = new app_data(this);    retVal += temp.read(istream);    appDatum.add(temp);}}
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
        
        
        
        
        
        { /** fix dependent sizes for common_descriptors**/ setCommon_descriptors_length((short)common_descriptors.getSize()); }
        
        { /** fix dependent sizes for appDatum**/ setApplication_loop_length((short)appDatum.getSize()); }
        
    
                // write tableHeader
        if (tableHeader!=null)retVal +=tableHeader.write(ostream);
        // write bf2
        ostream.writeShort(bf2.getValue()); retVal +=2;
        // write bf3
        ostream.writeByte(bf3.getValue()); retVal +=1;
        // write section_number
        ostream.writeByte(section_number); retVal +=1;
        // write last_section_number
        ostream.writeByte(last_section_number); retVal +=1;
        // write bf4
        ostream.writeShort(bf4.getValue()); retVal +=2;
        // write common_descriptors
        {ArrayList<app_desc_baseFactory.app_desc_base> temp1 = common_descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_desc_baseFactory.app_desc_base temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
        // write bf5
        ostream.writeShort(bf5.getValue()); retVal +=2;
        // write appDatum
        {ArrayList<app_data> temp1 = appDatum;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_data temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
        // write CRC
        BinPrimitive.writeUI32(ostream,CRC); retVal +=4;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("xait_section\n");
    dc.increaseIndent();
        int retVal= 0;
        // write tableHeader
        if ( tableHeader != null ) {dc.indent();dc.getPs().println("tableHeader") ;retVal +=tableHeader.dump(dc);}
        // write bf2
        {dc.indent();dc.getPs().print("test_application_flag: ");dc.getPs().println(BitField_8.toDisplayString(getTest_application_flag(),1));dc.indent();dc.getPs().print("application_type: ");dc.getPs().println(BitField_8.toDisplayString(getApplication_type(),15));}
        // write bf3
        {dc.indent();dc.getPs().print("reserved2: ");dc.getPs().println(BitField_8.toDisplayString(getReserved2(),2));dc.indent();dc.getPs().print("version_number: ");dc.getPs().println(BitField_8.toDisplayString(getVersion_number(),5));dc.indent();dc.getPs().print("current_next_indicator: ");dc.getPs().println(BitField_8.toDisplayString(getCurrent_next_indicator(),1));}
        // write section_number
        dc.indent();dc.getPs().println("section_number="+section_number+"(0x"+ Integer.toHexString(section_number) + ")" );
        // write last_section_number
        dc.indent();dc.getPs().println("last_section_number="+last_section_number+"(0x"+ Integer.toHexString(last_section_number) + ")" );
        // write bf4
        {dc.indent();dc.getPs().print("reserved3: ");dc.getPs().println(BitField_8.toDisplayString(getReserved3(),4));dc.indent();dc.getPs().print("common_descriptors_length: ");dc.getPs().println(BitField_8.toDisplayString(getCommon_descriptors_length(),12));}
        // write common_descriptors
        { ArrayList<app_desc_baseFactory.app_desc_base> temp1 = common_descriptors;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_desc_baseFactory.app_desc_base element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
        // write bf5
        {dc.indent();dc.getPs().print("reserved4: ");dc.getPs().println(BitField_8.toDisplayString(getReserved4(),4));dc.indent();dc.getPs().print("application_loop_length: ");dc.getPs().println(BitField_8.toDisplayString(getApplication_loop_length(),12));}
        // write appDatum
        { ArrayList<app_data> temp1 = appDatum;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     app_data element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
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
    //public BitField_8 getBf3()
    //{
    //    return bf3 ;
    //}

    
    // Setter for bf3
    //public void setBf3(BitField_8 val)
    //{
    //    this.bf3= val;
    //}
    // Getter for section_number
    //public short getSection_number()
    //{
    //    return section_number ;
    //}

    
    // Setter for section_number
    //public void setSection_number(short val)
    //{
    //    this.section_number= val;
    //}
    // Getter for last_section_number
    //public short getLast_section_number()
    //{
    //    return last_section_number ;
    //}

    
    // Setter for last_section_number
    //public void setLast_section_number(short val)
    //{
    //    this.last_section_number= val;
    //}
    // Getter for bf4
    //public BitField_16 getBf4()
    //{
    //    return bf4 ;
    //}

    
    // Setter for bf4
    //public void setBf4(BitField_16 val)
    //{
    //    this.bf4= val;
    //}
    // Getter for common_descriptors
    //public ArrayList<app_desc_baseFactory.app_desc_base> getCommon_descriptors()
    //{
    //    return common_descriptors ;
    //}

    
    // Setter for common_descriptors
    //public void setCommon_descriptors(ArrayList<app_desc_baseFactory.app_desc_base> val)
    //{
    //    this.common_descriptors= val;
    //}
    // Getter for bf5
    //public BitField_16 getBf5()
    //{
    //    return bf5 ;
    //}

    
    // Setter for bf5
    //public void setBf5(BitField_16 val)
    //{
    //    this.bf5= val;
    //}
    // Getter for appDatum
    //public ArrayList<app_data> getAppDatum()
    //{
    //    return appDatum ;
    //}

    
    // Setter for appDatum
    //public void setAppDatum(ArrayList<app_data> val)
    //{
    //    this.appDatum= val;
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


    public int getTest_application_flag( )
    {
        return ( bf2.getValue() & 0x00008000 ) >> 15 ;
    }
    
    
    public void setTest_application_flag(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffff7fff) | ( (val << 15 ) & 0x00008000));
    }
    
    
    public int getApplication_type( )
    {
        return ( bf2.getValue() & 0x00007fff ) >> 0 ;
    }
    
    
    public void setApplication_type(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffff8000) | ( (val << 0 ) & 0x00007fff));
    }
    
    
    public int getReserved2( )
    {
        return ( bf3.getValue() & 0x000000c0 ) >> 6 ;
    }
    
    
    public void setReserved2(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }
    
    
    public int getVersion_number( )
    {
        return ( bf3.getValue() & 0x0000003e ) >> 1 ;
    }
    
    
    public void setVersion_number(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
    }
    
    
    public int getCurrent_next_indicator( )
    {
        return ( bf3.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setCurrent_next_indicator(int val)
    {
        bf3.setValue ( (bf3.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }
    
    
    public int getReserved3( )
    {
        return ( bf4.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setReserved3(int val)
    {
        bf4.setValue ( (bf4.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getCommon_descriptors_length( )
    {
        return ( bf4.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setCommon_descriptors_length(int val)
    {
        bf4.setValue ( (bf4.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int addToCommon_descriptors(app_desc_baseFactory.app_desc_base val)
    {
            common_descriptors.add(val); return common_descriptors.size();
    }
    
    
    public int removeFromCommon_descriptors(app_desc_baseFactory.app_desc_base val)
    {
            common_descriptors.remove(val); return common_descriptors.size();
    }
    
    
    public int removeNthFromCommon_descriptors(int idx)
    {
            common_descriptors.remove(idx); return common_descriptors.size();
    }
    
    
    public int emptyCommon_descriptors(int idx)
    {
            common_descriptors.clear(); return common_descriptors.size();
    }
    
    
    public int getReserved4( )
    {
        return ( bf5.getValue() & 0x0000f000 ) >> 12 ;
    }
    
    
    public void setReserved4(int val)
    {
        bf5.setValue ( (bf5.getValue() & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
    }
    
    
    public int getApplication_loop_length( )
    {
        return ( bf5.getValue() & 0x00000fff ) >> 0 ;
    }
    
    
    public void setApplication_loop_length(int val)
    {
        bf5.setValue ( (bf5.getValue() & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
    }
    
    
    public int addToAppDatum(app_data val)
    {
            appDatum.add(val); return appDatum.size();
    }
    
    
    public int removeFromAppDatum(app_data val)
    {
            appDatum.remove(val); return appDatum.size();
    }
    
    
    public int removeNthFromAppDatum(int idx)
    {
            appDatum.remove(idx); return appDatum.size();
    }
    
    
    public int emptyAppDatum(int idx)
    {
            appDatum.clear(); return appDatum.size();
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