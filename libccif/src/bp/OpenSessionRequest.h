#ifndef ORG_HIMALAY_CCIF_OPENSESSIONREQUEST
#define ORG_HIMALAY_CCIF_OPENSESSIONREQUEST
//@Generated(date = "Mon Feb 01 22:30:18 EST 2016")
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
#define org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_OpenSessionRequest__PTR_TYPE boost::shared_ptr<OpenSessionRequest>
#define org_himalay_ccif_OpenSessionRequest__NEW(x) {/** Serious **/x = org_himalay_ccif_OpenSessionRequest__PTR_TYPE(new OpenSessionRequest()); }
#define org_himalay_ccif_OpenSessionRequest__INIT(x)
#define org_himalay_ccif_OpenSessionRequest__DELETE(x)
#else
#define org_himalay_ccif_OpenSessionRequest__PTR_TYPE OpenSessionRequest*
#define org_himalay_ccif_OpenSessionRequest__NEW(x) {x= new OpenSessionRequest();}
#define org_himalay_ccif_OpenSessionRequest__INIT(x)  x=NULL;
#define org_himalay_ccif_OpenSessionRequest__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
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




#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
class OpenSessionRequest;
typedef ::boost::shared_ptr<OpenSessionRequest> OpenSessionRequestPtr;
#endif

class OpenSessionRequest :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // length ---
public:
    ui8 length ;
    // resourceIdentifier ---
public:
    i32 resourceIdentifier ;


public:
    OpenSessionRequest (); // throws Exception
    virtual ~OpenSessionRequest ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for resourceIdentifier
    // public: ui32 getResourceIdentifier();

    // Setter for resourceIdentifier
    // public: void setResourceIdentifier(ui32 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_OpenSessionRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::OpenSessionRequest* p);
void intrusive_ptr_release(org::himalay::ccif::OpenSessionRequest* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_OPENSESSIONREQUEST
// End of code