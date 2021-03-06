#ifndef ORG_HIMALAY_CCIF_CAINFO
#define ORG_HIMALAY_CCIF_CAINFO
//@Generated(date = "Mon Feb 01 22:30:11 EST 2016")
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
#define org_himalay_ccif_CaInfo__USE_SMART_PTR
#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaInfo__PTR_TYPE boost::shared_ptr<CaInfo>
#define org_himalay_ccif_CaInfo__NEW(x) {/** Serious **/x = org_himalay_ccif_CaInfo__PTR_TYPE(new CaInfo()); }
#define org_himalay_ccif_CaInfo__INIT(x)
#define org_himalay_ccif_CaInfo__DELETE(x)
#else
#define org_himalay_ccif_CaInfo__PTR_TYPE CaInfo*
#define org_himalay_ccif_CaInfo__NEW(x) {x= new CaInfo();}
#define org_himalay_ccif_CaInfo__INIT(x)  x=NULL;
#define org_himalay_ccif_CaInfo__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
class CaInfo;
typedef ::boost::shared_ptr<CaInfo> CaInfoPtr;
#endif

class CaInfo :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // caPmtId ---
public:
    ui8 caPmtId ;
    // CaDescriptors ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE CaDescriptors; ;


public:
    CaInfo (); // throws Exception
    virtual ~CaInfo ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for caPmtId
    // public: ui8 getCaPmtId();

    // Setter for caPmtId
    // public: void setCaPmtId(ui8 val);

    // Getter for CaDescriptors
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getCaDescriptors();

    // Setter for CaDescriptors
    // public: void setCaDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaInfo* p);
void intrusive_ptr_release(org::himalay::ccif::CaInfo* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CAINFO
// End of code