#ifndef ORG_HIMALAY_CL_CDL_HOSTMACADDRESS
#define ORG_HIMALAY_CL_CDL_HOSTMACADDRESS
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "MacAddress.h" //header for org.himalay.binmsg.util.MacAddress
#include "ResourceHeader.h" //header for org.himalay.cl.cdl.ResourceHeader


#include "ResourceFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_HostMacAddress__PTR_TYPE boost::shared_ptr<HostMacAddress>
#define org_himalay_cl_cdl_HostMacAddress__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_HostMacAddress__PTR_TYPE(new HostMacAddress()); }
#define org_himalay_cl_cdl_HostMacAddress__INIT(x)
#define org_himalay_cl_cdl_HostMacAddress__DELETE(x)
#else
#define org_himalay_cl_cdl_HostMacAddress__PTR_TYPE HostMacAddress*
#define org_himalay_cl_cdl_HostMacAddress__NEW(x) {x= new HostMacAddress();}
#define org_himalay_cl_cdl_HostMacAddress__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_HostMacAddress__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
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
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
    class HostMacAddress;
    typedef ::boost::shared_ptr<HostMacAddress> HostMacAddressPtr;
#endif

 class HostMacAddress :public   ResourceFactory::Resource { //Concrete type is HostMacAddress

//  public:
//    long    references;

  public:


    // members variables
    // header ---
    public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header ;
    // macAddress ---
    public: org_himalay_binmsg_util_MacAddress__PTR_TYPE macAddress ;


    public: HostMacAddress (); // throws Exception
    virtual ~HostMacAddress ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for header
    // public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE getHeader();

        // Setter for header
    // public: void setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val);
 
    // Getter for macAddress
    // public: org_himalay_binmsg_util_MacAddress__PTR_TYPE getMacAddress();

        // Setter for macAddress
    // public: void setMacAddress(org_himalay_binmsg_util_MacAddress__PTR_TYPE val);


    public: int getSize();// throws IOException
    
    public: void setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header);
    
    public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_cl_cdl_HostMacAddress__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::HostMacAddress* p);
void intrusive_ptr_release(org::himalay::cl::cdl::HostMacAddress* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_HOSTMACADDRESS
// End of code