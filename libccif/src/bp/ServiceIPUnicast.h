#ifndef ORG_HIMALAY_CCIF_SERVICEIPUNICAST
#define ORG_HIMALAY_CCIF_SERVICEIPUNICAST
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
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
#define org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ServiceIPUnicast__PTR_TYPE boost::shared_ptr<ServiceIPUnicast>
#define org_himalay_ccif_ServiceIPUnicast__NEW(x) {/** Serious **/x = org_himalay_ccif_ServiceIPUnicast__PTR_TYPE(new ServiceIPUnicast()); }
#define org_himalay_ccif_ServiceIPUnicast__INIT(x)
#define org_himalay_ccif_ServiceIPUnicast__DELETE(x)
#else
#define org_himalay_ccif_ServiceIPUnicast__PTR_TYPE ServiceIPUnicast*
#define org_himalay_ccif_ServiceIPUnicast__NEW(x) {x= new ServiceIPUnicast();}
#define org_himalay_ccif_ServiceIPUnicast__INIT(x)  x=NULL;
#define org_himalay_ccif_ServiceIPUnicast__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
class ServiceIPUnicast;
typedef ::boost::shared_ptr<ServiceIPUnicast> ServiceIPUnicastPtr;
#endif

class ServiceIPUnicast :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // macAddress ---
public:
    org_himalay_ccif_MacAddress__PTR_TYPE macAddress ;
    // optionaData ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE optionaData; ;


public:
    ServiceIPUnicast (); // throws Exception
    virtual ~ServiceIPUnicast ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for macAddress
    // public: org_himalay_ccif_MacAddress__PTR_TYPE getMacAddress();

    // Setter for macAddress
    // public: void setMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val);

    // Getter for optionaData
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getOptionaData();

    // Setter for optionaData
    // public: void setOptionaData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ServiceIPUnicast__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceIPUnicast* p);
void intrusive_ptr_release(org::himalay::ccif::ServiceIPUnicast* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SERVICEIPUNICAST
// End of code