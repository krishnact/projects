#ifndef ORG_HIMALAY_SI_GENERIC_APP_DESC
#define ORG_HIMALAY_SI_GENERIC_APP_DESC
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
#define org_himalay_si_generic_app_desc__USE_SMART_PTR
#ifdef org_himalay_si_generic_app_desc__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_generic_app_desc__PTR_TYPE boost::shared_ptr<generic_app_desc>
#define org_himalay_si_generic_app_desc__NEW(x) {/** Serious **/x = org_himalay_si_generic_app_desc__PTR_TYPE(new generic_app_desc()); }
#define org_himalay_si_generic_app_desc__INIT(x)
#define org_himalay_si_generic_app_desc__DELETE(x)
#else
#define org_himalay_si_generic_app_desc__PTR_TYPE generic_app_desc*
#define org_himalay_si_generic_app_desc__NEW(x) {x= new generic_app_desc();}
#define org_himalay_si_generic_app_desc__INIT(x)  x=NULL;
#define org_himalay_si_generic_app_desc__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_generic_app_desc__USE_SMART_PTR
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




#ifdef org_himalay_si_generic_app_desc__USE_SMART_PTR
class generic_app_desc;
typedef ::boost::shared_ptr<generic_app_desc> generic_app_descPtr;
#endif

class generic_app_desc :public   app_desc_baseFactory::app_desc_base { //Concrete type is generic_app_desc

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // data ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;


public:
    generic_app_desc (); // throws Exception
    virtual ~generic_app_desc ();
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

    // Getter for data
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

    // Setter for data
    // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_generic_app_desc__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::generic_app_desc* p);
void intrusive_ptr_release(org::himalay::si::generic_app_desc* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_GENERIC_APP_DESC
// End of code