#ifndef ORG_HIMALAY_CL_CDL_APDULENGTHFIELD
#define ORG_HIMALAY_CL_CDL_APDULENGTHFIELD
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
#define org_himalay_cl_cdl_APDULengthField__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_APDULengthField__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_APDULengthField__PTR_TYPE boost::shared_ptr<APDULengthField>
#define org_himalay_cl_cdl_APDULengthField__NEW(x) {x =org_himalay_cl_cdl_APDULengthField__PTR_TYPE(new APDULengthField());}
#define org_himalay_cl_cdl_APDULengthField__INIT(x)
#define org_himalay_cl_cdl_APDULengthField__DELETE(x)
#else
#define org_himalay_cl_cdl_APDULengthField__PTR_TYPE APDULengthField*
#define org_himalay_cl_cdl_APDULengthField__NEW(x) {x= new APDULengthField();}
#define org_himalay_cl_cdl_APDULengthField__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_APDULengthField__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_APDULengthField__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_APDULengthField__USE_SMART_PTR
class APDULengthField;
typedef ::boost::shared_ptr<APDULengthField> APDULengthFieldPtr;
#endif

class APDULengthField :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // value ---
public:
    i32 value ;


public:
    APDULengthField (); // throws Exception
    virtual ~APDULengthField ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for value
    // public: ui32 getValue();

    // Setter for value
    // public: void setValue(ui32 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_APDULengthField__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::cl::cdl::APDULengthField* p);
void shared_ptr_release(org::himalay::cl::cdl::APDULengthField* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_APDULENGTHFIELD
// End of code
