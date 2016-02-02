#ifndef ORG_HIMALAY_CCIF_NEWFLOWREQUEST
#define ORG_HIMALAY_CCIF_NEWFLOWREQUEST
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ServiceMpegPid.h" //header for org.himalay.ccif.ServiceMpegPid
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "ServiceSocket.h" //header for org.himalay.ccif.ServiceSocket
#include "ServiceIPUnicast.h" //header for org.himalay.ccif.ServiceIPUnicast
#include "ServiceIPMulticast.h" //header for org.himalay.ccif.ServiceIPMulticast


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowRequest__PTR_TYPE boost::shared_ptr<NewFlowRequest>
#define org_himalay_ccif_NewFlowRequest__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowRequest__PTR_TYPE(new NewFlowRequest()); }
#define org_himalay_ccif_NewFlowRequest__INIT(x)
#define org_himalay_ccif_NewFlowRequest__DELETE(x)
#else
#define org_himalay_ccif_NewFlowRequest__PTR_TYPE NewFlowRequest*
#define org_himalay_ccif_NewFlowRequest__NEW(x) {x= new NewFlowRequest();}
#define org_himalay_ccif_NewFlowRequest__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowRequest__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
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




#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
class NewFlowRequest;
typedef ::boost::shared_ptr<NewFlowRequest> NewFlowRequestPtr;
#endif

class NewFlowRequest :public   APDUBaseFactory::APDUBase { //Concrete type is NewFlowRequest

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // length ---
public:
    ui8 length ;
    // serviceType ---
public:
    ui8 serviceType ;
    // mpegSection ---
public:
    org_himalay_ccif_ServiceMpegPid__PTR_TYPE mpegSection ;
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
    NewFlowRequest (); // throws Exception
    virtual ~NewFlowRequest ();
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

    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for serviceType
    // public: ui8 getServiceType();

    // Setter for serviceType
    // public: void setServiceType(ui8 val);

    // Getter for mpegSection
    // public: org_himalay_ccif_ServiceMpegPid__PTR_TYPE getMpegSection();

    // Setter for mpegSection
    // public: void setMpegSection(org_himalay_ccif_ServiceMpegPid__PTR_TYPE val);

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

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_NewFlowRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowRequest* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowRequest* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NEWFLOWREQUEST
// End of code