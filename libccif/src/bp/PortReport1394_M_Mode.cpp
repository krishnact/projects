//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PortReport1394_M_Mode.h"

#ifdef org_himalay_ccif_PortReport1394_M_Mode__USE_SMART_PTR
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
PortReport1394_M_Mode::PortReport1394_M_Mode() {
    references= 0;


    // bf1
    bf1 = 0;
    // totalNumberOfNodes
    totalNumberOfNodes= (ui16)0;
    // connectedDevices
    connectedDevices.setMemberSize(0);
}
// Destructor
PortReport1394_M_Mode::~PortReport1394_M_Mode() {
    // bf1

    // totalNumberOfNodes

    // connectedDevices
    {
#ifndef org_himalay_ccif_PortReport1394_MMsg_USE_SMART_PTR
        connectedDevices.deleteMembers();
#endif
    }
}

int PortReport1394_M_Mode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // connectedDevices
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_PortReport1394_MMsg__PTR_TYPE temp;
        org_himalay_ccif_PortReport1394_MMsg__NEW( temp);
        retVal += temp->read(istream);
        connectedDevices.add(temp);
    }
    return retVal;
}

int PortReport1394_M_Mode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read totalNumberOfNodes
    {
        totalNumberOfNodes=istream.readUI16();
        retVal+=2;
    }
    // read connectedDevices
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_PortReport1394_MMsg__PTR_TYPE temp;
        org_himalay_ccif_PortReport1394_MMsg__NEW( temp);
        retVal += temp->read(istream);
        connectedDevices.add(temp);
    }

    return retVal;
}

int PortReport1394_M_Mode::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for connectedDevices**/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write totalNumberOfNodes
    ostream.writeUI16(totalNumberOfNodes);
    retVal +=2;
    // write connectedDevices
{   for (ArrayList_iterator(PortReport1394_MMsg) it=  connectedDevices.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int PortReport1394_M_Mode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PortReport1394_M_Mode\n");
    dc.increaseIndent();
    int retVal= 0;
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
        dc.getPs().print("port_1_ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_1_ConnectionStatus(),1);
        dc.indent();
        dc.getPs().print("port_2_ConnectionStatus: ");
        dc.getPs().printlnBin(getPort_2_ConnectionStatus(),1);
    }
    // write totalNumberOfNodes
    dc.indent();
    dc.getPs().print("totalNumberOfNodes=");
    dc.getPs().println((long)totalNumberOfNodes);
    // write connectedDevices
{   for (ArrayList_iterator(PortReport1394_MMsg) it=  connectedDevices.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 PortReport1394_M_Mode::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PortReport1394_M_Mode::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for totalNumberOfNodes
//ui16 PortReport1394_M_Mode::getTotalNumberOfNodes()
//{
//return this->totalNumberOfNodes;
//}

// Setter for totalNumberOfNodes
//void PortReport1394_M_Mode::setTotalNumberOfNodes(ui16 val)
//{
//this->totalNumberOfNodes= val;
//}

// Getter for connectedDevices
//ArrayList(PortReport1394_MMsg) PortReport1394_M_Mode::getConnectedDevices()
//{
//return this->connectedDevices;
//}

// Setter for connectedDevices
//void PortReport1394_M_Mode::setConnectedDevices(ArrayList(PortReport1394_MMsg) val)
//{
//this->connectedDevices= val;
//}

int PortReport1394_M_Mode::getReserved( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void PortReport1394_M_Mode::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int PortReport1394_M_Mode::getLoopStatus( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void PortReport1394_M_Mode::setLoopStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int PortReport1394_M_Mode::getRootStatus( ) {
    return ( this->bf1 & 0x00000010 ) >> 4 ;
}

void PortReport1394_M_Mode::setRootStatus(int val) {
    bf1=(  (this->bf1 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int PortReport1394_M_Mode::getCycleMasterStatus( ) {
    return ( this->bf1 & 0x00000008 ) >> 3 ;
}

void PortReport1394_M_Mode::setCycleMasterStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffff7) | ( (val << 3 ) & 0x00000008));
}

int PortReport1394_M_Mode::getHost_ad_sourceSelectionStatus( ) {
    return ( this->bf1 & 0x00000004 ) >> 2 ;
}

void PortReport1394_M_Mode::setHost_ad_sourceSelectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffb) | ( (val << 2 ) & 0x00000004));
}

int PortReport1394_M_Mode::getPort_1_ConnectionStatus( ) {
    return ( this->bf1 & 0x00000002 ) >> 1 ;
}

void PortReport1394_M_Mode::setPort_1_ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffd) | ( (val << 1 ) & 0x00000002));
}

int PortReport1394_M_Mode::getPort_2_ConnectionStatus( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void PortReport1394_M_Mode::setPort_2_ConnectionStatus(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int PortReport1394_M_Mode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PortReport1394_M_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReport1394_M_Mode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PortReport1394_M_Mode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code