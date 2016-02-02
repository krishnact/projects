#ifndef ORG_HIMALAY_CL_CDL_HEADER
#define ORG_HIMALAY_CL_CDL_HEADER
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDULengthField.h" //header for org.himalay.cl.cdl.APDULengthField




/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_Header__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_Header__PTR_TYPE boost::shared_ptr<Header>
#define org_himalay_cl_cdl_Header__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_Header__PTR_TYPE(new Header()); }
#define org_himalay_cl_cdl_Header__INIT(x)
#define org_himalay_cl_cdl_Header__DELETE(x)
#else
#define org_himalay_cl_cdl_Header__PTR_TYPE Header*
#define org_himalay_cl_cdl_Header__NEW(x) {x= new Header();}
#define org_himalay_cl_cdl_Header__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_Header__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
    class Header;
    typedef ::boost::shared_ptr<Header> HeaderPtr;
#endif

 class Header :public BinMessage {

//  public:
//    long    references;

  public:


    // members variables
    // messageType ---
    public: int messageType ;
    // length ---
    public: org_himalay_cl_cdl_APDULengthField__PTR_TYPE length ;


    public: Header (); // throws Exception
    virtual ~Header ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for messageType
     public: ui24 getMessageType();

        // Setter for messageType
     public: void setMessageType(ui24 val);
 
    // Getter for length
    // public: org_himalay_cl_cdl_APDULengthField__PTR_TYPE getLength();

        // Setter for length
    // public: void setLength(org_himalay_cl_cdl_APDULengthField__PTR_TYPE val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_Header__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::Header* p);
void intrusive_ptr_release(org::himalay::cl::cdl::Header* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_HEADER
// End of code