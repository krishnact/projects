//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "RDC_report.h"

#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
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
RDC_report::RDC_report() {
    references= 0;


    // RDC_centerFreq
    RDC_centerFreq= (ui16)0;
    // RDC_transmitterPowerLevel
    RDC_transmitterPowerLevel= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
RDC_report::~RDC_report() {
    // RDC_centerFreq

    // RDC_transmitterPowerLevel

    // bf1

}

int RDC_report::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // RDC_centerFreq
    {
        RDC_centerFreq=istream.readUI16();
        retVal+=2;
    }
    // RDC_transmitterPowerLevel
    {
        RDC_transmitterPowerLevel=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int RDC_report::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read RDC_centerFreq
    {
        RDC_centerFreq=istream.readUI16();
        retVal+=2;
    }
    // read RDC_transmitterPowerLevel
    {
        RDC_transmitterPowerLevel=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int RDC_report::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write RDC_centerFreq
    ostream.writeUI16(RDC_centerFreq);
    retVal +=2;
    // write RDC_transmitterPowerLevel
    ostream.writeUI8(RDC_transmitterPowerLevel);
    retVal +=1;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int RDC_report::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("RDC_report\n");
    dc.increaseIndent();
    int retVal= 0;
    // write RDC_centerFreq
    dc.indent();
    dc.getPs().print("RDC_centerFreq=");
    dc.getPs().println((long)RDC_centerFreq);
    // write RDC_transmitterPowerLevel
    dc.indent();
    dc.getPs().print("RDC_transmitterPowerLevel=");
    dc.getPs().println((long)RDC_transmitterPowerLevel);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),6);
        dc.indent();
        dc.getPs().print("RDC_dataRate: ");
        dc.getPs().printlnBin(getRDC_dataRate(),2);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for RDC_centerFreq
//ui16 RDC_report::getRDC_centerFreq()
//{
//return this->RDC_centerFreq;
//}

// Setter for RDC_centerFreq
//void RDC_report::setRDC_centerFreq(ui16 val)
//{
//this->RDC_centerFreq= val;
//}

// Getter for RDC_transmitterPowerLevel
//ui8 RDC_report::getRDC_transmitterPowerLevel()
//{
//return this->RDC_transmitterPowerLevel;
//}

// Setter for RDC_transmitterPowerLevel
//void RDC_report::setRDC_transmitterPowerLevel(ui8 val)
//{
//this->RDC_transmitterPowerLevel= val;
//}

// Getter for bf1
//ui8 RDC_report::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void RDC_report::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int RDC_report::getReserved( ) {
    return ( this->bf1 & 0x000000fc ) >> 2 ;
}

void RDC_report::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff03) | ( (val << 2 ) & 0x000000fc));
}

int RDC_report::getRDC_dataRate( ) {
    return ( this->bf1 & 0x00000003 ) >> 0 ;
}

void RDC_report::setRDC_dataRate(int val) {
    bf1=(  (this->bf1 & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
}

int RDC_report::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RDC_report* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::RDC_report* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code