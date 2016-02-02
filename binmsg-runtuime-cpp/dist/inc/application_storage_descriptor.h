#ifndef ORG_HIMALAY_SI_APPLICATION_STORAGE_DESCRIPTOR
#define ORG_HIMALAY_SI_APPLICATION_STORAGE_DESCRIPTOR
//@Generated(date = "Mon Sep 22 23:15:31 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "descriptor_header.h" //header for org.himalay.si.descriptor_header


#include "app_desc_baseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_application_storage_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_application_storage_descriptor__PTR_TYPE boost::shared_ptr<application_storage_descriptor>
#define org_himalay_si_application_storage_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_application_storage_descriptor__PTR_TYPE(new application_storage_descriptor()); }
#define org_himalay_si_application_storage_descriptor__INIT(x)
#define org_himalay_si_application_storage_descriptor__DELETE(x)
#else
#define org_himalay_si_application_storage_descriptor__PTR_TYPE application_storage_descriptor*
#define org_himalay_si_application_storage_descriptor__NEW(x) {x= new application_storage_descriptor();}
#define org_himalay_si_application_storage_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_application_storage_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
class application_storage_descriptor;
typedef ::boost::shared_ptr<application_storage_descriptor> application_storage_descriptorPtr;
#endif

class application_storage_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is application_storage_descriptor

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // storage_priority ---
public:
    ui16 storage_priority ;
    // launch_order ---
public:
    ui8 launch_order ;


public:
    application_storage_descriptor (); // throws Exception
    virtual ~application_storage_descriptor ();
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

    // Getter for storage_priority
    // public: ui16 getStorage_priority();

    // Setter for storage_priority
    // public: void setStorage_priority(ui16 val);

    // Getter for launch_order
    // public: ui8 getLaunch_order();

    // Setter for launch_order
    // public: void setLaunch_order(ui8 val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_storage_descriptor* p);
void intrusive_ptr_release(org::himalay::si::application_storage_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_APPLICATION_STORAGE_DESCRIPTOR
// End of code