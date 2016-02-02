#ifndef ORG_HIMALAY_SI_XAIT_SECTION
#define ORG_HIMALAY_SI_XAIT_SECTION
//@Generated(date = "Mon Sep 22 23:15:31 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "app_desc_baseFactory.h" //header for org.himalay.si.app_desc_baseFactory
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_xait_section__USE_SMART_PTR
#ifdef org_himalay_si_xait_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_xait_section__PTR_TYPE boost::shared_ptr<xait_section>
#define org_himalay_si_xait_section__NEW(x) {/** Serious **/x = org_himalay_si_xait_section__PTR_TYPE(new xait_section()); }
#define org_himalay_si_xait_section__INIT(x)
#define org_himalay_si_xait_section__DELETE(x)
#else
#define org_himalay_si_xait_section__PTR_TYPE xait_section*
#define org_himalay_si_xait_section__NEW(x) {x= new xait_section();}
#define org_himalay_si_xait_section__INIT(x)  x=NULL;
#define org_himalay_si_xait_section__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_xait_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_xait_section_app_data__PTR_TYPE boost::shared_ptr<xait_section::app_data>
//#define org_himalay_si_xait_section_app_data__NEW(x) {x =new xait_section::app_data();}
#define org_himalay_si_xait_section_app_data__NEW(x) {/** Serious **/x = org_himalay_si_xait_section_app_data__PTR_TYPE(new xait_section::app_data()); }
#define org_himalay_si_xait_section_app_data__INIT(x)
#define org_himalay_si_xait_section_app_data__DELETE(x)
#else
#define org_himalay_si_xait_section_app_data__PTR_TYPE xait_section::app_data*
#define org_himalay_si_xait_section_app_data__NEW(x) {x= new xait_section::app_data();}
#define org_himalay_si_xait_section_app_data__INIT(x)  x=NULL;
#define org_himalay_si_xait_section_app_data__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_xait_section__USE_SMART_PTR
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




#ifdef org_himalay_si_xait_section__USE_SMART_PTR
class xait_section;
typedef ::boost::shared_ptr<xait_section> xait_sectionPtr;
#endif

class xait_section :public   SCTE65TableFactory::SCTE65Table { //Concrete type is xait_section
// member static classes
public:

#ifdef org_himalay_si_xait_section_app_data__USE_SMART_PTR
    class app_data;
    typedef ::boost::shared_ptr<app_data> app_dataPtr;
#endif

    class app_data :public BinMessage {

//  public:
//    long    references;

    public:

        xait_section* parent;

        // members variables
        // org_id ---
    public:
        i32 org_id ;
        // app_id ---
    public:
        ui16 app_id ;
        // app_control_code ---
    public:
        ui8 app_control_code ;
        // bf ---
    public:
        ui16 bf ;
        // app_descriptors ---
    public:
        ArrayList(app_desc_baseFactory::app_desc_base) app_descriptors ;


    public:
        app_data (); // throws Exception
        virtual ~app_data ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for org_id
        // public: ui32 getOrg_id();

        // Setter for org_id
        // public: void setOrg_id(ui32 val);

        // Getter for app_id
        // public: ui16 getApp_id();

        // Setter for app_id
        // public: void setApp_id(ui16 val);

        // Getter for app_control_code
        // public: ui8 getApp_control_code();

        // Setter for app_control_code
        // public: void setApp_control_code(ui8 val);

        // Getter for bf
        // public: ui16 getBf();

        // Setter for bf
        // public: void setBf(ui16 val);

        // Getter for app_descriptors
        // public: ArrayList(app_desc_baseFactory::app_desc_base) getApp_descriptors();

        // Setter for app_descriptors
        // public: void setApp_descriptors(ArrayList(app_desc_baseFactory::app_desc_base) val);


    public:
        int getReserved( );

    public:
        void setReserved(int val);

    public:
        int getApplication_descriptors_loop_length( );

    public:
        void setApplication_descriptors_loop_length(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_xait_section_app_data__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p);
    void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p);
    void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p);
    void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // tableHeader ---
public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE tableHeader ;
    // bf2 ---
public:
    ui16 bf2 ;
    // bf3 ---
public:
    ui8 bf3 ;
    // section_number ---
public:
    ui8 section_number ;
    // last_section_number ---
public:
    ui8 last_section_number ;
    // bf4 ---
public:
    ui16 bf4 ;
    // common_descriptors ---
public:
    ArrayList(app_desc_baseFactory::app_desc_base) common_descriptors ;
    // bf5 ---
public:
    ui16 bf5 ;
    // appDatum ---
public:
    ArrayList(xait_section::app_data) appDatum ;
    // CRC ---
public:
    i32 CRC ;


public:
    xait_section (); // throws Exception
    virtual ~xait_section ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for tableHeader
    // public: org_himalay_si_SCTE65_TableHeader__PTR_TYPE getTableHeader();

    // Setter for tableHeader
    // public: void setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val);

    // Getter for bf2
    // public: ui16 getBf2();

    // Setter for bf2
    // public: void setBf2(ui16 val);

    // Getter for bf3
    // public: ui8 getBf3();

    // Setter for bf3
    // public: void setBf3(ui8 val);

    // Getter for section_number
    // public: ui8 getSection_number();

    // Setter for section_number
    // public: void setSection_number(ui8 val);

    // Getter for last_section_number
    // public: ui8 getLast_section_number();

    // Setter for last_section_number
    // public: void setLast_section_number(ui8 val);

    // Getter for bf4
    // public: ui16 getBf4();

    // Setter for bf4
    // public: void setBf4(ui16 val);

    // Getter for common_descriptors
    // public: ArrayList(app_desc_baseFactory::app_desc_base) getCommon_descriptors();

    // Setter for common_descriptors
    // public: void setCommon_descriptors(ArrayList(app_desc_baseFactory::app_desc_base) val);

    // Getter for bf5
    // public: ui16 getBf5();

    // Setter for bf5
    // public: void setBf5(ui16 val);

    // Getter for appDatum
    // public: ArrayList(xait_section::app_data) getAppDatum();

    // Setter for appDatum
    // public: void setAppDatum(ArrayList(xait_section::app_data) val);

    // Getter for CRC
    // public: ui32 getCRC();

    // Setter for CRC
    // public: void setCRC(ui32 val);


public:
    int getTest_application_flag( );

public:
    void setTest_application_flag(int val);

public:
    int getApplication_type( );

public:
    void setApplication_type(int val);

public:
    int getReserved2( );

public:
    void setReserved2(int val);

public:
    int getVersion_number( );

public:
    void setVersion_number(int val);

public:
    int getCurrent_next_indicator( );

public:
    void setCurrent_next_indicator(int val);

public:
    int getReserved3( );

public:
    void setReserved3(int val);

public:
    int getCommon_descriptors_length( );

public:
    void setCommon_descriptors_length(int val);

public:
    int getReserved4( );

public:
    void setReserved4(int val);

public:
    int getApplication_loop_length( );

public:
    void setApplication_loop_length(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_xait_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p);
void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p);
void intrusive_ptr_add_ref(org::himalay::si::xait_section* p);
void intrusive_ptr_release(org::himalay::si::xait_section* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_XAIT_SECTION
// End of code