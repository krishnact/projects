#ifndef ORG_HIMALAY_CCIF_FDC_REPORT
#define ORG_HIMALAY_CCIF_FDC_REPORT
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_FDC_report__USE_SMART_PTR
#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FDC_report__PTR_TYPE boost::shared_ptr<FDC_report>
#define org_himalay_ccif_FDC_report__NEW(x) {/** Serious **/x = org_himalay_ccif_FDC_report__PTR_TYPE(new FDC_report()); }
#define org_himalay_ccif_FDC_report__INIT(x)
#define org_himalay_ccif_FDC_report__DELETE(x)
#else
#define org_himalay_ccif_FDC_report__PTR_TYPE FDC_report*
#define org_himalay_ccif_FDC_report__NEW(x) {x= new FDC_report();}
#define org_himalay_ccif_FDC_report__INIT(x)  x=NULL;
#define org_himalay_ccif_FDC_report__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
class FDC_report;
typedef ::boost::shared_ptr<FDC_report> FDC_reportPtr;
#endif

class FDC_report :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // FDC_centerFreq ---
public:
    ui16 FDC_centerFreq ;
    // bf1 ---
public:
    ui8 bf1 ;


public:
    FDC_report (); // throws Exception
    virtual ~FDC_report ();
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

    // Getter for FDC_centerFreq
    // public: ui16 getFDC_centerFreq();

    // Setter for FDC_centerFreq
    // public: void setFDC_centerFreq(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getCarrierLockStatus( );

public:
    void setCarrierLockStatus(int val);

public:
    int getReserved1( );

public:
    void setReserved1(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_FDC_report__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FDC_report* p);
void intrusive_ptr_release(org::himalay::ccif::FDC_report* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FDC_REPORT
// End of code