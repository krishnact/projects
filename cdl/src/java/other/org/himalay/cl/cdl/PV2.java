// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl ;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:39:12 EST 2016")

public  class PV2 extends   PVDataFactory.PVData { //Concrete type is PV2


// member static classes
    public  static  class PV2Object extends BinStruct implements PublicBinMsg {




        // members variables
        // bf1
        public BitField_8 bf1 ;
        // downloadType_0
        public DownloadType_0_or_1 downloadType_0 ;
        // downloadType_1
        public DownloadType_0_or_1 downloadType_1 ;
        // downloadType_2
        public DownloadType_2 downloadType_2 ;
        // object_type
        public int object_type ;
        // object_data
        public ByteArray object_data ;
        // code_file_name
        public ByteArray code_file_name ;

        // Parent of this object
        PV2 parent;
        public PV2Object (PV2 parent) // throws Exception
        {
            this.parent= parent;
            init();
        }
        public PV2 getParent()
        {
            return parent;
        }

        private void init()
        {
            // Initialize bf1
            bf1 = new BitField_8();
            // Initialize downloadType_0
            //Conditional, will be initialized during read
            // Initialize downloadType_1
            //Conditional, will be initialized during read
            // Initialize downloadType_2
            //Conditional, will be initialized during read
            // Initialize object_type

            // Initialize object_data
            object_data= new ByteArray();
            object_data.setSizeType("FIRST_UI8");
            // Initialize code_file_name
            code_file_name= new ByteArray();
            code_file_name.setSizeType("FIRST_UI8");
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
            // read downloadType_0
            if (getDownload_type() == 0) {
                downloadType_0 = new DownloadType_0_or_1();
                retVal += downloadType_0.read(istream);
            }
            // read downloadType_1
            if (getDownload_type() == 0) {
                downloadType_1 = new DownloadType_0_or_1();
                retVal += downloadType_1.read(istream);
            }
            // read downloadType_2
            if (getDownload_type() == 2) {
                downloadType_2 = new DownloadType_2();
                retVal += downloadType_2.read(istream);
            }
            // read object_type
            {
                object_type=istream.readUnsignedShort();
                retVal+=2;
            }
            // read object_data
            {
                retVal+=object_data.read(istream);
            }
            // read code_file_name
            {
                retVal+=code_file_name.read(istream);
            }

            postRead();
            return retVal;
        }


        public int write(DataOutputStream ostream) throws IOException
        {
            preWrite();
            int retVal= 0;


            {   /** fix dependent sizes for downloadType_0 **/
            }
            {   /** fix dependent sizes for downloadType_1 **/
            }
            {   /** fix dependent sizes for downloadType_2 **/
            }

            {   /** fix dependent sizes for object_data**/
            }
            {   /** fix dependent sizes for code_file_name**/
            }

            // write bf1
            ostream.writeByte(bf1.getValue());
            retVal +=1;
            // write downloadType_0
            if (downloadType_0!=null)retVal +=downloadType_0.write(ostream);
            // write downloadType_1
            if (downloadType_1!=null)retVal +=downloadType_1.write(ostream);
            // write downloadType_2
            if (downloadType_2!=null)retVal +=downloadType_2.write(ostream);
            // write object_type
            ostream.writeShort(object_type);
            retVal +=2;
            // write object_data
            {
                retVal += object_data.write(ostream);
            }
            // write code_file_name
            {
                retVal += code_file_name.write(ostream);
            }
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException
        {
            dc.indent();
            dc.getPs().print("PV2Object\n");
            dc.increaseIndent();
            int retVal= 0;
            // write bf1
            {
                dc.indent();
                dc.getPs().print("download_type: ");
                dc.getPs().println(BitField_8.toDisplayString(getDownload_type(),4));
                dc.indent();
                dc.getPs().print("download_command: ");
                dc.getPs().println(BitField_8.toDisplayString(getDownload_command(),4));
            }
            // write downloadType_0
            if ( downloadType_0 != null ) {
                dc.indent();
                dc.getPs().println("downloadType_0") ;
                retVal +=downloadType_0.dump(dc);
            }
            // write downloadType_1
            if ( downloadType_1 != null ) {
                dc.indent();
                dc.getPs().println("downloadType_1") ;
                retVal +=downloadType_1.dump(dc);
            }
            // write downloadType_2
            if ( downloadType_2 != null ) {
                dc.indent();
                dc.getPs().println("downloadType_2") ;
                retVal +=downloadType_2.dump(dc);
            }
            // write object_type
            dc.indent();
            dc.getPs().println("object_type="+object_type+"(0x"+ Integer.toHexString(object_type) + ")" );
            // write object_data
            dc.indent();
            dc.getPs().print("object_data: "+object_data.getSize()+"(0x"+Integer.toHexString(object_data.getSize())+")\n");
            this.object_data.dump(dc);
            // write code_file_name
            dc.indent();
            dc.getPs().print("code_file_name: "+code_file_name.getSize()+"(0x"+Integer.toHexString(code_file_name.getSize())+")\n");
            this.code_file_name.dump(dc);
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
        // Getter for downloadType_0
        //public DownloadType_0_or_1 getDownloadType_0()
        //{
        //    return downloadType_0 ;
        //}


        // Setter for downloadType_0
        //public void setDownloadType_0(DownloadType_0_or_1 val)
        //{
        //    this.downloadType_0= val;
        //}
        // Getter for downloadType_1
        //public DownloadType_0_or_1 getDownloadType_1()
        //{
        //    return downloadType_1 ;
        //}


        // Setter for downloadType_1
        //public void setDownloadType_1(DownloadType_0_or_1 val)
        //{
        //    this.downloadType_1= val;
        //}
        // Getter for downloadType_2
        //public DownloadType_2 getDownloadType_2()
        //{
        //    return downloadType_2 ;
        //}


        // Setter for downloadType_2
        //public void setDownloadType_2(DownloadType_2 val)
        //{
        //    this.downloadType_2= val;
        //}
        // Getter for object_type
        //public int getObject_type()
        //{
        //    return object_type ;
        //}


        // Setter for object_type
        //public void setObject_type(int val)
        //{
        //    this.object_type= val;
        //}
        // Getter for object_data
        //public ByteArray getObject_data()
        //{
        //    return object_data ;
        //}


        // Setter for object_data
        //public void setObject_data(ByteArray val)
        //{
        //    this.object_data= val;
        //}
        // Getter for code_file_name
        //public ByteArray getCode_file_name()
        //{
        //    return code_file_name ;
        //}


        // Setter for code_file_name
        //public void setCode_file_name(ByteArray val)
        //{
        //    this.code_file_name= val;
        //}


        public int getDownload_type( )
        {
            return ( bf1.getValue() & 0x000000f0 ) >> 4 ;
        }


        public void setDownload_type(int val)
        {
            bf1.setValue ( (bf1.getValue() & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
        }


        public int getDownload_command( )
        {
            return ( bf1.getValue() & 0x0000000f ) >> 0 ;
        }


        public void setDownload_command(int val)
        {
            bf1.setValue ( (bf1.getValue() & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
        }


        public void setObject_data(byte[] val)
        {
            this.object_data.setData(val);
        }


        public void setCode_file_name(byte[] val)
        {
            this.code_file_name.setData(val);
        }


        public int getSize() throws IOException
        {
            DataOutputStream dos= new DataOutputStream(new NullStream());
            return this.write(dos);
        }



    }

// End of code


    // members variables
    // number_of_objects
    public short number_of_objects ;
    // pv2Datum
    public ArrayList<PV2Object> pv2Datum ;

    public PV2 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize number_of_objects

        // Initialize pv2Datum
        pv2Datum= new ArrayList<PV2Object>();
        pv2Datum.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read number_of_objects
        {
            number_of_objects=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read pv2Datum
        for (int iIdx=0; iIdx <number_of_objects + (0); iIdx++) {
            PV2Object temp;
            temp = new PV2Object(this);
            retVal += temp.read(istream);
            pv2Datum.add(temp);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for pv2Datum**/ number_of_objects=(short)(pv2Datum.getCount() -(0));
        }

        // write number_of_objects
        ostream.writeByte(number_of_objects);
        retVal +=1;
        // write pv2Datum
        {
            ArrayList<PV2Object> temp1 = pv2Datum;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                PV2Object temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PV2\n");
        dc.increaseIndent();
        int retVal= 0;
        // write number_of_objects
        dc.indent();
        dc.getPs().println("number_of_objects="+number_of_objects+"(0x"+ Integer.toHexString(number_of_objects) + ")" );
        // write pv2Datum
        {
            ArrayList<PV2Object> temp1 = pv2Datum;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                PV2Object element    = temp1.get(iIdx);
                dc.indent();
                dc.getPs().println(iIdx);
                if ( element != null ) {
                    dc.indent();
                    dc.getPs().println("element") ;
                    retVal +=element.dump(dc);
                }
            }
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for number_of_objects
    //public short getNumber_of_objects()
    //{
    //    return number_of_objects ;
    //}


    // Setter for number_of_objects
    //public void setNumber_of_objects(short val)
    //{
    //    this.number_of_objects= val;
    //}
    // Getter for pv2Datum
    //public ArrayList<PV2Object> getPv2Datum()
    //{
    //    return pv2Datum ;
    //}


    // Setter for pv2Datum
    //public void setPv2Datum(ArrayList<PV2Object> val)
    //{
    //    this.pv2Datum= val;
    //}


    public int addToPv2Datum(PV2Object val)
    {
        pv2Datum.add(val);
        return pv2Datum.size();
    }


    public int removeFromPv2Datum(PV2Object val)
    {
        pv2Datum.remove(val);
        return pv2Datum.size();
    }


    public int removeNthFromPv2Datum(int idx)
    {
        pv2Datum.remove(idx);
        return pv2Datum.size();
    }


    public int emptyPv2Datum(int idx)
    {
        pv2Datum.clear();
        return pv2Datum.size();
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code