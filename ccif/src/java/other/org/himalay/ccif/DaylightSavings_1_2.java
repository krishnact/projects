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
@Created(date = "Fri Jan 15 01:33:08 EST 2016")

public  class DaylightSavings_1_2 extends BinStruct implements PublicBinMsg {


// member static classes
    public  static  class daylightSaving extends BinStruct implements PublicBinMsg {




        // members variables
        // daylight_savings_delta
        public short daylight_savings_delta ;
        // daylightSavingsEntryTime
        public long daylightSavingsEntryTime ;
        // daylightSavingsExitTime
        public long daylightSavingsExitTime ;

        // Parent of this object
        DaylightSavings_1_2 parent;
        public daylightSaving (DaylightSavings_1_2 parent) // throws Exception
        {
            this.parent= parent;
            init();
        }
        public DaylightSavings_1_2 getParent()
        {
            return parent;
        }

        private void init()
        {
            // Initialize daylight_savings_delta

            // Initialize daylightSavingsEntryTime

            // Initialize daylightSavingsExitTime

        }

        public int readNoHeader(DataInputStream istream) throws IOException
        {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException
        {
            preRead();
            int retVal= 0;

            // read daylight_savings_delta
            {
                daylight_savings_delta=(short)(istream.readUnsignedByte());
                retVal+=1;
            }
            // read daylightSavingsEntryTime
            {
                daylightSavingsEntryTime=(long)(BinPrimitive.readUI32(istream) );
                retVal+=4;
            }
            // read daylightSavingsExitTime
            {
                daylightSavingsExitTime=(long)(BinPrimitive.readUI32(istream) );
                retVal+=4;
            }

            postRead();
            return retVal;
        }


        public int write(DataOutputStream ostream) throws IOException
        {
            preWrite();
            int retVal= 0;





            // write daylight_savings_delta
            ostream.writeByte(daylight_savings_delta);
            retVal +=1;
            // write daylightSavingsEntryTime
            BinPrimitive.writeUI32(ostream,daylightSavingsEntryTime);
            retVal +=4;
            // write daylightSavingsExitTime
            BinPrimitive.writeUI32(ostream,daylightSavingsExitTime);
            retVal +=4;
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException
        {
            dc.indent();
            dc.getPs().print("daylightSaving\n");
            dc.increaseIndent();
            int retVal= 0;
            // write daylight_savings_delta
            dc.indent();
            dc.getPs().println("daylight_savings_delta="+daylight_savings_delta+"(0x"+ Integer.toHexString(daylight_savings_delta) + ")" );
            // write daylightSavingsEntryTime
            dc.indent();
            dc.getPs().println("daylightSavingsEntryTime="+daylightSavingsEntryTime+"(0x"+ Long.toHexString(daylightSavingsEntryTime)+")") ;
            // write daylightSavingsExitTime
            dc.indent();
            dc.getPs().println("daylightSavingsExitTime="+daylightSavingsExitTime+"(0x"+ Long.toHexString(daylightSavingsExitTime)+")") ;
            dc.decreaseIndent();
            return retVal;
        }


        // Getter for daylight_savings_delta
        //public short getDaylight_savings_delta()
        //{
        //    return daylight_savings_delta ;
        //}


        // Setter for daylight_savings_delta
        //public void setDaylight_savings_delta(short val)
        //{
        //    this.daylight_savings_delta= val;
        //}
        // Getter for daylightSavingsEntryTime
        //public long getDaylightSavingsEntryTime()
        //{
        //    return daylightSavingsEntryTime ;
        //}


        // Setter for daylightSavingsEntryTime
        //public void setDaylightSavingsEntryTime(long val)
        //{
        //    this.daylightSavingsEntryTime= val;
        //}
        // Getter for daylightSavingsExitTime
        //public long getDaylightSavingsExitTime()
        //{
        //    return daylightSavingsExitTime ;
        //}


        // Setter for daylightSavingsExitTime
        //public void setDaylightSavingsExitTime(long val)
        //{
        //    this.daylightSavingsExitTime= val;
        //}


        public int getSize() throws IOException
        {
            DataOutputStream dos= new DataOutputStream(new NullStream());
            return this.write(dos);
        }



    }

// End of code


    // members variables
    // daylightSavingsControl
    public short daylightSavingsControl ;
    // daylightSavingInstance
    public daylightSaving daylightSavingInstance ;

    public DaylightSavings_1_2 () // throws Exception
    {
        init();
    }

    private void init()
    {
        // Initialize daylightSavingsControl

        // Initialize daylightSavingInstance
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException
    {

        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException
    {
        preRead();
        int retVal= 0;

        // read daylightSavingsControl
        {
            daylightSavingsControl=(short)(istream.readUnsignedByte());
            retVal+=1;
        }
        // read daylightSavingInstance
        if (daylightSavingsControl==0x02) {
            daylightSavingInstance = new daylightSaving(this);
            retVal += daylightSavingInstance.read(istream);
        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException
    {
        preWrite();
        int retVal= 0;


        {   /** fix dependent sizes for daylightSavingInstance **/
        }

        // write daylightSavingsControl
        ostream.writeByte(daylightSavingsControl);
        retVal +=1;
        // write daylightSavingInstance
        if (daylightSavingInstance!=null)retVal +=daylightSavingInstance.write(ostream);
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException
    {
        dc.indent();
        dc.getPs().print("DaylightSavings_1_2\n");
        dc.increaseIndent();
        int retVal= 0;
        // write daylightSavingsControl
        dc.indent();
        dc.getPs().println("daylightSavingsControl="+daylightSavingsControl+"(0x"+ Integer.toHexString(daylightSavingsControl) + ")" );
        // write daylightSavingInstance
        if ( daylightSavingInstance != null ) {
            dc.indent();
            dc.getPs().println("daylightSavingInstance") ;
            retVal +=daylightSavingInstance.dump(dc);
        }
        dc.decreaseIndent();
        return retVal;
    }


    // Getter for daylightSavingsControl
    //public short getDaylightSavingsControl()
    //{
    //    return daylightSavingsControl ;
    //}


    // Setter for daylightSavingsControl
    //public void setDaylightSavingsControl(short val)
    //{
    //    this.daylightSavingsControl= val;
    //}
    // Getter for daylightSavingInstance
    //public daylightSaving getDaylightSavingInstance()
    //{
    //    return daylightSavingInstance ;
    //}


    // Setter for daylightSavingInstance
    //public void setDaylightSavingInstance(daylightSaving val)
    //{
    //    this.daylightSavingInstance= val;
    //}


    public int getSize() throws IOException
    {
        DataOutputStream dos= new DataOutputStream(new NullStream());
        return this.write(dos);
    }



}

// End of code