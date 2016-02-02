//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LocationType_dsg_tunnel.h"

#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
LocationType_dsg_tunnel::LocationType_dsg_tunnel() {
    references= 0;


    // dsgTunnelAddress
    org_himalay_binmsg_util_IPv4Address__NEW( dsgTunnelAddress);
    // source_ip_address
    org_himalay_binmsg_util_IPv6Address__NEW( source_ip_address);
    // destination_ip_address
    org_himalay_binmsg_util_IPv6Address__NEW( destination_ip_address);
    // source_port_number
    source_port_number= (ui16)0;
    // destination_port_number
    destination_port_number= (ui16)0;
}
// Destructor
LocationType_dsg_tunnel::~LocationType_dsg_tunnel() {
    // dsgTunnelAddress
    org_himalay_binmsg_util_IPv4Address__DELETE( dsgTunnelAddress);
    // source_ip_address
    org_himalay_binmsg_util_IPv6Address__DELETE( source_ip_address);
    // destination_ip_address
    org_himalay_binmsg_util_IPv6Address__DELETE( destination_ip_address);
    // source_port_number

    // destination_port_number

}

int LocationType_dsg_tunnel::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // dsgTunnelAddress
    retVal += dsgTunnelAddress->read(istream);
    // source_ip_address
    retVal += source_ip_address->read(istream);
    // destination_ip_address
    retVal += destination_ip_address->read(istream);
    // source_port_number
    {
        source_port_number=istream.readUI16();
        retVal+=2;
    }
    // destination_port_number
    {
        destination_port_number=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int LocationType_dsg_tunnel::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read dsgTunnelAddress
    retVal += dsgTunnelAddress->read(istream);
    // read source_ip_address
    retVal += source_ip_address->read(istream);
    // read destination_ip_address
    retVal += destination_ip_address->read(istream);
    // read source_port_number
    {
        source_port_number=istream.readUI16();
        retVal+=2;
    }
    // read destination_port_number
    {
        destination_port_number=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int LocationType_dsg_tunnel::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for dsgTunnelAddress **/
    }
    {   /** fix dependent sizes for source_ip_address **/
    }
    {   /** fix dependent sizes for destination_ip_address **/
    }



    int retVal= 0;
    // write dsgTunnelAddress
    if ( dsgTunnelAddress != NULL ) {
        retVal +=dsgTunnelAddress->write(ostream);
    }
    // write source_ip_address
    if ( source_ip_address != NULL ) {
        retVal +=source_ip_address->write(ostream);
    }
    // write destination_ip_address
    if ( destination_ip_address != NULL ) {
        retVal +=destination_ip_address->write(ostream);
    }
    // write source_port_number
    ostream.writeUI16(source_port_number);
    retVal +=2;
    // write destination_port_number
    ostream.writeUI16(destination_port_number);
    retVal +=2;

    return retVal;
}

int LocationType_dsg_tunnel::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LocationType_dsg_tunnel\n");
    dc.increaseIndent();
    int retVal= 0;
    // write dsgTunnelAddress
    if ( dsgTunnelAddress != NULL ) {
        dc.indent();
        dc.getPs().println("dsgTunnelAddress") ;
        retVal +=dsgTunnelAddress->dump(dc);
    }
    // write source_ip_address
    if ( source_ip_address != NULL ) {
        dc.indent();
        dc.getPs().println("source_ip_address") ;
        retVal +=source_ip_address->dump(dc);
    }
    // write destination_ip_address
    if ( destination_ip_address != NULL ) {
        dc.indent();
        dc.getPs().println("destination_ip_address") ;
        retVal +=destination_ip_address->dump(dc);
    }
    // write source_port_number
    dc.indent();
    dc.getPs().print("source_port_number=");
    dc.getPs().println((long)source_port_number);
    // write destination_port_number
    dc.indent();
    dc.getPs().print("destination_port_number=");
    dc.getPs().println((long)destination_port_number);
    dc.decreaseIndent();
    return retVal;
}


// Getter for dsgTunnelAddress
//org_himalay_binmsg_util_IPv4Address__PTR_TYPE LocationType_dsg_tunnel::getDsgTunnelAddress()
//{
//return this->dsgTunnelAddress;
//}

// Setter for dsgTunnelAddress
//void LocationType_dsg_tunnel::setDsgTunnelAddress(org_himalay_binmsg_util_IPv4Address__PTR_TYPE val)
//{
//this->dsgTunnelAddress= val;
//}

// Getter for source_ip_address
//org_himalay_binmsg_util_IPv6Address__PTR_TYPE LocationType_dsg_tunnel::getSource_ip_address()
//{
//return this->source_ip_address;
//}

// Setter for source_ip_address
//void LocationType_dsg_tunnel::setSource_ip_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val)
//{
//this->source_ip_address= val;
//}

// Getter for destination_ip_address
//org_himalay_binmsg_util_IPv6Address__PTR_TYPE LocationType_dsg_tunnel::getDestination_ip_address()
//{
//return this->destination_ip_address;
//}

// Setter for destination_ip_address
//void LocationType_dsg_tunnel::setDestination_ip_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val)
//{
//this->destination_ip_address= val;
//}

// Getter for source_port_number
//ui16 LocationType_dsg_tunnel::getSource_port_number()
//{
//return this->source_port_number;
//}

// Setter for source_port_number
//void LocationType_dsg_tunnel::setSource_port_number(ui16 val)
//{
//this->source_port_number= val;
//}

// Getter for destination_port_number
//ui16 LocationType_dsg_tunnel::getDestination_port_number()
//{
//return this->destination_port_number;
//}

// Setter for destination_port_number
//void LocationType_dsg_tunnel::setDestination_port_number(ui16 val)
//{
//this->destination_port_number= val;
//}

int LocationType_dsg_tunnel::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_dsg_tunnel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_dsg_tunnel* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code