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
@Created(date = "Fri Jan 15 01:33:12 EST 2016")

public  class NewFlowConfirm1Type1234 extends   APDUBase_2Factory.APDUBase_2 { //Concrete type is NewFlowConfirm1Type1234


// member static classes
    public  static  class StatusfieldCheck extends BinStruct implements PublicBinMsg {


// member static classes
        public  static  class ServiceTypeCheck extends BinStruct implements PublicBinMsg {




            // members variables
            // ip_address
            public long ip_address ;
            // flowType
            public short flowType ;
            // bf1
            public BitField_16 bf1 ;
            // optionByte
            public ByteArray optionByte ;

            // Parent of this object
            StatusfieldCheck parent;
            public ServiceTypeCheck (StatusfieldCheck parent) // throws Exception
            {
                this.parent= parent;
                init();
            }
            public StatusfieldCheck getParent()
            {
                return parent;
            }

            private void init()
            {
                // Initialize ip_address

                // Initialize flowType

                // Initialize bf1
                bf1 = new BitField_16();
                // Initialize optionByte
                optionByte= new ByteArray();
                optionByte.setSizeType("FIRST_UI8");
            }

            public int readNoHeader(DataInputStream istream) throws IOException
            {

                return read(istream);
            }

            public int read(DataInputStream istream) throws IOException
            {
                preRead();
                int retVal= 0;

                // read ip_address
                {
                    ip_address=(long)(BinPrimitive.readUI32(istream) );
                    retVal+=4;
                }
                // read flowType
                {
                    flowType=(short)(istream.readUnsignedByte());
                    retVal+=1;
                }
                // read bf1
                retVal += bf1.read(istream);
                // read optionByte
                {
                    retVal+=optionByte.read(istream);
                }

                postRead();
                return retVal;
            }


            public int write(DataOutputStream ostream) throws IOException
            {
                preWrite();
                int retVal= 0;




                {   /** fix dependent sizes for optionByte**/
                }

                // write ip_address
                BinPrimitive.writeUI32(ostream,ip_address);
                retVal +=4;
                // write flowType
                ostream.writeByte(flowType);
                retVal +=1;
                // write bf1
                ostream.writeShort(bf1.getValue());
                retVal +=2;
                // write optionByte
                {
                    retVal += optionByte.write(ostream);
                }
                postWrite();
                return retVal;
            }

            public int dump(DumpContext dc) throws IOException
            {
                dc.indent();
                dc.getPs().print("ServiceTypeCheck\n");
                dc.increaseIndent();
                int retVal= 0;
                // write ip_address
                dc.indent();
                dc.getPs().println("ip_address="+ip_address+"(0x"+ Long.toHexString(ip_address)+")") ;
                // write flowType
                dc.indent();
                dc.getPs().println("flowType="+flowType+"(0x"+ Integer.toHexString(flowType) + ")" );
                // write bf1
                {
                    dc.indent();
                    dc.getPs().print("flag: ");
                    dc.getPs().println(BitField_8.toDisplayString(getFlag(),3));
                    dc.indent();
                    dc.getPs().print("maxpduSize: ");
                    dc.getPs().println(BitField_8.toDisplayString(getMaxpduSize(),13));
                }
                // write optionByte
                dc.indent();
                dc.getPs().print("optionByte: "+optionByte.getSize()+"(0x"+Integer.toHexString(optionByte.getSize())+")\n");
                this.optionByte.dump(dc);
                dc.decreaseIndent();
                return retVal;
            }


            // Getter for ip_address
            //public long getIp_address()
            //{
            //    return ip_address ;
            //}


            // Setter for ip_address
            //public void setIp_address(long val)
            //{
            //    this.ip_address= val;
            //}
            // Getter for flowType
            //public short getFlowType()
            //{
            //    return flowType ;
            //}


            // Setter for flowType
            //public void setFlowType(short val)
            //{
            //    this.flowType= val;
            //}
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
            // Getter for optionByte
            //public ByteArray getOptionByte()
            //{
            //    return optionByte ;
            //}


            // Setter for optionByte
            //public void setOptionByte(ByteArray val)
            //{
            //    this.optionByte= val;
            //}


            public int getFlag( )
            {
                return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
            }


            public void setFlag(int val)
            {
                bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
            }


            public int getMaxpduSize( )
            {
                return ( bf1.getValue() & 0x00001fff ) >> 0 ;
            }


            public void setMaxpduSize(int val)
            {
                bf1.setValue ( (bf1.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
            }


            public void setOptionByte(byte[] val)
            {
                this.optionByte.setData(val);
            }


            public int getSize() throws IOException
            {
                DataOutputStream dos= new DataOutputStream(new NullStream());
                return this.write(dos);
            }



        }

// End of code


        // members variables
        // flowId
        public int flowId ;
        // serviceType
        public short serviceType ;
        // ServiceTypeCheckInstance
        public ServiceTypeCheck ServiceTypeCheckInstance ;

        // Parent of this object
        NewFlowConfirm1Type1234 parent;
        public StatusfieldCheck (NewFlowConfirm1Type1234 parent) // throws Exception
        {
            this.parent= parent;
            init();
        }
        public NewFlowConfirm1Type1234 getParent()
        {
            return parent;
        }

        private void init()
        {
            // Initialize flowId

            // Initialize serviceType

            // Initialize ServiceTypeCheckInstance
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

            // read flowId
            {
                flowId= BinPrimitive.readUI24(istream);
                retVal += 3;
            }
            // read serviceType
            {
                serviceType=(short)(istream.readUnsignedByte());
                retVal+=1;
            }
            // read ServiceTypeCheckInstance
            if (serviceType==0x01) {
                ServiceTypeCheckInstance = new ServiceTypeCheck(this);
                retVal += ServiceTypeCheckInstance.read(istream);
            }

            postRead();
            return retVal;
        }


        public int write(DataOutputStream ostream) throws IOException
        {
            preWrite();
            int retVal= 0;



            {   /** fix dependent sizes for ServiceTypeCheckInstance **/
            }

            // write flowId
            {
                ostream.writeByte((flowId  & 0x00FF0000)>>16);
                ostream.writeShort((flowId & 0x0000FFFF));
                retVal+=3;
            }
            // write serviceType
            ostream.writeByte(serviceType);
            retVal +=1;
            // write ServiceTypeCheckInstance
            if (ServiceTypeCheckInstance!=null)retVal +=ServiceTypeCheckInstance.write(ostream);
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException
        {
            dc.indent();
            dc.getPs().print("StatusfieldCheck\n");
            dc.increaseIndent();
            int retVal= 0;
            // write flowId
            dc.indent();
            dc.getPs().println("flowId="+flowId+"(0x"+ Integer.toHexString(flowId)+")") ;
            // write serviceType
            dc.indent();
            dc.getPs().println("serviceType="+serviceType+"(0x"+ Integer.toHexString(serviceType) + ")" );
            // write ServiceTypeCheckInstance
            if ( ServiceTypeCheckInstance != null ) {
                dc.indent();
                dc.getPs().println("ServiceTypeCheckInstance") ;
                retVal +=ServiceTypeCheckInstance.dump(dc);
            }
            dc.decreaseIndent();
            return retVal;
        }


        // Getter for flowId
        //public int getFlowId()
        //{
        //    return flowId ;
        //}


        // Setter for flowId
        //public void setFlowId(int val)
        //{
        //    this.flowId= val;
        //}
        // Getter for serviceType
        //public short getServiceType()
        //{
        //    return serviceType ;
        //}


        // Setter for serviceType
        //public void setServiceType(short val)
        //{
        //    this.serviceType= val;
        //}
        // Getter for ServiceTypeCheckInstance
        //public ServiceTypeCheck getServiceTypeCheckInstance()
        //{
        //    return ServiceTypeCheckInstance ;
        //}


        // Setter for ServiceTypeCheckInstance
        //public void setServiceTypeCheckInstance(ServiceTypeCheck val)
        //{
        //    this.ServiceTypeCheckInstance= val;
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
    // statusField
    public short statusField ;
    // flowsRemaining
    public short flowsRemaining ;
    // StatusfieldCheckInstance
    public StatusfieldCheck StatusfieldCheckInstance ;

    public NewFlowConfirm1Type1234 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize statusField

        // Initialize flowsRemaining

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
        // read statusField
        {
            statusField=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowsRemaining
        {
            flowsRemaining=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read StatusfieldCheckInstance
        if (statusField == 0) {
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
        // read statusField
        {
            statusField=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read flowsRemaining
        {
            flowsRemaining=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read StatusfieldCheckInstance
        if (statusField == 0) {
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
        // write statusField
        ostream.writeByte(statusField);
        retVal +=1;
        // write flowsRemaining
        ostream.writeByte(flowsRemaining);
        retVal +=1;
        // write StatusfieldCheckInstance
        if (StatusfieldCheckInstance!=null)retVal +=StatusfieldCheckInstance.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("NewFlowConfirm1Type1234\n");
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
        // write statusField
        dc.indent();
        dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write flowsRemaining
        dc.indent();
        dc.getPs().println("flowsRemaining="+flowsRemaining+"(0x"+ Integer.toHexString(flowsRemaining) + ")" );
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
    // Getter for statusField
    //public short getStatusField()
    //{
    //    return statusField ;
    //}


    // Setter for statusField
    //public void setStatusField(short val)
    //{
    //    this.statusField= val;
    //}
    // Getter for flowsRemaining
    //public short getFlowsRemaining()
    //{
    //    return flowsRemaining ;
    //}


    // Setter for flowsRemaining
    //public void setFlowsRemaining(short val)
    //{
    //    this.flowsRemaining= val;
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