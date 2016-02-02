#ifndef ORG_HIMALAY_CCIF_SERVICEMPEGPID
#define ORG_HIMALAY_CCIF_SERVICEMPEGPID
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
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
#define org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ServiceMpegPid__PTR_TYPE boost::shared_ptr<ServiceMpegPid>
#define org_himalay_ccif_ServiceMpegPid__NEW(x) {/** Serious **/x = org_himalay_ccif_ServiceMpegPid__PTR_TYPE(new ServiceMpegPid()); }
#define org_himalay_ccif_ServiceMpegPid__INIT(x)
#define org_himalay_ccif_ServiceMpegPid__DELETE(x)
#else
#define org_himalay_ccif_ServiceMpegPid__PTR_TYPE ServiceMpegPid*
#define org_himalay_ccif_ServiceMpegPid__NEW(x) {x= new ServiceMpegPid();}
#define org_himalay_ccif_ServiceMpegPid__INIT(x)  x=NULL;
#define org_himalay_ccif_ServiceMpegPid__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
class ServiceMpegPid;
typedef ::boost::shared_ptr<ServiceMpegPid> ServiceMpegPidPtr;
#endif

class ServiceMpegPid :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui16 bf1 ;


public:
    ServiceMpegPid (); // throws Exception
    virtual ~ServiceMpegPid ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getPid( );

public:
    void setPid(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ServiceMpegPid__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceMpegPid* p);
void intrusive_ptr_release(org::himalay::ccif::ServiceMpegPid* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SERVICEMPEGPID
// End of code