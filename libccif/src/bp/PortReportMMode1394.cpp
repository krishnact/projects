//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PortReportMMode1394.h"

#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
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
PortReportMMode1394::PortReportMMode1394() {
    references= 0;


    // totalNumberOfNodes
    totalNumberOfNodes= (ui16)0;
    // bf1
    bf1 = 0;
    // numberOfConnectedDevices
    org_himalay_msgs_runtime_ByteArray_NEW(numberOfConnectedDevices);
    numberOfConnectedDevices->setSizeType("FIRST_UI8");
}
// Destructor
PortReportMMode1394::~PortReportMMode1394() {
    // totalNumberOfNodes

    // bf1

    // numberOfConnectedDevices
    org_himalay_msgs_runtime_ByteArray_DELETE( numberOfConnectedDevices);
}

int PortReportMMode1394::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // numberOfConnectedDevices
    {
        retVal+=numberOfConnectedDevices->read(istream);
    }
    return retVal;
}

int PortReportMMode1394::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read numberOfConnectedDevices
    {
        retVal+=numberOfConnectedDevices->read(istream);
    }

    return retVal;
}

int PortReportMMode1394::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for numberOfConnectedDevices**/
    }

    int retVal= 0;
    // write totalNumberOfNodes
    ostream.writeUI16(totalNumberOfNodes);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write numberOfConnectedDevices
    {
        retVal += numberOfConnectedDevices->write(ostream);
    }

    return retVal;
}

int PortReportMMode1394::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PortReportMMode1394\n");
    dc.increaseIndent();
    int retVal= 0;
    // write totalNumberOfNodes
    dc.indent();
    dc.getPs().print("totalNumberOfNodes=");
    dc.getPs().println((long)totalNumberOfNodes);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),2);
        dc.indent();
        dc.getPs().print("loopStatus: ");
        dc.getPs().printlnBin(getLoopStatus(),1);
        dc.indent();
        dc.getPs().print("rootStatus: ");
        dc.getPs().printlnBin(getRootStatus(),1);
        dc.indent();
        dc.getPs().print("cycleMasterStatus: ");
        dc.getPs().printlnBin(getCycleMasterStatus(),1);
        dc.indent();
        dc.getPs().print("host_ad_sourceSelectionStatus: ");
        dc.getPs().printlnBin(getHost_ad_sourceSelectionStatus(),1);
        dc.indent();
        dc.getPs().print("port_1ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_1ConnectionStatus(),1);
        dc.indent();
        dc.getPs().print("port_2ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_2ConnectionStatus(),1);
    }
    // write numberOfConnectedDevices
    dc.indent();
    dc.getPs().print("numberOfConnectedDevices");
    numberOfConnectedDevices->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for totalNumberOfNodes
//ui16 PortReportMMode1394::getTotalNumberOfNodes()
//{
//return this->totalNumberOfNodes;
//}

// Setter for totalNumberOfNodes
//void PortReportMMode1394::setTotalNumberOfNodes(ui16 val)
//{
//this->totalNumberOfNodes= val;
//}

// Getter for bf1
//ui8 PortReportMMode1394::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PortReportMMode1394::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for numberOfConnectedDevices
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PortReportMMode1394::getNumberOfConnectedDevices()
//{
//return this->numberOfConnectedDevices;
//}

// Setter for numberOfConnectedDevices
//void PortReportMMode1394::setNumberOfConnectedDevices(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->numberOfConnectedDevices= val;
//}

int PortReportMMode1394::getReserved( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void PortReportMMode1394::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int PortReportMMode1394::getLoopStatus( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void PortReportMMode1394::setLoopStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int PortReportMMode1394::getRootStatus( ) {
    return ( this->bf1 & 0x00000010 ) >> 4 ;
}

void PortReportMMode1394::setRootStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int PortReportMMode1394::getCycleMasterStatus( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void PortReportMMode1394::setCycleMasterStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int PortReportMMode1394::getHost_ad_sourceSelectionStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void PortReportMMode1394::setHost_ad_sourceSelectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int PortReportMMode1394::getPort_1ConnectionStatus( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void PortReportMMode1394::setPort_1ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int PortReportMMode1394::getPort_2ConnectionStatus( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void PortReportMMode1394::setPort_2ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int PortReportMMode1394::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReportMMode1394* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PortReportMMode1394* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code