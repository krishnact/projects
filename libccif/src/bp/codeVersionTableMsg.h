#ifndef ORG_HIMALAY_CCIF_CODEVERSIONTABLEMSG
#define ORG_HIMALAY_CCIF_CODEVERSIONTABLEMSG
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "DescriptionData.h" //header for org.himalay.ccif.DescriptionData




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_codeVersionTableMsg__PTR_TYPE boost::shared_ptr<codeVersionTableMsg>
#define org_himalay_ccif_codeVersionTableMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_codeVersionTableMsg__PTR_TYPE(new codeVersionTableMsg()); }
#define org_himalay_ccif_codeVersionTableMsg__INIT(x)
#define org_himalay_ccif_codeVersionTableMsg__DELETE(x)
#else
#define org_himalay_ccif_codeVersionTableMsg__PTR_TYPE codeVersionTableMsg*
#define org_himalay_ccif_codeVersionTableMsg__NEW(x) {x= new codeVersionTableMsg();}
#define org_himalay_ccif_codeVersionTableMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_codeVersionTableMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
class codeVersionTableMsg;
typedef ::boost::shared_ptr<codeVersionTableMsg> codeVersionTableMsgPtr;
#endif

class codeVersionTableMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // purchaseType ---
public:
    ui8 purchaseType ;
    // purchasePrice ---
public:
    ui16 purchasePrice ;
    // videoFormat ---
public:
    org_himalay_ccif_DescriptionData__PTR_TYPE videoFormat ;


public:
    codeVersionTableMsg (); // throws Exception
    virtual ~codeVersionTableMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for purchaseType
    // public: ui8 getPurchaseType();

    // Setter for purchaseType
    // public: void setPurchaseType(ui8 val);

    // Getter for purchasePrice
    // public: ui16 getPurchasePrice();

    // Setter for purchasePrice
    // public: void setPurchasePrice(ui16 val);

    // Getter for videoFormat
    // public: org_himalay_ccif_DescriptionData__PTR_TYPE getVideoFormat();

    // Setter for videoFormat
    // public: void setVideoFormat(org_himalay_ccif_DescriptionData__PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTableMsg* p);
void intrusive_ptr_release(org::himalay::ccif::codeVersionTableMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CODEVERSIONTABLEMSG
// End of code