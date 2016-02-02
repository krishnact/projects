#ifndef ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR_BASE
#define ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR_BASE
//@Generated(date = "Mon Feb 01 22:29:57 EST 2016")
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
#define org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_caption_service_descriptor_base__PTR_TYPE boost::shared_ptr<caption_service_descriptor_base>
#define org_himalay_si_caption_service_descriptor_base__NEW(x) {/** Serious **/x = org_himalay_si_caption_service_descriptor_base__PTR_TYPE(new caption_service_descriptor_base()); }
#define org_himalay_si_caption_service_descriptor_base__INIT(x)
#define org_himalay_si_caption_service_descriptor_base__DELETE(x)
#else
#define org_himalay_si_caption_service_descriptor_base__PTR_TYPE caption_service_descriptor_base*
#define org_himalay_si_caption_service_descriptor_base__NEW(x) {x= new caption_service_descriptor_base();}
#define org_himalay_si_caption_service_descriptor_base__INIT(x)  x=NULL;
#define org_himalay_si_caption_service_descriptor_base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_caption_service_descriptor_base_services__PTR_TYPE boost::shared_ptr<caption_service_descriptor_base::services>
//#define org_himalay_si_caption_service_descriptor_base_services__NEW(x) {x =new caption_service_descriptor_base::services();}
#define org_himalay_si_caption_service_descriptor_base_services__NEW(x) {/** Serious **/x = org_himalay_si_caption_service_descriptor_base_services__PTR_TYPE(new caption_service_descriptor_base::services()); }
#define org_himalay_si_caption_service_descriptor_base_services__INIT(x)
#define org_himalay_si_caption_service_descriptor_base_services__DELETE(x)
#else
#define org_himalay_si_caption_service_descriptor_base_services__PTR_TYPE caption_service_descriptor_base::services*
#define org_himalay_si_caption_service_descriptor_base_services__NEW(x) {x= new caption_service_descriptor_base::services();}
#define org_himalay_si_caption_service_descriptor_base_services__INIT(x)  x=NULL;
#define org_himalay_si_caption_service_descriptor_base_services__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
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




#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
class caption_service_descriptor_base;
typedef ::boost::shared_ptr<caption_service_descriptor_base> caption_service_descriptor_basePtr;
#endif

class caption_service_descriptor_base :public   SCTE65DescriptorFactory::SCTE65Descriptor { //Concrete type is caption_service_descriptor
// member static classes
public:

#ifdef org_himalay_si_caption_service_descriptor_base_services__USE_SMART_PTR
    class services;
    typedef ::boost::shared_ptr<services> servicesPtr;
#endif

    class services :public BinMessage {

//  public:
//    long    references;

    public:

        caption_service_descriptor_base* parent;

        // members variables
        // lnaguage ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE lnaguage; ;
        // line21OrCaptionService ---
    public:
        ui8 line21OrCaptionService ;
        // bf33 ---
    public:
        ui16 bf33 ;


    public:
        services (); // throws Exception
        virtual ~services ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for lnaguage
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getLnaguage();

        // Setter for lnaguage
        // public: void setLnaguage(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

        // Getter for line21OrCaptionService
        // public: ui8 getLine21OrCaptionService();

        // Setter for line21OrCaptionService
        // public: void setLine21OrCaptionService(ui8 val);

        // Getter for bf33
        // public: ui16 getBf33();

        // Setter for bf33
        // public: void setBf33(ui16 val);


    public:
        int getEasy_reader( );

    public:
        void setEasy_reader(int val);

    public:
        int getWide_aspect_ratio( );

    public:
        void setWide_aspect_ratio(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_caption_service_descriptor_base_services__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p);
    void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p);
    void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p);
    void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p);
#endif

// End of code

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


public:
    caption_service_descriptor_base (); // throws Exception
    virtual ~caption_service_descriptor_base ();
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


public:
    int getNumber_of_service( );

public:
    void setNumber_of_service(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p);
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p);
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base* p);
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_CAPTION_SERVICE_DESCRIPTOR_BASE
// End of code