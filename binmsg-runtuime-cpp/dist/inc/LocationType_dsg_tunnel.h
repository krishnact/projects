#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_TUNNEL
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_TUNNEL
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "IPv4Address.h" //header for org.himalay.binmsg.util.IPv4Address
#include "IPv6Address.h" //header for org.himalay.binmsg.util.IPv6Address


#include "LocationTypeFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__PTR_TYPE boost::shared_ptr<LocationType_dsg_tunnel>
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_LocationType_dsg_tunnel__PTR_TYPE(new LocationType_dsg_tunnel()); }
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__INIT(x)
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__PTR_TYPE LocationType_dsg_tunnel*
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__NEW(x) {x= new LocationType_dsg_tunnel();}
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_LocationType_dsg_tunnel__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif
//#endif


// Namespace 
namespace org{namespace himalay{namespace cl{namespace cdl{

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::binmsg::util;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
    class LocationType_dsg_tunnel;
    typedef ::boost::shared_ptr<LocationType_dsg_tunnel> LocationType_dsg_tunnelPtr;
#endif

 class LocationType_dsg_tunnel :public   LocationTypeFactory::LocationType { //Concrete type is LocationType_dsg_tunnel

//  public:
//    long    references;

  public:


    // members variables
    // dsgTunnelAddress ---
    public: org_himalay_binmsg_util_IPv4Address__PTR_TYPE dsgTunnelAddress ;
    // source_ip_address ---
    public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE source_ip_address ;
    // destination_ip_address ---
    public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE destination_ip_address ;
    // source_port_number ---
    public: ui16 source_port_number ;
    // destination_port_number ---
    public: ui16 destination_port_number ;


    public: LocationType_dsg_tunnel (); // throws Exception
    virtual ~LocationType_dsg_tunnel ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for dsgTunnelAddress
    // public: org_himalay_binmsg_util_IPv4Address__PTR_TYPE getDsgTunnelAddress();

        // Setter for dsgTunnelAddress
    // public: void setDsgTunnelAddress(org_himalay_binmsg_util_IPv4Address__PTR_TYPE val);
 
    // Getter for source_ip_address
    // public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE getSource_ip_address();

        // Setter for source_ip_address
    // public: void setSource_ip_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val);
 
    // Getter for destination_ip_address
    // public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE getDestination_ip_address();

        // Setter for destination_ip_address
    // public: void setDestination_ip_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val);
 
    // Getter for source_port_number
    // public: ui16 getSource_port_number();

        // Setter for source_port_number
    // public: void setSource_port_number(ui16 val);
 
    // Getter for destination_port_number
    // public: ui16 getDestination_port_number();

        // Setter for destination_port_number
    // public: void setDestination_port_number(ui16 val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_LocationType_dsg_tunnel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_dsg_tunnel* p);
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_dsg_tunnel* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_DSG_TUNNEL
// End of code