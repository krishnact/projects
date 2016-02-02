//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HdmiStatusReport.h"

#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
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
HdmiStatusReport::HdmiStatusReport() {
    references= 0;


    // bf1
    bf1 = 0;
    // vdoFormat
    org_himalay_ccif_VideoFormat__NEW( vdoFormat);
    // adoFormat
    org_himalay_ccif_AudioFormat__NEW( adoFormat);
}
// Destructor
HdmiStatusReport::~HdmiStatusReport() {
    // bf1

    // vdoFormat
    org_himalay_ccif_VideoFormat__DELETE( vdoFormat);
    // adoFormat
    org_himalay_ccif_AudioFormat__DELETE( adoFormat);
}

int HdmiStatusReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // vdoFormat
    retVal += vdoFormat->read(istream);
    // adoFormat
    retVal += adoFormat->read(istream);
    return retVal;
}

int HdmiStatusReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read vdoFormat
    retVal += vdoFormat->read(istream);
    // read adoFormat
    retVal += adoFormat->read(istream);

    return retVal;
}

int HdmiStatusReport::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for vdoFormat **/
    }
    {   /** fix dependent sizes for adoFormat **/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write vdoFormat
    if ( vdoFormat != NULL ) {
        retVal +=vdoFormat->write(ostream);
    }
    // write adoFormat
    if ( adoFormat != NULL ) {
        retVal +=adoFormat->write(ostream);
    }

    return retVal;
}

int HdmiStatusReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HdmiStatusReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("deviceType: ");
        dc.getPs().printlnBin(getDeviceType(),1);
        dc.indent();
        dc.getPs().print("colorSpace: ");
        dc.getPs().printlnBin(getColorSpace(),2);
        dc.indent();
        dc.getPs().print("connectionStatus: ");
        dc.getPs().printlnBin(getConnectionStatus(),2);
        dc.indent();
        dc.getPs().print("HostHdcpStatus: ");
        dc.getPs().printlnBin(getHostHdcpStatus(),1);
        dc.indent();
        dc.getPs().print("deviceHdcpStatus: ");
        dc.getPs().printlnBin(getDeviceHdcpStatus(),2);
    }
    // write vdoFormat
    if ( vdoFormat != NULL ) {
        dc.indent();
        dc.getPs().println("vdoFormat") ;
        retVal +=vdoFormat->dump(dc);
    }
    // write adoFormat
    if ( adoFormat != NULL ) {
        dc.indent();
        dc.getPs().println("adoFormat") ;
        retVal +=adoFormat->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 HdmiStatusReport::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void HdmiStatusReport::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for vdoFormat
//org_himalay_ccif_VideoFormat__PTR_TYPE HdmiStatusReport::getVdoFormat()
//{
//return this->vdoFormat;
//}

// Setter for vdoFormat
//void HdmiStatusReport::setVdoFormat(org_himalay_ccif_VideoFormat__PTR_TYPE val)
//{
//this->vdoFormat= val;
//}

// Getter for adoFormat
//org_himalay_ccif_AudioFormat__PTR_TYPE HdmiStatusReport::getAdoFormat()
//{
//return this->adoFormat;
//}

// Setter for adoFormat
//void HdmiStatusReport::setAdoFormat(org_himalay_ccif_AudioFormat__PTR_TYPE val)
//{
//this->adoFormat= val;
//}

int HdmiStatusReport::getDeviceType( ) {
    return ( this->bf1 & 0x00000080 ) >> 7 ;
}

void HdmiStatusReport::setDeviceType(int val) {
    bf1=(  (this->bf1 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int HdmiStatusReport::getColorSpace( ) {
    return ( this->bf1 & 0x00000060 ) >> 5 ;
}

void HdmiStatusReport::setColorSpace(int val) {
    bf1=(  (this->bf1 & 0xffffff9f) | ( (val << 5 ) & 0x00000060));
}

int HdmiStatusReport::getConnectionStatus( ) {
    return ( this->bf1 & 0x00000018 ) >> 3 ;
}

void HdmiStatusReport::setConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffe7) | ( (val << 3 ) & 0x00000018));
}

int HdmiStatusReport::getHostHdcpStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void HdmiStatusReport::setHostHdcpStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int HdmiStatusReport::getDeviceHdcpStatus( ) {
    return ( this->bf1 & 0x00000003 ) >> 0 ;
}

void HdmiStatusReport::setDeviceHdcpStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
}

int HdmiStatusReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HdmiStatusReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HdmiStatusReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code