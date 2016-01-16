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

public  class LocationType_program extends   LocationTypeFactory.LocationType { //Concrete type is LocationType_program




    // members variables
    // frequency_vector
    public int frequency_vector ;
    // modulation_type
    public short modulation_type ;
    // program_number
    public int program_number ;

    public LocationType_program () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize frequency_vector

        // Initialize modulation_type

        // Initialize program_number

    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read frequency_vector
        {
            frequency_vector=istream.readUnsignedShort();
            retVal+=2;
        }
        // read modulation_type
        {
            modulation_type=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read program_number
        {
            program_number=istream.readUnsignedShort();
            retVal+=2;
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;





        // write frequency_vector
        ostream.writeShort(frequency_vector);
        retVal +=2;
        // write modulation_type
        ostream.writeByte(modulation_type);
        retVal +=1;
        // write program_number
        ostream.writeShort(program_number);
        retVal +=2;
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("LocationType_program\n");
        dc.increaseIndent();
        int retVal= 0;
        // write frequency_vector
        dc.indent();
        dc.getPs().println("frequency_vector="+frequency_vector+"(0x"+ Integer.toHexString(frequency_vector) + ")" );
        // write modulation_type
        dc.indent();
        dc.getPs().println("modulation_type="+modulation_type+"(0x"+ Integer.toHexString(modulation_type) + ")" );
        // write program_number
        dc.indent();
        dc.getPs().println("program_number="+program_number+"(0x"+ Integer.toHexString(program_number) + ")" );
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for frequency_vector
    //public int getFrequency_vector()
    //{
    //    return frequency_vector ;
    //}


    // Setter for frequency_vector
    //public void setFrequency_vector(int val)
    //{
    //    this.frequency_vector= val;
    //}
    // Getter for modulation_type
    //public short getModulation_type()
    //{
    //    return modulation_type ;
    //}


    // Setter for modulation_type
    //public void setModulation_type(short val)
    //{
    //    this.modulation_type= val;
    //}
    // Getter for program_number
    //public int getProgram_number()
    //{
    //    return program_number ;
    //}


    // Setter for program_number
    //public void setProgram_number(int val)
    //{
    //    this.program_number= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code