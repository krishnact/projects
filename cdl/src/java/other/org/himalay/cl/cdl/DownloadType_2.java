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
import org.himalay.binmsg.util.IPv6Address ;

import org.himalay.msgs.runtime.*;
@Created(date = "Fri Jan 15 01:39:12 EST 2016")

public  class DownloadType_2 extends BinStruct implements PublicBinMsg{




    // members variables
    // tftp_server_address
    public IPv6Address tftp_server_address ;

        public DownloadType_2 () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize tftp_server_address
        tftp_server_address = new IPv6Address();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read tftp_server_address
        retVal += tftp_server_address.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for tftp_server_address **/  }
    
                // write tftp_server_address
        if (tftp_server_address!=null)retVal +=tftp_server_address.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("DownloadType_2\n");
    dc.increaseIndent();
        int retVal= 0;
        // write tftp_server_address
        if ( tftp_server_address != null ) {dc.indent();dc.getPs().println("tftp_server_address") ;retVal +=tftp_server_address.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for tftp_server_address
    //public IPv6Address getTftp_server_address()
    //{
    //    return tftp_server_address ;
    //}

    
    // Setter for tftp_server_address
    //public void setTftp_server_address(IPv6Address val)
    //{
    //    this.tftp_server_address= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code