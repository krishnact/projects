#ifndef ORG_HIMALAY_SI_DVBJAPP_LOCATOR_DESCRIPTOR
#define ORG_HIMALAY_SI_DVBJAPP_LOCATOR_DESCRIPTOR
//@Generated(date = "Mon Feb 01 22:29:59 EST 2016")
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
#define org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_dvbJapp_locator_descriptor__PTR_TYPE boost::shared_ptr<dvbJapp_locator_descriptor>
#define org_himalay_si_dvbJapp_locator_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_dvbJapp_locator_descriptor__PTR_TYPE(new dvbJapp_locator_descriptor()); }
#define org_himalay_si_dvbJapp_locator_descriptor__INIT(x)
#define org_himalay_si_dvbJapp_locator_descriptor__DELETE(x)
#else
#define org_himalay_si_dvbJapp_locator_descriptor__PTR_TYPE dvbJapp_locator_descriptor*
#define org_himalay_si_dvbJapp_locator_descriptor__NEW(x) {x= new dvbJapp_locator_descriptor();}
#define org_himalay_si_dvbJapp_locator_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_dvbJapp_locator_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
class dvbJapp_locator_descriptor;
typedef ::boost::shared_ptr<dvbJapp_locator_descriptor> dvbJapp_locator_descriptorPtr;
#endif

class dvbJapp_locator_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is dvbJapp_locator_descriptor

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // base_directory ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE base_directory; ;
    // class_path ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE class_path; ;
    // initial_class ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE initial_class; ;


public:
    dvbJapp_locator_descriptor (); // throws Exception
    virtual ~dvbJapp_locator_descriptor ();
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

    // Getter for base_directory
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getBase_directory();

    // Setter for base_directory
    // public: void setBase_directory(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for class_path
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getClass_path();

    // Setter for class_path
    // public: void setClass_path(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for initial_class
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getInitial_class();

    // Setter for initial_class
    // public: void setInitial_class(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_locator_descriptor* p);
void intrusive_ptr_release(org::himalay::si::dvbJapp_locator_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DVBJAPP_LOCATOR_DESCRIPTOR
// End of code