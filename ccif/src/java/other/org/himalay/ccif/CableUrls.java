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
@Created(date = "Fri Jan 15 01:33:05 EST 2016")

public  class CableUrls extends BinStruct implements PublicBinMsg{




    // members variables
    // CaEntries
    public ArrayList<cblurlmsg> CaEntries ;

        public CableUrls () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize CaEntries
        CaEntries= new ArrayList<cblurlmsg>();CaEntries.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read CaEntries
        for (; istream.available() > 0 ; ){     cblurlmsg temp;    temp = new cblurlmsg();    retVal += temp.read(istream);    CaEntries.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for CaEntries**/  }
    
                // write CaEntries
        {ArrayList<cblurlmsg> temp1 = CaEntries;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     cblurlmsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CableUrls\n");
    dc.increaseIndent();
        int retVal= 0;
        // write CaEntries
        { ArrayList<cblurlmsg> temp1 = CaEntries;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     cblurlmsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for CaEntries
    //public ArrayList<cblurlmsg> getCaEntries()
    //{
    //    return CaEntries ;
    //}

    
    // Setter for CaEntries
    //public void setCaEntries(ArrayList<cblurlmsg> val)
    //{
    //    this.CaEntries= val;
    //}


    public int addToCaEntries(cblurlmsg val)
    {
            CaEntries.add(val); return CaEntries.size();
    }
    
    
    public int removeFromCaEntries(cblurlmsg val)
    {
            CaEntries.remove(val); return CaEntries.size();
    }
    
    
    public int removeNthFromCaEntries(int idx)
    {
            CaEntries.remove(idx); return CaEntries.size();
    }
    
    
    public int emptyCaEntries(int idx)
    {
            CaEntries.clear(); return CaEntries.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code