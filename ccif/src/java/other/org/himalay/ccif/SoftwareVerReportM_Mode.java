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

public  class SoftwareVerReportM_Mode extends BinStruct implements PublicBinMsg {




    // members variables
    // applicationsInReport
    public ArrayList<softwareVerMMsg> applicationsInReport ;

    public SoftwareVerReportM_Mode () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize applicationsInReport
        applicationsInReport= new ArrayList<softwareVerMMsg>();
        applicationsInReport.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read applicationsInReport
        for (; istream.available() > 0 ; ) {
            softwareVerMMsg temp;
            temp = new softwareVerMMsg();
            retVal += temp.read(istream);
            applicationsInReport.add(temp);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;

        {   /** fix dependent sizes for applicationsInReport**/
        }

        // write applicationsInReport
        {
            ArrayList<softwareVerMMsg> temp1 = applicationsInReport;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                softwareVerMMsg temp2    =    temp1.get(iIdx);
                if (temp2!=null)retVal +=temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("SoftwareVerReportM_Mode\n");
        dc.increaseIndent();
        int retVal= 0;
        // write applicationsInReport
        {
            ArrayList<softwareVerMMsg> temp1 = applicationsInReport;
            for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++) {
                softwareVerMMsg element    = temp1.get(iIdx);
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


    // Getter for applicationsInReport
    //public ArrayList<softwareVerMMsg> getApplicationsInReport()
    //{
    //    return applicationsInReport ;
    //}


    // Setter for applicationsInReport
    //public void setApplicationsInReport(ArrayList<softwareVerMMsg> val)
    //{
    //    this.applicationsInReport= val;
    //}


    public int addToApplicationsInReport(softwareVerMMsg val)
    {
        applicationsInReport.add(val);
        return applicationsInReport.size();
    }


    public int removeFromApplicationsInReport(softwareVerMMsg val)
    {
        applicationsInReport.remove(val);
        return applicationsInReport.size();
    }


    public int removeNthFromApplicationsInReport(int idx)
    {
        applicationsInReport.remove(idx);
        return applicationsInReport.size();
    }


    public int emptyApplicationsInReport(int idx)
    {
        applicationsInReport.clear();
        return applicationsInReport.size();
    }


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code