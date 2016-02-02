#ifndef ORG_HIMALAY_CCIF_CABLEURLS
#define ORG_HIMALAY_CCIF_CABLEURLS
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "cblurlmsg.h" //header for org.himalay.ccif.cblurlmsg




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CableUrls__USE_SMART_PTR
#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CableUrls__PTR_TYPE boost::shared_ptr<CableUrls>
#define org_himalay_ccif_CableUrls__NEW(x) {/** Serious **/x = org_himalay_ccif_CableUrls__PTR_TYPE(new CableUrls()); }
#define org_himalay_ccif_CableUrls__INIT(x)
#define org_himalay_ccif_CableUrls__DELETE(x)
#else
#define org_himalay_ccif_CableUrls__PTR_TYPE CableUrls*
#define org_himalay_ccif_CableUrls__NEW(x) {x= new CableUrls();}
#define org_himalay_ccif_CableUrls__INIT(x)  x=NULL;
#define org_himalay_ccif_CableUrls__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
class CableUrls;
typedef ::boost::shared_ptr<CableUrls> CableUrlsPtr;
#endif

class CableUrls :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // CaEntries ---
public:
    ArrayList(cblurlmsg) CaEntries ;


public:
    CableUrls (); // throws Exception
    virtual ~CableUrls ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for CaEntries
    // public: ArrayList(cblurlmsg) getCaEntries();

    // Setter for CaEntries
    // public: void setCaEntries(ArrayList(cblurlmsg) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CableUrls* p);
void intrusive_ptr_release(org::himalay::ccif::CableUrls* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CABLEURLS
// End of code