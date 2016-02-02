//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ServiceSocket.h"

#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
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
ServiceSocket::ServiceSocket() {
    references= 0;


    // protocolFlag
    protocolFlag= (ui8)0;
    // localPort
    localPort= (ui16)0;
    // remotePort
    remotePort= (ui16)0;
    // remoteAddressType
    remoteAddressType= (ui8)0;
    // name
    org_himalay_ccif_ByteArrayWrapper_ui8__INIT(name)
    // ipV4Address
    org_himalay_ccif_IPV4Address__INIT(ipV4Address)
    // ipV6Address
    org_himalay_ccif_IPV6Address__INIT(ipV6Address)
}
// Destructor
ServiceSocket::~ServiceSocket() {
    // protocolFlag

    // localPort

    // remotePort

    // remoteAddressType

    // name
    org_himalay_ccif_ByteArrayWrapper_ui8__DELETE( name);
    // ipV4Address
    org_himalay_ccif_IPV4Address__DELETE( ipV4Address);
    // ipV6Address
    org_himalay_ccif_IPV6Address__DELETE( ipV6Address);
}

int ServiceSocket::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // protocolFlag
    {
        protocolFlag=(istream.readUI8());
        retVal+=1;
    }
    // localPort
    {
        localPort=istream.readUI16();
        retVal+=2;
    }
    // remotePort
    {
        remotePort=istream.readUI16();
        retVal+=2;
    }
    // remoteAddressType
    {
        remoteAddressType=(istream.readUI8());
        retVal+=1;
    }
    // name
    if (remoteAddressType==0x00) {
        org_himalay_ccif_ByteArrayWrapper_ui8__NEW( name);
        retVal += name->read(istream);
    }
    // ipV4Address
    if (remoteAddressType==0x01) {
        org_himalay_ccif_IPV4Address__NEW( ipV4Address);
        retVal += ipV4Address->read(istream);
    }
    // ipV6Address
    if (remoteAddressType==0x02) {
        org_himalay_ccif_IPV6Address__NEW( ipV6Address);
        retVal += ipV6Address->read(istream);
    }
    return retVal;
}

int ServiceSocket::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read protocolFlag
    {
        protocolFlag=(istream.readUI8());
        retVal+=1;
    }
    // read localPort
    {
        localPort=istream.readUI16();
        retVal+=2;
    }
    // read remotePort
    {
        remotePort=istream.readUI16();
        retVal+=2;
    }
    // read remoteAddressType
    {
        remoteAddressType=(istream.readUI8());
        retVal+=1;
    }
    // read name
    if (remoteAddressType==0x00) {
        org_himalay_ccif_ByteArrayWrapper_ui8__NEW( name);
        retVal += name->read(istream);
    }
    // read ipV4Address
    if (remoteAddressType==0x01) {
        org_himalay_ccif_IPV4Address__NEW( ipV4Address);
        retVal += ipV4Address->read(istream);
    }
    // read ipV6Address
    if (remoteAddressType==0x02) {
        org_himalay_ccif_IPV6Address__NEW( ipV6Address);
        retVal += ipV6Address->read(istream);
    }

    return retVal;
}

int ServiceSocket::write(DataOutputStream& ostream) { // throws IOException




    {   /** fix dependent sizes for name **/
    }
    {   /** fix dependent sizes for ipV4Address **/
    }
    {   /** fix dependent sizes for ipV6Address **/
    }

    int retVal= 0;
    // write protocolFlag
    ostream.writeUI8(protocolFlag);
    retVal +=1;
    // write localPort
    ostream.writeUI16(localPort);
    retVal +=2;
    // write remotePort
    ostream.writeUI16(remotePort);
    retVal +=2;
    // write remoteAddressType
    ostream.writeUI8(remoteAddressType);
    retVal +=1;
    // write name
    if ( name != NULL ) {
        retVal +=name->write(ostream);
    }
    // write ipV4Address
    if ( ipV4Address != NULL ) {
        retVal +=ipV4Address->write(ostream);
    }
    // write ipV6Address
    if ( ipV6Address != NULL ) {
        retVal +=ipV6Address->write(ostream);
    }

    return retVal;
}

int ServiceSocket::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ServiceSocket\n");
    dc.increaseIndent();
    int retVal= 0;
    // write protocolFlag
    dc.indent();
    dc.getPs().print("protocolFlag=");
    dc.getPs().println((long)protocolFlag);
    // write localPort
    dc.indent();
    dc.getPs().print("localPort=");
    dc.getPs().println((long)localPort);
    // write remotePort
    dc.indent();
    dc.getPs().print("remotePort=");
    dc.getPs().println((long)remotePort);
    // write remoteAddressType
    dc.indent();
    dc.getPs().print("remoteAddressType=");
    dc.getPs().println((long)remoteAddressType);
    // write name
    if ( name != NULL ) {
        dc.indent();
        dc.getPs().println("name") ;
        retVal +=name->dump(dc);
    }
    // write ipV4Address
    if ( ipV4Address != NULL ) {
        dc.indent();
        dc.getPs().println("ipV4Address") ;
        retVal +=ipV4Address->dump(dc);
    }
    // write ipV6Address
    if ( ipV6Address != NULL ) {
        dc.indent();
        dc.getPs().println("ipV6Address") ;
        retVal +=ipV6Address->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for protocolFlag
//ui8 ServiceSocket::getProtocolFlag()
//{
//return this->protocolFlag;
//}

// Setter for protocolFlag
//void ServiceSocket::setProtocolFlag(ui8 val)
//{
//this->protocolFlag= val;
//}

// Getter for localPort
//ui16 ServiceSocket::getLocalPort()
//{
//return this->localPort;
//}

// Setter for localPort
//void ServiceSocket::setLocalPort(ui16 val)
//{
//this->localPort= val;
//}

// Getter for remotePort
//ui16 ServiceSocket::getRemotePort()
//{
//return this->remotePort;
//}

// Setter for remotePort
//void ServiceSocket::setRemotePort(ui16 val)
//{
//this->remotePort= val;
//}

// Getter for remoteAddressType
//ui8 ServiceSocket::getRemoteAddressType()
//{
//return this->remoteAddressType;
//}

// Setter for remoteAddressType
//void ServiceSocket::setRemoteAddressType(ui8 val)
//{
//this->remoteAddressType= val;
//}

// Getter for name
//org_himalay_ccif_ByteArrayWrapper_ui8__PTR_TYPE ServiceSocket::getName()
//{
//return this->name;
//}

// Setter for name
//void ServiceSocket::setName(org_himalay_ccif_ByteArrayWrapper_ui8__PTR_TYPE val)
//{
//this->name= val;
//}

// Getter for ipV4Address
//org_himalay_ccif_IPV4Address__PTR_TYPE ServiceSocket::getIpV4Address()
//{
//return this->ipV4Address;
//}

// Setter for ipV4Address
//void ServiceSocket::setIpV4Address(org_himalay_ccif_IPV4Address__PTR_TYPE val)
//{
//this->ipV4Address= val;
//}

// Getter for ipV6Address
//org_himalay_ccif_IPV6Address__PTR_TYPE ServiceSocket::getIpV6Address()
//{
//return this->ipV6Address;
//}

// Setter for ipV6Address
//void ServiceSocket::setIpV6Address(org_himalay_ccif_IPV6Address__PTR_TYPE val)
//{
//this->ipV6Address= val;
//}

int ServiceSocket::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceSocket* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ServiceSocket* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code