#ifndef ORG_HIMALAY_SI_DESCRIPTORCOLLECTION
#define ORG_HIMALAY_SI_DESCRIPTORCOLLECTION
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
#define org_himalay_si_DescriptorCollection__USE_SMART_PTR
#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_DescriptorCollection__PTR_TYPE boost::shared_ptr<DescriptorCollection>
#define org_himalay_si_DescriptorCollection__NEW(x) {/** Serious **/x = org_himalay_si_DescriptorCollection__PTR_TYPE(new DescriptorCollection()); }
#define org_himalay_si_DescriptorCollection__INIT(x)
#define org_himalay_si_DescriptorCollection__DELETE(x)
#else
#define org_himalay_si_DescriptorCollection__PTR_TYPE DescriptorCollection*
#define org_himalay_si_DescriptorCollection__NEW(x) {x= new DescriptorCollection();}
#define org_himalay_si_DescriptorCollection__INIT(x)  x=NULL;
#define org_himalay_si_DescriptorCollection__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
class DescriptorCollection;
typedef ::boost::shared_ptr<DescriptorCollection> DescriptorCollectionPtr;
#endif

class DescriptorCollection :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // descriptor_count ---
public:
    ui8 descriptor_count ;
    // descriptors ---
public:
    ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) descriptors ;


public:
    DescriptorCollection (); // throws Exception
    virtual ~DescriptorCollection ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for descriptor_count
    // public: ui8 getDescriptor_count();

    // Setter for descriptor_count
    // public: void setDescriptor_count(ui8 val);

    // Getter for descriptors
    // public: ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::DescriptorCollection* p);
void intrusive_ptr_release(org::himalay::si::DescriptorCollection* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DESCRIPTORCOLLECTION
// End of code