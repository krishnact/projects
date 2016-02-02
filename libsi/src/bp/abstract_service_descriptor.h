#ifndef ORG_HIMALAY_SI_ABSTRACT_SERVICE_DESCRIPTOR
#define ORG_HIMALAY_SI_ABSTRACT_SERVICE_DESCRIPTOR
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
#define org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_abstract_service_descriptor__PTR_TYPE boost::shared_ptr<abstract_service_descriptor>
#define org_himalay_si_abstract_service_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_abstract_service_descriptor__PTR_TYPE(new abstract_service_descriptor()); }
#define org_himalay_si_abstract_service_descriptor__INIT(x)
#define org_himalay_si_abstract_service_descriptor__DELETE(x)
#else
#define org_himalay_si_abstract_service_descriptor__PTR_TYPE abstract_service_descriptor*
#define org_himalay_si_abstract_service_descriptor__NEW(x) {x= new abstract_service_descriptor();}
#define org_himalay_si_abstract_service_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_abstract_service_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
class abstract_service_descriptor;
typedef ::boost::shared_ptr<abstract_service_descriptor> abstract_service_descriptorPtr;
#endif

class abstract_service_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is abstract_service_descriptor

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // service_id ---
public:
    int service_id ;
    // bf1 ---
public:
    ui8 bf1 ;
    // service_name ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE service_name; ;


public:
    abstract_service_descriptor (); // throws Exception
    virtual ~abstract_service_descriptor ();
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

    // Getter for service_id
    // public: ui24 getService_id();

    // Setter for service_id
    // public: void setService_id(ui24 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for service_name
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getService_name();

    // Setter for service_name
    // public: void setService_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getAuto_select( );

public:
    void setAuto_select(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::abstract_service_descriptor* p);
void intrusive_ptr_release(org::himalay::si::abstract_service_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_ABSTRACT_SERVICE_DESCRIPTOR
// End of code