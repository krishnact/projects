//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PortReportSMode1394.h"

#ifdef org_himalay_ccif_PortReportSMode1394__USE_SMART_PTR
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
PortReportSMode1394::PortReportSMode1394() {
    references= 0;


    // totalNumberOfNodes
    totalNumberOfNodes= (ui16)0;
    // bf1
    bf1 = 0;
}
// Destructor
PortReportSMode1394::~PortReportSMode1394() {
    // totalNumberOfNodes

    // bf1

}

int PortReportSMode1394::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int PortReportSMode1394::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int PortReportSMode1394::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write totalNumberOfNodes
    ostream.writeUI16(totalNumberOfNodes);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int PortReportSMode1394::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PortReportSMode1394\n");
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
        dc.getPs().printlnBin(getReserved(),3);
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
        dc.getPs().print("port_1ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_1ConnectionStatus(),1);
        dc.indent();
        dc.getPs().print("port_2ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_2ConnectionStatus(),1);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for totalNumberOfNodes
//ui16 PortReportSMode1394::getTotalNumberOfNodes()
//{
//return this->totalNumberOfNodes;
//}

// Setter for totalNumberOfNodes
//void PortReportSMode1394::setTotalNumberOfNodes(ui16 val)
//{
//this->totalNumberOfNodes= val;
//}

// Getter for bf1
//ui8 PortReportSMode1394::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PortReportSMode1394::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int PortReportSMode1394::getReserved( ) {
    return ( this->bf1 & 0x000000e0 ) >> 5 ;
}

void PortReportSMode1394::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int PortReportSMode1394::getLoopStatus( ) {
    return ( this->bf1 & 0x00000010 ) >> 4 ;
}

void PortReportSMode1394::setLoopStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int PortReportSMode1394::getRootStatus( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void PortReportSMode1394::setRootStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int PortReportSMode1394::getCycleMasterStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void PortReportSMode1394::setCycleMasterStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int PortReportSMode1394::getPort_1ConnectionStatus( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void PortReportSMode1394::setPort_1ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int PortReportSMode1394::getPort_2ConnectionStatus( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void PortReportSMode1394::setPort_2ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int PortReportSMode1394::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PortReportSMode1394__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReportSMode1394* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PortReportSMode1394* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code