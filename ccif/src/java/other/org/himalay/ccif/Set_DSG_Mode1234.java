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
@Created(date = "Fri Jan 15 01:33:13 EST 2016")

public  class Set_DSG_Mode1234 extends   APDUBaseFactory.APDUBase { //Concrete type is Set_DSG_Mode1234


// member static classes
    public  static  class StatusfieldCheck extends BinStruct implements PublicBinMsg {




        // members variables
        // macAddress
        public MacAddress macAddress ;
        // remove_header_bytes
        public int remove_header_bytes ;

        // Parent of this object
        Set_DSG_Mode1234 parent;
        public StatusfieldCheck (Set_DSG_Mode1234 parent) // throws Exception
        {
            this.parent= parent;
            init();
        }
        public Set_DSG_Mode1234 getParent()
        {
            return parent;
        }

        private void init()
        {
            // Initialize macAddress
            macAddress = new MacAddress();
            // Initialize remove_header_bytes

        }

        public int readNoHeader(DataInputStream istream) throws IOException
        {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException
        {
            preRead();
            int retVal= 0;

            // read macAddress
            retVal += macAddress.read(istream);
            // read remove_header_bytes
            {
                remove_header_bytes=istream.readUnsignedShort();
                retVal+=2;
            }

            postRead();
            return retVal;
        }


        public int write(DataOutputStream ostream) throws IOException
        {
            preWrite();
            int retVal= 0;

            {   /** fix dependent sizes for macAddress **/
            }


            // write macAddress
            if (macAddress!=null)retVal +=macAddress.write(ostream);
            // write remove_header_bytes
            ostream.writeShort(remove_header_bytes);
            retVal +=2;
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException
        {
            dc.indent();
            dc.getPs().print("StatusfieldCheck\n");
            dc.increaseIndent();
            int retVal= 0;
            // write macAddress
            if ( macAddress != null ) {
                dc.indent();
                dc.getPs().println("macAddress") ;
                retVal +=macAddress.dump(dc);
            }
            // write remove_header_bytes
            dc.indent();
            dc.getPs().println("remove_header_bytes="+remove_header_bytes+"(0x"+ Integer.toHexString(remove_header_bytes) + ")" );
            dc.decreaseIndent();
            return retVal;
        }


        // Getter for macAddress
        //public MacAddress getMacAddress()
        //{
        //    return macAddress ;
        //}


        // Setter for macAddress
        //public void setMacAddress(MacAddress val)
        //{
        //    this.macAddress= val;
        //}
        // Getter for remove_header_bytes
        //public int getRemove_header_bytes()
        //{
        //    return remove_header_bytes ;
        //}


        // Setter for remove_header_bytes
        //public void setRemove_header_bytes(int val)
        //{
        //    this.remove_header_bytes= val;
        //}


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
    // operationalMode
    public short operationalMode ;
    // StatusfieldCheckInstance
    public StatusfieldCheck StatusfieldCheckInstance ;

    public Set_DSG_Mode1234 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize operationalMode

        // Initialize StatusfieldCheckInstance
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read length
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read operationalMode
        {
            operationalMode=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read StatusfieldCheckInstance
        if ((operationalMode == 0x03) ||                (operationalMode ==0x04)) {
            StatusfieldCheckInstance = new StatusfieldCheck(this);
            retVal += StatusfieldCheckInstance.read(istream);
        }

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
        {
            length=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read operationalMode
        {
            operationalMode=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read StatusfieldCheckInstance
        if ((operationalMode == 0x03) ||                (operationalMode ==0x04)) {
            StatusfieldCheckInstance = new StatusfieldCheck(this);
            retVal += StatusfieldCheckInstance.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for header **/
        }


        {   /** fix dependent sizes for StatusfieldCheckInstance **/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write operationalMode
        ostream.writeByte(operationalMode);
        retVal +=1;
        // write StatusfieldCheckInstance
        if (StatusfieldCheckInstance!=null)retVal +=StatusfieldCheckInstance.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("Set_DSG_Mode1234\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write operationalMode
        dc.indent();
        dc.getPs().println("operationalMode="+operationalMode+"(0x"+ Integer.toHexString(operationalMode) + ")" );
        // write StatusfieldCheckInstance
        if ( StatusfieldCheckInstance != null ) {
            dc.indent();
            dc.getPs().println("StatusfieldCheckInstance") ;
            retVal +=StatusfieldCheckInstance.dump(dc);
        }
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
    // Getter for operationalMode
    //public short getOperationalMode()
    //{
    //    return operationalMode ;
    //}


    // Setter for operationalMode
    //public void setOperationalMode(short val)
    //{
    //    this.operationalMode= val;
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