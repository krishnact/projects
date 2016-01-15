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
@Created(date = "Fri Jan 15 01:33:03 EST 2016")

public  class PortReport1394_M_Mode extends BinStruct implements PublicBinMsg{




    // members variables
    // bf1
    public BitField_8 bf1 ;
    // totalNumberOfNodes
    public int totalNumberOfNodes ;
    // connectedDevices
    public ArrayList<PortReport1394_MMsg> connectedDevices ;

        public PortReport1394_M_Mode () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize totalNumberOfNodes
        
        // Initialize connectedDevices
        connectedDevices= new ArrayList<PortReport1394_MMsg>();connectedDevices.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read bf1
        retVal += bf1.read(istream);
        // read totalNumberOfNodes
        {totalNumberOfNodes=istream.readUnsignedShort(); retVal+=2;}
        // read connectedDevices
        for (; istream.available() > 0 ; ){     PortReport1394_MMsg temp;    temp = new PortReport1394_MMsg();    retVal += temp.read(istream);    connectedDevices.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        { /** fix dependent sizes for connectedDevices**/  }
    
                // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write totalNumberOfNodes
        ostream.writeShort(totalNumberOfNodes); retVal +=2;
        // write connectedDevices
        {ArrayList<PortReport1394_MMsg> temp1 = connectedDevices;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     PortReport1394_MMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("PortReport1394_M_Mode\n");
    dc.increaseIndent();
        int retVal= 0;
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),2));dc.indent();dc.getPs().print("loopStatus: ");dc.getPs().println(BitField_8.toDisplayString(getLoopStatus(),1));dc.indent();dc.getPs().print("rootStatus: ");dc.getPs().println(BitField_8.toDisplayString(getRootStatus(),1));dc.indent();dc.getPs().print("cycleMasterStatus: ");dc.getPs().println(BitField_8.toDisplayString(getCycleMasterStatus(),1));dc.indent();dc.getPs().print("host_ad_sourceSelectionStatus: ");dc.getPs().println(BitField_8.toDisplayString(getHost_ad_sourceSelectionStatus(),1));dc.indent();dc.getPs().print("port_1_ConnectionStatus: ");dc.getPs().println(BitField_8.toDisplayString(getPort_1_ConnectionStatus(),1));dc.indent();dc.getPs().print("port_2_ConnectionStatus: ");dc.getPs().println(BitField_8.toDisplayString(getPort_2_ConnectionStatus(),1));}
        // write totalNumberOfNodes
        dc.indent();dc.getPs().println("totalNumberOfNodes="+totalNumberOfNodes+"(0x"+ Integer.toHexString(totalNumberOfNodes) + ")" );
        // write connectedDevices
        { ArrayList<PortReport1394_MMsg> temp1 = connectedDevices;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     PortReport1394_MMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for bf1
    //public BitField_8 getBf1()
    //{
    //    return bf1 ;
    //}

    
    // Setter for bf1
    //public void setBf1(BitField_8 val)
    //{
    //    this.bf1= val;
    //}
    // Getter for totalNumberOfNodes
    //public int getTotalNumberOfNodes()
    //{
    //    return totalNumberOfNodes ;
    //}

    
    // Setter for totalNumberOfNodes
    //public void setTotalNumberOfNodes(int val)
    //{
    //    this.totalNumberOfNodes= val;
    //}
    // Getter for connectedDevices
    //public ArrayList<PortReport1394_MMsg> getConnectedDevices()
    //{
    //    return connectedDevices ;
    //}

    
    // Setter for connectedDevices
    //public void setConnectedDevices(ArrayList<PortReport1394_MMsg> val)
    //{
    //    this.connectedDevices= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x000000c0 ) >> 6 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
    }
    
    
    public int getLoopStatus( )
    {
        return ( bf1.getValue() & 0x00000020 ) >> 5 ;
    }
    
    
    public void setLoopStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
    }
    
    
    public int getRootStatus( )
    {
        return ( bf1.getValue() & 0x00000010 ) >> 4 ;
    }
    
    
    public void setRootStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffffef) | ( (val << 4 ) & 0x00000010));
    }
    
    
    public int getCycleMasterStatus( )
    {
        return ( bf1.getValue() & 0x00000008 ) >> 3 ;
    }
    
    
    public void setCycleMasterStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
    }
    
    
    public int getHost_ad_sourceSelectionStatus( )
    {
        return ( bf1.getValue() & 0x00000004 ) >> 2 ;
    }
    
    
    public void setHost_ad_sourceSelectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
    }
    
    
    public int getPort_1_ConnectionStatus( )
    {
        return ( bf1.getValue() & 0x00000002 ) >> 1 ;
    }
    
    
    public void setPort_1_ConnectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
    }
    
    
    public int getPort_2_ConnectionStatus( )
    {
        return ( bf1.getValue() & 0x00000001 ) >> 0 ;
    }
    
    
    public void setPort_2_ConnectionStatus(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
    }
    
    
    public int addToConnectedDevices(PortReport1394_MMsg val)
    {
            connectedDevices.add(val); return connectedDevices.size();
    }
    
    
    public int removeFromConnectedDevices(PortReport1394_MMsg val)
    {
            connectedDevices.remove(val); return connectedDevices.size();
    }
    
    
    public int removeNthFromConnectedDevices(int idx)
    {
            connectedDevices.remove(idx); return connectedDevices.size();
    }
    
    
    public int emptyConnectedDevices(int idx)
    {
            connectedDevices.clear(); return connectedDevices.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code