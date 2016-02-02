#ifndef ORG_HIMALAY_CCIF_TIMEZONE
#define ORG_HIMALAY_CCIF_TIMEZONE
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
#define org_himalay_ccif_TimeZone__USE_SMART_PTR
#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_TimeZone__PTR_TYPE boost::shared_ptr<TimeZone>
#define org_himalay_ccif_TimeZone__NEW(x) {/** Serious **/x = org_himalay_ccif_TimeZone__PTR_TYPE(new TimeZone()); }
#define org_himalay_ccif_TimeZone__INIT(x)
#define org_himalay_ccif_TimeZone__DELETE(x)
#else
#define org_himalay_ccif_TimeZone__PTR_TYPE TimeZone*
#define org_himalay_ccif_TimeZone__NEW(x) {x= new TimeZone();}
#define org_himalay_ccif_TimeZone__INIT(x)  x=NULL;
#define org_himalay_ccif_TimeZone__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
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




#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
class TimeZone;
typedef ::boost::shared_ptr<TimeZone> TimeZonePtr;
#endif

class TimeZone :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // timeZoneOffset ---
public:
    ui16 timeZoneOffset ;


public:
    TimeZone (); // throws Exception
    virtual ~TimeZone ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for timeZoneOffset
    // public: ui16 getTimeZoneOffset();

    // Setter for timeZoneOffset
    // public: void setTimeZoneOffset(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::TimeZone* p);
void intrusive_ptr_release(org::himalay::ccif::TimeZone* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_TIMEZONE
// End of code