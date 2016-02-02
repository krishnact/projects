#ifndef ORG_HIMALAY_CCIF_APDUFLOWCONF_DETAIL
#define ORG_HIMALAY_CCIF_APDUFLOWCONF_DETAIL
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ServiceSocket.h" //header for org.himalay.ccif.ServiceSocket
#include "ServiceIPUnicast.h" //header for org.himalay.ccif.ServiceIPUnicast
#include "ServiceIPMulticast.h" //header for org.himalay.ccif.ServiceIPMulticast




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_APDUFlowConf_Detail__PTR_TYPE boost::shared_ptr<APDUFlowConf_Detail>
#define org_himalay_ccif_APDUFlowConf_Detail__NEW(x) {/** Serious **/x = org_himalay_ccif_APDUFlowConf_Detail__PTR_TYPE(new APDUFlowConf_Detail()); }
#define org_himalay_ccif_APDUFlowConf_Detail__INIT(x)
#define org_himalay_ccif_APDUFlowConf_Detail__DELETE(x)
#else
#define org_himalay_ccif_APDUFlowConf_Detail__PTR_TYPE APDUFlowConf_Detail*
#define org_himalay_ccif_APDUFlowConf_Detail__NEW(x) {x= new APDUFlowConf_Detail();}
#define org_himalay_ccif_APDUFlowConf_Detail__INIT(x)  x=NULL;
#define org_himalay_ccif_APDUFlowConf_Detail__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
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




#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
class APDUFlowConf_Detail;
typedef ::boost::shared_ptr<APDUFlowConf_Detail> APDUFlowConf_DetailPtr;
#endif

class APDUFlowConf_Detail :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // flowId ---
public:
    int flowId ;
    // serviceType ---
public:
    ui8 serviceType ;
    // ipUnicast ---
public:
    org_himalay_ccif_ServiceIPUnicast__PTR_TYPE ipUnicast ;
    // ipMulticast ---
public:
    org_himalay_ccif_ServiceIPMulticast__PTR_TYPE ipMulticast ;
    // socket ---
public:
    org_himalay_ccif_ServiceSocket__PTR_TYPE socket ;


public:
    APDUFlowConf_Detail (); // throws Exception
    virtual ~APDUFlowConf_Detail ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for flowId
    // public: ui24 getFlowId();

    // Setter for flowId
    // public: void setFlowId(ui24 val);

    // Getter for serviceType
    // public: ui8 getServiceType();

    // Setter for serviceType
    // public: void setServiceType(ui8 val);

    // Getter for ipUnicast
    // public: org_himalay_ccif_ServiceIPUnicast__PTR_TYPE getIpUnicast();

    // Setter for ipUnicast
    // public: void setIpUnicast(org_himalay_ccif_ServiceIPUnicast__PTR_TYPE val);

    // Getter for ipMulticast
    // public: org_himalay_ccif_ServiceIPMulticast__PTR_TYPE getIpMulticast();

    // Setter for ipMulticast
    // public: void setIpMulticast(org_himalay_ccif_ServiceIPMulticast__PTR_TYPE val);

    // Getter for socket
    // public: org_himalay_ccif_ServiceSocket__PTR_TYPE getSocket();

    // Setter for socket
    // public: void setSocket(org_himalay_ccif_ServiceSocket__PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_APDUFlowConf_Detail__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::APDUFlowConf_Detail* p);
void intrusive_ptr_release(org::himalay::ccif::APDUFlowConf_Detail* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_APDUFLOWCONF_DETAIL
// End of code