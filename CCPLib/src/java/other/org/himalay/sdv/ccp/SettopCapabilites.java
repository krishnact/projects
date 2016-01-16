// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.Exception;
import java.io.ByteArrayInputStream;
import java.io.PrintStream;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SettopCapabilites extends SDVDescriptorFactory.SDVDescriptor { // Concrete
    // type
    // is
    // SettopCapabilites

    // member static classes
    public static class TunerLoopData extends BinStruct implements PublicBinMsg {

        // members variables
        // tunerId
        public short tunerId;
        // reserved
        public int reserved;
        // videroDecodeBitmap
        public int videroDecodeBitmap;
        // audioDecodeBitmap
        public int audioDecodeBitmap;

        // Parent of this object
        SettopCapabilites parent;
        public TunerLoopData(SettopCapabilites parent) // throws Exception
        {
            this.parent = parent;
            init();
        }
        public SettopCapabilites getParent() {
            return parent;
        }

        private void init() {
            // Initialize tunerId

            // Initialize reserved

            // Initialize videroDecodeBitmap

            // Initialize audioDecodeBitmap

        }

        public int readNoHeader(DataInputStream istream) throws IOException {

            return read(istream);
        }

        public int read(DataInputStream istream) throws IOException {
            preRead();
            int retVal = 0;

            // read tunerId
            {
                tunerId = (short) (istream.readUnsignedByte());
                retVal += 1;
            }
            // read reserved
            {
                reserved = BinPrimitive.readUI24(istream);
                retVal += 3;
            }
            // read videroDecodeBitmap
            {
                videroDecodeBitmap = istream.readUnsignedShort();
                retVal += 2;
            }
            // read audioDecodeBitmap
            {
                audioDecodeBitmap = istream.readUnsignedShort();
                retVal += 2;
            }

            postRead();
            return retVal;
        }

        public int write(DataOutputStream ostream) throws IOException {
            preWrite();
            int retVal = 0;

            // write tunerId
            ostream.writeByte(tunerId);
            retVal += 1;
            // write reserved
            {
                ostream.writeByte((reserved & 0x00FF0000) >> 16);
                ostream.writeShort((reserved & 0x0000FFFF));
                retVal += 3;
            }
            // write videroDecodeBitmap
            ostream.writeShort(videroDecodeBitmap);
            retVal += 2;
            // write audioDecodeBitmap
            ostream.writeShort(audioDecodeBitmap);
            retVal += 2;
            postWrite();
            return retVal;
        }

        public int dump(DumpContext dc) throws IOException {
            dc.indent();
            dc.getPs().print("TunerLoopData\n");
            dc.increaseIndent();
            int retVal = 0;
            // write tunerId
            dc.indent();
            dc.getPs().println(
                "tunerId=" + tunerId + "(0x" + Integer.toHexString(tunerId)
                + ")");
            // write reserved
            dc.indent();
            dc.getPs().println(
                "reserved=" + reserved + "(0x"
                + Integer.toHexString(reserved) + ")");
            // write videroDecodeBitmap
            dc.indent();
            dc.getPs().println(
                "videroDecodeBitmap=" + videroDecodeBitmap + "(0x"
                + Integer.toHexString(videroDecodeBitmap) + ")");
            // write audioDecodeBitmap
            dc.indent();
            dc.getPs().println(
                "audioDecodeBitmap=" + audioDecodeBitmap + "(0x"
                + Integer.toHexString(audioDecodeBitmap) + ")");
            dc.decreaseIndent();
            return retVal;
        }

        // Getter for tunerId
        // public short getTunerId()
        // {
        // return tunerId ;
        // }

        // Setter for tunerId
        // public void setTunerId(short val)
        // {
        // this.tunerId= val;
        // }
        // Getter for reserved
        // public int getReserved()
        // {
        // return reserved ;
        // }

        // Setter for reserved
        // public void setReserved(int val)
        // {
        // this.reserved= val;
        // }
        // Getter for videroDecodeBitmap
        // public int getVideroDecodeBitmap()
        // {
        // return videroDecodeBitmap ;
        // }

        // Setter for videroDecodeBitmap
        // public void setVideroDecodeBitmap(int val)
        // {
        // this.videroDecodeBitmap= val;
        // }
        // Getter for audioDecodeBitmap
        // public int getAudioDecodeBitmap()
        // {
        // return audioDecodeBitmap ;
        // }

        // Setter for audioDecodeBitmap
        // public void setAudioDecodeBitmap(int val)
        // {
        // this.audioDecodeBitmap= val;
        // }

        public int getSize() throws IOException {
            DataOutputStream dos = new DataOutputStream(new NullStream());
            return this.write(dos);
        }

    }

    // End of code

    // members variables
    // header
    public resourceHeader header;
    // length
    public int length;
    // screenFlags
    public long screenFlags;
    // caSystemBitmap
    public int caSystemBitmap;
    // caSystemID
    public int caSystemID;
    // networkBitmap
    public int networkBitmap;
    // dvrSize
    public int dvrSize;
    // Reserved1
    public int Reserved1;
    // totalTunerCount
    public short totalTunerCount;
    // tunerLoopCount
    public short tunerLoopCount;
    // tuneLoop
    public ArrayList<TunerLoopData> tuneLoop;

    public SettopCapabilites() // throws Exception
    {
        init();
    }

    private void init() {
        // Initialize header
        header = new resourceHeader();
        // Initialize length

        // Initialize screenFlags

        // Initialize caSystemBitmap

        // Initialize caSystemID

        // Initialize networkBitmap

        // Initialize dvrSize

        // Initialize Reserved1

        // Initialize totalTunerCount

        // Initialize tunerLoopCount

        // Initialize tuneLoop
        tuneLoop = new ArrayList<TunerLoopData>();
        tuneLoop.setMemberSize(0);
    }

    public int readNoHeader(DataInputStream istream) throws IOException {

        preRead();
        int retVal = 0;
        // read length
        {
            length = istream.readUnsignedShort();
            retVal += 2;
        }
        // read screenFlags
        {
            screenFlags = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read caSystemBitmap
        {
            caSystemBitmap = istream.readUnsignedShort();
            retVal += 2;
        }
        // read caSystemID
        {
            caSystemID = istream.readUnsignedShort();
            retVal += 2;
        }
        // read networkBitmap
        {
            networkBitmap = istream.readUnsignedShort();
            retVal += 2;
        }
        // read dvrSize
        {
            dvrSize = istream.readUnsignedShort();
            retVal += 2;
        }
        // read Reserved1
        {
            Reserved1 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read totalTunerCount
        {
            totalTunerCount = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tunerLoopCount
        {
            tunerLoopCount = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tuneLoop
        for (int iIdx = 0; iIdx < tunerLoopCount + (0); iIdx++) {
            TunerLoopData temp;
            temp = new TunerLoopData(this);
            retVal += temp.read(istream);
            tuneLoop.add(temp);
        }

        postRead();
        return retVal;
    }

    public int read(DataInputStream istream) throws IOException {
        preRead();
        int retVal = 0;

        // read header
        retVal += header.read(istream);
        // read length
        {
            length = istream.readUnsignedShort();
            retVal += 2;
        }
        // read screenFlags
        {
            screenFlags = (long) (BinPrimitive.readUI32(istream));
            retVal += 4;
        }
        // read caSystemBitmap
        {
            caSystemBitmap = istream.readUnsignedShort();
            retVal += 2;
        }
        // read caSystemID
        {
            caSystemID = istream.readUnsignedShort();
            retVal += 2;
        }
        // read networkBitmap
        {
            networkBitmap = istream.readUnsignedShort();
            retVal += 2;
        }
        // read dvrSize
        {
            dvrSize = istream.readUnsignedShort();
            retVal += 2;
        }
        // read Reserved1
        {
            Reserved1 = istream.readUnsignedShort();
            retVal += 2;
        }
        // read totalTunerCount
        {
            totalTunerCount = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tunerLoopCount
        {
            tunerLoopCount = (short) (istream.readUnsignedByte());
            retVal += 1;
        }
        // read tuneLoop
        for (int iIdx = 0; iIdx < tunerLoopCount + (0); iIdx++) {
            TunerLoopData temp;
            temp = new TunerLoopData(this);
            retVal += temp.read(istream);
            tuneLoop.add(temp);
        }

        postRead();
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;

        {
            /** fix dependent sizes for header **/
        }

        {
            /** fix dependent sizes for tuneLoop **/
            tunerLoopCount = ((short) tuneLoop.getCount());
        }

        // write header
        if (header != null)
            retVal += header.write(ostream);
        // write length
        ostream.writeShort(length);
        retVal += 2;
        // write screenFlags
        BinPrimitive.writeUI32(ostream, screenFlags);
        retVal += 4;
        // write caSystemBitmap
        ostream.writeShort(caSystemBitmap);
        retVal += 2;
        // write caSystemID
        ostream.writeShort(caSystemID);
        retVal += 2;
        // write networkBitmap
        ostream.writeShort(networkBitmap);
        retVal += 2;
        // write dvrSize
        ostream.writeShort(dvrSize);
        retVal += 2;
        // write Reserved1
        ostream.writeShort(Reserved1);
        retVal += 2;
        // write totalTunerCount
        ostream.writeByte(totalTunerCount);
        retVal += 1;
        // write tunerLoopCount
        ostream.writeByte(tunerLoopCount);
        retVal += 1;
        // write tuneLoop
        {
            ArrayList<TunerLoopData> temp1 = tuneLoop;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                TunerLoopData temp2 = temp1.get(iIdx);
                if (temp2 != null)
                    retVal += temp2.write(ostream);
            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("SettopCapabilites\n");
        dc.increaseIndent();
        int retVal = 0;
        // write header
        if (header != null) {
            dc.indent();
            dc.getPs().println("header");
            retVal += header.dump(dc);
        }
        // write length
        dc.indent();
        dc.getPs().println(
            "length=" + length + "(0x" + Integer.toHexString(length) + ")");
        // write screenFlags
        dc.indent();
        dc.getPs().println(
            "screenFlags=" + screenFlags + "(0x"
            + Long.toHexString(screenFlags) + ")");
        // write caSystemBitmap
        dc.indent();
        dc.getPs().println(
            "caSystemBitmap=" + caSystemBitmap + "(0x"
            + Integer.toHexString(caSystemBitmap) + ")");
        // write caSystemID
        dc.indent();
        dc.getPs().println(
            "caSystemID=" + caSystemID + "(0x"
            + Integer.toHexString(caSystemID) + ")");
        // write networkBitmap
        dc.indent();
        dc.getPs().println(
            "networkBitmap=" + networkBitmap + "(0x"
            + Integer.toHexString(networkBitmap) + ")");
        // write dvrSize
        dc.indent();
        dc.getPs().println(
            "dvrSize=" + dvrSize + "(0x" + Integer.toHexString(dvrSize)
            + ")");
        // write Reserved1
        dc.indent();
        dc.getPs().println(
            "Reserved1=" + Reserved1 + "(0x"
            + Integer.toHexString(Reserved1) + ")");
        // write totalTunerCount
        dc.indent();
        dc.getPs().println(
            "totalTunerCount=" + totalTunerCount + "(0x"
            + Integer.toHexString(totalTunerCount) + ")");
        // write tunerLoopCount
        dc.indent();
        dc.getPs().println(
            "tunerLoopCount=" + tunerLoopCount + "(0x"
            + Integer.toHexString(tunerLoopCount) + ")");
        // write tuneLoop
        {
            ArrayList<TunerLoopData> temp1 = tuneLoop;
            for (int iIdx = 0; iIdx < temp1.getCount(); iIdx++) {
                TunerLoopData element = temp1.get(iIdx);
                dc.indent();
                dc.getPs().println(iIdx);
                if (element != null) {
                    dc.indent();
                    dc.getPs().println("element");
                    retVal += element.dump(dc);
                }
            }
        }
        dc.decreaseIndent();
        return retVal;
    }

    // Getter for header
    // public resourceHeader getHeader()
    // {
    // return header ;
    // }

    // Setter for header
    // public void setHeader(resourceHeader val)
    // {
    // this.header= val;
    // }
    // Getter for length
    // public int getLength()
    // {
    // return length ;
    // }

    // Setter for length
    // public void setLength(int val)
    // {
    // this.length= val;
    // }
    // Getter for screenFlags
    // public long getScreenFlags()
    // {
    // return screenFlags ;
    // }

    // Setter for screenFlags
    // public void setScreenFlags(long val)
    // {
    // this.screenFlags= val;
    // }
    // Getter for caSystemBitmap
    // public int getCaSystemBitmap()
    // {
    // return caSystemBitmap ;
    // }

    // Setter for caSystemBitmap
    // public void setCaSystemBitmap(int val)
    // {
    // this.caSystemBitmap= val;
    // }
    // Getter for caSystemID
    // public int getCaSystemID()
    // {
    // return caSystemID ;
    // }

    // Setter for caSystemID
    // public void setCaSystemID(int val)
    // {
    // this.caSystemID= val;
    // }
    // Getter for networkBitmap
    // public int getNetworkBitmap()
    // {
    // return networkBitmap ;
    // }

    // Setter for networkBitmap
    // public void setNetworkBitmap(int val)
    // {
    // this.networkBitmap= val;
    // }
    // Getter for dvrSize
    // public int getDvrSize()
    // {
    // return dvrSize ;
    // }

    // Setter for dvrSize
    // public void setDvrSize(int val)
    // {
    // this.dvrSize= val;
    // }
    // Getter for Reserved1
    // public int getReserved1()
    // {
    // return Reserved1 ;
    // }

    // Setter for Reserved1
    // public void setReserved1(int val)
    // {
    // this.Reserved1= val;
    // }
    // Getter for totalTunerCount
    // public short getTotalTunerCount()
    // {
    // return totalTunerCount ;
    // }

    // Setter for totalTunerCount
    // public void setTotalTunerCount(short val)
    // {
    // this.totalTunerCount= val;
    // }
    // Getter for tunerLoopCount
    // public short getTunerLoopCount()
    // {
    // return tunerLoopCount ;
    // }

    // Setter for tunerLoopCount
    // public void setTunerLoopCount(short val)
    // {
    // this.tunerLoopCount= val;
    // }
    // Getter for tuneLoop
    // public ArrayList<TunerLoopData> getTuneLoop()
    // {
    // return tuneLoop ;
    // }

    // Setter for tuneLoop
    // public void setTuneLoop(ArrayList<TunerLoopData> val)
    // {
    // this.tuneLoop= val;
    // }

    public int addToTuneLoop(TunerLoopData val) {
        tuneLoop.add(val);
        return tuneLoop.size();
    }

    public int removeFromTuneLoop(TunerLoopData val) {
        tuneLoop.remove(val);
        return tuneLoop.size();
    }

    public int removeNthFromTuneLoop(int idx) {
        tuneLoop.remove(idx);
        return tuneLoop.size();
    }

    public int emptyTuneLoop(int idx) {
        tuneLoop.clear();
        return tuneLoop.size();
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

    public void setHeader(resourceHeader header) {
        this.header = header;
    }

    public resourceHeader getHeader() {
        return this.header;
    }

}

// End of code