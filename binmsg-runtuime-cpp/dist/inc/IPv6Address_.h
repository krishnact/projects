#ifndef ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS_
#define ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS_
//@Generated(date = "Mon Sep 22 23:11:47 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"




/**
 * Definitions for enclosing type
 */
#define org_himalay_binmsg_util_IPv6Address___USE_SMART_PTR
#ifdef org_himalay_binmsg_util_IPv6Address___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_binmsg_util_IPv6Address___PTR_TYPE boost::shared_ptr<IPv6Address_>
#define org_himalay_binmsg_util_IPv6Address___NEW(x) {/** Serious **/x = org_himalay_binmsg_util_IPv6Address___PTR_TYPE(new IPv6Address_()); }
#define org_himalay_binmsg_util_IPv6Address___INIT(x)
#define org_himalay_binmsg_util_IPv6Address___DELETE(x)
#else
#define org_himalay_binmsg_util_IPv6Address___PTR_TYPE IPv6Address_*
#define org_himalay_binmsg_util_IPv6Address___NEW(x) {x= new IPv6Address_();}
#define org_himalay_binmsg_util_IPv6Address___INIT(x)  x=NULL;
#define org_himalay_binmsg_util_IPv6Address___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_binmsg_util_IPv6Address___USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_binmsg_util_IPv6Address___USE_SMART_PTR
    class IPv6Address_;
    typedef ::boost::shared_ptr<IPv6Address_> IPv6Address_Ptr;
#endif

 class IPv6Address_ :public BinMessage {

//  public:
//    long    references;

  public:


    // members variables
    // buffer ---
    public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE buffer; ;


    public: IPv6Address_ (); // throws Exception
    virtual ~IPv6Address_ ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for buffer
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getBuffer();

        // Setter for buffer
    // public: void setBuffer(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_binmsg_util_IPv6Address___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::binmsg::util::IPv6Address_* p);
void intrusive_ptr_release(org::himalay::binmsg::util::IPv6Address_* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_BINMSG_UTIL_IPV6ADDRESS_
// End of code