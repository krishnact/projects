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
@Created(date = "Fri Jan 15 01:32:55 EST 2016")

public  class ProgramCnf extends   APDUBaseFactory.APDUBase { //Concrete type is ProgramCnf


// member static classes
    public  static  class statusfld extends BinStruct implements PublicBinMsg{




    // members variables
    // pgmmsg
    public ArrayList<programCnfMsg> pgmmsg ;

        // Parent of this object
ProgramCnf parent;
    public statusfld (ProgramCnf parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public ProgramCnf getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize pgmmsg
        pgmmsg= new ArrayList<programCnfMsg>();pgmmsg.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read pgmmsg
        for (; istream.available() > 0 ; ){     programCnfMsg temp;    temp = new programCnfMsg();    retVal += temp.read(istream);    pgmmsg.add(temp);}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for pgmmsg**/  }
    
                // write pgmmsg
        {ArrayList<programCnfMsg> temp1 = pgmmsg;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     programCnfMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("statusfld\n");
    dc.increaseIndent();
        int retVal= 0;
        // write pgmmsg
        { ArrayList<programCnfMsg> temp1 = pgmmsg;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     programCnfMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for pgmmsg
    //public ArrayList<programCnfMsg> getPgmmsg()
    //{
    //    return pgmmsg ;
    //}

    
    // Setter for pgmmsg
    //public void setPgmmsg(ArrayList<programCnfMsg> val)
    //{
    //    this.pgmmsg= val;
    //}


    public int addToPgmmsg(programCnfMsg val)
    {
            pgmmsg.add(val); return pgmmsg.size();
    }
    
    
    public int removeFromPgmmsg(programCnfMsg val)
    {
            pgmmsg.remove(val); return pgmmsg.size();
    }
    
    
    public int removeNthFromPgmmsg(int idx)
    {
            pgmmsg.remove(idx); return pgmmsg.size();
    }
    
    
    public int emptyPgmmsg(int idx)
    {
            pgmmsg.clear(); return pgmmsg.size();
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code


    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // transactionId
    public short transactionId ;
    // statusField
    public short statusField ;
    // statusfldInstance
    public statusfld statusfldInstance ;

        public ProgramCnf () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize transactionId
        
        // Initialize statusField
        
        // Initialize statusfldInstance
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transactionId
        {transactionId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusfldInstance
        if (statusField==0x00){ statusfldInstance = new statusfld(this);retVal += statusfldInstance.read(istream);        }

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
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read transactionId
        {transactionId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusfldInstance
        if (statusField==0x00){ statusfldInstance = new statusfld(this);retVal += statusfldInstance.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        { /** fix dependent sizes for statusfldInstance **/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write transactionId
        ostream.writeByte(transactionId); retVal +=1;
        // write statusField
        ostream.writeByte(statusField); retVal +=1;
        // write statusfldInstance
        if (statusfldInstance!=null)retVal +=statusfldInstance.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ProgramCnf\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write transactionId
        dc.indent();dc.getPs().println("transactionId="+transactionId+"(0x"+ Integer.toHexString(transactionId) + ")" );
        // write statusField
        dc.indent();dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write statusfldInstance
        if ( statusfldInstance != null ) {dc.indent();dc.getPs().println("statusfldInstance") ;retVal +=statusfldInstance.dump(dc);}
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
    // Getter for transactionId
    //public short getTransactionId()
    //{
    //    return transactionId ;
    //}

    
    // Setter for transactionId
    //public void setTransactionId(short val)
    //{
    //    this.transactionId= val;
    //}
    // Getter for statusField
    //public short getStatusField()
    //{
    //    return statusField ;
    //}

    
    // Setter for statusField
    //public void setStatusField(short val)
    //{
    //    this.statusField= val;
    //}
    // Getter for statusfldInstance
    //public statusfld getStatusfldInstance()
    //{
    //    return statusfldInstance ;
    //}

    
    // Setter for statusfldInstance
    //public void setStatusfldInstance(statusfld val)
    //{
    //    this.statusfldInstance= val;
    //}


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