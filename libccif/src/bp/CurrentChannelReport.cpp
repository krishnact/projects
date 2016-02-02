//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CurrentChannelReport.h"

#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
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
CurrentChannelReport::CurrentChannelReport() {
    references= 0;


    // bf1
    bf1 = 0;
    // currentChannel
    currentChannel= (ui16)0;
}
// Destructor
CurrentChannelReport::~CurrentChannelReport() {
    // bf1

    // currentChannel

}

int CurrentChannelReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // currentChannel
    {
        currentChannel=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int CurrentChannelReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read currentChannel
    {
        currentChannel=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int CurrentChannelReport::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write currentChannel
    ostream.writeUI16(currentChannel);
    retVal +=2;

    return retVal;
}

int CurrentChannelReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CurrentChannelReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
        dc.indent();
        dc.getPs().print("channelType: ");
        dc.getPs().printlnBin(getChannelType(),1);
        dc.indent();
        dc.getPs().print("authorizationFlag: ");
        dc.getPs().printlnBin(getAuthorizationFlag(),1);
        dc.indent();
        dc.getPs().print("purchasableFlag: ");
        dc.getPs().printlnBin(getPurchasableFlag(),1);
        dc.indent();
        dc.getPs().print("purchasedFlag: ");
        dc.getPs().printlnBin(getPurchasedFlag(),1);
        dc.indent();
        dc.getPs().print("previewFlag: ");
        dc.getPs().printlnBin(getPreviewFlag(),1);
        dc.indent();
        dc.getPs().print("parentalControlFlag: ");
        dc.getPs().printlnBin(getParentalControlFlag(),1);
    }
    // write currentChannel
    dc.indent();
    dc.getPs().print("currentChannel=");
    dc.getPs().println((long)currentChannel);
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 CurrentChannelReport::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CurrentChannelReport::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for currentChannel
//ui16 CurrentChannelReport::getCurrentChannel()
//{
//return this->currentChannel;
//}

// Setter for currentChannel
//void CurrentChannelReport::setCurrentChannel(ui16 val)
//{
//this->currentChannel= val;
//}

int CurrentChannelReport::getReserved( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void CurrentChannelReport::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int CurrentChannelReport::getChannelType( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void CurrentChannelReport::setChannelType(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int CurrentChannelReport::getAuthorizationFlag( ) {
    return ( this->bf1 & 0x00000010 ) >> 4 ;
}

void CurrentChannelReport::setAuthorizationFlag(int val) {
    bf1=(  (this->bf1 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int CurrentChannelReport::getPurchasableFlag( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void CurrentChannelReport::setPurchasableFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int CurrentChannelReport::getPurchasedFlag( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void CurrentChannelReport::setPurchasedFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int CurrentChannelReport::getPreviewFlag( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void CurrentChannelReport::setPreviewFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int CurrentChannelReport::getParentalControlFlag( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void CurrentChannelReport::setParentalControlFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int CurrentChannelReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CurrentChannelReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CurrentChannelReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code