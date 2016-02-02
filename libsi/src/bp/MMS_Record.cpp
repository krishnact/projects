//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "MMS_Record.h"

#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;

// Constructor
MMS_Record::MMS_Record() {
    references= 0;


    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // symbolRate
    symbolRate= (ui32)0;
}
// Destructor
MMS_Record::~MMS_Record() {
    // bf1

    // bf2

    // symbolRate

}

int MMS_Record::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // symbolRate
    {
        symbolRate=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int MMS_Record::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read symbolRate
    {
        symbolRate=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int MMS_Record::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write symbolRate
    ostream.writeUI32(symbolRate);
    retVal +=4;

    return retVal;
}

int MMS_Record::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("MMS_Record\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("transmissionSystem: ");
        dc.getPs().printlnBin(getTransmissionSystem(),4);
        dc.indent();
        dc.getPs().print("innerCodignMode: ");
        dc.getPs().printlnBin(getInnerCodignMode(),4);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("split_bitstream_mode: ");
        dc.getPs().printlnBin(getSplit_bitstream_mode(),1);
        dc.indent();
        dc.getPs().print("modulation_format: ");
        dc.getPs().printlnBin(getModulation_format(),5);
    }
    // write symbolRate
    dc.indent();
    dc.getPs().print("symbolRate=");
    dc.getPs().println((long)symbolRate);
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 MMS_Record::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void MMS_Record::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 MMS_Record::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void MMS_Record::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for symbolRate
//ui32 MMS_Record::getSymbolRate()
//{
//return this->symbolRate;
//}

// Setter for symbolRate
//void MMS_Record::setSymbolRate(ui32 val)
//{
//this->symbolRate= val;
//}

int MMS_Record::getTransmissionSystem( ) {
    return ( this->bf1 & 0x000000f0 ) >> 4 ;
}

void MMS_Record::setTransmissionSystem(int val) {
    bf1=(  (this->bf1 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int MMS_Record::getInnerCodignMode( ) {
    return ( this->bf1 & 0x0000000f ) >> 0 ;
}

void MMS_Record::setInnerCodignMode(int val) {
    bf1=(  (this->bf1 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int MMS_Record::getSplit_bitstream_mode( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void MMS_Record::setSplit_bitstream_mode(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int MMS_Record::getModulation_format( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void MMS_Record::setModulation_format(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int MMS_Record::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MMS_Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MMS_Record* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code