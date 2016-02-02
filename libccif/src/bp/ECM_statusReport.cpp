//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ECM_statusReport.h"

#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
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
ECM_statusReport::ECM_statusReport() {
    references= 0;


    // downstreamCenterFreq
    downstreamCenterFreq= (ui16)0;
    // downstreamPowerLevel
    downstreamPowerLevel= (ui16)0;
    // bf1
    bf1 = 0;
    // upstreamXmtCenterFreq
    upstreamXmtCenterFreq= (ui16)0;
    // upstreamPowerLevel
    upstreamPowerLevel= (ui16)0;
    // upstreamSymbolRate
    upstreamSymbolRate= (ui8)0;
}
// Destructor
ECM_statusReport::~ECM_statusReport() {
    // downstreamCenterFreq

    // downstreamPowerLevel

    // bf1

    // upstreamXmtCenterFreq

    // upstreamPowerLevel

    // upstreamSymbolRate

}

int ECM_statusReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // downstreamCenterFreq
    {
        downstreamCenterFreq=istream.readUI16();
        retVal+=2;
    }
    // downstreamPowerLevel
    {
        downstreamPowerLevel=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // upstreamXmtCenterFreq
    {
        upstreamXmtCenterFreq=istream.readUI16();
        retVal+=2;
    }
    // upstreamPowerLevel
    {
        upstreamPowerLevel=istream.readUI16();
        retVal+=2;
    }
    // upstreamSymbolRate
    {
        upstreamSymbolRate=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int ECM_statusReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read downstreamCenterFreq
    {
        downstreamCenterFreq=istream.readUI16();
        retVal+=2;
    }
    // read downstreamPowerLevel
    {
        downstreamPowerLevel=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read upstreamXmtCenterFreq
    {
        upstreamXmtCenterFreq=istream.readUI16();
        retVal+=2;
    }
    // read upstreamPowerLevel
    {
        upstreamPowerLevel=istream.readUI16();
        retVal+=2;
    }
    // read upstreamSymbolRate
    {
        upstreamSymbolRate=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int ECM_statusReport::write(DataOutputStream& ostream) { // throws IOException







    int retVal= 0;
    // write downstreamCenterFreq
    ostream.writeUI16(downstreamCenterFreq);
    retVal +=2;
    // write downstreamPowerLevel
    ostream.writeUI16(downstreamPowerLevel);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write upstreamXmtCenterFreq
    ostream.writeUI16(upstreamXmtCenterFreq);
    retVal +=2;
    // write upstreamPowerLevel
    ostream.writeUI16(upstreamPowerLevel);
    retVal +=2;
    // write upstreamSymbolRate
    ostream.writeUI8(upstreamSymbolRate);
    retVal +=1;

    return retVal;
}

int ECM_statusReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ECM_statusReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write downstreamCenterFreq
    dc.indent();
    dc.getPs().print("downstreamCenterFreq=");
    dc.getPs().println((long)downstreamCenterFreq);
    // write downstreamPowerLevel
    dc.indent();
    dc.getPs().print("downstreamPowerLevel=");
    dc.getPs().println((long)downstreamPowerLevel);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("downstreamCarrierLockStatus: ");
        dc.getPs().printlnBin(getDownstreamCarrierLockStatus(),1);
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
        dc.indent();
        dc.getPs().print("channel_s_cdmaStatus: ");
        dc.getPs().printlnBin(getChannel_s_cdmaStatus(),2);
        dc.indent();
        dc.getPs().print("upstreamModulationType: ");
        dc.getPs().printlnBin(getUpstreamModulationType(),3);
    }
    // write upstreamXmtCenterFreq
    dc.indent();
    dc.getPs().print("upstreamXmtCenterFreq=");
    dc.getPs().println((long)upstreamXmtCenterFreq);
    // write upstreamPowerLevel
    dc.indent();
    dc.getPs().print("upstreamPowerLevel=");
    dc.getPs().println((long)upstreamPowerLevel);
    // write upstreamSymbolRate
    dc.indent();
    dc.getPs().print("upstreamSymbolRate=");
    dc.getPs().println((long)upstreamSymbolRate);
    dc.decreaseIndent();
    return retVal;
}


// Getter for downstreamCenterFreq
//ui16 ECM_statusReport::getDownstreamCenterFreq()
//{
//return this->downstreamCenterFreq;
//}

// Setter for downstreamCenterFreq
//void ECM_statusReport::setDownstreamCenterFreq(ui16 val)
//{
//this->downstreamCenterFreq= val;
//}

// Getter for downstreamPowerLevel
//ui16 ECM_statusReport::getDownstreamPowerLevel()
//{
//return this->downstreamPowerLevel;
//}

// Setter for downstreamPowerLevel
//void ECM_statusReport::setDownstreamPowerLevel(ui16 val)
//{
//this->downstreamPowerLevel= val;
//}

// Getter for bf1
//ui8 ECM_statusReport::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ECM_statusReport::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for upstreamXmtCenterFreq
//ui16 ECM_statusReport::getUpstreamXmtCenterFreq()
//{
//return this->upstreamXmtCenterFreq;
//}

// Setter for upstreamXmtCenterFreq
//void ECM_statusReport::setUpstreamXmtCenterFreq(ui16 val)
//{
//this->upstreamXmtCenterFreq= val;
//}

// Getter for upstreamPowerLevel
//ui16 ECM_statusReport::getUpstreamPowerLevel()
//{
//return this->upstreamPowerLevel;
//}

// Setter for upstreamPowerLevel
//void ECM_statusReport::setUpstreamPowerLevel(ui16 val)
//{
//this->upstreamPowerLevel= val;
//}

// Getter for upstreamSymbolRate
//ui8 ECM_statusReport::getUpstreamSymbolRate()
//{
//return this->upstreamSymbolRate;
//}

// Setter for upstreamSymbolRate
//void ECM_statusReport::setUpstreamSymbolRate(ui8 val)
//{
//this->upstreamSymbolRate= val;
//}

int ECM_statusReport::getDownstreamCarrierLockStatus( ) {
    return ( this->bf1 & 0x00000080 ) >> 7 ;
}

void ECM_statusReport::setDownstreamCarrierLockStatus(int val) {
    bf1=(  (this->bf1 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int ECM_statusReport::getReserved( ) {
    return ( this->bf1 & 0x00000060 ) >> 5 ;
}

void ECM_statusReport::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff9f) | ( (val << 5 ) & 0x00000060));
}

int ECM_statusReport::getChannel_s_cdmaStatus( ) {
    return ( this->bf1 & 0x00000018 ) >> 3 ;
}

void ECM_statusReport::setChannel_s_cdmaStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffe7) | ( (val << 3 ) & 0x00000018));
}

int ECM_statusReport::getUpstreamModulationType( ) {
    return ( this->bf1 & 0x00000007 ) >> 0 ;
}

void ECM_statusReport::setUpstreamModulationType(int val) {
    bf1=(  (this->bf1 & 0xfffffff8) | ( (val << 0 ) & 0x00000007));
}

int ECM_statusReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ECM_statusReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ECM_statusReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code