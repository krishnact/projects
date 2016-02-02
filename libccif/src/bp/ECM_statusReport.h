#ifndef ORG_HIMALAY_CCIF_ECM_STATUSREPORT
#define ORG_HIMALAY_CCIF_ECM_STATUSREPORT
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
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
#define org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ECM_statusReport__PTR_TYPE boost::shared_ptr<ECM_statusReport>
#define org_himalay_ccif_ECM_statusReport__NEW(x) {/** Serious **/x = org_himalay_ccif_ECM_statusReport__PTR_TYPE(new ECM_statusReport()); }
#define org_himalay_ccif_ECM_statusReport__INIT(x)
#define org_himalay_ccif_ECM_statusReport__DELETE(x)
#else
#define org_himalay_ccif_ECM_statusReport__PTR_TYPE ECM_statusReport*
#define org_himalay_ccif_ECM_statusReport__NEW(x) {x= new ECM_statusReport();}
#define org_himalay_ccif_ECM_statusReport__INIT(x)  x=NULL;
#define org_himalay_ccif_ECM_statusReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
class ECM_statusReport;
typedef ::boost::shared_ptr<ECM_statusReport> ECM_statusReportPtr;
#endif

class ECM_statusReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // downstreamCenterFreq ---
public:
    ui16 downstreamCenterFreq ;
    // downstreamPowerLevel ---
public:
    ui16 downstreamPowerLevel ;
    // bf1 ---
public:
    ui8 bf1 ;
    // upstreamXmtCenterFreq ---
public:
    ui16 upstreamXmtCenterFreq ;
    // upstreamPowerLevel ---
public:
    ui16 upstreamPowerLevel ;
    // upstreamSymbolRate ---
public:
    ui8 upstreamSymbolRate ;


public:
    ECM_statusReport (); // throws Exception
    virtual ~ECM_statusReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for downstreamCenterFreq
    // public: ui16 getDownstreamCenterFreq();

    // Setter for downstreamCenterFreq
    // public: void setDownstreamCenterFreq(ui16 val);

    // Getter for downstreamPowerLevel
    // public: ui16 getDownstreamPowerLevel();

    // Setter for downstreamPowerLevel
    // public: void setDownstreamPowerLevel(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for upstreamXmtCenterFreq
    // public: ui16 getUpstreamXmtCenterFreq();

    // Setter for upstreamXmtCenterFreq
    // public: void setUpstreamXmtCenterFreq(ui16 val);

    // Getter for upstreamPowerLevel
    // public: ui16 getUpstreamPowerLevel();

    // Setter for upstreamPowerLevel
    // public: void setUpstreamPowerLevel(ui16 val);

    // Getter for upstreamSymbolRate
    // public: ui8 getUpstreamSymbolRate();

    // Setter for upstreamSymbolRate
    // public: void setUpstreamSymbolRate(ui8 val);


public:
    int getDownstreamCarrierLockStatus( );

public:
    void setDownstreamCarrierLockStatus(int val);

public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getChannel_s_cdmaStatus( );

public:
    void setChannel_s_cdmaStatus(int val);

public:
    int getUpstreamModulationType( );

public:
    void setUpstreamModulationType(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ECM_statusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ECM_statusReport* p);
void intrusive_ptr_release(org::himalay::ccif::ECM_statusReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_ECM_STATUSREPORT
// End of code