#ifndef ORG_HIMALAY_CCIF_NOF
#define ORG_HIMALAY_CCIF_NOF
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
#define org_himalay_ccif_nOF__USE_SMART_PTR
#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_nOF__PTR_TYPE boost::shared_ptr<nOF>
#define org_himalay_ccif_nOF__NEW(x) {/** Serious **/x = org_himalay_ccif_nOF__PTR_TYPE(new nOF()); }
#define org_himalay_ccif_nOF__INIT(x)
#define org_himalay_ccif_nOF__DELETE(x)
#else
#define org_himalay_ccif_nOF__PTR_TYPE nOF*
#define org_himalay_ccif_nOF__NEW(x) {x= new nOF();}
#define org_himalay_ccif_nOF__INIT(x)  x=NULL;
#define org_himalay_ccif_nOF__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
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




#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
class nOF;
typedef ::boost::shared_ptr<nOF> nOFPtr;
#endif

class nOF :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // featureId ---
public:
    ui8 featureId ;
    // status ---
public:
    ui8 status ;


public:
    nOF (); // throws Exception
    virtual ~nOF ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for featureId
    // public: ui8 getFeatureId();

    // Setter for featureId
    // public: void setFeatureId(ui8 val);

    // Getter for status
    // public: ui8 getStatus();

    // Setter for status
    // public: void setStatus(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::nOF* p);
void intrusive_ptr_release(org::himalay::ccif::nOF* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NOF
// End of code