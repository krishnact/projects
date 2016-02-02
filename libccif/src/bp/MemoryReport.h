#ifndef ORG_HIMALAY_CCIF_MEMORYREPORT
#define ORG_HIMALAY_CCIF_MEMORYREPORT
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_MemoryReport__USE_SMART_PTR
#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_MemoryReport__PTR_TYPE boost::shared_ptr<MemoryReport>
#define org_himalay_ccif_MemoryReport__NEW(x) {/** Serious **/x = org_himalay_ccif_MemoryReport__PTR_TYPE(new MemoryReport()); }
#define org_himalay_ccif_MemoryReport__INIT(x)
#define org_himalay_ccif_MemoryReport__DELETE(x)
#else
#define org_himalay_ccif_MemoryReport__PTR_TYPE MemoryReport*
#define org_himalay_ccif_MemoryReport__NEW(x) {x= new MemoryReport();}
#define org_himalay_ccif_MemoryReport__INIT(x)  x=NULL;
#define org_himalay_ccif_MemoryReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
class MemoryReport;
typedef ::boost::shared_ptr<MemoryReport> MemoryReportPtr;
#endif

class MemoryReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // numberOfMemory ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE numberOfMemory; ;


public:
    MemoryReport (); // throws Exception
    virtual ~MemoryReport ();
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

    // Getter for numberOfMemory
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getNumberOfMemory();

    // Setter for numberOfMemory
    // public: void setNumberOfMemory(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_MemoryReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::MemoryReport* p);
void intrusive_ptr_release(org::himalay::ccif::MemoryReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_MEMORYREPORT
// End of code