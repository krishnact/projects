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
@Created(date = "Fri Jan 15 01:33:05 EST 2016")

public  class Language extends BinStruct implements PublicBinMsg{




    // members variables
    // lanuageControl
    public int lanuageControl ;

        public Language () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize lanuageControl
        
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read lanuageControl
        { lanuageControl= BinPrimitive.readUI24(istream);                                  retVal += 3;                                            }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
    
                // write lanuageControl
        {ostream.writeByte((lanuageControl  & 0x00FF0000)>>16);ostream.writeShort((lanuageControl & 0x0000FFFF));retVal+=3;}
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("Language\n");
    dc.increaseIndent();
        int retVal= 0;
        // write lanuageControl
        dc.indent();dc.getPs().println("lanuageControl="+lanuageControl+"(0x"+ Integer.toHexString(lanuageControl)+")") ;
dc.decreaseIndent();
        return retVal;
    }


        // Getter for lanuageControl
    //public int getLanuageControl()
    //{
    //    return lanuageControl ;
    //}

    
    // Setter for lanuageControl
    //public void setLanuageControl(int val)
    //{
    //    this.lanuageControl= val;
    //}


    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code