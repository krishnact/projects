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

public  class PV1 extends   PVDataFactory.PVData { //Concrete type is PV1




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // downloadType_0
    public DownloadType_0_or_1 downloadType_0 ;
    // downloadType_1
    public DownloadType_0_or_1 downloadType_1 ;
    // downloadType_2
    public DownloadType_2 downloadType_2 ;
    // code_file_name
    public ByteArray code_file_name ;

    public PV1 () // throws Exception
    {
        init();
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
        if (getDownload_type() == 1) {
            downloadType_1 = new DownloadType_0_or_1();
            retVal += downloadType_1.read(istream);
        }
        // read downloadType_2
        if (getDownload_type() == 2) {
            downloadType_2 = new DownloadType_2();
            retVal += downloadType_2.read(istream);
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
        dc.getPs().print("PV1\n");
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