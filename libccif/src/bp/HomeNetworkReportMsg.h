#ifndef ORG_HIMALAY_CCIF_HOMENETWORKREPORTMSG
#define ORG_HIMALAY_CCIF_HOMENETWORKREPORTMSG
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "MacAddress.h" //header for org.himalay.ccif.MacAddress




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_HomeNetworkReportMsg__PTR_TYPE boost::shared_ptr<HomeNetworkReportMsg>
#define org_himalay_ccif_HomeNetworkReportMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_HomeNetworkReportMsg__PTR_TYPE(new HomeNetworkReportMsg()); }
#define org_himalay_ccif_HomeNetworkReportMsg__INIT(x)
#define org_himalay_ccif_HomeNetworkReportMsg__DELETE(x)
#else
#define org_himalay_ccif_HomeNetworkReportMsg__PTR_TYPE HomeNetworkReportMsg*
#define org_himalay_ccif_HomeNetworkReportMsg__NEW(x) {x= new HomeNetworkReportMsg();}
#define org_himalay_ccif_HomeNetworkReportMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_HomeNetworkReportMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
class HomeNetworkReportMsg;
typedef ::boost::shared_ptr<HomeNetworkReportMsg> HomeNetworkReportMsgPtr;
#endif

class HomeNetworkReportMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // clientMacAddress ---
public:
    org_himalay_ccif_MacAddress__PTR_TYPE clientMacAddress ;
    // host_DRM_status ---
public:
    ui8 host_DRM_status ;
    // clientsIpAddressByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE clientsIpAddressByte; ;
    // client_DRM_status ---
public:
    ui8 client_DRM_status ;


public:
    HomeNetworkReportMsg (); // throws Exception
    virtual ~HomeNetworkReportMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for clientMacAddress
    // public: org_himalay_ccif_MacAddress__PTR_TYPE getClientMacAddress();

    // Setter for clientMacAddress
    // public: void setClientMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val);

    // Getter for host_DRM_status
    // public: ui8 getHost_DRM_status();

    // Setter for host_DRM_status
    // public: void setHost_DRM_status(ui8 val);

    // Getter for clientsIpAddressByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getClientsIpAddressByte();

    // Setter for clientsIpAddressByte
    // public: void setClientsIpAddressByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for client_DRM_status
    // public: ui8 getClient_DRM_status();

    // Setter for client_DRM_status
    // public: void setClient_DRM_status(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_HomeNetworkReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HomeNetworkReportMsg* p);
void intrusive_ptr_release(org::himalay::ccif::HomeNetworkReportMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_HOMENETWORKREPORTMSG
// End of code