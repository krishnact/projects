#ifndef ORG_HIMALAY_CCIF_NETADDRESSREPORT
#define ORG_HIMALAY_CCIF_NETADDRESSREPORT
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "NetAddressReportMsg.h" //header for org.himalay.ccif.NetAddressReportMsg




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_NetAddressReport__USE_SMART_PTR
#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NetAddressReport__PTR_TYPE boost::shared_ptr<NetAddressReport>
#define org_himalay_ccif_NetAddressReport__NEW(x) {/** Serious **/x = org_himalay_ccif_NetAddressReport__PTR_TYPE(new NetAddressReport()); }
#define org_himalay_ccif_NetAddressReport__INIT(x)
#define org_himalay_ccif_NetAddressReport__DELETE(x)
#else
#define org_himalay_ccif_NetAddressReport__PTR_TYPE NetAddressReport*
#define org_himalay_ccif_NetAddressReport__NEW(x) {x= new NetAddressReport();}
#define org_himalay_ccif_NetAddressReport__INIT(x)  x=NULL;
#define org_himalay_ccif_NetAddressReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
class NetAddressReport;
typedef ::boost::shared_ptr<NetAddressReport> NetAddressReportPtr;
#endif

class NetAddressReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // ntAddrs ---
public:
    ArrayList(NetAddressReportMsg) ntAddrs ;


public:
    NetAddressReport (); // throws Exception
    virtual ~NetAddressReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for ntAddrs
    // public: ArrayList(NetAddressReportMsg) getNtAddrs();

    // Setter for ntAddrs
    // public: void setNtAddrs(ArrayList(NetAddressReportMsg) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NetAddressReport* p);
void intrusive_ptr_release(org::himalay::ccif::NetAddressReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NETADDRESSREPORT
// End of code