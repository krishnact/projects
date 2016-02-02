#ifndef ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_2
#define ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_2
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "IPv6Address.h" //header for org.himalay.binmsg.util.IPv6Address




/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_DownloadType_2__PTR_TYPE boost::shared_ptr<DownloadType_2>
#define org_himalay_cl_cdl_DownloadType_2__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_DownloadType_2__PTR_TYPE(new DownloadType_2()); }
#define org_himalay_cl_cdl_DownloadType_2__INIT(x)
#define org_himalay_cl_cdl_DownloadType_2__DELETE(x)
#else
#define org_himalay_cl_cdl_DownloadType_2__PTR_TYPE DownloadType_2*
#define org_himalay_cl_cdl_DownloadType_2__NEW(x) {x= new DownloadType_2();}
#define org_himalay_cl_cdl_DownloadType_2__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_DownloadType_2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
    class DownloadType_2;
    typedef ::boost::shared_ptr<DownloadType_2> DownloadType_2Ptr;
#endif

 class DownloadType_2 :public BinMessage {

//  public:
//    long    references;

  public:


    // members variables
    // tftp_server_address ---
    public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE tftp_server_address ;


    public: DownloadType_2 (); // throws Exception
    virtual ~DownloadType_2 ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for tftp_server_address
    // public: org_himalay_binmsg_util_IPv6Address__PTR_TYPE getTftp_server_address();

        // Setter for tftp_server_address
    // public: void setTftp_server_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::DownloadType_2* p);
void intrusive_ptr_release(org::himalay::cl::cdl::DownloadType_2* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_DOWNLOADTYPE_2
// End of code