#ifndef ORG_HIMALAY_CCIF_PIDS
#define ORG_HIMALAY_CCIF_PIDS
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
#define org_himalay_ccif_pids__USE_SMART_PTR
#ifdef org_himalay_ccif_pids__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_pids__PTR_TYPE boost::shared_ptr<pids>
#define org_himalay_ccif_pids__NEW(x) {/** Serious **/x = org_himalay_ccif_pids__PTR_TYPE(new pids()); }
#define org_himalay_ccif_pids__INIT(x)
#define org_himalay_ccif_pids__DELETE(x)
#else
#define org_himalay_ccif_pids__PTR_TYPE pids*
#define org_himalay_ccif_pids__NEW(x) {x= new pids();}
#define org_himalay_ccif_pids__INIT(x)  x=NULL;
#define org_himalay_ccif_pids__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_pids__USE_SMART_PTR
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




#ifdef org_himalay_ccif_pids__USE_SMART_PTR
class pids;
typedef ::boost::shared_ptr<pids> pidsPtr;
#endif

class pids :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui16 bf1 ;


public:
    pids (); // throws Exception
    virtual ~pids ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);


public:
    int getZero( );

public:
    void setZero(int val);

public:
    int getPid( );

public:
    void setPid(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_pids__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::pids* p);
void intrusive_ptr_release(org::himalay::ccif::pids* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PIDS
// End of code