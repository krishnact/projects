#ifndef ORG_HIMALAY_CCIF_DAYLIGHTSAVINGS_1_2
#define ORG_HIMALAY_CCIF_DAYLIGHTSAVINGS_1_2
//@Generated(date = "Mon Feb 01 22:30:18 EST 2016")
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
#define org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_DaylightSavings_1_2__PTR_TYPE boost::shared_ptr<DaylightSavings_1_2>
#define org_himalay_ccif_DaylightSavings_1_2__NEW(x) {/** Serious **/x = org_himalay_ccif_DaylightSavings_1_2__PTR_TYPE(new DaylightSavings_1_2()); }
#define org_himalay_ccif_DaylightSavings_1_2__INIT(x)
#define org_himalay_ccif_DaylightSavings_1_2__DELETE(x)
#else
#define org_himalay_ccif_DaylightSavings_1_2__PTR_TYPE DaylightSavings_1_2*
#define org_himalay_ccif_DaylightSavings_1_2__NEW(x) {x= new DaylightSavings_1_2();}
#define org_himalay_ccif_DaylightSavings_1_2__INIT(x)  x=NULL;
#define org_himalay_ccif_DaylightSavings_1_2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE boost::shared_ptr<DaylightSavings_1_2::daylightSaving>
//#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__NEW(x) {x =new DaylightSavings_1_2::daylightSaving();}
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__NEW(x) {/** Serious **/x = org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE(new DaylightSavings_1_2::daylightSaving()); }
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__INIT(x)
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__DELETE(x)
#else
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE DaylightSavings_1_2::daylightSaving*
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__NEW(x) {x= new DaylightSavings_1_2::daylightSaving();}
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__INIT(x)  x=NULL;
#define org_himalay_ccif_DaylightSavings_1_2_daylightSaving__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
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




#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
class DaylightSavings_1_2;
typedef ::boost::shared_ptr<DaylightSavings_1_2> DaylightSavings_1_2Ptr;
#endif

class DaylightSavings_1_2 :public BinMessage {
// member static classes
public:

#ifdef org_himalay_ccif_DaylightSavings_1_2_daylightSaving__USE_SMART_PTR
    class daylightSaving;
    typedef ::boost::shared_ptr<daylightSaving> daylightSavingPtr;
#endif

    class daylightSaving :public BinMessage {

//  public:
//    long    references;

    public:

        DaylightSavings_1_2* parent;

        // members variables
        // daylight_savings_delta ---
    public:
        ui8 daylight_savings_delta ;
        // daylightSavingsEntryTime ---
    public:
        i32 daylightSavingsEntryTime ;
        // daylightSavingsExitTime ---
    public:
        i32 daylightSavingsExitTime ;


    public:
        daylightSaving (); // throws Exception
        virtual ~daylightSaving ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for daylight_savings_delta
        // public: ui8 getDaylight_savings_delta();

        // Setter for daylight_savings_delta
        // public: void setDaylight_savings_delta(ui8 val);

        // Getter for daylightSavingsEntryTime
        // public: ui32 getDaylightSavingsEntryTime();

        // Setter for daylightSavingsEntryTime
        // public: void setDaylightSavingsEntryTime(ui32 val);

        // Getter for daylightSavingsExitTime
        // public: ui32 getDaylightSavingsExitTime();

        // Setter for daylightSavingsExitTime
        // public: void setDaylightSavingsExitTime(ui32 val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_DaylightSavings_1_2_daylightSaving__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
    void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
    void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // daylightSavingsControl ---
public:
    ui8 daylightSavingsControl ;
    // daylightSavingInstance ---
public:
    org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE daylightSavingInstance ;


public:
    DaylightSavings_1_2 (); // throws Exception
    virtual ~DaylightSavings_1_2 ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for daylightSavingsControl
    // public: ui8 getDaylightSavingsControl();

    // Setter for daylightSavingsControl
    // public: void setDaylightSavingsControl(ui8 val);

    // Getter for daylightSavingInstance
    // public: org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE getDaylightSavingInstance();

    // Setter for daylightSavingInstance
    // public: void setDaylightSavingInstance(org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p);
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2* p);
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DAYLIGHTSAVINGS_1_2
// End of code