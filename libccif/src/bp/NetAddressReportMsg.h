#ifndef ORG_HIMALAY_CCIF_NETADDRESSREPORTMSG
#define ORG_HIMALAY_CCIF_NETADDRESSREPORTMSG
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
#define org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NetAddressReportMsg__PTR_TYPE boost::shared_ptr<NetAddressReportMsg>
#define org_himalay_ccif_NetAddressReportMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_NetAddressReportMsg__PTR_TYPE(new NetAddressReportMsg()); }
#define org_himalay_ccif_NetAddressReportMsg__INIT(x)
#define org_himalay_ccif_NetAddressReportMsg__DELETE(x)
#else
#define org_himalay_ccif_NetAddressReportMsg__PTR_TYPE NetAddressReportMsg*
#define org_himalay_ccif_NetAddressReportMsg__NEW(x) {x= new NetAddressReportMsg();}
#define org_himalay_ccif_NetAddressReportMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_NetAddressReportMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
class NetAddressReportMsg;
typedef ::boost::shared_ptr<NetAddressReportMsg> NetAddressReportMsgPtr;
#endif

class NetAddressReportMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // netAddressType ---
public:
    ui8 netAddressType ;
    // networkAddresses ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE networkAddresses; ;
    // SubnetworkAddresses ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE SubnetworkAddresses; ;


public:
    NetAddressReportMsg (); // throws Exception
    virtual ~NetAddressReportMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for netAddressType
    // public: ui8 getNetAddressType();

    // Setter for netAddressType
    // public: void setNetAddressType(ui8 val);

    // Getter for networkAddresses
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getNetworkAddresses();

    // Setter for networkAddresses
    // public: void setNetworkAddresses(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for SubnetworkAddresses
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getSubnetworkAddresses();

    // Setter for SubnetworkAddresses
    // public: void setSubnetworkAddresses(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_NetAddressReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NetAddressReportMsg* p);
void intrusive_ptr_release(org::himalay::ccif::NetAddressReportMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NETADDRESSREPORTMSG
// End of code