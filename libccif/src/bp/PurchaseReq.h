#ifndef ORG_HIMALAY_CCIF_PURCHASEREQ
#define ORG_HIMALAY_CCIF_PURCHASEREQ
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_PurchaseReq__USE_SMART_PTR
#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_PurchaseReq__PTR_TYPE boost::shared_ptr<PurchaseReq>
#define org_himalay_ccif_PurchaseReq__NEW(x) {/** Serious **/x = org_himalay_ccif_PurchaseReq__PTR_TYPE(new PurchaseReq()); }
#define org_himalay_ccif_PurchaseReq__INIT(x)
#define org_himalay_ccif_PurchaseReq__DELETE(x)
#else
#define org_himalay_ccif_PurchaseReq__PTR_TYPE PurchaseReq*
#define org_himalay_ccif_PurchaseReq__NEW(x) {x= new PurchaseReq();}
#define org_himalay_ccif_PurchaseReq__INIT(x)  x=NULL;
#define org_himalay_ccif_PurchaseReq__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
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




#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
class PurchaseReq;
typedef ::boost::shared_ptr<PurchaseReq> PurchaseReqPtr;
#endif

class PurchaseReq :public   APDUBaseFactory::APDUBase { //Concrete type is PurchaseReq

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
    // transactionId ---
public:
    ui8 transactionId ;
    // optionId ---
public:
    ui16 optionId ;
    // pinCodeLength ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE pinCodeLength; ;


public:
    PurchaseReq (); // throws Exception
    virtual ~PurchaseReq ();
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

    // Getter for transactionId
    // public: ui8 getTransactionId();

    // Setter for transactionId
    // public: void setTransactionId(ui8 val);

    // Getter for optionId
    // public: ui16 getOptionId();

    // Setter for optionId
    // public: void setOptionId(ui16 val);

    // Getter for pinCodeLength
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getPinCodeLength();

    // Setter for pinCodeLength
    // public: void setPinCodeLength(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_PurchaseReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PurchaseReq* p);
void intrusive_ptr_release(org::himalay::ccif::PurchaseReq* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PURCHASEREQ
// End of code