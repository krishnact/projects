#ifndef ORG_HIMALAY_CCIF_DESCRIPTIONDATA
#define ORG_HIMALAY_CCIF_DESCRIPTIONDATA
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
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
#define org_himalay_ccif_DescriptionData__USE_SMART_PTR
#ifdef org_himalay_ccif_DescriptionData__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_DescriptionData__PTR_TYPE boost::shared_ptr<DescriptionData>
#define org_himalay_ccif_DescriptionData__NEW(x) {/** Serious **/x = org_himalay_ccif_DescriptionData__PTR_TYPE(new DescriptionData()); }
#define org_himalay_ccif_DescriptionData__INIT(x)
#define org_himalay_ccif_DescriptionData__DELETE(x)
#else
#define org_himalay_ccif_DescriptionData__PTR_TYPE DescriptionData*
#define org_himalay_ccif_DescriptionData__NEW(x) {x= new DescriptionData();}
#define org_himalay_ccif_DescriptionData__INIT(x)  x=NULL;
#define org_himalay_ccif_DescriptionData__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_DescriptionData__USE_SMART_PTR
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




#ifdef org_himalay_ccif_DescriptionData__USE_SMART_PTR
class DescriptionData;
typedef ::boost::shared_ptr<DescriptionData> DescriptionDataPtr;
#endif

class DescriptionData :public BinMessage {

//  public:
//    long    references;

public:


    // members variables


public:
    DescriptionData (); // throws Exception
    virtual ~DescriptionData ();
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

#ifdef org_himalay_ccif_DescriptionData__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DescriptionData* p);
void intrusive_ptr_release(org::himalay::ccif::DescriptionData* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DESCRIPTIONDATA
// End of code