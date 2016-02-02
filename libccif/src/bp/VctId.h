#ifndef ORG_HIMALAY_CCIF_VCTID
#define ORG_HIMALAY_CCIF_VCTID
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
#define org_himalay_ccif_VctId__USE_SMART_PTR
#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_VctId__PTR_TYPE boost::shared_ptr<VctId>
#define org_himalay_ccif_VctId__NEW(x) {/** Serious **/x = org_himalay_ccif_VctId__PTR_TYPE(new VctId()); }
#define org_himalay_ccif_VctId__INIT(x)
#define org_himalay_ccif_VctId__DELETE(x)
#else
#define org_himalay_ccif_VctId__PTR_TYPE VctId*
#define org_himalay_ccif_VctId__NEW(x) {x= new VctId();}
#define org_himalay_ccif_VctId__INIT(x)  x=NULL;
#define org_himalay_ccif_VctId__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
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




#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
class VctId;
typedef ::boost::shared_ptr<VctId> VctIdPtr;
#endif

class VctId :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // vctId ---
public:
    ui16 vctId ;


public:
    VctId (); // throws Exception
    virtual ~VctId ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for vctId
    // public: ui16 getVctId();

    // Setter for vctId
    // public: void setVctId(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::VctId* p);
void intrusive_ptr_release(org::himalay::ccif::VctId* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_VCTID
// End of code