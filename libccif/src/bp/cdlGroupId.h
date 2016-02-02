#ifndef ORG_HIMALAY_CCIF_CDLGROUPID
#define ORG_HIMALAY_CCIF_CDLGROUPID
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
#define org_himalay_ccif_cdlGroupId__USE_SMART_PTR
#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_cdlGroupId__PTR_TYPE boost::shared_ptr<cdlGroupId>
#define org_himalay_ccif_cdlGroupId__NEW(x) {/** Serious **/x = org_himalay_ccif_cdlGroupId__PTR_TYPE(new cdlGroupId()); }
#define org_himalay_ccif_cdlGroupId__INIT(x)
#define org_himalay_ccif_cdlGroupId__DELETE(x)
#else
#define org_himalay_ccif_cdlGroupId__PTR_TYPE cdlGroupId*
#define org_himalay_ccif_cdlGroupId__NEW(x) {x= new cdlGroupId();}
#define org_himalay_ccif_cdlGroupId__INIT(x)  x=NULL;
#define org_himalay_ccif_cdlGroupId__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
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




#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
class cdlGroupId;
typedef ::boost::shared_ptr<cdlGroupId> cdlGroupIdPtr;
#endif

class cdlGroupId :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // groupId ---
public:
    ui16 groupId ;


public:
    cdlGroupId (); // throws Exception
    virtual ~cdlGroupId ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for groupId
    // public: ui16 getGroupId();

    // Setter for groupId
    // public: void setGroupId(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::cdlGroupId* p);
void intrusive_ptr_release(org::himalay::ccif::cdlGroupId* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CDLGROUPID
// End of code