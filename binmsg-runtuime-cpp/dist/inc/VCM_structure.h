#ifndef ORG_HIMALAY_SI_VCM_STRUCTURE
#define ORG_HIMALAY_SI_VCM_STRUCTURE
//@Generated(date = "Mon Sep 22 23:15:32 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "VCM_structure_base.h" //header for org.himalay.si.VCM_structure_base




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_VCM_structure__USE_SMART_PTR
#ifdef org_himalay_si_VCM_structure__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_VCM_structure__PTR_TYPE boost::shared_ptr<VCM_structure>
#define org_himalay_si_VCM_structure__NEW(x) {/** Serious **/x = org_himalay_si_VCM_structure__PTR_TYPE(new VCM_structure()); }
#define org_himalay_si_VCM_structure__INIT(x)
#define org_himalay_si_VCM_structure__DELETE(x)
#else
#define org_himalay_si_VCM_structure__PTR_TYPE VCM_structure*
#define org_himalay_si_VCM_structure__NEW(x) {x= new VCM_structure();}
#define org_himalay_si_VCM_structure__INIT(x)  x=NULL;
#define org_himalay_si_VCM_structure__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_VCM_structure__USE_SMART_PTR
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




#ifdef org_himalay_si_VCM_structure__USE_SMART_PTR
class VCM_structure;
typedef ::boost::shared_ptr<VCM_structure> VCM_structurePtr;
#endif

class VCM_structure :public  VCM_structure_base { //Concrete type is VCM_structure

//  public:
//    long    references;

public:


    // members variables


public:
    VCM_structure (); // throws Exception
    virtual ~VCM_structure ();
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

#ifdef org_himalay_si_VCM_structure__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure* p);
void intrusive_ptr_release(org::himalay::si::VCM_structure* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_VCM_STRUCTURE
// End of code