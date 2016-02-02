#ifndef ORG_HIMALAY_CCIF_DIAGNOSTICREQ_1_MMODE
#define ORG_HIMALAY_CCIF_DIAGNOSTICREQ_1_MMODE
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "diagnosticReq1mMosemsg.h" //header for org.himalay.ccif.diagnosticReq1mMosemsg


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_diagnosticReq_1_Mmode__PTR_TYPE boost::shared_ptr<diagnosticReq_1_Mmode>
#define org_himalay_ccif_diagnosticReq_1_Mmode__NEW(x) {/** Serious **/x = org_himalay_ccif_diagnosticReq_1_Mmode__PTR_TYPE(new diagnosticReq_1_Mmode()); }
#define org_himalay_ccif_diagnosticReq_1_Mmode__INIT(x)
#define org_himalay_ccif_diagnosticReq_1_Mmode__DELETE(x)
#else
#define org_himalay_ccif_diagnosticReq_1_Mmode__PTR_TYPE diagnosticReq_1_Mmode*
#define org_himalay_ccif_diagnosticReq_1_Mmode__NEW(x) {x= new diagnosticReq_1_Mmode();}
#define org_himalay_ccif_diagnosticReq_1_Mmode__INIT(x)  x=NULL;
#define org_himalay_ccif_diagnosticReq_1_Mmode__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
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
using namespace org::himalay::ccif;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
class diagnosticReq_1_Mmode;
typedef ::boost::shared_ptr<diagnosticReq_1_Mmode> diagnosticReq_1_MmodePtr;
#endif

class diagnosticReq_1_Mmode :public   APDUBaseFactory::APDUBase { //Concrete type is diagnosticReq_1_Mmode

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // length ---
public:
    ui8 length ;
    // selfDiagnostics ---
public:
    ArrayList(diagnosticReq1mMosemsg) selfDiagnostics ;


public:
    diagnosticReq_1_Mmode (); // throws Exception
    virtual ~diagnosticReq_1_Mmode ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for header
    // public: org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();

    // Setter for header
    // public: void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val);

    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for selfDiagnostics
    // public: ArrayList(diagnosticReq1mMosemsg) getSelfDiagnostics();

    // Setter for selfDiagnostics
    // public: void setSelfDiagnostics(ArrayList(diagnosticReq1mMosemsg) val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq_1_Mmode* p);
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq_1_Mmode* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DIAGNOSTICREQ_1_MMODE
// End of code