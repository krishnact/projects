#ifndef ORG_HIMALAY_SI_DESCRIPTORS
#define ORG_HIMALAY_SI_DESCRIPTORS
//@Generated(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65DescriptorFactory.h" //header for org.himalay.si.SCTE65DescriptorFactory




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_Descriptors__USE_SMART_PTR
#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_Descriptors__PTR_TYPE boost::shared_ptr<Descriptors>
#define org_himalay_si_Descriptors__NEW(x) {/** Serious **/x = org_himalay_si_Descriptors__PTR_TYPE(new Descriptors()); }
#define org_himalay_si_Descriptors__INIT(x)
#define org_himalay_si_Descriptors__DELETE(x)
#else
#define org_himalay_si_Descriptors__PTR_TYPE Descriptors*
#define org_himalay_si_Descriptors__NEW(x) {x= new Descriptors();}
#define org_himalay_si_Descriptors__INIT(x)  x=NULL;
#define org_himalay_si_Descriptors__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
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




#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
class Descriptors;
typedef ::boost::shared_ptr<Descriptors> DescriptorsPtr;
#endif

class Descriptors :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // descriptors ---
public:
    ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) descriptors ;


public:
    Descriptors (); // throws Exception
    virtual ~Descriptors ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for descriptors
    // public: ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::Descriptors* p);
void intrusive_ptr_release(org::himalay::si::Descriptors* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DESCRIPTORS
// End of code