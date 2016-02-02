//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ServiceMpegPid.h"

#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
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
ServiceMpegPid::ServiceMpegPid() {
    references= 0;


    // bf1
    bf1 = 0;
}
// Destructor
ServiceMpegPid::~ServiceMpegPid() {
    // bf1

}

int ServiceMpegPid::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int ServiceMpegPid::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int ServiceMpegPid::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int ServiceMpegPid::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceMpegPid\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("pid: ");
        dc.getPs().printlnBin(getPid(),13);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 ServiceMpegPid::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ServiceMpegPid::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int ServiceMpegPid::getReserved( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void ServiceMpegPid::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int ServiceMpegPid::getPid( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void ServiceMpegPid::setPid(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int ServiceMpegPid::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceMpegPid* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ServiceMpegPid* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code