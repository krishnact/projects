#ifndef ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR
#define ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR
//@Generated(date = "Mon Feb 01 22:30:00 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "caption_service_descriptor_base.h" //header for org.himalay.si.caption_service_descriptor_base




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_caption_service_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_caption_service_descriptor__PTR_TYPE boost::shared_ptr<caption_service_descriptor>
#define org_himalay_si_caption_service_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_caption_service_descriptor__PTR_TYPE(new caption_service_descriptor()); }
#define org_himalay_si_caption_service_descriptor__INIT(x)
#define org_himalay_si_caption_service_descriptor__DELETE(x)
#else
#define org_himalay_si_caption_service_descriptor__PTR_TYPE caption_service_descriptor*
#define org_himalay_si_caption_service_descriptor__NEW(x) {x= new caption_service_descriptor();}
#define org_himalay_si_caption_service_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_caption_service_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
class caption_service_descriptor;
typedef ::boost::shared_ptr<caption_service_descriptor> caption_service_descriptorPtr;
#endif

class caption_service_descriptor :public  caption_service_descriptor_base { //Concrete type is caption_service_descriptor

//  public:
//    long    references;

public:


    // members variables


public:
    caption_service_descriptor (); // throws Exception
    virtual ~caption_service_descriptor ();
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

#ifdef org_himalay_si_caption_service_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor* p);
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR
// End of code