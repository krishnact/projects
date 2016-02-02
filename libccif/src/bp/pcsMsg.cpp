//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "pcsMsg.h"

#ifdef org_himalay_ccif_pcsMsg__USE_SMART_PTR
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
pcsMsg::pcsMsg() {
    references= 0;


    // bf1
    bf1 = 0;
}
// Destructor
pcsMsg::~pcsMsg() {
    // bf1

}

int pcsMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI24();
    retVal += 3;
    return retVal;
}

int pcsMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI24();
    retVal += 3;

    return retVal;
}

int pcsMsg::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf1
    ostream.writeUI24(bf1);
    retVal +=3;

    return retVal;
}

int pcsMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("pcsMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),4);
        dc.indent();
        dc.getPs().print("major_channel_number: ");
        dc.getPs().printlnBin(getMajor_channel_number(),10);
        dc.indent();
        dc.getPs().print("miner_channel_number: ");
        dc.getPs().printlnBin(getMiner_channel_number(),10);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui24 pcsMsg::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void pcsMsg::setBf1(ui24 val)
//{
//this->bf1= val;
//}

int pcsMsg::getReserved( ) {
    return ( this->bf1 & 0x00f00000 ) >> 20 ;
}

void pcsMsg::setReserved(int val) {
    bf1=(  (this->bf1 & 0xff0fffff) | ( (val << 20 ) & 0x00f00000));
}

int pcsMsg::getMajor_channel_number( ) {
    return ( this->bf1 & 0x000ffc00 ) >> 10 ;
}

void pcsMsg::setMajor_channel_number(int val) {
    bf1=(  (this->bf1 & 0xfff003ff) | ( (val << 10 ) & 0x000ffc00));
}

int pcsMsg::getMiner_channel_number( ) {
    return ( this->bf1 & 0x000003ff ) >> 0 ;
}

void pcsMsg::setMiner_channel_number(int val) {
    bf1=(  (this->bf1 & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
}

int pcsMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_pcsMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::pcsMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::pcsMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code