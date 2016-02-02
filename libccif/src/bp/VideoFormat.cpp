//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "VideoFormat.h"

#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif

// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;

// Constructor
VideoFormat::VideoFormat() {
    references= 0;


    // horizontalLine
    horizontalLine= (ui16)0;
    // verticalline
    verticalline= (ui16)0;
    // frameRate
    frameRate= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
VideoFormat::~VideoFormat() {
    // horizontalLine

    // verticalline

    // frameRate

    // bf1

}

int VideoFormat::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // horizontalLine
    {
        horizontalLine=istream.readUI16();
        retVal+=2;
    }
    // verticalline
    {
        verticalline=istream.readUI16();
        retVal+=2;
    }
    // frameRate
    {
        frameRate=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int VideoFormat::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read horizontalLine
    {
        horizontalLine=istream.readUI16();
        retVal+=2;
    }
    // read verticalline
    {
        verticalline=istream.readUI16();
        retVal+=2;
    }
    // read frameRate
    {
        frameRate=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int VideoFormat::write(DataOutputStream& ostream) { // throws IOException





    int retVal= 0;
    // write horizontalLine
    ostream.writeUI16(horizontalLine);
    retVal +=2;
    // write verticalline
    ostream.writeUI16(verticalline);
    retVal +=2;
    // write frameRate
    ostream.writeUI8(frameRate);
    retVal +=1;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int VideoFormat::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("VideoFormat\n");
    dc.increaseIndent();
    int retVal= 0;
    // write horizontalLine
    dc.indent();
    dc.getPs().print("horizontalLine=");
    dc.getPs().println((long)horizontalLine);
    // write verticalline
    dc.indent();
    dc.getPs().print("verticalline=");
    dc.getPs().println((long)verticalline);
    // write frameRate
    dc.indent();
    dc.getPs().print("frameRate=");
    dc.getPs().println((long)frameRate);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("aspectRatio: ");
        dc.getPs().printlnBin(getAspectRatio(),2);
        dc.indent();
        dc.getPs().print("progInterType: ");
        dc.getPs().printlnBin(getProgInterType(),1);
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),5);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for horizontalLine
//ui16 VideoFormat::getHorizontalLine()
//{
//return this->horizontalLine;
//}

// Setter for horizontalLine
//void VideoFormat::setHorizontalLine(ui16 val)
//{
//this->horizontalLine= val;
//}

// Getter for verticalline
//ui16 VideoFormat::getVerticalline()
//{
//return this->verticalline;
//}

// Setter for verticalline
//void VideoFormat::setVerticalline(ui16 val)
//{
//this->verticalline= val;
//}

// Getter for frameRate
//ui8 VideoFormat::getFrameRate()
//{
//return this->frameRate;
//}

// Setter for frameRate
//void VideoFormat::setFrameRate(ui8 val)
//{
//this->frameRate= val;
//}

// Getter for bf1
//ui8 VideoFormat::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void VideoFormat::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int VideoFormat::getAspectRatio( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void VideoFormat::setAspectRatio(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int VideoFormat::getProgInterType( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void VideoFormat::setProgInterType(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int VideoFormat::getReserved( ) {
    return ( this->bf1 & 0x0000001f ) >> 0 ;
}

void VideoFormat::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int VideoFormat::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::VideoFormat* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::VideoFormat* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code