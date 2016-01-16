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
@Created(date = "Fri Jan 15 01:33:10 EST 2016")

public  class FeatureParamters_1_4 extends   APDUBase_1Factory.APDUBase_1 { //Concrete type is FeatureParamters_1_4




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // featureList
    public ArrayList<flist> featureList ;

    public FeatureParamters_1_4 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length

        // Initialize featureList
        featureList= new ArrayList<flist>();
        featureList.setMemberSize(0);
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
        // read featureList
        for (; istream.available() > 0 ; ) {
            flist temp;
            temp = new flist();
            retVal += temp.read(istream);
            featureList.add(temp);
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
        // read featureList
        for (; istream.available() > 0 ; ) {
            flist temp;
            temp = new flist();
            retVal += temp.read(istream);
            featureList.add(temp);
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

        {   /** fix dependent sizes for featureList**/
        }

        // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length);
        retVal +=1;
        // write featureList
        {
            ArrayList<flist> temp1 = featureList;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                flist temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("FeatureParamters_1_4\n");
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
        // write featureList
        {
            ArrayList<flist> temp1 = featureList;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                flist element    = temp1.get(iIdx);
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
    // Getter for featureList
    //public ArrayList<flist> getFeatureList()
    //{
    //    return featureList ;
    //}


    // Setter for featureList
    //public void setFeatureList(ArrayList<flist> val)
    //{
    //    this.featureList= val;
    //}


    public int addToFeatureList(flist val)
    {
        featureList.add(val);
        return featureList.size();
    }


    public int removeFromFeatureList(flist val)
    {
        featureList.remove(val);
        return featureList.size();
    }


    public int removeNthFromFeatureList(int idx)
    {
        featureList.remove(idx);
        return featureList.size();
    }


    public int emptyFeatureList(int idx)
    {
        featureList.clear();
        return featureList.size();
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