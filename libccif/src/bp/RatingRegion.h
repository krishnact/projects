#ifndef ORG_HIMALAY_CCIF_RATINGREGION
#define ORG_HIMALAY_CCIF_RATINGREGION
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
#define org_himalay_ccif_RatingRegion__USE_SMART_PTR
#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_RatingRegion__PTR_TYPE boost::shared_ptr<RatingRegion>
#define org_himalay_ccif_RatingRegion__NEW(x) {/** Serious **/x = org_himalay_ccif_RatingRegion__PTR_TYPE(new RatingRegion()); }
#define org_himalay_ccif_RatingRegion__INIT(x)
#define org_himalay_ccif_RatingRegion__DELETE(x)
#else
#define org_himalay_ccif_RatingRegion__PTR_TYPE RatingRegion*
#define org_himalay_ccif_RatingRegion__NEW(x) {x= new RatingRegion();}
#define org_himalay_ccif_RatingRegion__INIT(x)  x=NULL;
#define org_himalay_ccif_RatingRegion__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
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




#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
class RatingRegion;
typedef ::boost::shared_ptr<RatingRegion> RatingRegionPtr;
#endif

class RatingRegion :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // ratingRegionSetting ---
public:
    ui8 ratingRegionSetting ;


public:
    RatingRegion (); // throws Exception
    virtual ~RatingRegion ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for ratingRegionSetting
    // public: ui8 getRatingRegionSetting();

    // Setter for ratingRegionSetting
    // public: void setRatingRegionSetting(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RatingRegion* p);
void intrusive_ptr_release(org::himalay::ccif::RatingRegion* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_RATINGREGION
// End of code