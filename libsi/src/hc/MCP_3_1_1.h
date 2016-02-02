#ifndef ORG_HIMALAY_SI_MCP_3_1_1
#define ORG_HIMALAY_SI_MCP_3_1_1
//@Generated(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "MCP_3_1_1_Base.h" //header for org.himalay.si.MCP_3_1_1_Base




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_MCP_3_1_1__USE_SMART_PTR
#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MCP_3_1_1__PTR_TYPE boost::shared_ptr<MCP_3_1_1>
#define org_himalay_si_MCP_3_1_1__NEW(x) {/** Serious **/x = org_himalay_si_MCP_3_1_1__PTR_TYPE(new MCP_3_1_1()); }
#define org_himalay_si_MCP_3_1_1__INIT(x)
#define org_himalay_si_MCP_3_1_1__DELETE(x)
#else
#define org_himalay_si_MCP_3_1_1__PTR_TYPE MCP_3_1_1*
#define org_himalay_si_MCP_3_1_1__NEW(x) {x= new MCP_3_1_1();}
#define org_himalay_si_MCP_3_1_1__INIT(x)  x=NULL;
#define org_himalay_si_MCP_3_1_1__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::si;




#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
class MCP_3_1_1;
typedef ::boost::shared_ptr<MCP_3_1_1> MCP_3_1_1Ptr;
#endif

class MCP_3_1_1 :public  MCP_3_1_1_Base { //Concrete type is MCP_3_1_1

//  public:
//    long    references;

public:


    // members variables


public:
    MCP_3_1_1 (); // throws Exception
    virtual ~MCP_3_1_1 ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException



public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_MCP_3_1_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1* p);
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_MCP_3_1_1
// End of code