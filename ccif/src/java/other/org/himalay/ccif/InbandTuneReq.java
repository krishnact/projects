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
@Created(date = "Fri Jan 15 01:32:56 EST 2016")

public  class InbandTuneReq extends   APDUBaseFactory.APDUBase { //Concrete type is InbandTuneReq


// member static classes
    public  static  class first extends BinStruct implements PublicBinMsg{




    // members variables
    // sourceid
    public int sourceid ;

        // Parent of this object
InbandTuneReq parent;
    public first (InbandTuneReq parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public InbandTuneReq getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize sourceid
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read sourceid
        {sourceid=istream.readUnsignedShort(); retVal+=2;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write sourceid
        ostream.writeShort(sourceid); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("first\n");
    dc.increaseIndent();
        int retVal= 0;
        // write sourceid
        dc.indent();dc.getPs().println("sourceid="+sourceid+"(0x"+ Integer.toHexString(sourceid) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for sourceid
    //public int getSourceid()
    //{
    //    return sourceid ;
    //}

    
    // Setter for sourceid
    //public void setSourceid(int val)
    //{
    //    this.sourceid= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code
// member static classes
    public  static  class second extends BinStruct implements PublicBinMsg{




    // members variables
    // tuneFrequencyValu
    public int tuneFrequencyValu ;
    // modulationvalue
    public short modulationvalue ;

        // Parent of this object
InbandTuneReq parent;
    public second (InbandTuneReq parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public InbandTuneReq getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize tuneFrequencyValu
        
        // Initialize modulationvalue
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read tuneFrequencyValu
        {tuneFrequencyValu=istream.readUnsignedShort(); retVal+=2;}
        // read modulationvalue
        {modulationvalue=(short)(istream.readUnsignedByte()); retVal+=1;}

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
    
                // write tuneFrequencyValu
        ostream.writeShort(tuneFrequencyValu); retVal +=2;
        // write modulationvalue
        ostream.writeByte(modulationvalue); retVal +=1;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("second\n");
    dc.increaseIndent();
        int retVal= 0;
        // write tuneFrequencyValu
        dc.indent();dc.getPs().println("tuneFrequencyValu="+tuneFrequencyValu+"(0x"+ Integer.toHexString(tuneFrequencyValu) + ")" );
        // write modulationvalue
        dc.indent();dc.getPs().println("modulationvalue="+modulationvalue+"(0x"+ Integer.toHexString(modulationvalue) + ")" );
dc.decreaseIndent();
        return retVal;
    }


        // Getter for tuneFrequencyValu
    //public int getTuneFrequencyValu()
    //{
    //    return tuneFrequencyValu ;
    //}

    
    // Setter for tuneFrequencyValu
    //public void setTuneFrequencyValu(int val)
    //{
    //    this.tuneFrequencyValu= val;
    //}
    // Getter for modulationvalue
    //public short getModulationvalue()
    //{
    //    return modulationvalue ;
    //}

    
    // Setter for modulationvalue
    //public void setModulationvalue(short val)
    //{
    //    this.modulationvalue= val;
    //}


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
    // tuneType
    public short tuneType ;
    // firstInstance
    public first firstInstance ;
    // secondInstance
    public second secondInstance ;

        public InbandTuneReq () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize tuneType
        
        // Initialize firstInstance
        //Conditional, will be initialized during read
        // Initialize secondInstance
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read tuneType
        {tuneType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read firstInstance
        if(tuneType ==0x00){ firstInstance = new first(this);retVal += firstInstance.read(istream);        }
        // read secondInstance
        if(tuneType ==0x01){ secondInstance = new second(this);retVal += secondInstance.read(istream);        }

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
        // read tuneType
        {tuneType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read firstInstance
        if(tuneType ==0x00){ firstInstance = new first(this);retVal += firstInstance.read(istream);        }
        // read secondInstance
        if(tuneType ==0x01){ secondInstance = new second(this);retVal += secondInstance.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        { /** fix dependent sizes for firstInstance **/  }
        { /** fix dependent sizes for secondInstance **/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write tuneType
        ostream.writeByte(tuneType); retVal +=1;
        // write firstInstance
        if (firstInstance!=null)retVal +=firstInstance.write(ostream);
        // write secondInstance
        if (secondInstance!=null)retVal +=secondInstance.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("InbandTuneReq\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write tuneType
        dc.indent();dc.getPs().println("tuneType="+tuneType+"(0x"+ Integer.toHexString(tuneType) + ")" );
        // write firstInstance
        if ( firstInstance != null ) {dc.indent();dc.getPs().println("firstInstance") ;retVal +=firstInstance.dump(dc);}
        // write secondInstance
        if ( secondInstance != null ) {dc.indent();dc.getPs().println("secondInstance") ;retVal +=secondInstance.dump(dc);}
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
    // Getter for tuneType
    //public short getTuneType()
    //{
    //    return tuneType ;
    //}

    
    // Setter for tuneType
    //public void setTuneType(short val)
    //{
    //    this.tuneType= val;
    //}
    // Getter for firstInstance
    //public first getFirstInstance()
    //{
    //    return firstInstance ;
    //}

    
    // Setter for firstInstance
    //public void setFirstInstance(first val)
    //{
    //    this.firstInstance= val;
    //}
    // Getter for secondInstance
    //public second getSecondInstance()
    //{
    //    return secondInstance ;
    //}

    
    // Setter for secondInstance
    //public void setSecondInstance(second val)
    //{
    //    this.secondInstance= val;
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