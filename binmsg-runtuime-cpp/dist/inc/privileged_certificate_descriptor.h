#ifndef ORG_HIMALAY_SI_PRIVILEGED_CERTIFICATE_DESCRIPTOR
#define ORG_HIMALAY_SI_PRIVILEGED_CERTIFICATE_DESCRIPTOR
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
#define org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_privileged_certificate_descriptor__PTR_TYPE boost::shared_ptr<privileged_certificate_descriptor>
#define org_himalay_si_privileged_certificate_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_privileged_certificate_descriptor__PTR_TYPE(new privileged_certificate_descriptor()); }
#define org_himalay_si_privileged_certificate_descriptor__INIT(x)
#define org_himalay_si_privileged_certificate_descriptor__DELETE(x)
#else
#define org_himalay_si_privileged_certificate_descriptor__PTR_TYPE privileged_certificate_descriptor*
#define org_himalay_si_privileged_certificate_descriptor__NEW(x) {x= new privileged_certificate_descriptor();}
#define org_himalay_si_privileged_certificate_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_privileged_certificate_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__PTR_TYPE boost::shared_ptr<privileged_certificate_descriptor::certificate_identifier_byte>
//#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__NEW(x) {x =new privileged_certificate_descriptor::certificate_identifier_byte();}
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__NEW(x) {/** Serious **/x = org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__PTR_TYPE(new privileged_certificate_descriptor::certificate_identifier_byte()); }
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__INIT(x)
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__DELETE(x)
#else
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__PTR_TYPE privileged_certificate_descriptor::certificate_identifier_byte*
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__NEW(x) {x= new privileged_certificate_descriptor::certificate_identifier_byte();}
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__INIT(x)  x=NULL;
#define org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
class privileged_certificate_descriptor;
typedef ::boost::shared_ptr<privileged_certificate_descriptor> privileged_certificate_descriptorPtr;
#endif

class privileged_certificate_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is privileged_certificate_descriptor
// member static classes
public:

#ifdef org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__USE_SMART_PTR
    class certificate_identifier_byte;
    typedef ::boost::shared_ptr<certificate_identifier_byte> certificate_identifier_bytePtr;
#endif

    class certificate_identifier_byte :public BinMessage {

//  public:
//    long    references;

    public:

        privileged_certificate_descriptor* parent;

        // members variables
        // data ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;


    public:
        certificate_identifier_byte (); // throws Exception
        virtual ~certificate_identifier_byte ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for data
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

        // Setter for data
        // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
    void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
    void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
    void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // certificates ---
public:
    ArrayList(privileged_certificate_descriptor::certificate_identifier_byte) certificates ;


public:
    privileged_certificate_descriptor (); // throws Exception
    virtual ~privileged_certificate_descriptor ();
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

    // Getter for certificates
    // public: ArrayList(privileged_certificate_descriptor::certificate_identifier_byte) getCertificates();

    // Setter for certificates
    // public: void setCertificates(ArrayList(privileged_certificate_descriptor::certificate_identifier_byte) val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p);
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor* p);
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_PRIVILEGED_CERTIFICATE_DESCRIPTOR
// End of code