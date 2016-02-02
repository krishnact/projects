//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FDC_report.h"

#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
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
FDC_report::FDC_report() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // FDC_centerFreq
    FDC_centerFreq= (ui16)0;
    // bf1
    bf1 = 0;
}
// Destructor
FDC_report::~FDC_report() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // FDC_centerFreq

    // bf1

}

int FDC_report::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // header
    retVal += header->read(istream);
    // FDC_centerFreq
    {
        FDC_centerFreq=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int FDC_report::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read FDC_centerFreq
    {
        FDC_centerFreq=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int FDC_report::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write FDC_centerFreq
    ostream.writeUI16(FDC_centerFreq);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int FDC_report::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FDC_report\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write FDC_centerFreq
    dc.indent();
    dc.getPs().print("FDC_centerFreq=");
    dc.getPs().println((long)FDC_centerFreq);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),6);
        dc.indent();
        dc.getPs().print("carrierLockStatus: ");
        dc.getPs().printlnBin(getCarrierLockStatus(),1);
        dc.indent();
        dc.getPs().print("reserved1: ");
        dc.getPs().printlnBin(getReserved1(),1);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE FDC_report::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FDC_report::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for FDC_centerFreq
//ui16 FDC_report::getFDC_centerFreq()
//{
//return this->FDC_centerFreq;
//}

// Setter for FDC_centerFreq
//void FDC_report::setFDC_centerFreq(ui16 val)
//{
//this->FDC_centerFreq= val;
//}

// Getter for bf1
//ui8 FDC_report::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void FDC_report::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int FDC_report::getReserved( ) {
    return ( this->bf1 & 0x000000fc ) >> 2 ;
}

void FDC_report::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff03) | ( (val << 2 ) & 0x000000fc));
}

int FDC_report::getCarrierLockStatus( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void FDC_report::setCarrierLockStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int FDC_report::getReserved1( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void FDC_report::setReserved1(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int FDC_report::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FDC_report* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FDC_report* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code