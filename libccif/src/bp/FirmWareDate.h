#ifndef ORG_HIMALAY_CCIF_FIRMWAREDATE
#define ORG_HIMALAY_CCIF_FIRMWAREDATE
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
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
#define org_himalay_ccif_FirmWareDate__USE_SMART_PTR
#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FirmWareDate__PTR_TYPE boost::shared_ptr<FirmWareDate>
#define org_himalay_ccif_FirmWareDate__NEW(x) {/** Serious **/x = org_himalay_ccif_FirmWareDate__PTR_TYPE(new FirmWareDate()); }
#define org_himalay_ccif_FirmWareDate__INIT(x)
#define org_himalay_ccif_FirmWareDate__DELETE(x)
#else
#define org_himalay_ccif_FirmWareDate__PTR_TYPE FirmWareDate*
#define org_himalay_ccif_FirmWareDate__NEW(x) {x= new FirmWareDate();}
#define org_himalay_ccif_FirmWareDate__INIT(x)  x=NULL;
#define org_himalay_ccif_FirmWareDate__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
class FirmWareDate;
typedef ::boost::shared_ptr<FirmWareDate> FirmWareDatePtr;
#endif

class FirmWareDate :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // year ---
public:
    ui16 year ;
    // month ---
public:
    ui8 month ;
    // date ---
public:
    ui8 date ;


public:
    FirmWareDate (); // throws Exception
    virtual ~FirmWareDate ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for year
    // public: ui16 getYear();

    // Setter for year
    // public: void setYear(ui16 val);

    // Getter for month
    // public: ui8 getMonth();

    // Setter for month
    // public: void setMonth(ui8 val);

    // Getter for date
    // public: ui8 getDate();

    // Setter for date
    // public: void setDate(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmWareDate* p);
void intrusive_ptr_release(org::himalay::ccif::FirmWareDate* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FIRMWAREDATE
// End of code