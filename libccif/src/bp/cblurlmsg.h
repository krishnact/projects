#ifndef ORG_HIMALAY_CCIF_CBLURLMSG
#define ORG_HIMALAY_CCIF_CBLURLMSG
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
#define org_himalay_ccif_cblurlmsg__USE_SMART_PTR
#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_cblurlmsg__PTR_TYPE boost::shared_ptr<cblurlmsg>
#define org_himalay_ccif_cblurlmsg__NEW(x) {/** Serious **/x = org_himalay_ccif_cblurlmsg__PTR_TYPE(new cblurlmsg()); }
#define org_himalay_ccif_cblurlmsg__INIT(x)
#define org_himalay_ccif_cblurlmsg__DELETE(x)
#else
#define org_himalay_ccif_cblurlmsg__PTR_TYPE cblurlmsg*
#define org_himalay_ccif_cblurlmsg__NEW(x) {x= new cblurlmsg();}
#define org_himalay_ccif_cblurlmsg__INIT(x)  x=NULL;
#define org_himalay_ccif_cblurlmsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
class cblurlmsg;
typedef ::boost::shared_ptr<cblurlmsg> cblurlmsgPtr;
#endif

class cblurlmsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // urlType ---
public:
    ui8 urlType ;
    // urlchars ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE urlchars; ;


public:
    cblurlmsg (); // throws Exception
    virtual ~cblurlmsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for urlType
    // public: ui8 getUrlType();

    // Setter for urlType
    // public: void setUrlType(ui8 val);

    // Getter for urlchars
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getUrlchars();

    // Setter for urlchars
    // public: void setUrlchars(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::cblurlmsg* p);
void intrusive_ptr_release(org::himalay::ccif::cblurlmsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CBLURLMSG
// End of code