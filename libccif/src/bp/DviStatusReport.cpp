//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DviStatusReport.h"

#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
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
DviStatusReport::DviStatusReport() {
    references= 0;


    // bf1
    bf1 = 0;
    // videoFormat
    org_himalay_ccif_VideoFormat__NEW( videoFormat);
}
// Destructor
DviStatusReport::~DviStatusReport() {
    // bf1

    // videoFormat
    org_himalay_ccif_VideoFormat__DELETE( videoFormat);
}

int DviStatusReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // videoFormat
    retVal += videoFormat->read(istream);
    return retVal;
}

int DviStatusReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read videoFormat
    retVal += videoFormat->read(istream);

    return retVal;
}

int DviStatusReport::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for videoFormat **/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write videoFormat
    if ( videoFormat != NULL ) {
        retVal +=videoFormat->write(ostream);
    }

    return retVal;
}

int DviStatusReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DviStatusReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("connectionStatus: ");
        dc.getPs().printlnBin(getConnectionStatus(),2);
        dc.indent();
        dc.getPs().print("hostHdcpStatus: ");
        dc.getPs().printlnBin(getHostHdcpStatus(),1);
        dc.indent();
        dc.getPs().print("deviceHdcpStatus: ");
        dc.getPs().printlnBin(getDeviceHdcpStatus(),2);
    }
    // write videoFormat
    if ( videoFormat != NULL ) {
        dc.indent();
        dc.getPs().println("videoFormat") ;
        retVal +=videoFormat->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 DviStatusReport::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void DviStatusReport::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for videoFormat
//org_himalay_ccif_VideoFormat__PTR_TYPE DviStatusReport::getVideoFormat()
//{
//return this->videoFormat;
//}

// Setter for videoFormat
//void DviStatusReport::setVideoFormat(org_himalay_ccif_VideoFormat__PTR_TYPE val)
//{
//this->videoFormat= val;
//}

int DviStatusReport::getReserved( ) {
    return ( this->bf1 & 0x000000e0 ) >> 5 ;
}

void DviStatusReport::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int DviStatusReport::getConnectionStatus( ) {
    return ( this->bf1 & 0x00000018 ) >> 3 ;
}

void DviStatusReport::setConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffe7) | ( (val << 3 ) & 0x00000018));
}

int DviStatusReport::getHostHdcpStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void DviStatusReport::setHostHdcpStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int DviStatusReport::getDeviceHdcpStatus( ) {
    return ( this->bf1 & 0x00000003 ) >> 0 ;
}

void DviStatusReport::setDeviceHdcpStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
}

int DviStatusReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DviStatusReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DviStatusReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code