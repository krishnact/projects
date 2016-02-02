#ifndef ORG_HIMALAY_CCIF_EA_LOCATIONCODE
#define ORG_HIMALAY_CCIF_EA_LOCATIONCODE
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
#define org_himalay_ccif_EA_locationCode__USE_SMART_PTR
#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_EA_locationCode__PTR_TYPE boost::shared_ptr<EA_locationCode>
#define org_himalay_ccif_EA_locationCode__NEW(x) {/** Serious **/x = org_himalay_ccif_EA_locationCode__PTR_TYPE(new EA_locationCode()); }
#define org_himalay_ccif_EA_locationCode__INIT(x)
#define org_himalay_ccif_EA_locationCode__DELETE(x)
#else
#define org_himalay_ccif_EA_locationCode__PTR_TYPE EA_locationCode*
#define org_himalay_ccif_EA_locationCode__NEW(x) {x= new EA_locationCode();}
#define org_himalay_ccif_EA_locationCode__INIT(x)  x=NULL;
#define org_himalay_ccif_EA_locationCode__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
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




#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
class EA_locationCode;
typedef ::boost::shared_ptr<EA_locationCode> EA_locationCodePtr;
#endif

class EA_locationCode :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // stateCode ---
public:
    ui8 stateCode ;
    // bf1 ---
public:
    ui16 bf1 ;


public:
    EA_locationCode (); // throws Exception
    virtual ~EA_locationCode ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for stateCode
    // public: ui8 getStateCode();

    // Setter for stateCode
    // public: void setStateCode(ui8 val);

    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);


public:
    int getCountySubdivision( );

public:
    void setCountySubdivision(int val);

public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getCountyCode( );

public:
    void setCountyCode(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_EA_locationCode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::EA_locationCode* p);
void intrusive_ptr_release(org::himalay::ccif::EA_locationCode* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_EA_LOCATIONCODE
// End of code