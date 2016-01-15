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
@Created(date = "Fri Jan 15 01:33:02 EST 2016")

public  class HomeNetworkReport extends BinStruct implements PublicBinMsg{




    // members variables
    // maxClients
    public short maxClients ;
    // host_DRM_status
    public short host_DRM_status ;
    // clients
    public ArrayList<HomeNetworkReportMsg> clients ;

        public HomeNetworkReport () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize maxClients
        
        // Initialize host_DRM_status
        
        // Initialize clients
        clients= new ArrayList<HomeNetworkReportMsg>();clients.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read maxClients
        {maxClients=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read host_DRM_status
        {host_DRM_status=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read clients
        for (; istream.available() > 0 ; ){     HomeNetworkReportMsg temp;    temp = new HomeNetworkReportMsg();    retVal += temp.read(istream);    clients.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        { /** fix dependent sizes for clients**/  }
    
                // write maxClients
        ostream.writeByte(maxClients); retVal +=1;
        // write host_DRM_status
        ostream.writeByte(host_DRM_status); retVal +=1;
        // write clients
        {ArrayList<HomeNetworkReportMsg> temp1 = clients;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     HomeNetworkReportMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("HomeNetworkReport\n");
    dc.increaseIndent();
        int retVal= 0;
        // write maxClients
        dc.indent();dc.getPs().println("maxClients="+maxClients+"(0x"+ Integer.toHexString(maxClients) + ")" );
        // write host_DRM_status
        dc.indent();dc.getPs().println("host_DRM_status="+host_DRM_status+"(0x"+ Integer.toHexString(host_DRM_status) + ")" );
        // write clients
        { ArrayList<HomeNetworkReportMsg> temp1 = clients;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     HomeNetworkReportMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for maxClients
    //public short getMaxClients()
    //{
    //    return maxClients ;
    //}

    
    // Setter for maxClients
    //public void setMaxClients(short val)
    //{
    //    this.maxClients= val;
    //}
    // Getter for host_DRM_status
    //public short getHost_DRM_status()
    //{
    //    return host_DRM_status ;
    //}

    
    // Setter for host_DRM_status
    //public void setHost_DRM_status(short val)
    //{
    //    this.host_DRM_status= val;
    //}
    // Getter for clients
    //public ArrayList<HomeNetworkReportMsg> getClients()
    //{
    //    return clients ;
    //}

    
    // Setter for clients
    //public void setClients(ArrayList<HomeNetworkReportMsg> val)
    //{
    //    this.clients= val;
    //}


    public int addToClients(HomeNetworkReportMsg val)
    {
            clients.add(val); return clients.size();
    }
    
    
    public int removeFromClients(HomeNetworkReportMsg val)
    {
            clients.remove(val); return clients.size();
    }
    
    
    public int removeNthFromClients(int idx)
    {
            clients.remove(idx); return clients.size();
    }
    
    
    public int emptyClients(int idx)
    {
            clients.clear(); return clients.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code