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
@Created(date = "Fri Jan 15 01:32:58 EST 2016")

public  class LostFlowInd extends   APDUBaseFactory.APDUBase { //Concrete type is LostFlowInd




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // flowId
    public int flowId ;
    // reasonField
    public short reasonField ;

        public LostFlowInd () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize flowId
        
        // Initialize reasonField
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read flowId
        { flowId= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read reasonField
        {reasonField=(short)(istream.readUnsignedByte()); retVal+=1;}

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
        // read flowId
        { flowId= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }
        // read reasonField
        {reasonField=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write flowId
        {ostream.writeByte((flowId  & 0x00FF0000)>>16);ostream.writeShort((flowId & 0x0000FFFF));retVal+=3;}
        // write reasonField
        ostream.writeByte(reasonField); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("LostFlowInd\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write flowId
        dc.indent();dc.getPs().println("flowId="+flowId+"(0x"+ Integer.toHexString(flowId)+")") ;
        // write reasonField
        dc.indent();dc.getPs().println("reasonField="+reasonField+"(0x"+ Integer.toHexString(reasonField) + ")" );
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
    // Getter for flowId
    //public int getFlowId()
    //{
    //    return flowId ;
    //}

    
    // Setter for flowId
    //public void setFlowId(int val)
    //{
    //    this.flowId= val;
    //}
    // Getter for reasonField
    //public short getReasonField()
    //{
    //    return reasonField ;
    //}

    
    // Setter for reasonField
    //public void setReasonField(short val)
    //{
    //    this.reasonField= val;
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