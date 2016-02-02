#ifndef ORG_HIMALAY_CCIF_FAT_STATUSREPORT
#define ORG_HIMALAY_CCIF_FAT_STATUSREPORT
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
#define org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FAT_statusReport__PTR_TYPE boost::shared_ptr<FAT_statusReport>
#define org_himalay_ccif_FAT_statusReport__NEW(x) {/** Serious **/x = org_himalay_ccif_FAT_statusReport__PTR_TYPE(new FAT_statusReport()); }
#define org_himalay_ccif_FAT_statusReport__INIT(x)
#define org_himalay_ccif_FAT_statusReport__DELETE(x)
#else
#define org_himalay_ccif_FAT_statusReport__PTR_TYPE FAT_statusReport*
#define org_himalay_ccif_FAT_statusReport__NEW(x) {x= new FAT_statusReport();}
#define org_himalay_ccif_FAT_statusReport__INIT(x)  x=NULL;
#define org_himalay_ccif_FAT_statusReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
class FAT_statusReport;
typedef ::boost::shared_ptr<FAT_statusReport> FAT_statusReportPtr;
#endif

class FAT_statusReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // SNR ---
public:
    ui16 SNR ;
    // signalLevel ---
public:
    ui16 signalLevel ;


public:
    FAT_statusReport (); // throws Exception
    virtual ~FAT_statusReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for SNR
    // public: ui16 getSNR();

    // Setter for SNR
    // public: void setSNR(ui16 val);

    // Getter for signalLevel
    // public: ui16 getSignalLevel();

    // Setter for signalLevel
    // public: void setSignalLevel(ui16 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getPCR_lock( );

public:
    void setPCR_lock(int val);

public:
    int getModulationMode( );

public:
    void setModulationMode(int val);

public:
    int getCarrierLockStatus( );

public:
    void setCarrierLockStatus(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_FAT_statusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FAT_statusReport* p);
void intrusive_ptr_release(org::himalay::ccif::FAT_statusReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FAT_STATUSREPORT
// End of code