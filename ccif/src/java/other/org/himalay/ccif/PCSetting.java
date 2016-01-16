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
@Created(date = "Fri Jan 15 01:33:08 EST 2016")

public  class PCSetting extends BinStruct implements PublicBinMsg {




    // members variables
    // PC_factoryReset
    public short PC_factoryReset ;
    // featureList
    public ArrayList<pcsMsg> featureList ;

    public PCSetting () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize PC_factoryReset

        // Initialize featureList
        featureList= new ArrayList<pcsMsg>();
        featureList.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read PC_factoryReset
        {
            PC_factoryReset=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read featureList
        for (; istream.available() > 0 ; ) {
            pcsMsg temp;
            temp = new pcsMsg();
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


        {   /** fix dependent sizes for featureList**/
        }

        // write PC_factoryReset
        ostream.writeByte(PC_factoryReset);
        retVal +=1;
        // write featureList
        {
            ArrayList<pcsMsg> temp1 = featureList;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                pcsMsg temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("PCSetting\n");
        dc.increaseIndent();
        int retVal= 0;
        // write PC_factoryReset
        dc.indent();
        dc.getPs().println("PC_factoryReset="+PC_factoryReset+"(0x"+ Integer.toHexString(PC_factoryReset) + ")" );
        // write featureList
        {
            ArrayList<pcsMsg> temp1 = featureList;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                pcsMsg element    = temp1.get(iIdx);
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


    // Getter for PC_factoryReset
    //public short getPC_factoryReset()
    //{
    //    return PC_factoryReset ;
    //}


    // Setter for PC_factoryReset
    //public void setPC_factoryReset(short val)
    //{
    //    this.PC_factoryReset= val;
    //}
    // Getter for featureList
    //public ArrayList<pcsMsg> getFeatureList()
    //{
    //    return featureList ;
    //}


    // Setter for featureList
    //public void setFeatureList(ArrayList<pcsMsg> val)
    //{
    //    this.featureList= val;
    //}


    public int addToFeatureList(pcsMsg val)
    {
        featureList.add(val);
        return featureList.size();
    }


    public int removeFromFeatureList(pcsMsg val)
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



}

// End of code