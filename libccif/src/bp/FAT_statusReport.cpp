//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FAT_statusReport.h"

#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
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
FAT_statusReport::FAT_statusReport() {
    references= 0;


    // bf1
    bf1 = 0;
    // SNR
    SNR= (ui16)0;
    // signalLevel
    signalLevel= (ui16)0;
}
// Destructor
FAT_statusReport::~FAT_statusReport() {
    // bf1

    // SNR

    // signalLevel

}

int FAT_statusReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // SNR
    {
        SNR=istream.readUI16();
        retVal+=2;
    }
    // signalLevel
    {
        signalLevel=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int FAT_statusReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read SNR
    {
        SNR=istream.readUI16();
        retVal+=2;
    }
    // read signalLevel
    {
        signalLevel=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int FAT_statusReport::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write SNR
    ostream.writeUI16(SNR);
    retVal +=2;
    // write signalLevel
    ostream.writeUI16(signalLevel);
    retVal +=2;

    return retVal;
}

int FAT_statusReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FAT_statusReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),4);
        dc.indent();
        dc.getPs().print("PCR_lock: ");
        dc.getPs().printlnBin(getPCR_lock(),1);
        dc.indent();
        dc.getPs().print("modulationMode: ");
        dc.getPs().printlnBin(getModulationMode(),2);
        dc.indent();
        dc.getPs().print("carrierLockStatus: ");
        dc.getPs().printlnBin(getCarrierLockStatus(),1);
    }
    // write SNR
    dc.indent();
    dc.getPs().print("SNR=");
    dc.getPs().println((long)SNR);
    // write signalLevel
    dc.indent();
    dc.getPs().print("signalLevel=");
    dc.getPs().println((long)signalLevel);
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 FAT_statusReport::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void FAT_statusReport::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for SNR
//ui16 FAT_statusReport::getSNR()
//{
//return this->SNR;
//}

// Setter for SNR
//void FAT_statusReport::setSNR(ui16 val)
//{
//this->SNR= val;
//}

// Getter for signalLevel
//ui16 FAT_statusReport::getSignalLevel()
//{
//return this->signalLevel;
//}

// Setter for signalLevel
//void FAT_statusReport::setSignalLevel(ui16 val)
//{
//this->signalLevel= val;
//}

int FAT_statusReport::getReserved( ) {
    return ( this->bf1 & 0x000000f0 ) >> 4 ;
}

void FAT_statusReport::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int FAT_statusReport::getPCR_lock( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void FAT_statusReport::setPCR_lock(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int FAT_statusReport::getModulationMode( ) {
    return ( this->bf1 & 0x00000006 ) >> 1 ;
}

void FAT_statusReport::setModulationMode(int val) {
    bf1=(  (this->bf1 & 0xfffffff9) | ( (val << 1 ) & 0x00000006));
}

int FAT_statusReport::getCarrierLockStatus( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void FAT_statusReport::setCarrierLockStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int FAT_statusReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FAT_statusReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FAT_statusReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code