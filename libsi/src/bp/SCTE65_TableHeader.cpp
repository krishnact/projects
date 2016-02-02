//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SCTE65_TableHeader.h"

#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
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
SCTE65_TableHeader::SCTE65_TableHeader() {
    references= 0;


    // messageType
    messageType= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
SCTE65_TableHeader::~SCTE65_TableHeader() {
    // messageType

    // bf1

}

int SCTE65_TableHeader::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int SCTE65_TableHeader::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read messageType
    {
        messageType=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int SCTE65_TableHeader::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write messageType
    ostream.writeUI8(messageType);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int SCTE65_TableHeader::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SCTE65_TableHeader\n");
    dc.increaseIndent();
    int retVal= 0;
    // write messageType
    dc.indent();
    dc.getPs().print("messageType=");
    dc.getPs().println((long)messageType);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("zero: ");
        dc.getPs().printlnBin(getZero(),2);
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
        dc.indent();
        dc.getPs().print("section_length: ");
        dc.getPs().printlnBin(getSection_length(),12);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for messageType
ui8 SCTE65_TableHeader::getMessageType()
{
    return this->messageType;
}

// Setter for messageType
void SCTE65_TableHeader::setMessageType(ui8 val)
{
    this->messageType= val;
}

// Getter for bf1
//ui16 SCTE65_TableHeader::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void SCTE65_TableHeader::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int SCTE65_TableHeader::getZero( ) {
    return ( this->bf1 & 0x0000c000 ) >> 14 ;
}

void SCTE65_TableHeader::setZero(int val) {
    bf1=(  (this->bf1 & 0xffff3fff) | ( (val << 14 ) & 0x0000c000));
}

int SCTE65_TableHeader::getReserved( ) {
    return ( this->bf1 & 0x00003000 ) >> 12 ;
}

void SCTE65_TableHeader::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffcfff) | ( (val << 12 ) & 0x00003000));
}

int SCTE65_TableHeader::getSection_length( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void SCTE65_TableHeader::setSection_length(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int SCTE65_TableHeader::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::SCTE65_TableHeader* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::SCTE65_TableHeader* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code