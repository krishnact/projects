#ifndef ORG_HIMALAY_SI_REVISION_DETECTION_DESCRIPTOR_BASE
#define ORG_HIMALAY_SI_REVISION_DETECTION_DESCRIPTOR_BASE
//@Generated(date = "Mon Sep 22 23:15:29 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "descriptor_header.h" //header for org.himalay.si.descriptor_header


#include "SCTE65DescriptorFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_revision_detection_descriptor_base__PTR_TYPE boost::shared_ptr<revision_detection_descriptor_base>
#define org_himalay_si_revision_detection_descriptor_base__NEW(x) {/** Serious **/x = org_himalay_si_revision_detection_descriptor_base__PTR_TYPE(new revision_detection_descriptor_base()); }
#define org_himalay_si_revision_detection_descriptor_base__INIT(x)
#define org_himalay_si_revision_detection_descriptor_base__DELETE(x)
#else
#define org_himalay_si_revision_detection_descriptor_base__PTR_TYPE revision_detection_descriptor_base*
#define org_himalay_si_revision_detection_descriptor_base__NEW(x) {x= new revision_detection_descriptor_base();}
#define org_himalay_si_revision_detection_descriptor_base__INIT(x)  x=NULL;
#define org_himalay_si_revision_detection_descriptor_base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
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




#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
class revision_detection_descriptor_base;
typedef ::boost::shared_ptr<revision_detection_descriptor_base> revision_detection_descriptor_basePtr;
#endif

class revision_detection_descriptor_base :public   SCTE65DescriptorFactory::SCTE65Descriptor { //Concrete type is revision_detection_descriptor

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // bf1 ---
public:
    ui8 bf1 ;
    // section_number ---
public:
    ui8 section_number ;
    // last_section_number ---
public:
    ui8 last_section_number ;


public:
    revision_detection_descriptor_base (); // throws Exception
    virtual ~revision_detection_descriptor_base ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for desc_header
    // public: org_himalay_si_descriptor_header__PTR_TYPE getDesc_header();

    // Setter for desc_header
    // public: void setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for section_number
    // public: ui8 getSection_number();

    // Setter for section_number
    // public: void setSection_number(ui8 val);

    // Getter for last_section_number
    // public: ui8 getLast_section_number();

    // Setter for last_section_number
    // public: void setLast_section_number(ui8 val);


public:
    int getTable_version_number( );

public:
    void setTable_version_number(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::revision_detection_descriptor_base* p);
void intrusive_ptr_release(org::himalay::si::revision_detection_descriptor_base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_REVISION_DETECTION_DESCRIPTOR_BASE
// End of code