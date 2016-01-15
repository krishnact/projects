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

public  class Resources extends BinStruct implements PublicBinMsg{




    // members variables
    // descriptor_count
    public short descriptor_count ;
    // reourceList
    public ArrayList<ResourceFactory.Resource> reourceList ;

        public Resources () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize descriptor_count
        
        // Initialize reourceList
        reourceList= new ArrayList<ResourceFactory.Resource>();reourceList.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read descriptor_count
        {descriptor_count=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read reourceList
        for (int iIdx=0; iIdx <descriptor_count + (0); iIdx++){     ResourceFactory.Resource temp;    /* Generic classes are abstract, so we can not invoke new*/    {IntegerHolder iHolder= new IntegerHolder();DataInputStream disTemp = istream;temp=ResourceFactory.createMsg(disTemp,iHolder); retVal+= iHolder.getValue();        }    reourceList.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for reourceList**/ descriptor_count=(short)(reourceList.getCount() -(0)); }
    
                // write descriptor_count
        ostream.writeByte(descriptor_count); retVal +=1;
        // write reourceList
        {ArrayList<ResourceFactory.Resource> temp1 = reourceList;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     ResourceFactory.Resource temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("Resources\n");
    dc.increaseIndent();
        int retVal= 0;
        // write descriptor_count
        dc.indent();dc.getPs().println("descriptor_count="+descriptor_count+"(0x"+ Integer.toHexString(descriptor_count) + ")" );
        // write reourceList
        { ArrayList<ResourceFactory.Resource> temp1 = reourceList;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     ResourceFactory.Resource element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for descriptor_count
    //public short getDescriptor_count()
    //{
    //    return descriptor_count ;
    //}

    
    // Setter for descriptor_count
    //public void setDescriptor_count(short val)
    //{
    //    this.descriptor_count= val;
    //}
    // Getter for reourceList
    //public ArrayList<ResourceFactory.Resource> getReourceList()
    //{
    //    return reourceList ;
    //}

    
    // Setter for reourceList
    //public void setReourceList(ArrayList<ResourceFactory.Resource> val)
    //{
    //    this.reourceList= val;
    //}


    public int addToReourceList(ResourceFactory.Resource val)
    {
            reourceList.add(val); return reourceList.size();
    }
    
    
    public int removeFromReourceList(ResourceFactory.Resource val)
    {
            reourceList.remove(val); return reourceList.size();
    }
    
    
    public int removeNthFromReourceList(int idx)
    {
            reourceList.remove(idx); return reourceList.size();
    }
    
    
    public int emptyReourceList(int idx)
    {
            reourceList.clear(); return reourceList.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code