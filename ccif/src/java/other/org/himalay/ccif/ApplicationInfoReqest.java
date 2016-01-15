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

public  class ApplicationInfoReqest extends   APDUBaseFactory.APDUBase { //Concrete type is ApplicationInfoReqest




    // members variables
    // header
    public APDUHeader header ;
    // length
    public short length ;
    // displayRow
    public int displayRow ;
    // displayColumns
    public int displayColumns ;
    // verticalScrolling
    public short verticalScrolling ;
    // horizontalScrolling
    public short horizontalScrolling ;
    // dataEntrySupport
    public short dataEntrySupport ;
    // HTMLSupport
    public short HTMLSupport ;
    // htmlCapabilities
    public HTMLCapabilities htmlCapabilities ;

        public ApplicationInfoReqest () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize displayRow
        
        // Initialize displayColumns
        
        // Initialize verticalScrolling
        
        // Initialize horizontalScrolling
        
        // Initialize dataEntrySupport
        
        // Initialize HTMLSupport
        
        // Initialize htmlCapabilities
        //Conditional, will be initialized during read
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read displayRow
        {displayRow=istream.readUnsignedShort(); retVal+=2;}
        // read displayColumns
        {displayColumns=istream.readUnsignedShort(); retVal+=2;}
        // read verticalScrolling
        {verticalScrolling=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read horizontalScrolling
        {horizontalScrolling=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read dataEntrySupport
        {dataEntrySupport=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read HTMLSupport
        {HTMLSupport=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read htmlCapabilities
        if (HTMLSupport == 1){ htmlCapabilities = new HTMLCapabilities();retVal += htmlCapabilities.read(istream);        }

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
        // read displayRow
        {displayRow=istream.readUnsignedShort(); retVal+=2;}
        // read displayColumns
        {displayColumns=istream.readUnsignedShort(); retVal+=2;}
        // read verticalScrolling
        {verticalScrolling=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read horizontalScrolling
        {horizontalScrolling=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read dataEntrySupport
        {dataEntrySupport=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read HTMLSupport
        {HTMLSupport=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read htmlCapabilities
        if (HTMLSupport == 1){ htmlCapabilities = new HTMLCapabilities();retVal += htmlCapabilities.read(istream);        }

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        
        
        
        
        { /** fix dependent sizes for htmlCapabilities **/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write displayRow
        ostream.writeShort(displayRow); retVal +=2;
        // write displayColumns
        ostream.writeShort(displayColumns); retVal +=2;
        // write verticalScrolling
        ostream.writeByte(verticalScrolling); retVal +=1;
        // write horizontalScrolling
        ostream.writeByte(horizontalScrolling); retVal +=1;
        // write dataEntrySupport
        ostream.writeByte(dataEntrySupport); retVal +=1;
        // write HTMLSupport
        ostream.writeByte(HTMLSupport); retVal +=1;
        // write htmlCapabilities
        if (htmlCapabilities!=null)retVal +=htmlCapabilities.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("ApplicationInfoReqest\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write displayRow
        dc.indent();dc.getPs().println("displayRow="+displayRow+"(0x"+ Integer.toHexString(displayRow) + ")" );
        // write displayColumns
        dc.indent();dc.getPs().println("displayColumns="+displayColumns+"(0x"+ Integer.toHexString(displayColumns) + ")" );
        // write verticalScrolling
        dc.indent();dc.getPs().println("verticalScrolling="+verticalScrolling+"(0x"+ Integer.toHexString(verticalScrolling) + ")" );
        // write horizontalScrolling
        dc.indent();dc.getPs().println("horizontalScrolling="+horizontalScrolling+"(0x"+ Integer.toHexString(horizontalScrolling) + ")" );
        // write dataEntrySupport
        dc.indent();dc.getPs().println("dataEntrySupport="+dataEntrySupport+"(0x"+ Integer.toHexString(dataEntrySupport) + ")" );
        // write HTMLSupport
        dc.indent();dc.getPs().println("HTMLSupport="+HTMLSupport+"(0x"+ Integer.toHexString(HTMLSupport) + ")" );
        // write htmlCapabilities
        if ( htmlCapabilities != null ) {dc.indent();dc.getPs().println("htmlCapabilities") ;retVal +=htmlCapabilities.dump(dc);}
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
    // Getter for displayRow
    //public int getDisplayRow()
    //{
    //    return displayRow ;
    //}

    
    // Setter for displayRow
    //public void setDisplayRow(int val)
    //{
    //    this.displayRow= val;
    //}
    // Getter for displayColumns
    //public int getDisplayColumns()
    //{
    //    return displayColumns ;
    //}

    
    // Setter for displayColumns
    //public void setDisplayColumns(int val)
    //{
    //    this.displayColumns= val;
    //}
    // Getter for verticalScrolling
    //public short getVerticalScrolling()
    //{
    //    return verticalScrolling ;
    //}

    
    // Setter for verticalScrolling
    //public void setVerticalScrolling(short val)
    //{
    //    this.verticalScrolling= val;
    //}
    // Getter for horizontalScrolling
    //public short getHorizontalScrolling()
    //{
    //    return horizontalScrolling ;
    //}

    
    // Setter for horizontalScrolling
    //public void setHorizontalScrolling(short val)
    //{
    //    this.horizontalScrolling= val;
    //}
    // Getter for dataEntrySupport
    //public short getDataEntrySupport()
    //{
    //    return dataEntrySupport ;
    //}

    
    // Setter for dataEntrySupport
    //public void setDataEntrySupport(short val)
    //{
    //    this.dataEntrySupport= val;
    //}
    // Getter for HTMLSupport
    //public short getHTMLSupport()
    //{
    //    return HTMLSupport ;
    //}

    
    // Setter for HTMLSupport
    //public void setHTMLSupport(short val)
    //{
    //    this.HTMLSupport= val;
    //}
    // Getter for htmlCapabilities
    //public HTMLCapabilities getHtmlCapabilities()
    //{
    //    return htmlCapabilities ;
    //}

    
    // Setter for htmlCapabilities
    //public void setHtmlCapabilities(HTMLCapabilities val)
    //{
    //    this.htmlCapabilities= val;
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