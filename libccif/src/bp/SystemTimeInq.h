#ifndef ORG_HIMALAY_CCIF_SYSTEMTIMEINQ
#define ORG_HIMALAY_CCIF_SYSTEMTIMEINQ
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
#define org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_SystemTimeInq__PTR_TYPE boost::shared_ptr<SystemTimeInq>
#define org_himalay_ccif_SystemTimeInq__NEW(x) {/** Serious **/x = org_himalay_ccif_SystemTimeInq__PTR_TYPE(new SystemTimeInq()); }
#define org_himalay_ccif_SystemTimeInq__INIT(x)
#define org_himalay_ccif_SystemTimeInq__DELETE(x)
#else
#define org_himalay_ccif_SystemTimeInq__PTR_TYPE SystemTimeInq*
#define org_himalay_ccif_SystemTimeInq__NEW(x) {x= new SystemTimeInq();}
#define org_himalay_ccif_SystemTimeInq__INIT(x)  x=NULL;
#define org_himalay_ccif_SystemTimeInq__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
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




#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
class SystemTimeInq;
typedef ::boost::shared_ptr<SystemTimeInq> SystemTimeInqPtr;
#endif

class SystemTimeInq :public   APDUBaseFactory::APDUBase { //Concrete type is SystemTimeInq

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
    // responseInterval ---
public:
    ui8 responseInterval ;


public:
    SystemTimeInq (); // throws Exception
    virtual ~SystemTimeInq ();
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

    // Getter for responseInterval
    // public: ui8 getResponseInterval();

    // Setter for responseInterval
    // public: void setResponseInterval(ui8 val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_SystemTimeInq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SystemTimeInq* p);
void intrusive_ptr_release(org::himalay::ccif::SystemTimeInq* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SYSTEMTIMEINQ
// End of code