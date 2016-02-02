#ifndef ORG_HIMALAY_CCIF_RESETPIN
#define ORG_HIMALAY_CCIF_RESETPIN
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
#define org_himalay_ccif_ResetPin__USE_SMART_PTR
#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ResetPin__PTR_TYPE boost::shared_ptr<ResetPin>
#define org_himalay_ccif_ResetPin__NEW(x) {/** Serious **/x = org_himalay_ccif_ResetPin__PTR_TYPE(new ResetPin()); }
#define org_himalay_ccif_ResetPin__INIT(x)
#define org_himalay_ccif_ResetPin__DELETE(x)
#else
#define org_himalay_ccif_ResetPin__PTR_TYPE ResetPin*
#define org_himalay_ccif_ResetPin__NEW(x) {x= new ResetPin();}
#define org_himalay_ccif_ResetPin__INIT(x)  x=NULL;
#define org_himalay_ccif_ResetPin__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
class ResetPin;
typedef ::boost::shared_ptr<ResetPin> ResetPinPtr;
#endif

class ResetPin :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // resetpinControl ---
public:
    ui8 resetpinControl ;


public:
    ResetPin (); // throws Exception
    virtual ~ResetPin ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for resetpinControl
    // public: ui8 getResetpinControl();

    // Setter for resetpinControl
    // public: void setResetpinControl(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ResetPin__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ResetPin* p);
void intrusive_ptr_release(org::himalay::ccif::ResetPin* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_RESETPIN
// End of code