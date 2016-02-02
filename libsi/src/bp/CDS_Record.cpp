//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CDS_Record.h"

#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
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
CDS_Record::CDS_Record() {
    references= 0;


    // number_of_carriers
    number_of_carriers= (ui8)0;
    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
}
// Destructor
CDS_Record::~CDS_Record() {
    // number_of_carriers

    // bf1

    // bf2

}

int CDS_Record::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // number_of_carriers
    {
        number_of_carriers=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    return retVal;
}

int CDS_Record::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read number_of_carriers
    {
        number_of_carriers=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;

    return retVal;
}

int CDS_Record::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write number_of_carriers
    ostream.writeUI8(number_of_carriers);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;

    return retVal;
}

int CDS_Record::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CDS_Record\n");
    dc.increaseIndent();
    int retVal= 0;
    // write number_of_carriers
    dc.indent();
    dc.getPs().print("number_of_carriers=");
    dc.getPs().println((long)number_of_carriers);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("spacingUnit: ");
        dc.getPs().printlnBin(getSpacingUnit(),1);
        dc.indent();
        dc.getPs().print("frequencySpacing: ");
        dc.getPs().printlnBin(getFrequencySpacing(),14);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("frequencyUnit: ");
        dc.getPs().printlnBin(getFrequencyUnit(),1);
        dc.indent();
        dc.getPs().print("firstCarrierFrequency: ");
        dc.getPs().printlnBin(getFirstCarrierFrequency(),15);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for number_of_carriers
//ui8 CDS_Record::getNumber_of_carriers()
//{
//return this->number_of_carriers;
//}

// Setter for number_of_carriers
//void CDS_Record::setNumber_of_carriers(ui8 val)
//{
//this->number_of_carriers= val;
//}

// Getter for bf1
//ui16 CDS_Record::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CDS_Record::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui16 CDS_Record::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CDS_Record::setBf2(ui16 val)
//{
//this->bf2= val;
//}

int CDS_Record::getSpacingUnit( ) {
    return ( this->bf1 & 0x00008000 ) >> 15 ;
}

void CDS_Record::setSpacingUnit(int val) {
    bf1=(  (this->bf1 & 0xffff7fff) | ( (val << 15 ) & 0x00008000));
}

int CDS_Record::getFrequencySpacing( ) {
    return ( this->bf1 & 0x00003fff ) >> 0 ;
}

void CDS_Record::setFrequencySpacing(int val) {
    bf1=(  (this->bf1 & 0xffffc000) | ( (val << 0 ) & 0x00003fff));
}

int CDS_Record::getFrequencyUnit( ) {
    return ( this->bf2 & 0x00008000 ) >> 15 ;
}

void CDS_Record::setFrequencyUnit(int val) {
    bf2=(  (this->bf2 & 0xffff7fff) | ( (val << 15 ) & 0x00008000));
}

int CDS_Record::getFirstCarrierFrequency( ) {
    return ( this->bf2 & 0x00007fff ) >> 0 ;
}

void CDS_Record::setFirstCarrierFrequency(int val) {
    bf2=(  (this->bf2 & 0xffff8000) | ( (val << 0 ) & 0x00007fff));
}

int CDS_Record::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::CDS_Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::CDS_Record* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code