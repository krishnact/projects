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

public  class codeVersionTable1_3 extends   APDUBase_1Factory.APDUBase_1 { //Concrete type is codeVersionTable1_3


// member static classes
    public  static  class statusfld extends BinStruct implements PublicBinMsg{




    // members variables
    // frequencyVector
    public int frequencyVector ;
    // modulationType
    public short modulationType ;
    // bf1
    public BitField_16 bf1 ;

        // Parent of this object
codeVersionTable1_3 parent;
    public statusfld (codeVersionTable1_3 parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public codeVersionTable1_3 getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize frequencyVector
        
        // Initialize modulationType
        
        // Initialize bf1
        bf1 = new BitField_16();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read frequencyVector
        {frequencyVector=istream.readUnsignedShort(); retVal+=2;}
        // read modulationType
        {modulationType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf1
        retVal += bf1.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        
        
        
    
                // write frequencyVector
        ostream.writeShort(frequencyVector); retVal +=2;
        // write modulationType
        ostream.writeByte(modulationType); retVal +=1;
        // write bf1
        ostream.writeShort(bf1.getValue()); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("statusfld\n");
    dc.increaseIndent();
        int retVal= 0;
        // write frequencyVector
        dc.indent();dc.getPs().println("frequencyVector="+frequencyVector+"(0x"+ Integer.toHexString(frequencyVector) + ")" );
        // write modulationType
        dc.indent();dc.getPs().println("modulationType="+modulationType+"(0x"+ Integer.toHexString(modulationType) + ")" );
        // write bf1
        {dc.indent();dc.getPs().print("reserved: ");dc.getPs().println(BitField_8.toDisplayString(getReserved(),3));dc.indent();dc.getPs().print("pid: ");dc.getPs().println(BitField_8.toDisplayString(getPid(),13));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for frequencyVector
    //public int getFrequencyVector()
    //{
    //    return frequencyVector ;
    //}

    
    // Setter for frequencyVector
    //public void setFrequencyVector(int val)
    //{
    //    this.frequencyVector= val;
    //}
    // Getter for modulationType
    //public short getModulationType()
    //{
    //    return modulationType ;
    //}

    
    // Setter for modulationType
    //public void setModulationType(short val)
    //{
    //    this.modulationType= val;
    //}
    // Getter for bf1
    //public BitField_16 getBf1()
    //{
    //    return bf1 ;
    //}

    
    // Setter for bf1
    //public void setBf1(BitField_16 val)
    //{
    //    this.bf1= val;
    //}


    public int getReserved( )
    {
        return ( bf1.getValue() & 0x0000e000 ) >> 13 ;
    }
    
    
    public void setReserved(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
    }
    
    
    public int getPid( )
    {
        return ( bf1.getValue() & 0x00001fff ) >> 0 ;
    }
    
    
    public void setPid(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code
// member static classes
    public  static  class statusfld2 extends BinStruct implements PublicBinMsg{




    // members variables
    // mcAddress
    public MacAddress mcAddress ;
    // sourceIpAddress
    public IPddress sourceIpAddress ;
    // destinationIpAddress
    public IPddress destinationIpAddress ;
    // sourcePortNumber
    public int sourcePortNumber ;
    // destinatioPortNumber
    public int destinatioPortNumber ;
    // applicationId
    public int applicationId ;
    // modulationType
    public short modulationType ;
    // bf2
    public BitField_16 bf2 ;

        // Parent of this object
codeVersionTable1_3 parent;
    public statusfld2 (codeVersionTable1_3 parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public codeVersionTable1_3 getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize mcAddress
        mcAddress = new MacAddress();
        // Initialize sourceIpAddress
        sourceIpAddress = new IPddress();
        // Initialize destinationIpAddress
        destinationIpAddress = new IPddress();
        // Initialize sourcePortNumber
        
        // Initialize destinatioPortNumber
        
        // Initialize applicationId
        
        // Initialize modulationType
        
        // Initialize bf2
        bf2 = new BitField_16();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read mcAddress
        retVal += mcAddress.read(istream);
        // read sourceIpAddress
        retVal += sourceIpAddress.read(istream);
        // read destinationIpAddress
        retVal += destinationIpAddress.read(istream);
        // read sourcePortNumber
        {sourcePortNumber=istream.readUnsignedShort(); retVal+=2;}
        // read destinatioPortNumber
        {destinatioPortNumber=istream.readUnsignedShort(); retVal+=2;}
        // read applicationId
        {applicationId=istream.readUnsignedShort(); retVal+=2;}
        // read modulationType
        {modulationType=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read bf2
        retVal += bf2.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for mcAddress **/  }
        { /** fix dependent sizes for sourceIpAddress **/  }
        { /** fix dependent sizes for destinationIpAddress **/  }
        
        
        
        
        
    
                // write mcAddress
        if (mcAddress!=null)retVal +=mcAddress.write(ostream);
        // write sourceIpAddress
        if (sourceIpAddress!=null)retVal +=sourceIpAddress.write(ostream);
        // write destinationIpAddress
        if (destinationIpAddress!=null)retVal +=destinationIpAddress.write(ostream);
        // write sourcePortNumber
        ostream.writeShort(sourcePortNumber); retVal +=2;
        // write destinatioPortNumber
        ostream.writeShort(destinatioPortNumber); retVal +=2;
        // write applicationId
        ostream.writeShort(applicationId); retVal +=2;
        // write modulationType
        ostream.writeByte(modulationType); retVal +=1;
        // write bf2
        ostream.writeShort(bf2.getValue()); retVal +=2;
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("statusfld2\n");
    dc.increaseIndent();
        int retVal= 0;
        // write mcAddress
        if ( mcAddress != null ) {dc.indent();dc.getPs().println("mcAddress") ;retVal +=mcAddress.dump(dc);}
        // write sourceIpAddress
        if ( sourceIpAddress != null ) {dc.indent();dc.getPs().println("sourceIpAddress") ;retVal +=sourceIpAddress.dump(dc);}
        // write destinationIpAddress
        if ( destinationIpAddress != null ) {dc.indent();dc.getPs().println("destinationIpAddress") ;retVal +=destinationIpAddress.dump(dc);}
        // write sourcePortNumber
        dc.indent();dc.getPs().println("sourcePortNumber="+sourcePortNumber+"(0x"+ Integer.toHexString(sourcePortNumber) + ")" );
        // write destinatioPortNumber
        dc.indent();dc.getPs().println("destinatioPortNumber="+destinatioPortNumber+"(0x"+ Integer.toHexString(destinatioPortNumber) + ")" );
        // write applicationId
        dc.indent();dc.getPs().println("applicationId="+applicationId+"(0x"+ Integer.toHexString(applicationId) + ")" );
        // write modulationType
        dc.indent();dc.getPs().println("modulationType="+modulationType+"(0x"+ Integer.toHexString(modulationType) + ")" );
        // write bf2
        {dc.indent();dc.getPs().print("pid: ");dc.getPs().println(BitField_8.toDisplayString(getPid(),13));}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for mcAddress
    //public MacAddress getMcAddress()
    //{
    //    return mcAddress ;
    //}

    
    // Setter for mcAddress
    //public void setMcAddress(MacAddress val)
    //{
    //    this.mcAddress= val;
    //}
    // Getter for sourceIpAddress
    //public IPddress getSourceIpAddress()
    //{
    //    return sourceIpAddress ;
    //}

    
    // Setter for sourceIpAddress
    //public void setSourceIpAddress(IPddress val)
    //{
    //    this.sourceIpAddress= val;
    //}
    // Getter for destinationIpAddress
    //public IPddress getDestinationIpAddress()
    //{
    //    return destinationIpAddress ;
    //}

    
    // Setter for destinationIpAddress
    //public void setDestinationIpAddress(IPddress val)
    //{
    //    this.destinationIpAddress= val;
    //}
    // Getter for sourcePortNumber
    //public int getSourcePortNumber()
    //{
    //    return sourcePortNumber ;
    //}

    
    // Setter for sourcePortNumber
    //public void setSourcePortNumber(int val)
    //{
    //    this.sourcePortNumber= val;
    //}
    // Getter for destinatioPortNumber
    //public int getDestinatioPortNumber()
    //{
    //    return destinatioPortNumber ;
    //}

    
    // Setter for destinatioPortNumber
    //public void setDestinatioPortNumber(int val)
    //{
    //    this.destinatioPortNumber= val;
    //}
    // Getter for applicationId
    //public int getApplicationId()
    //{
    //    return applicationId ;
    //}

    
    // Setter for applicationId
    //public void setApplicationId(int val)
    //{
    //    this.applicationId= val;
    //}
    // Getter for modulationType
    //public short getModulationType()
    //{
    //    return modulationType ;
    //}

    
    // Setter for modulationType
    //public void setModulationType(short val)
    //{
    //    this.modulationType= val;
    //}
    // Getter for bf2
    //public BitField_16 getBf2()
    //{
    //    return bf2 ;
    //}

    
    // Setter for bf2
    //public void setBf2(BitField_16 val)
    //{
    //    this.bf2= val;
    //}


    public int getPid( )
    {
        return ( bf2.getValue() & 0x00001fff ) >> 0 ;
    }
    
    
    public void setPid(int val)
    {
        bf2.setValue ( (bf2.getValue() & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
    }
    
    
    public int getSize() throws IOException
    {
       DataOutputStream dos= new DataOutputStream(new NullStream());
       return this.write(dos);
    }
    
        

}

// End of code
// member static classes
    public  static  class statusfld3 extends BinStruct implements PublicBinMsg{




    // members variables
    // ftpServerAddress
    public IPddress ftpServerAddress ;

        // Parent of this object
codeVersionTable1_3 parent;
    public statusfld3 (codeVersionTable1_3 parent) // throws Exception
    {
        this.parent= parent;
            init();
    }
        public codeVersionTable1_3 getParent()
    {
        return parent;
    }
    
    private void init()
    {
        // Initialize ftpServerAddress
        ftpServerAddress = new IPddress();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
     return read(istream);
       }
   
    public int read(DataInputStream istream) throws IOException 
    {
    preRead();
        int retVal= 0;

                     // read ftpServerAddress
        retVal += ftpServerAddress.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for ftpServerAddress **/  }
    
                // write ftpServerAddress
        if (ftpServerAddress!=null)retVal +=ftpServerAddress.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("statusfld3\n");
    dc.increaseIndent();
        int retVal= 0;
        // write ftpServerAddress
        if ( ftpServerAddress != null ) {dc.indent();dc.getPs().println("ftpServerAddress") ;retVal +=ftpServerAddress.dump(dc);}
dc.decreaseIndent();
        return retVal;
    }


        // Getter for ftpServerAddress
    //public IPddress getFtpServerAddress()
    //{
    //    return ftpServerAddress ;
    //}

    
    // Setter for ftpServerAddress
    //public void setFtpServerAddress(IPddress val)
    //{
    //    this.ftpServerAddress= val;
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
    // configurationCountChange
    public short configurationCountChange ;
    // statusField
    public short statusField ;
    // pgmmsg
    public ArrayList<codeVersionTableMsg> pgmmsg ;
    // bf1
    public BitField_8 bf1 ;
    // statusfldInstance
    public statusfld statusfldInstance ;
    // statusfld2Instance
    public statusfld2 statusfld2Instance ;
    // statusfld3Instance
    public statusfld3 statusfld3Instance ;
    // codeFileByte
    public ByteArray codeFileByte ;
    // codeVeriFicationCertiFication
    public CodeVeriFicationCertiFication codeVeriFicationCertiFication ;

        public codeVersionTable1_3 () // throws Exception
    {
            init();
    }
    
    private void init()
    {
        // Initialize header
        header = new APDUHeader();
        // Initialize length
        
        // Initialize configurationCountChange
        
        // Initialize statusField
        
        // Initialize pgmmsg
        pgmmsg= new ArrayList<codeVersionTableMsg>();pgmmsg.setMemberSize(0);
        // Initialize bf1
        bf1 = new BitField_8();
        // Initialize statusfldInstance
        //Conditional, will be initialized during read
        // Initialize statusfld2Instance
        //Conditional, will be initialized during read
        // Initialize statusfld3Instance
        //Conditional, will be initialized during read
        // Initialize codeFileByte
        codeFileByte= new ByteArray();codeFileByte.setSizeType("FIRST_UI8");
        // Initialize codeVeriFicationCertiFication
        codeVeriFicationCertiFication = new CodeVeriFicationCertiFication();
    }

    public int readNoHeader(DataInputStream istream) throws IOException 
    {
    
  preRead();
    int retVal= 0;
                // read length
        {length=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read configurationCountChange
        {configurationCountChange=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read pgmmsg
        for (; istream.available() > 0 ; ){     codeVersionTableMsg temp;    temp = new codeVersionTableMsg();    retVal += temp.read(istream);    pgmmsg.add(temp);}
        // read bf1
        retVal += bf1.read(istream);
        // read statusfldInstance
        if (getDownload_type()==0x00){ statusfldInstance = new statusfld(this);retVal += statusfldInstance.read(istream);        }
        // read statusfld2Instance
        if (getDownload_type()==0x01){ statusfld2Instance = new statusfld2(this);retVal += statusfld2Instance.read(istream);        }
        // read statusfld3Instance
        if (getDownload_type()==0x02){ statusfld3Instance = new statusfld3(this);retVal += statusfld3Instance.read(istream);        }
        // read codeFileByte
        {retVal+=codeFileByte.read(istream); }
        // read codeVeriFicationCertiFication
        retVal += codeVeriFicationCertiFication.read(istream);

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
        // read configurationCountChange
        {configurationCountChange=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read statusField
        {statusField=(short)(istream.readUnsignedByte()); retVal+=1;}
        // read pgmmsg
        for (; istream.available() > 0 ; ){     codeVersionTableMsg temp;    temp = new codeVersionTableMsg();    retVal += temp.read(istream);    pgmmsg.add(temp);}
        // read bf1
        retVal += bf1.read(istream);
        // read statusfldInstance
        if (getDownload_type()==0x00){ statusfldInstance = new statusfld(this);retVal += statusfldInstance.read(istream);        }
        // read statusfld2Instance
        if (getDownload_type()==0x01){ statusfld2Instance = new statusfld2(this);retVal += statusfld2Instance.read(istream);        }
        // read statusfld3Instance
        if (getDownload_type()==0x02){ statusfld3Instance = new statusfld3(this);retVal += statusfld3Instance.read(istream);        }
        // read codeFileByte
        {retVal+=codeFileByte.read(istream); }
        // read codeVeriFicationCertiFication
        retVal += codeVeriFicationCertiFication.read(istream);

        postRead();
        return retVal;
    }


    public int write(DataOutputStream ostream) throws IOException 
    {
    preWrite();
        int retVal= 0;

        { /** fix dependent sizes for header **/  }
        
        
        
        { /** fix dependent sizes for pgmmsg**/  }
        
        { /** fix dependent sizes for statusfldInstance **/  }
        { /** fix dependent sizes for statusfld2Instance **/  }
        { /** fix dependent sizes for statusfld3Instance **/  }
        { /** fix dependent sizes for codeFileByte**/  }
        { /** fix dependent sizes for codeVeriFicationCertiFication **/  }
    
                // write header
        if (header!=null)retVal +=header.write(ostream);
        // write length
        ostream.writeByte(length); retVal +=1;
        // write configurationCountChange
        ostream.writeByte(configurationCountChange); retVal +=1;
        // write statusField
        ostream.writeByte(statusField); retVal +=1;
        // write pgmmsg
        {ArrayList<codeVersionTableMsg> temp1 = pgmmsg;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     codeVersionTableMsg temp2    =    temp1.get(iIdx);    if (temp2!=null)retVal +=temp2.write(ostream);}}
        // write bf1
        ostream.writeByte(bf1.getValue()); retVal +=1;
        // write statusfldInstance
        if (statusfldInstance!=null)retVal +=statusfldInstance.write(ostream);
        // write statusfld2Instance
        if (statusfld2Instance!=null)retVal +=statusfld2Instance.write(ostream);
        // write statusfld3Instance
        if (statusfld3Instance!=null)retVal +=statusfld3Instance.write(ostream);
        // write codeFileByte
        {retVal += codeFileByte.write(ostream);}
        // write codeVeriFicationCertiFication
        if (codeVeriFicationCertiFication!=null)retVal +=codeVeriFicationCertiFication.write(ostream);
postWrite();
        return retVal;
    }
    
    public int dump(DumpContext dc) throws IOException 
    {
        dc.indent();dc.getPs().print("codeVersionTable1_3\n");
    dc.increaseIndent();
        int retVal= 0;
        // write header
        if ( header != null ) {dc.indent();dc.getPs().println("header") ;retVal +=header.dump(dc);}
        // write length
        dc.indent();dc.getPs().println("length="+length+"(0x"+ Integer.toHexString(length) + ")" );
        // write configurationCountChange
        dc.indent();dc.getPs().println("configurationCountChange="+configurationCountChange+"(0x"+ Integer.toHexString(configurationCountChange) + ")" );
        // write statusField
        dc.indent();dc.getPs().println("statusField="+statusField+"(0x"+ Integer.toHexString(statusField) + ")" );
        // write pgmmsg
        { ArrayList<codeVersionTableMsg> temp1 = pgmmsg;for (int iIdx=0; iIdx < temp1.getCount() ; iIdx++){     codeVersionTableMsg element    = temp1.get(iIdx); dc.indent(); dc.getPs().println(iIdx);    if ( element != null ) {dc.indent();dc.getPs().println("element") ;retVal +=element.dump(dc);}}}
        // write bf1
        {dc.indent();dc.getPs().print("download_type: ");dc.getPs().println(BitField_8.toDisplayString(getDownload_type(),4));dc.indent();dc.getPs().print("downloadCommand: ");dc.getPs().println(BitField_8.toDisplayString(getDownloadCommand(),4));}
        // write statusfldInstance
        if ( statusfldInstance != null ) {dc.indent();dc.getPs().println("statusfldInstance") ;retVal +=statusfldInstance.dump(dc);}
        // write statusfld2Instance
        if ( statusfld2Instance != null ) {dc.indent();dc.getPs().println("statusfld2Instance") ;retVal +=statusfld2Instance.dump(dc);}
        // write statusfld3Instance
        if ( statusfld3Instance != null ) {dc.indent();dc.getPs().println("statusfld3Instance") ;retVal +=statusfld3Instance.dump(dc);}
        // write codeFileByte
        dc.indent();dc.getPs().print("codeFileByte: "+codeFileByte.getSize()+"(0x"+Integer.toHexString(codeFileByte.getSize())+")\n");this.codeFileByte.dump(dc);
        // write codeVeriFicationCertiFication
        if ( codeVeriFicationCertiFication != null ) {dc.indent();dc.getPs().println("codeVeriFicationCertiFication") ;retVal +=codeVeriFicationCertiFication.dump(dc);}
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
    // Getter for configurationCountChange
    //public short getConfigurationCountChange()
    //{
    //    return configurationCountChange ;
    //}

    
    // Setter for configurationCountChange
    //public void setConfigurationCountChange(short val)
    //{
    //    this.configurationCountChange= val;
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
    // Getter for pgmmsg
    //public ArrayList<codeVersionTableMsg> getPgmmsg()
    //{
    //    return pgmmsg ;
    //}

    
    // Setter for pgmmsg
    //public void setPgmmsg(ArrayList<codeVersionTableMsg> val)
    //{
    //    this.pgmmsg= val;
    //}
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
    // Getter for statusfld2Instance
    //public statusfld2 getStatusfld2Instance()
    //{
    //    return statusfld2Instance ;
    //}

    
    // Setter for statusfld2Instance
    //public void setStatusfld2Instance(statusfld2 val)
    //{
    //    this.statusfld2Instance= val;
    //}
    // Getter for statusfld3Instance
    //public statusfld3 getStatusfld3Instance()
    //{
    //    return statusfld3Instance ;
    //}

    
    // Setter for statusfld3Instance
    //public void setStatusfld3Instance(statusfld3 val)
    //{
    //    this.statusfld3Instance= val;
    //}
    // Getter for codeFileByte
    //public ByteArray getCodeFileByte()
    //{
    //    return codeFileByte ;
    //}

    
    // Setter for codeFileByte
    //public void setCodeFileByte(ByteArray val)
    //{
    //    this.codeFileByte= val;
    //}
    // Getter for codeVeriFicationCertiFication
    //public CodeVeriFicationCertiFication getCodeVeriFicationCertiFication()
    //{
    //    return codeVeriFicationCertiFication ;
    //}

    
    // Setter for codeVeriFicationCertiFication
    //public void setCodeVeriFicationCertiFication(CodeVeriFicationCertiFication val)
    //{
    //    this.codeVeriFicationCertiFication= val;
    //}


    public int addToPgmmsg(codeVersionTableMsg val)
    {
            pgmmsg.add(val); return pgmmsg.size();
    }
    
    
    public int removeFromPgmmsg(codeVersionTableMsg val)
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
    
    
    public int getDownload_type( )
    {
        return ( bf1.getValue() & 0x000000f0 ) >> 4 ;
    }
    
    
    public void setDownload_type(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
    }
    
    
    public int getDownloadCommand( )
    {
        return ( bf1.getValue() & 0x0000000f ) >> 0 ;
    }
    
    
    public void setDownloadCommand(int val)
    {
        bf1.setValue ( (bf1.getValue() & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
    }
    
    
    public void setCodeFileByte(byte[] val)
    {
        this.codeFileByte.setData(val);
    }
    
    
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