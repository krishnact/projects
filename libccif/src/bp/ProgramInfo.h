#ifndef ORG_HIMALAY_CCIF_PROGRAMINFO
#define ORG_HIMALAY_CCIF_PROGRAMINFO
//@Generated(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "CaInfo.h" //header for org.himalay.ccif.CaInfo




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ProgramInfo__USE_SMART_PTR
#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ProgramInfo__PTR_TYPE boost::shared_ptr<ProgramInfo>
#define org_himalay_ccif_ProgramInfo__NEW(x) {/** Serious **/x = org_himalay_ccif_ProgramInfo__PTR_TYPE(new ProgramInfo()); }
#define org_himalay_ccif_ProgramInfo__INIT(x)
#define org_himalay_ccif_ProgramInfo__DELETE(x)
#else
#define org_himalay_ccif_ProgramInfo__PTR_TYPE ProgramInfo*
#define org_himalay_ccif_ProgramInfo__NEW(x) {x= new ProgramInfo();}
#define org_himalay_ccif_ProgramInfo__INIT(x)  x=NULL;
#define org_himalay_ccif_ProgramInfo__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
class ProgramInfo;
typedef ::boost::shared_ptr<ProgramInfo> ProgramInfoPtr;
#endif

class ProgramInfo :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui16 bf1 ;
    // programInfo ---
public:
    org_himalay_ccif_CaInfo__PTR_TYPE programInfo ;


public:
    ProgramInfo (); // throws Exception
    virtual ~ProgramInfo ();
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

    // Getter for programInfo
    // public: org_himalay_ccif_CaInfo__PTR_TYPE getProgramInfo();

    // Setter for programInfo
    // public: void setProgramInfo(org_himalay_ccif_CaInfo__PTR_TYPE val);


public:
    int getReserved2( );

public:
    void setReserved2(int val);

public:
    int getProgramInfoLength( );

public:
    void setProgramInfoLength(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramInfo* p);
void intrusive_ptr_release(org::himalay::ccif::ProgramInfo* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PROGRAMINFO
// End of code