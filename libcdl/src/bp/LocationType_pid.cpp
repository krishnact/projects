//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LocationType_pid.h"

#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
LocationType_pid::LocationType_pid() {
    references= 0;


    // frequency_vector
    frequency_vector= (ui16)0;
    // modulation_type
    modulation_type= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
LocationType_pid::~LocationType_pid() {
    // frequency_vector

    // modulation_type

    // bf1

}

int LocationType_pid::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // frequency_vector
    {
        frequency_vector=istream.readUI16();
        retVal+=2;
    }
    // modulation_type
    {
        modulation_type=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int LocationType_pid::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read frequency_vector
    {
        frequency_vector=istream.readUI16();
        retVal+=2;
    }
    // read modulation_type
    {
        modulation_type=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int LocationType_pid::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write frequency_vector
    ostream.writeUI16(frequency_vector);
    retVal +=2;
    // write modulation_type
    ostream.writeUI8(modulation_type);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int LocationType_pid::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LocationType_pid\n");
    dc.increaseIndent();
    int retVal= 0;
    // write frequency_vector
    dc.indent();
    dc.getPs().print("frequency_vector=");
    dc.getPs().println((long)frequency_vector);
    // write modulation_type
    dc.indent();
    dc.getPs().print("modulation_type=");
    dc.getPs().println((long)modulation_type);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved_: ");
        dc.getPs().printlnBin(getReserved_(),3);
        dc.indent();
        dc.getPs().print("pid: ");
        dc.getPs().printlnBin(getPid(),13);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for frequency_vector
//ui16 LocationType_pid::getFrequency_vector()
//{
//return this->frequency_vector;
//}

// Setter for frequency_vector
//void LocationType_pid::setFrequency_vector(ui16 val)
//{
//this->frequency_vector= val;
//}

// Getter for modulation_type
//ui8 LocationType_pid::getModulation_type()
//{
//return this->modulation_type;
//}

// Setter for modulation_type
//void LocationType_pid::setModulation_type(ui8 val)
//{
//this->modulation_type= val;
//}

// Getter for bf1
//ui16 LocationType_pid::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void LocationType_pid::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int LocationType_pid::getReserved_( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void LocationType_pid::setReserved_(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int LocationType_pid::getPid( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void LocationType_pid::setPid(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int LocationType_pid::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_pid* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_pid* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code