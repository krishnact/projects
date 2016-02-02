//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaEntry.h"

#ifdef org_himalay_ccif_CaEntry__USE_SMART_PTR
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
CaEntry::CaEntry() {
    references= 0;


    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
}
// Destructor
CaEntry::~CaEntry() {
    // bf1

    // bf2

}

int CaEntry::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    return retVal;
}

int CaEntry::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;

    return retVal;
}

int CaEntry::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;

    return retVal;
}

int CaEntry::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaEntry\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("elementaryPid: ");
        dc.getPs().printlnBin(getElementaryPid(),13);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("caEnableFlag: ");
        dc.getPs().printlnBin(getCaEnableFlag(),1);
        dc.indent();
        dc.getPs().print("caEnable: ");
        dc.getPs().printlnBin(getCaEnable(),7);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 CaEntry::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CaEntry::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 CaEntry::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaEntry::setBf2(ui8 val)
//{
//this->bf2= val;
//}

int CaEntry::getReserved( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void CaEntry::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int CaEntry::getElementaryPid( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void CaEntry::setElementaryPid(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int CaEntry::getCaEnableFlag( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void CaEntry::setCaEnableFlag(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int CaEntry::getCaEnable( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void CaEntry::setCaEnable(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int CaEntry::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaEntry__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaEntry* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaEntry* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code