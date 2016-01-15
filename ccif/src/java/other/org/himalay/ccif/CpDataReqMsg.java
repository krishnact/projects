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
@Created(date = "Fri Jan 15 01:32:59 EST 2016")

public  class CpDataReqMsg extends BinStruct implements PublicBinMsg{




    // members variables
    // dataTypeId
    public short dataTypeId ;
    // dataType
    public ByteArray dataType ;
    // DataType_id
    public ByteArray DataType_id ;

        public CpDataReqMsg () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize dataTypeId
        
        // Initialize dataType
        dataType= new ByteArray();dataType.setSizeType("FIRST_UI8");
        // Initialize DataType_id
        DataType_id= new ByteArray();DataType_id.setSizeType("FIRST_UI8");
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read dataTypeId
        {dataTypeId=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read dataType
        {retVal+=dataType.read(istream); }
        // read DataType_id
        {retVal+=DataType_id.read(istream); }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        { /** fix dependent sizes for dataType**/  }
        { /** fix dependent sizes for DataType_id**/  }
    
                // write dataTypeId
        ostream.writeByte(dataTypeId); retVal +=1;
        // write dataType
        {retVal += dataType.write(ostream);}
        // write DataType_id
        {retVal += DataType_id.write(ostream);}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("CpDataReqMsg\n");
    dc.increaseIndent();
        int retVal= 0;
        // write dataTypeId
        dc.indent();dc.getPs().println("dataTypeId="+dataTypeId+"(0x"+ Integer.toHexString(dataTypeId) + ")" );
        // write dataType
        dc.indent();dc.getPs().print("dataType: "+dataType.getSize()+"(0x"+Integer.toHexString(dataType.getSize())+")\n");this.dataType.dump(dc);
        // write DataType_id
        dc.indent();dc.getPs().print("DataType_id: "+DataType_id.getSize()+"(0x"+Integer.toHexString(DataType_id.getSize())+")\n");this.DataType_id.dump(dc);
dc.decreaseIndent();
        return retVal;
    }


        // Getter for dataTypeId
    //public short getDataTypeId()
    //{
    //    return dataTypeId ;
    //}

    
    // Setter for dataTypeId
    //public void setDataTypeId(short val)
    //{
    //    this.dataTypeId= val;
    //}
    // Getter for dataType
    //public ByteArray getDataType()
    //{
    //    return dataType ;
    //}

    
    // Setter for dataType
    //public void setDataType(ByteArray val)
    //{
    //    this.dataType= val;
    //}
    // Getter for DataType_id
    //public ByteArray getDataType_id()
    //{
    //    return DataType_id ;
    //}

    
    // Setter for DataType_id
    //public void setDataType_id(ByteArray val)
    //{
    //    this.DataType_id= val;
    //}


    public void setDataType(byte[] val)
    {
        this.dataType.setData(val);
    }
    
    
    public void setDataType_id(byte[] val)
    {
        this.DataType_id.setData(val);
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code