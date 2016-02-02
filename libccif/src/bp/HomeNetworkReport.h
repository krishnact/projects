#ifndef ORG_HIMALAY_CCIF_HOMENETWORKREPORT
#define ORG_HIMALAY_CCIF_HOMENETWORKREPORT
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "HomeNetworkReportMsg.h" //header for org.himalay.ccif.HomeNetworkReportMsg




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_HomeNetworkReport__PTR_TYPE boost::shared_ptr<HomeNetworkReport>
#define org_himalay_ccif_HomeNetworkReport__NEW(x) {/** Serious **/x = org_himalay_ccif_HomeNetworkReport__PTR_TYPE(new HomeNetworkReport()); }
#define org_himalay_ccif_HomeNetworkReport__INIT(x)
#define org_himalay_ccif_HomeNetworkReport__DELETE(x)
#else
#define org_himalay_ccif_HomeNetworkReport__PTR_TYPE HomeNetworkReport*
#define org_himalay_ccif_HomeNetworkReport__NEW(x) {x= new HomeNetworkReport();}
#define org_himalay_ccif_HomeNetworkReport__INIT(x)  x=NULL;
#define org_himalay_ccif_HomeNetworkReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
class HomeNetworkReport;
typedef ::boost::shared_ptr<HomeNetworkReport> HomeNetworkReportPtr;
#endif

class HomeNetworkReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // maxClients ---
public:
    ui8 maxClients ;
    // host_DRM_status ---
public:
    ui8 host_DRM_status ;
    // clients ---
public:
    ArrayList(HomeNetworkReportMsg) clients ;


public:
    HomeNetworkReport (); // throws Exception
    virtual ~HomeNetworkReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for maxClients
    // public: ui8 getMaxClients();

    // Setter for maxClients
    // public: void setMaxClients(ui8 val);

    // Getter for host_DRM_status
    // public: ui8 getHost_DRM_status();

    // Setter for host_DRM_status
    // public: void setHost_DRM_status(ui8 val);

    // Getter for clients
    // public: ArrayList(HomeNetworkReportMsg) getClients();

    // Setter for clients
    // public: void setClients(ArrayList(HomeNetworkReportMsg) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HomeNetworkReport* p);
void intrusive_ptr_release(org::himalay::ccif::HomeNetworkReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_HOMENETWORKREPORT
// End of code