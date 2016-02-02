//**//
//@Created(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DCM_structure_base.h"

#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
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
// member static classes
// Constructor
DCM_structure_base::dcmData::dcmData() {
    references= 0;

    parent = NULL;

    // bf5
    bf5 = 0;
}
// Destructor
DCM_structure_base::dcmData::~dcmData() {
    // bf5

    parent = NULL;
}

int DCM_structure_base::dcmData::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf5
    bf5= istream.readUI8();
    retVal += 1;
    return retVal;
}

int DCM_structure_base::dcmData::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf5
    bf5= istream.readUI8();
    retVal += 1;

    return retVal;
}

int DCM_structure_base::dcmData::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf5
    ostream.writeUI8(bf5);
    retVal +=1;

    return retVal;
}

int DCM_structure_base::dcmData::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("dcmData\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf5
    {
        dc.indent();
        dc.getPs().print("range_defined: ");
        dc.getPs().printlnBin(getRange_defined(),1);
        dc.indent();
        dc.getPs().print("channelsCount: ");
        dc.getPs().printlnBin(getChannelsCount(),7);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf5
//ui8 DCM_structure_base::dcmData::getBf5()
//{
//return this->bf5;
//}

// Setter for bf5
//void DCM_structure_base::dcmData::setBf5(ui8 val)
//{
//this->bf5= val;
//}

int DCM_structure_base::dcmData::getRange_defined( ) {
    return ( this->bf5 & 0x00000080 ) >> 7 ;
}

void DCM_structure_base::dcmData::setRange_defined(int val) {
    bf5=(  (this->bf5 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int DCM_structure_base::dcmData::getChannelsCount( ) {
    return ( this->bf5 & 0x0000007f ) >> 0 ;
}

void DCM_structure_base::dcmData::setChannelsCount(int val) {
    bf5=(  (this->bf5 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int DCM_structure_base::dcmData::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_DCM_structure_base_dcmData__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->decreaseRef();
};;
#endif

// Constructor
DCM_structure_base::DCM_structure_base() {
    references= 0;


    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // dcmDatum
    dcmDatum.setMemberSize(0);
}
// Destructor
DCM_structure_base::~DCM_structure_base() {
    // bf1

    // bf2

    // dcmDatum
    {
#ifndef org_himalay_si_dcmData_USE_SMART_PTR
        dcmDatum.deleteMembers();
#endif
    }
}

int DCM_structure_base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // dcmDatum
    {
        int ilimit= retVal + (getDCM_data_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_DCM_structure_base_dcmData__PTR_TYPE temp;
            org_himalay_si_DCM_structure_base_dcmData__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            dcmDatum.add(temp);
        }
    }
    return retVal;
}

int DCM_structure_base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read dcmDatum
    {
        int ilimit= retVal + (getDCM_data_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_DCM_structure_base_dcmData__PTR_TYPE temp;
            org_himalay_si_DCM_structure_base_dcmData__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            dcmDatum.add(temp);
        }
    }

    return retVal;
}

int DCM_structure_base::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for dcmDatum**/ setDCM_data_length((short)dcmDatum.getSize() -(0));
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write dcmDatum
{   for (ArrayList_iterator(DCM_structure_base::dcmData) it=  dcmDatum.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int DCM_structure_base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DCM_structure_base\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("zero: ");
        dc.getPs().printlnBin(getZero(),4);
        dc.indent();
        dc.getPs().print("first_virtual_channel: ");
        dc.getPs().printlnBin(getFirst_virtual_channel(),12);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("zero2: ");
        dc.getPs().printlnBin(getZero2(),1);
        dc.indent();
        dc.getPs().print("DCM_data_length: ");
        dc.getPs().printlnBin(getDCM_data_length(),7);
    }
    // write dcmDatum
{   for (ArrayList_iterator(DCM_structure_base::dcmData) it=  dcmDatum.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 DCM_structure_base::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void DCM_structure_base::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 DCM_structure_base::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void DCM_structure_base::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for dcmDatum
//ArrayList(DCM_structure_base::dcmData) DCM_structure_base::getDcmDatum()
//{
//return this->dcmDatum;
//}

// Setter for dcmDatum
//void DCM_structure_base::setDcmDatum(ArrayList(DCM_structure_base::dcmData) val)
//{
//this->dcmDatum= val;
//}

int DCM_structure_base::getZero( ) {
    return ( this->bf1 & 0x0000f000 ) >> 12 ;
}

void DCM_structure_base::setZero(int val) {
    bf1=(  (this->bf1 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int DCM_structure_base::getFirst_virtual_channel( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void DCM_structure_base::setFirst_virtual_channel(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int DCM_structure_base::getZero2( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void DCM_structure_base::setZero2(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int DCM_structure_base::getDCM_data_length( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void DCM_structure_base::setDCM_data_length(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int DCM_structure_base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::DCM_structure_base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code