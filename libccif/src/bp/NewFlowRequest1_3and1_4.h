#ifndef ORG_HIMALAY_CCIF_NEWFLOWREQUEST1_3AND1_4
#define ORG_HIMALAY_CCIF_NEWFLOWREQUEST1_3AND1_4
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ServiceMpegPid.h" //header for org.himalay.ccif.ServiceMpegPid
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "ServiceIPUnicast.h" //header for org.himalay.ccif.ServiceIPUnicast
#include "ServiceIPMulticast.h" //header for org.himalay.ccif.ServiceIPMulticast


#include "APDUBase_2Factory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_NewFlowRequest1_3and1_4__USE_SMART_PTR
#ifdef org_himalay_ccif_NewFlowRequest1_3and1_4__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowRequest1_3and1_4__PTR_TYPE boost::shared_ptr<NewFlowRequest1_3and1_4>
#define org_himalay_ccif_NewFlowRequest1_3and1_4__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowRequest1_3and1_4__PTR_TYPE(new NewFlowRequest1_3and1_4()); }
#define org_himalay_ccif_NewFlowRequest1_3and1_4__INIT(x)
#define org_himalay_ccif_NewFlowRequest1_3and1_4__DELETE(x)
#else
#define org_himalay_ccif_NewFlowRequest1_3and1_4__PTR_TYPE NewFlowRequest1_3and1_4*
#define org_himalay_ccif_NewFlowRequest1_3and1_4__NEW(x) {x= new NewFlowRequest1_3and1_4();}
#define org_himalay_ccif_NewFlowRequest1_3and1_4__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowRequest1_3and1_4__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_NewFlowRequest1_3and1_4__USE_SMART_PTR
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




#ifdef org_himalay_ccif_NewFlowRequest1_3and1_4__USE_SMART_PTR
class NewFlowRequest1_3and1_4;
typedef ::boost::shared_ptr<NewFlowRequest1_3and1_4> NewFlowRequest1_3and1_4Ptr;
#endif

class NewFlowRequest1_3and1_4 :public   APDUBase_2Factory::APDUBase_2 { //Concrete type is NewFlowRequest1_3and1_4

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


public:
    NewFlowRequest1_3and1_4 (); // throws Exception
    virtual ~NewFlowRequest1_3and1_4 ();
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


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_NewFlowRequest1_3and1_4__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowRequest1_3and1_4* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowRequest1_3and1_4* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NEWFLOWREQUEST1_3AND1_4
// End of code