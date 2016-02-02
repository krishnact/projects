#ifndef ORG_HIMALAY_CCIF_RDC_REPORT
#define ORG_HIMALAY_CCIF_RDC_REPORT
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
#define org_himalay_ccif_RDC_report__USE_SMART_PTR
#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_RDC_report__PTR_TYPE boost::shared_ptr<RDC_report>
#define org_himalay_ccif_RDC_report__NEW(x) {/** Serious **/x = org_himalay_ccif_RDC_report__PTR_TYPE(new RDC_report()); }
#define org_himalay_ccif_RDC_report__INIT(x)
#define org_himalay_ccif_RDC_report__DELETE(x)
#else
#define org_himalay_ccif_RDC_report__PTR_TYPE RDC_report*
#define org_himalay_ccif_RDC_report__NEW(x) {x= new RDC_report();}
#define org_himalay_ccif_RDC_report__INIT(x)  x=NULL;
#define org_himalay_ccif_RDC_report__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
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




#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
class RDC_report;
typedef ::boost::shared_ptr<RDC_report> RDC_reportPtr;
#endif

class RDC_report :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // RDC_centerFreq ---
public:
    ui16 RDC_centerFreq ;
    // RDC_transmitterPowerLevel ---
public:
    ui8 RDC_transmitterPowerLevel ;
    // bf1 ---
public:
    ui8 bf1 ;


public:
    RDC_report (); // throws Exception
    virtual ~RDC_report ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for RDC_centerFreq
    // public: ui16 getRDC_centerFreq();

    // Setter for RDC_centerFreq
    // public: void setRDC_centerFreq(ui16 val);

    // Getter for RDC_transmitterPowerLevel
    // public: ui8 getRDC_transmitterPowerLevel();

    // Setter for RDC_transmitterPowerLevel
    // public: void setRDC_transmitterPowerLevel(ui8 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getRDC_dataRate( );

public:
    void setRDC_dataRate(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_RDC_report__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RDC_report* p);
void intrusive_ptr_release(org::himalay::ccif::RDC_report* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_RDC_REPORT
// End of code