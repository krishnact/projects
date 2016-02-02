#ifndef ORG_HIMALAY_SI_APPLICATION_DESCRIPTOR
#define ORG_HIMALAY_SI_APPLICATION_DESCRIPTOR
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
#define org_himalay_si_application_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_application_descriptor__PTR_TYPE boost::shared_ptr<application_descriptor>
#define org_himalay_si_application_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_application_descriptor__PTR_TYPE(new application_descriptor()); }
#define org_himalay_si_application_descriptor__INIT(x)
#define org_himalay_si_application_descriptor__DELETE(x)
#else
#define org_himalay_si_application_descriptor__PTR_TYPE application_descriptor*
#define org_himalay_si_application_descriptor__NEW(x) {x= new application_descriptor();}
#define org_himalay_si_application_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_application_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_application_descriptor_profile__PTR_TYPE boost::shared_ptr<application_descriptor::profile>
//#define org_himalay_si_application_descriptor_profile__NEW(x) {x =new application_descriptor::profile();}
#define org_himalay_si_application_descriptor_profile__NEW(x) {/** Serious **/x = org_himalay_si_application_descriptor_profile__PTR_TYPE(new application_descriptor::profile()); }
#define org_himalay_si_application_descriptor_profile__INIT(x)
#define org_himalay_si_application_descriptor_profile__DELETE(x)
#else
#define org_himalay_si_application_descriptor_profile__PTR_TYPE application_descriptor::profile*
#define org_himalay_si_application_descriptor_profile__NEW(x) {x= new application_descriptor::profile();}
#define org_himalay_si_application_descriptor_profile__INIT(x)  x=NULL;
#define org_himalay_si_application_descriptor_profile__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
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




#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
class application_descriptor;
typedef ::boost::shared_ptr<application_descriptor> application_descriptorPtr;
#endif

class application_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is application_descriptor
// member static classes
public:

#ifdef org_himalay_si_application_descriptor_profile__USE_SMART_PTR
    class profile;
    typedef ::boost::shared_ptr<profile> profilePtr;
#endif

    class profile :public BinMessage {

//  public:
//    long    references;

    public:

        application_descriptor* parent;

        // members variables
        // app_profile ---
    public:
        ui16 app_profile ;
        // major_version ---
    public:
        ui8 major_version ;
        // minor_version ---
    public:
        ui8 minor_version ;
        // micro_version ---
    public:
        ui8 micro_version ;


    public:
        profile (); // throws Exception
        virtual ~profile ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for app_profile
        // public: ui16 getApp_profile();

        // Setter for app_profile
        // public: void setApp_profile(ui16 val);

        // Getter for major_version
        // public: ui8 getMajor_version();

        // Setter for major_version
        // public: void setMajor_version(ui8 val);

        // Getter for minor_version
        // public: ui8 getMinor_version();

        // Setter for minor_version
        // public: void setMinor_version(ui8 val);

        // Getter for micro_version
        // public: ui8 getMicro_version();

        // Setter for micro_version
        // public: void setMicro_version(ui8 val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_application_descriptor_profile__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p);
    void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p);
    void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p);
    void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // app_profile_length ---
public:
    ui8 app_profile_length ;
    // profiles ---
public:
    ArrayList(application_descriptor::profile) profiles ;
    // service_bound_visibility ---
public:
    ui8 service_bound_visibility ;
    // priority ---
public:
    ui8 priority ;
    // transport_label ---
public:
    ui8 transport_label ;


public:
    application_descriptor (); // throws Exception
    virtual ~application_descriptor ();
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

    // Getter for app_profile_length
    // public: ui8 getApp_profile_length();

    // Setter for app_profile_length
    // public: void setApp_profile_length(ui8 val);

    // Getter for profiles
    // public: ArrayList(application_descriptor::profile) getProfiles();

    // Setter for profiles
    // public: void setProfiles(ArrayList(application_descriptor::profile) val);

    // Getter for service_bound_visibility
    // public: ui8 getService_bound_visibility();

    // Setter for service_bound_visibility
    // public: void setService_bound_visibility(ui8 val);

    // Getter for priority
    // public: ui8 getPriority();

    // Setter for priority
    // public: void setPriority(ui8 val);

    // Getter for transport_label
    // public: ui8 getTransport_label();

    // Setter for transport_label
    // public: void setTransport_label(ui8 val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p);
void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p);
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor* p);
void intrusive_ptr_release(org::himalay::si::application_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_APPLICATION_DESCRIPTOR
// End of code