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

public  class code_version_table2_ extends   code_version_tableFactory.code_version_table { //Concrete type is code_version_table2




    // members variables
    // header
    public Header header ;
    // protocol_version
    public short protocol_version ;
    // configuration_count_change
    public short configuration_count_change ;
    // resources
    public Resources resources ;
    // pvData
    public PVDataFactory.PVData pvData ;
    // certificateCount
    public short certificateCount ;
    // cvCertificates
    public ArrayList<CVCertificate> cvCertificates ;

    public code_version_table2_ () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new Header();
        // Initialize protocol_version

        // Initialize configuration_count_change

        // Initialize resources
        resources = new Resources();
        // Initialize pvData
        /* Generic classes are abstract, so we can not invoke new*/
        // Initialize certificateCount

        // Initialize cvCertificates
        cvCertificates= new ArrayList<CVCertificate>();
        cvCertificates.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        preRead();
        int retVal= 0;
        // read protocol_version
        {
            protocol_version=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read configuration_count_change
        {
            configuration_count_change=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read resources
        retVal += resources.read(istream);
        // read pvData
        {
            IntegerHolder iHolder= new IntegerHolder();
            DataInputStream disTemp = istream;
            pvData=PVDataFactory.createMsg(protocol_version,disTemp,iHolder);
            retVal+= iHolder.getValue();
        }
        // read certificateCount
        {
            certificateCount=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read cvCertificates
        for (int iIdx=0; iIdx <certificateCount + (0); iIdx++) {
            CVCertificate temp;
            temp = new CVCertificate();
            retVal += temp.read(istream);
            cvCertificates.add(temp);
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
        // read protocol_version
        {
            protocol_version=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read configuration_count_change
        {
            configuration_count_change=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read resources
        retVal += resources.read(istream);
        // read pvData
        {
            IntegerHolder iHolder= new IntegerHolder();
            DataInputStream disTemp = istream;
            pvData=PVDataFactory.createMsg(protocol_version,disTemp,iHolder);
            retVal+= iHolder.getValue();
        }
        // read certificateCount
        {
            certificateCount=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read cvCertificates
        for (int iIdx=0; iIdx <certificateCount + (0); iIdx++) {
            CVCertificate temp;
            temp = new CVCertificate();
            retVal += temp.read(istream);
            cvCertificates.add(temp);
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


        {   /** fix dependent sizes for resources **/
        }
        {   /** fix dependent sizes for pvData **/
        }

        {   /** fix dependent sizes for cvCertificates**/ certificateCount=(short)(cvCertificates.getCount() -(0));
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write protocol_version
        ostream.writeByte(protocol_version);
        retVal +=1;
        // write configuration_count_change
        ostream.writeByte(configuration_count_change);
        retVal +=1;
        // write resources
        if (resources!=null)retVal +=resources.write(ostream);
        // write pvData
        if (pvData!=null)retVal +=pvData.write(ostream);
        // write certificateCount
        ostream.writeByte(certificateCount);
        retVal +=1;
        // write cvCertificates
        {
            ArrayList<CVCertificate> temp1 = cvCertificates;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CVCertificate temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("code_version_table2_\n");
        dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {
            dc.indent();
            dc.getPs().println("header") ;
            retVal +=header.dump(dc);
        }
        // write protocol_version
        dc.indent();
        dc.getPs().println("protocol_version="+protocol_version+"(0x"+ Integer.toHexString(protocol_version) + ")" );
        // write configuration_count_change
        dc.indent();
        dc.getPs().println("configuration_count_change="+configuration_count_change+"(0x"+ Integer.toHexString(configuration_count_change) + ")" );
        // write resources
        if ( resources != null ) {
            dc.indent();
            dc.getPs().println("resources") ;
            retVal +=resources.dump(dc);
        }
        // write pvData
        if ( pvData != null ) {
            dc.indent();
            dc.getPs().println("pvData") ;
            retVal +=pvData.dump(dc);
        }
        // write certificateCount
        dc.indent();
        dc.getPs().println("certificateCount="+certificateCount+"(0x"+ Integer.toHexString(certificateCount) + ")" );
        // write cvCertificates
        {
            ArrayList<CVCertificate> temp1 = cvCertificates;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                CVCertificate element    = temp1.get(iIdx);
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


    // Getter for header
    //public Header getHeader()
    //{
    //    return header ;
    //}


    // Setter for header
    //public void setHeader(Header val)
    //{
    //    this.header= val;
    //}
    // Getter for protocol_version
    //public short getProtocol_version()
    //{
    //    return protocol_version ;
    //}


    // Setter for protocol_version
    //public void setProtocol_version(short val)
    //{
    //    this.protocol_version= val;
    //}
    // Getter for configuration_count_change
    //public short getConfiguration_count_change()
    //{
    //    return configuration_count_change ;
    //}


    // Setter for configuration_count_change
    //public void setConfiguration_count_change(short val)
    //{
    //    this.configuration_count_change= val;
    //}
    // Getter for resources
    //public Resources getResources()
    //{
    //    return resources ;
    //}


    // Setter for resources
    //public void setResources(Resources val)
    //{
    //    this.resources= val;
    //}
    // Getter for pvData
    //public PVDataFactory.PVData getPvData()
    //{
    //    return pvData ;
    //}


    // Setter for pvData
    //public void setPvData(PVDataFactory.PVData val)
    //{
    //    this.pvData= val;
    //}
    // Getter for certificateCount
    //public short getCertificateCount()
    //{
    //    return certificateCount ;
    //}


    // Setter for certificateCount
    //public void setCertificateCount(short val)
    //{
    //    this.certificateCount= val;
    //}
    // Getter for cvCertificates
    //public ArrayList<CVCertificate> getCvCertificates()
    //{
    //    return cvCertificates ;
    //}


    // Setter for cvCertificates
    //public void setCvCertificates(ArrayList<CVCertificate> val)
    //{
    //    this.cvCertificates= val;
    //}


    public int addToCvCertificates(CVCertificate val)
    {
        cvCertificates.add(val);
        return cvCertificates.size();
    }


    public int removeFromCvCertificates(CVCertificate val)
    {
        cvCertificates.remove(val);
        return cvCertificates.size();
    }


    public int removeNthFromCvCertificates(int idx)
    {
        cvCertificates.remove(idx);
        return cvCertificates.size();
    }


    public int emptyCvCertificates(int idx)
    {
        cvCertificates.clear();
        return cvCertificates.size();
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }


    public void setHeader(Header header)
    {
        this.header= header;
    }

    public Header getHeader()
    {
        return this.header;
    }

}

// End of code