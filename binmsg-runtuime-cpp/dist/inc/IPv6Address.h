#ifndef ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS
#define ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS
//@Generated(date = "Mon Sep 22 23:11:49 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "IPv6Address_.h" //header for org.himalay.binmsg.util.IPv6Address_




/**
 * Definitions for enclosing type
 */
#define org_himalay_binmsg_util_IPv6Address__USE_SMART_PTR
#ifdef org_himalay_binmsg_util_IPv6Address__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_binmsg_util_IPv6Address__PTR_TYPE boost::shared_ptr<IPv6Address>
#define org_himalay_binmsg_util_IPv6Address__NEW(x) {/** Serious **/x = org_himalay_binmsg_util_IPv6Address__PTR_TYPE(new IPv6Address()); }
#define org_himalay_binmsg_util_IPv6Address__INIT(x)
#define org_himalay_binmsg_util_IPv6Address__DELETE(x)
#else
#define org_himalay_binmsg_util_IPv6Address__PTR_TYPE IPv6Address*
#define org_himalay_binmsg_util_IPv6Address__NEW(x) {x= new IPv6Address();}
#define org_himalay_binmsg_util_IPv6Address__INIT(x)  x=NULL;
#define org_himalay_binmsg_util_IPv6Address__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_binmsg_util_IPv6Address__USE_SMART_PTR
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
namespace org{namespace himalay{namespace binmsg{namespace util{

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::binmsg::util;




#ifdef org_himalay_binmsg_util_IPv6Address__USE_SMART_PTR
    class IPv6Address;
    typedef ::boost::shared_ptr<IPv6Address> IPv6AddressPtr;
#endif

 class IPv6Address :public  IPv6Address_ { //Concrete type is IPv6Address

//  public:
//    long    references;

  public:


    // members variables


    public: IPv6Address (); // throws Exception
    virtual ~IPv6Address ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
    

    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_binmsg_util_IPv6Address__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::binmsg::util::IPv6Address* p);
void intrusive_ptr_release(org::himalay::binmsg::util::IPv6Address* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS
// End of code