#ifndef ORG_HIMALAY_CL_CDL_HARDWAREVERSIONID
#define ORG_HIMALAY_CL_CDL_HARDWAREVERSIONID
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ResourceHeader.h" //header for org.himalay.cl.cdl.ResourceHeader


#include "ResourceFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_HardwareVersionId__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_HardwareVersionId__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_HardwareVersionId__PTR_TYPE boost::shared_ptr<HardwareVersionId>
#define org_himalay_cl_cdl_HardwareVersionId__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_HardwareVersionId__PTR_TYPE(new HardwareVersionId()); }
#define org_himalay_cl_cdl_HardwareVersionId__INIT(x)
#define org_himalay_cl_cdl_HardwareVersionId__DELETE(x)
#else
#define org_himalay_cl_cdl_HardwareVersionId__PTR_TYPE HardwareVersionId*
#define org_himalay_cl_cdl_HardwareVersionId__NEW(x) {x= new HardwareVersionId();}
#define org_himalay_cl_cdl_HardwareVersionId__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_HardwareVersionId__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_HardwareVersionId__USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_HardwareVersionId__USE_SMART_PTR
    class HardwareVersionId;
    typedef ::boost::shared_ptr<HardwareVersionId> HardwareVersionIdPtr;
#endif

 class HardwareVersionId :public   ResourceFactory::Resource { //Concrete type is HardwareVersionId

//  public:
//    long    references;

  public:


    // members variables
    // header ---
    public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header ;
    // id ---
    public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE id; ;


    public: HardwareVersionId (); // throws Exception
    virtual ~HardwareVersionId ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for header
    // public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE getHeader();

        // Setter for header
    // public: void setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE val);
 
    // Getter for id
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getId();

        // Setter for id
    // public: void setId(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public: int getSize();// throws IOException
    
    public: void setHeader(org_himalay_cl_cdl_ResourceHeader__PTR_TYPE header);
    
    public: org_himalay_cl_cdl_ResourceHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_cl_cdl_HardwareVersionId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::HardwareVersionId* p);
void intrusive_ptr_release(org::himalay::cl::cdl::HardwareVersionId* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_HARDWAREVERSIONID
// End of code