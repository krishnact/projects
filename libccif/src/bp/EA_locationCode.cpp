//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "EA_locationCode.h"

#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
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
EA_locationCode::EA_locationCode() {
    references= 0;


    // stateCode
    stateCode= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
EA_locationCode::~EA_locationCode() {
    // stateCode

    // bf1

}

int EA_locationCode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // stateCode
    {
        stateCode=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int EA_locationCode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read stateCode
    {
        stateCode=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int EA_locationCode::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write stateCode
    ostream.writeUI8(stateCode);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int EA_locationCode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("EA_locationCode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write stateCode
    dc.indent();
    dc.getPs().print("stateCode=");
    dc.getPs().println((long)stateCode);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("countySubdivision: ");
        dc.getPs().printlnBin(getCountySubdivision(),4);
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
        dc.indent();
        dc.getPs().print("countyCode: ");
        dc.getPs().printlnBin(getCountyCode(),11);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for stateCode
//ui8 EA_locationCode::getStateCode()
//{
//return this->stateCode;
//}

// Setter for stateCode
//void EA_locationCode::setStateCode(ui8 val)
//{
//this->stateCode= val;
//}

// Getter for bf1
//ui16 EA_locationCode::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void EA_locationCode::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int EA_locationCode::getCountySubdivision( ) {
    return ( this->bf1 & 0x0000f000 ) >> 12 ;
}

void EA_locationCode::setCountySubdivision(int val) {
    bf1=(  (this->bf1 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int EA_locationCode::getReserved( ) {
    return ( this->bf1 & 0x00000c00 ) >> 10 ;
}

void EA_locationCode::setReserved(int val) {
    bf1=(  (this->bf1 & 0xfffff3ff) | ( (val << 10 ) & 0x00000c00));
}

int EA_locationCode::getCountyCode( ) {
    return ( this->bf1 & 0x000007ff ) >> 0 ;
}

void EA_locationCode::setCountyCode(int val) {
    bf1=(  (this->bf1 & 0xfffff800) | ( (val << 0 ) & 0x000007ff));
}

int EA_locationCode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::EA_locationCode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::EA_locationCode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code