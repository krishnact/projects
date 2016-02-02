//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PortReport1394_MMsg.h"

#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
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
PortReport1394_MMsg::PortReport1394_MMsg() {
    references= 0;


    // bf1
    bf1 = 0;
    // eui64
    org_himalay_ccif_Eui64__NEW( eui64);
}
// Destructor
PortReport1394_MMsg::~PortReport1394_MMsg() {
    // bf1

    // eui64
    org_himalay_ccif_Eui64__DELETE( eui64);
}

int PortReport1394_MMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // eui64
    retVal += eui64->read(istream);
    return retVal;
}

int PortReport1394_MMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read eui64
    retVal += eui64->read(istream);

    return retVal;
}

int PortReport1394_MMsg::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for eui64 **/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write eui64
    if ( eui64 != NULL ) {
        retVal +=eui64->write(ostream);
    }

    return retVal;
}

int PortReport1394_MMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PortReport1394_MMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("deviceSubUnitType: ");
        dc.getPs().printlnBin(getDeviceSubUnitType(),5);
        dc.indent();
        dc.getPs().print("DeviceSourceSelectionStatus: ");
        dc.getPs().printlnBin(getDeviceSourceSelectionStatus(),1);
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
    }
    // write eui64
    if ( eui64 != NULL ) {
        dc.indent();
        dc.getPs().println("eui64") ;
        retVal +=eui64->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 PortReport1394_MMsg::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PortReport1394_MMsg::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for eui64
//org_himalay_ccif_Eui64__PTR_TYPE PortReport1394_MMsg::getEui64()
//{
//return this->eui64;
//}

// Setter for eui64
//void PortReport1394_MMsg::setEui64(org_himalay_ccif_Eui64__PTR_TYPE val)
//{
//this->eui64= val;
//}

int PortReport1394_MMsg::getDeviceSubUnitType( ) {
    return ( this->bf1 & 0x000000f8 ) >> 3 ;
}

void PortReport1394_MMsg::setDeviceSubUnitType(int val) {
    bf1=(  (this->bf1 & 0xffffff07) | ( (val << 3 ) & 0x000000f8));
}

int PortReport1394_MMsg::getDeviceSourceSelectionStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void PortReport1394_MMsg::setDeviceSourceSelectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int PortReport1394_MMsg::getReserved( ) {
    return ( this->bf1 & 0x00000003 ) >> 0 ;
}

void PortReport1394_MMsg::setReserved(int val) {
    bf1=(  (this->bf1 & 0xfffffffc) | ( (val << 0 ) & 0x00000003));
}

int PortReport1394_MMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReport1394_MMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PortReport1394_MMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code