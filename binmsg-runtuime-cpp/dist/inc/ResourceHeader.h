#ifndef ORG_HIMALAY_CL_CDL_RESOURCEHEADER
#define ORG_HIMALAY_CL_CDL_RESOURCEHEADER
//@Generated(date = "Mon Sep 22 23:05:25 EDT 2014")
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
#define org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_ResourceHeader__PTR_TYPE boost::shared_ptr<ResourceHeader>
#define org_himalay_cl_cdl_ResourceHeader__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_ResourceHeader__PTR_TYPE(new ResourceHeader()); }
#define org_himalay_cl_cdl_ResourceHeader__INIT(x)
#define org_himalay_cl_cdl_ResourceHeader__DELETE(x)
#else
#define org_himalay_cl_cdl_ResourceHeader__PTR_TYPE ResourceHeader*
#define org_himalay_cl_cdl_ResourceHeader__NEW(x) {x= new ResourceHeader();}
#define org_himalay_cl_cdl_ResourceHeader__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_ResourceHeader__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
    class ResourceHeader;
    typedef ::boost::shared_ptr<ResourceHeader> ResourceHeaderPtr;
#endif

 class ResourceHeader :public BinMessage {

//  public:
//    long    references;

  public:


    // members variables
    // messageType ---
    public: ui8 messageType ;
    // descriptor_len ---
    public: ui8 descriptor_len ;


    public: ResourceHeader (); // throws Exception
    virtual ~ResourceHeader ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for messageType
     public: ui8 getMessageType();

        // Setter for messageType
     public: void setMessageType(ui8 val);
 
    // Getter for descriptor_len
    // public: ui8 getDescriptor_len();

        // Setter for descriptor_len
    // public: void setDescriptor_len(ui8 val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_ResourceHeader__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::ResourceHeader* p);
void intrusive_ptr_release(org::himalay::cl::cdl::ResourceHeader* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_RESOURCEHEADER
// End of code