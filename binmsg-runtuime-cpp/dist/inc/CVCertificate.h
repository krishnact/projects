#ifndef ORG_HIMALAY_CL_CDL_CVCERTIFICATE
#define ORG_HIMALAY_CL_CDL_CVCERTIFICATE
//@Generated(date = "Mon Sep 22 12:29:06 EDT 2014")
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
#define org_himalay_cl_cdl_CVCertificate__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_CVCertificate__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_CVCertificate__PTR_TYPE boost::shared_ptr<CVCertificate>
#define org_himalay_cl_cdl_CVCertificate__NEW(x) {x = org_himalay_cl_cdl_CVCertificate__PTR_TYPE(new CVCertificate());}
#define org_himalay_cl_cdl_CVCertificate__INIT(x)
#define org_himalay_cl_cdl_CVCertificate__DELETE(x)
#else
#define org_himalay_cl_cdl_CVCertificate__PTR_TYPE CVCertificate*
#define org_himalay_cl_cdl_CVCertificate__NEW(x) {x= new CVCertificate();}
#define org_himalay_cl_cdl_CVCertificate__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_CVCertificate__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_CVCertificate__USE_SMART_PTR
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
namespace org {
namespace himalay {
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_cl_cdl_CVCertificate__USE_SMART_PTR
class CVCertificate;
typedef ::boost::shared_ptr<CVCertificate> CVCertificatePtr;
#endif

class CVCertificate :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // id ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE id; ;


public:
    CVCertificate (); // throws Exception
    virtual ~CVCertificate ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for id
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getId();

    // Setter for id
    // public: void setId(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_CVCertificate__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::cl::cdl::CVCertificate* p);
void shared_ptr_release(org::himalay::cl::cdl::CVCertificate* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_CVCERTIFICATE
// End of code
