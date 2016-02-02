#ifndef ORG_HIMALAY_CCIF_MEMORYREPORTMSG
#define ORG_HIMALAY_CCIF_MEMORYREPORTMSG
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
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
#define org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_memoryReportMsg__PTR_TYPE boost::shared_ptr<memoryReportMsg>
#define org_himalay_ccif_memoryReportMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_memoryReportMsg__PTR_TYPE(new memoryReportMsg()); }
#define org_himalay_ccif_memoryReportMsg__INIT(x)
#define org_himalay_ccif_memoryReportMsg__DELETE(x)
#else
#define org_himalay_ccif_memoryReportMsg__PTR_TYPE memoryReportMsg*
#define org_himalay_ccif_memoryReportMsg__NEW(x) {x= new memoryReportMsg();}
#define org_himalay_ccif_memoryReportMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_memoryReportMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
class memoryReportMsg;
typedef ::boost::shared_ptr<memoryReportMsg> memoryReportMsgPtr;
#endif

class memoryReportMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // memoryType ---
public:
    ui8 memoryType ;
    // memorySize ---
public:
    i32 memorySize ;


public:
    memoryReportMsg (); // throws Exception
    virtual ~memoryReportMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for memoryType
    // public: ui8 getMemoryType();

    // Setter for memoryType
    // public: void setMemoryType(ui8 val);

    // Getter for memorySize
    // public: ui32 getMemorySize();

    // Setter for memorySize
    // public: void setMemorySize(ui32 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::memoryReportMsg* p);
void intrusive_ptr_release(org::himalay::ccif::memoryReportMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_MEMORYREPORTMSG
// End of code