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
@Created(date = "Fri Jan 15 01:33:04 EST 2016")

public  class NetAddressReport extends BinStruct implements PublicBinMsg{




    // members variables
    // ntAddrs
    public ArrayList<NetAddressReportMsg> ntAddrs ;

        public NetAddressReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize ntAddrs
        ntAddrs= new ArrayList<NetAddressReportMsg>();ntAddrs.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read ntAddrs
        for (; istream.available() > 0 ; ){     NetAddressReportMsg temp;    temp = new NetAddressReportMsg();    retVal += temp.read(istream);    ntAddrs.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for ntAddrs**/  }
    
                // write ntAddrs
        {ArrayList<NetAddressReportMsg> temp1 = ntAddrs;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     NetAddressReportMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("NetAddressReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write ntAddrs
        { ArrayList<NetAddressReportMsg> temp1 = ntAddrs;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     NetAddressReportMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for ntAddrs
    //public ArrayList<NetAddressReportMsg> getNtAddrs()
    //{
    //    return ntAddrs ;
    //}

    
    // Setter for ntAddrs
    //public void setNtAddrs(ArrayList<NetAddressReportMsg> val)
    //{
    //    this.ntAddrs= val;
    //}


    public int addToNtAddrs(NetAddressReportMsg val)
    {
            ntAddrs.add(val); return ntAddrs.size();
    }
    
    
    public int removeFromNtAddrs(NetAddressReportMsg val)
    {
            ntAddrs.remove(val); return ntAddrs.size();
    }
    
    
    public int removeNthFromNtAddrs(int idx)
    {
            ntAddrs.remove(idx); return ntAddrs.size();
    }
    
    
    public int emptyNtAddrs(int idx)
    {
            ntAddrs.clear(); return ntAddrs.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code