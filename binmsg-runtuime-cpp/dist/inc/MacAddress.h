#ifndef ORG_HIMALAY_BINMSG_UTIL_MACADDRESS
#define ORG_HIMALAY_BINMSG_UTIL_MACADDRESS
//@Generated(date = "Mon Sep 22 23:11:48 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "MacAddress_.h" //header for org.himalay.binmsg.util.MacAddress_




/**
 * Definitions for enclosing type
 */
#define org_himalay_binmsg_util_MacAddress__USE_SMART_PTR
#ifdef org_himalay_binmsg_util_MacAddress__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_binmsg_util_MacAddress__PTR_TYPE boost::shared_ptr<MacAddress>
#define org_himalay_binmsg_util_MacAddress__NEW(x) {/** Serious **/x = org_himalay_binmsg_util_MacAddress__PTR_TYPE(new MacAddress()); }
#define org_himalay_binmsg_util_MacAddress__INIT(x)
#define org_himalay_binmsg_util_MacAddress__DELETE(x)
#else
#define org_himalay_binmsg_util_MacAddress__PTR_TYPE MacAddress*
#define org_himalay_binmsg_util_MacAddress__NEW(x) {x= new MacAddress();}
#define org_himalay_binmsg_util_MacAddress__INIT(x)  x=NULL;
#define org_himalay_binmsg_util_MacAddress__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_binmsg_util_MacAddress__USE_SMART_PTR
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




#ifdef org_himalay_binmsg_util_MacAddress__USE_SMART_PTR
    class MacAddress;
    typedef ::boost::shared_ptr<MacAddress> MacAddressPtr;
#endif

 class MacAddress :public  MacAddress_ { //Concrete type is MacAddress

//  public:
//    long    references;

  public:


    // members variables


    public: MacAddress (); // throws Exception
    virtual ~MacAddress ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
    

    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_binmsg_util_MacAddress__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::binmsg::util::MacAddress* p);
void intrusive_ptr_release(org::himalay::binmsg::util::MacAddress* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_BINMSG_UTIL_MACADDRESS
// End of code