#ifndef ORG_HIMALAY_CCIF_DIAGNOSTICREQ1MMOSEMSG
#define ORG_HIMALAY_CCIF_DIAGNOSTICREQ1MMOSEMSG
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
#define org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_diagnosticReq1mMosemsg__PTR_TYPE boost::shared_ptr<diagnosticReq1mMosemsg>
#define org_himalay_ccif_diagnosticReq1mMosemsg__NEW(x) {/** Serious **/x = org_himalay_ccif_diagnosticReq1mMosemsg__PTR_TYPE(new diagnosticReq1mMosemsg()); }
#define org_himalay_ccif_diagnosticReq1mMosemsg__INIT(x)
#define org_himalay_ccif_diagnosticReq1mMosemsg__DELETE(x)
#else
#define org_himalay_ccif_diagnosticReq1mMosemsg__PTR_TYPE diagnosticReq1mMosemsg*
#define org_himalay_ccif_diagnosticReq1mMosemsg__NEW(x) {x= new diagnosticReq1mMosemsg();}
#define org_himalay_ccif_diagnosticReq1mMosemsg__INIT(x)  x=NULL;
#define org_himalay_ccif_diagnosticReq1mMosemsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
class diagnosticReq1mMosemsg;
typedef ::boost::shared_ptr<diagnosticReq1mMosemsg> diagnosticReq1mMosemsgPtr;
#endif

class diagnosticReq1mMosemsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // diagnosticid ---
public:
    ui8 diagnosticid ;
    // itsid ---
public:
    ui8 itsid ;


public:
    diagnosticReq1mMosemsg (); // throws Exception
    virtual ~diagnosticReq1mMosemsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for diagnosticid
    // public: ui8 getDiagnosticid();

    // Setter for diagnosticid
    // public: void setDiagnosticid(ui8 val);

    // Getter for itsid
    // public: ui8 getItsid();

    // Setter for itsid
    // public: void setItsid(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq1mMosemsg* p);
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq1mMosemsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DIAGNOSTICREQ1MMOSEMSG
// End of code