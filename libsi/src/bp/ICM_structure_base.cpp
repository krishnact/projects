//**//
//@Created(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ICM_structure_base.h"

#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
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
ICM_structure_base::icmData::icmData() {
    references= 0;

    parent = NULL;

    // sourceId
    sourceId= (ui16)0;
    // bf5
    bf5 = 0;
}
// Destructor
ICM_structure_base::icmData::~icmData() {
    // sourceId

    // bf5

    parent = NULL;
}

int ICM_structure_base::icmData::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // bf5
    bf5= istream.readUI16();
    retVal += 2;
    return retVal;
}

int ICM_structure_base::icmData::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // read bf5
    bf5= istream.readUI16();
    retVal += 2;

    return retVal;
}

int ICM_structure_base::icmData::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write sourceId
    ostream.writeUI16(sourceId);
    retVal +=2;
    // write bf5
    ostream.writeUI16(bf5);
    retVal +=2;

    return retVal;
}

int ICM_structure_base::icmData::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("icmData\n");
    dc.increaseIndent();
    int retVal= 0;
    // write sourceId
    dc.indent();
    dc.getPs().print("sourceId=");
    dc.getPs().println((long)sourceId);
    // write bf5
    {
        dc.indent();
        dc.getPs().print("zero: ");
        dc.getPs().printlnBin(getZero(),4);
        dc.indent();
        dc.getPs().print("virtual_channel_number: ");
        dc.getPs().printlnBin(getVirtual_channel_number(),12);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for sourceId
//ui16 ICM_structure_base::icmData::getSourceId()
//{
//return this->sourceId;
//}

// Setter for sourceId
//void ICM_structure_base::icmData::setSourceId(ui16 val)
//{
//this->sourceId= val;
//}

// Getter for bf5
//ui16 ICM_structure_base::icmData::getBf5()
//{
//return this->bf5;
//}

// Setter for bf5
//void ICM_structure_base::icmData::setBf5(ui16 val)
//{
//this->bf5= val;
//}

int ICM_structure_base::icmData::getZero( ) {
    return ( this->bf5 & 0x0000f000 ) >> 12 ;
}

void ICM_structure_base::icmData::setZero(int val) {
    bf5=(  (this->bf5 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int ICM_structure_base::icmData::getVirtual_channel_number( ) {
    return ( this->bf5 & 0x00000fff ) >> 0 ;
}

void ICM_structure_base::icmData::setVirtual_channel_number(int val) {
    bf5=(  (this->bf5 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int ICM_structure_base::icmData::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_ICM_structure_base_icmData__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p) {
    p->decreaseRef();
};;
#endif

// Constructor
ICM_structure_base::ICM_structure_base() {
    references= 0;


    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // icmDatum
    icmDatum.setMemberSize(0);
}
// Destructor
ICM_structure_base::~ICM_structure_base() {
    // bf1

    // bf2

    // icmDatum
    {
#ifndef org_himalay_si_icmData_USE_SMART_PTR
        icmDatum.deleteMembers();
#endif
    }
}

int ICM_structure_base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // icmDatum
    for (int iIdx=0; iIdx <(getRecord_count() + (0)); iIdx++) {
        org_himalay_si_ICM_structure_base_icmData__PTR_TYPE temp;
        org_himalay_si_ICM_structure_base_icmData__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        icmDatum.add(temp);
    }
    return retVal;
}

int ICM_structure_base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read icmDatum
    for (int iIdx=0; iIdx <(getRecord_count() + (0)); iIdx++) {
        org_himalay_si_ICM_structure_base_icmData__PTR_TYPE temp;
        org_himalay_si_ICM_structure_base_icmData__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        icmDatum.add(temp);
    }

    return retVal;
}

int ICM_structure_base::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for icmDatum**/  /*  This line is probably buggy size needs to be adjusted */
        setRecord_count((short)icmDatum.getCount() -(0));
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write icmDatum
{   for (ArrayList_iterator(ICM_structure_base::icmData) it=  icmDatum.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int ICM_structure_base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ICM_structure_base\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("zero: ");
        dc.getPs().printlnBin(getZero(),4);
        dc.indent();
        dc.getPs().print("first_map_index: ");
        dc.getPs().printlnBin(getFirst_map_index(),12);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("zero2: ");
        dc.getPs().printlnBin(getZero2(),1);
        dc.indent();
        dc.getPs().print("record_count: ");
        dc.getPs().printlnBin(getRecord_count(),7);
    }
    // write icmDatum
{   for (ArrayList_iterator(ICM_structure_base::icmData) it=  icmDatum.getIterator() ; it.hasNext();) {
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
//ui16 ICM_structure_base::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ICM_structure_base::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 ICM_structure_base::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void ICM_structure_base::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for icmDatum
//ArrayList(ICM_structure_base::icmData) ICM_structure_base::getIcmDatum()
//{
//return this->icmDatum;
//}

// Setter for icmDatum
//void ICM_structure_base::setIcmDatum(ArrayList(ICM_structure_base::icmData) val)
//{
//this->icmDatum= val;
//}

int ICM_structure_base::getZero( ) {
    return ( this->bf1 & 0x0000f000 ) >> 12 ;
}

void ICM_structure_base::setZero(int val) {
    bf1=(  (this->bf1 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int ICM_structure_base::getFirst_map_index( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void ICM_structure_base::setFirst_map_index(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int ICM_structure_base::getZero2( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void ICM_structure_base::setZero2(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int ICM_structure_base::getRecord_count( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void ICM_structure_base::setRecord_count(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int ICM_structure_base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ICM_structure_base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code