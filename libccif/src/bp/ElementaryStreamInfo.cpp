//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ElementaryStreamInfo.h"

#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
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
ElementaryStreamInfo::ElementaryStreamInfo() {
    references= 0;


    // streamType
    streamType= (ui8)0;
    // bf1
    bf1 = 0;
    // caInfo
    org_himalay_ccif_CaInfo__NEW( caInfo);
}
// Destructor
ElementaryStreamInfo::~ElementaryStreamInfo() {
    // streamType

    // bf1

    // caInfo
    org_himalay_ccif_CaInfo__DELETE( caInfo);
}

int ElementaryStreamInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // streamType
    {
        streamType=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // caInfo
    {
        ui8* ba= new ui8[getElementaryStreamInfoLength()+(0)];
        int iCount = istream.read(ba,getElementaryStreamInfoLength()+(0));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += caInfo->read(*bais);
        delete bais;
    }
    return retVal;
}

int ElementaryStreamInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read streamType
    {
        streamType=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read caInfo
    {
        ui8* ba= new ui8[getElementaryStreamInfoLength()+(0)];
        int iCount = istream.read(ba,getElementaryStreamInfoLength()+(0));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += caInfo->read(*bais);
        delete bais;
    }

    return retVal;
}

int ElementaryStreamInfo::write(DataOutputStream& ostream) { // throws IOException


{   /** fix dependent sizes for caInfo **/ if ( caInfo != NULL ) {
            setElementaryStreamInfoLength((short)caInfo->getSize());
        }
    }

    int retVal= 0;
    // write streamType
    ostream.writeUI8(streamType);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write caInfo
    if ( caInfo != NULL ) {
        retVal +=caInfo->write(ostream);
    }

    return retVal;
}

int ElementaryStreamInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ElementaryStreamInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write streamType
    dc.indent();
    dc.getPs().print("streamType=");
    dc.getPs().println((long)streamType);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved2: ");
        dc.getPs().printlnBin(getReserved2(),3);
        dc.indent();
        dc.getPs().print("elementaryStreamInfoLength: ");
        dc.getPs().printlnBin(getElementaryStreamInfoLength(),13);
    }
    // write caInfo
    if ( caInfo != NULL ) {
        dc.indent();
        dc.getPs().println("caInfo") ;
        retVal +=caInfo->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for streamType
//ui8 ElementaryStreamInfo::getStreamType()
//{
//return this->streamType;
//}

// Setter for streamType
//void ElementaryStreamInfo::setStreamType(ui8 val)
//{
//this->streamType= val;
//}

// Getter for bf1
//ui16 ElementaryStreamInfo::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ElementaryStreamInfo::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for caInfo
//org_himalay_ccif_CaInfo__PTR_TYPE ElementaryStreamInfo::getCaInfo()
//{
//return this->caInfo;
//}

// Setter for caInfo
//void ElementaryStreamInfo::setCaInfo(org_himalay_ccif_CaInfo__PTR_TYPE val)
//{
//this->caInfo= val;
//}

int ElementaryStreamInfo::getReserved2( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void ElementaryStreamInfo::setReserved2(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int ElementaryStreamInfo::getElementaryStreamInfoLength( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void ElementaryStreamInfo::setElementaryStreamInfoLength(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int ElementaryStreamInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ElementaryStreamInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ElementaryStreamInfo* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code