#ifndef ORG_HIMALAY_CCIF_DIAGNOSTICREQ_2_SMODE
#define ORG_HIMALAY_CCIF_DIAGNOSTICREQ_2_SMODE
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
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
#define org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_diagnosticReq_2_Smode__PTR_TYPE boost::shared_ptr<diagnosticReq_2_Smode>
#define org_himalay_ccif_diagnosticReq_2_Smode__NEW(x) {/** Serious **/x = org_himalay_ccif_diagnosticReq_2_Smode__PTR_TYPE(new diagnosticReq_2_Smode()); }
#define org_himalay_ccif_diagnosticReq_2_Smode__INIT(x)
#define org_himalay_ccif_diagnosticReq_2_Smode__DELETE(x)
#else
#define org_himalay_ccif_diagnosticReq_2_Smode__PTR_TYPE diagnosticReq_2_Smode*
#define org_himalay_ccif_diagnosticReq_2_Smode__NEW(x) {x= new diagnosticReq_2_Smode();}
#define org_himalay_ccif_diagnosticReq_2_Smode__INIT(x)  x=NULL;
#define org_himalay_ccif_diagnosticReq_2_Smode__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
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
namespace ccif {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
class diagnosticReq_2_Smode;
typedef ::boost::shared_ptr<diagnosticReq_2_Smode> diagnosticReq_2_SmodePtr;
#endif

class diagnosticReq_2_Smode :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // length ---
public:
    ui8 length ;
    // selfDiagnostics ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE selfDiagnostics; ;


public:
    diagnosticReq_2_Smode (); // throws Exception
    virtual ~diagnosticReq_2_Smode ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for selfDiagnostics
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getSelfDiagnostics();

    // Setter for selfDiagnostics
    // public: void setSelfDiagnostics(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq_2_Smode* p);
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq_2_Smode* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DIAGNOSTICREQ_2_SMODE
// End of code