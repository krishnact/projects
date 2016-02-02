#ifndef ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2
#define ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "code_version_table2_.h" //header for org.himalay.cl.cdl.code_version_table2_




/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_code_version_table2__PTR_TYPE boost::shared_ptr<code_version_table2>
#define org_himalay_cl_cdl_code_version_table2__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_code_version_table2__PTR_TYPE(new code_version_table2()); }
#define org_himalay_cl_cdl_code_version_table2__INIT(x)
#define org_himalay_cl_cdl_code_version_table2__DELETE(x)
#else
#define org_himalay_cl_cdl_code_version_table2__PTR_TYPE code_version_table2*
#define org_himalay_cl_cdl_code_version_table2__NEW(x) {x= new code_version_table2();}
#define org_himalay_cl_cdl_code_version_table2__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_code_version_table2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
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
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
    class code_version_table2;
    typedef ::boost::shared_ptr<code_version_table2> code_version_table2Ptr;
#endif

 class code_version_table2 :public  code_version_table2_ { //Concrete type is code_version_table2

//  public:
//    long    references;

  public:


    // members variables


    public: code_version_table2 (); // throws Exception
    virtual ~code_version_table2 ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
    

    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_code_version_table2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::code_version_table2* p);
void intrusive_ptr_release(org::himalay::cl::cdl::code_version_table2* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2
// End of code