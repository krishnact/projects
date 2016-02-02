#ifndef ORG_HIMALAY_CCIF_CLOSESESSIONREQUEST
#define ORG_HIMALAY_CCIF_CLOSESESSIONREQUEST
//@Generated(date = "Mon Feb 01 22:30:18 EST 2016")
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
#define org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CloseSessionRequest__PTR_TYPE boost::shared_ptr<CloseSessionRequest>
#define org_himalay_ccif_CloseSessionRequest__NEW(x) {/** Serious **/x = org_himalay_ccif_CloseSessionRequest__PTR_TYPE(new CloseSessionRequest()); }
#define org_himalay_ccif_CloseSessionRequest__INIT(x)
#define org_himalay_ccif_CloseSessionRequest__DELETE(x)
#else
#define org_himalay_ccif_CloseSessionRequest__PTR_TYPE CloseSessionRequest*
#define org_himalay_ccif_CloseSessionRequest__NEW(x) {x= new CloseSessionRequest();}
#define org_himalay_ccif_CloseSessionRequest__INIT(x)  x=NULL;
#define org_himalay_ccif_CloseSessionRequest__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
class CloseSessionRequest;
typedef ::boost::shared_ptr<CloseSessionRequest> CloseSessionRequestPtr;
#endif

class CloseSessionRequest :public   APDUBaseFactory::APDUBase { //Concrete type is CloseSessionRequest

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
    // sessionNb ---
public:
    ui16 sessionNb ;


public:
    CloseSessionRequest (); // throws Exception
    virtual ~CloseSessionRequest ();
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

    // Getter for sessionNb
    // public: ui16 getSessionNb();

    // Setter for sessionNb
    // public: void setSessionNb(ui16 val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_CloseSessionRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CloseSessionRequest* p);
void intrusive_ptr_release(org::himalay::ccif::CloseSessionRequest* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CLOSESESSIONREQUEST
// End of code