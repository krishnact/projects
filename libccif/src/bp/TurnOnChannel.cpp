//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "TurnOnChannel.h"

#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
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
TurnOnChannel::TurnOnChannel() {
    references= 0;


    // bf1
    bf1 = 0;
}
// Destructor
TurnOnChannel::~TurnOnChannel() {
    // bf1

}

int TurnOnChannel::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int TurnOnChannel::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int TurnOnChannel::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int TurnOnChannel::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("TurnOnChannel\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("turnOnChannelDefined: ");
        dc.getPs().printlnBin(getTurnOnChannelDefined(),1);
        dc.indent();
        dc.getPs().print("turnOnVirtualChannel: ");
        dc.getPs().printlnBin(getTurnOnVirtualChannel(),12);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 TurnOnChannel::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void TurnOnChannel::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int TurnOnChannel::getReserved( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void TurnOnChannel::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int TurnOnChannel::getTurnOnChannelDefined( ) {
    return ( this->bf1 & 0x00001000 ) >> 12 ;
}

void TurnOnChannel::setTurnOnChannelDefined(int val) {
    bf1=(  (this->bf1 & 0xffffefff) | ( (val << 12 ) & 0x00001000));
}

int TurnOnChannel::getTurnOnVirtualChannel( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void TurnOnChannel::setTurnOnVirtualChannel(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int TurnOnChannel::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::TurnOnChannel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::TurnOnChannel* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code