#ifndef ORG_HIMALAY_SI_CA_TABLE_SECTION
#define ORG_HIMALAY_SI_CA_TABLE_SECTION
//@Generated(date = "Mon Sep 22 23:15:33 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ca_table_section_.h" //header for org.himalay.si.ca_table_section_




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_ca_table_section__USE_SMART_PTR
#ifdef org_himalay_si_ca_table_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_ca_table_section__PTR_TYPE boost::shared_ptr<ca_table_section>
#define org_himalay_si_ca_table_section__NEW(x) {/** Serious **/x = org_himalay_si_ca_table_section__PTR_TYPE(new ca_table_section()); }
#define org_himalay_si_ca_table_section__INIT(x)
#define org_himalay_si_ca_table_section__DELETE(x)
#else
#define org_himalay_si_ca_table_section__PTR_TYPE ca_table_section*
#define org_himalay_si_ca_table_section__NEW(x) {x= new ca_table_section();}
#define org_himalay_si_ca_table_section__INIT(x)  x=NULL;
#define org_himalay_si_ca_table_section__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_ca_table_section__USE_SMART_PTR
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




#ifdef org_himalay_si_ca_table_section__USE_SMART_PTR
class ca_table_section;
typedef ::boost::shared_ptr<ca_table_section> ca_table_sectionPtr;
#endif

class ca_table_section :public  ca_table_section_ { //Concrete type is ca_table_section

//  public:
//    long    references;

public:


    // members variables


public:
    ca_table_section (); // throws Exception
    virtual ~ca_table_section ();
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

#ifdef org_himalay_si_ca_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ca_table_section* p);
void intrusive_ptr_release(org::himalay::si::ca_table_section* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_CA_TABLE_SECTION
// End of code