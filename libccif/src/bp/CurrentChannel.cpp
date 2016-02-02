//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CurrentChannel.h"

#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
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
CurrentChannel::CurrentChannel() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // currentChannel
    currentChannel= (ui16)0;
    // bf1
    bf1 = 0;
}
// Destructor
CurrentChannel::~CurrentChannel() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // currentChannel

    // bf1

}

int CurrentChannel::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // header
    retVal += header->read(istream);
    // currentChannel
    {
        currentChannel=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int CurrentChannel::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read currentChannel
    {
        currentChannel=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int CurrentChannel::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write currentChannel
    ostream.writeUI16(currentChannel);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int CurrentChannel::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CurrentChannel\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write currentChannel
    dc.indent();
    dc.getPs().print("currentChannel=");
    dc.getPs().println((long)currentChannel);
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
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CurrentChannel::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CurrentChannel::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for currentChannel
//ui16 CurrentChannel::getCurrentChannel()
//{
//return this->currentChannel;
//}

// Setter for currentChannel
//void CurrentChannel::setCurrentChannel(ui16 val)
//{
//this->currentChannel= val;
//}

// Getter for bf1
//ui8 CurrentChannel::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CurrentChannel::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int CurrentChannel::getReserved( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void CurrentChannel::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int CurrentChannel::getChannelType( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void CurrentChannel::setChannelType(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int CurrentChannel::getAuthorizationFlag( ) {
    return ( this->bf1 & 0x00000010 ) >> 4 ;
}

void CurrentChannel::setAuthorizationFlag(int val) {
    bf1=(  (this->bf1 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int CurrentChannel::getPurchasableFlag( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void CurrentChannel::setPurchasableFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int CurrentChannel::getPurchasedFlag( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void CurrentChannel::setPurchasedFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int CurrentChannel::getPreviewFlag( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void CurrentChannel::setPreviewFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int CurrentChannel::getParentalControlFlag( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void CurrentChannel::setParentalControlFlag(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int CurrentChannel::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CurrentChannel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CurrentChannel* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code