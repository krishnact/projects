#ifndef ORG_HIMALAY_CCIF_PURCHASEPIN
#define ORG_HIMALAY_CCIF_PURCHASEPIN
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
#define org_himalay_ccif_PurchasePin__USE_SMART_PTR
#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_PurchasePin__PTR_TYPE boost::shared_ptr<PurchasePin>
#define org_himalay_ccif_PurchasePin__NEW(x) {/** Serious **/x = org_himalay_ccif_PurchasePin__PTR_TYPE(new PurchasePin()); }
#define org_himalay_ccif_PurchasePin__INIT(x)
#define org_himalay_ccif_PurchasePin__DELETE(x)
#else
#define org_himalay_ccif_PurchasePin__PTR_TYPE PurchasePin*
#define org_himalay_ccif_PurchasePin__NEW(x) {x= new PurchasePin();}
#define org_himalay_ccif_PurchasePin__INIT(x)  x=NULL;
#define org_himalay_ccif_PurchasePin__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
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




#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
class PurchasePin;
typedef ::boost::shared_ptr<PurchasePin> PurchasePinPtr;
#endif

class PurchasePin :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // purchagePinList ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE purchagePinList; ;


public:
    PurchasePin (); // throws Exception
    virtual ~PurchasePin ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for purchagePinList
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getPurchagePinList();

    // Setter for purchagePinList
    // public: void setPurchagePinList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_PurchasePin__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PurchasePin* p);
void intrusive_ptr_release(org::himalay::ccif::PurchasePin* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PURCHASEPIN
// End of code