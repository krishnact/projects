#ifndef ORG_HIMALAY_SI_SYSTEM_TIME_TABLE_SECTION_
#define ORG_HIMALAY_SI_SYSTEM_TIME_TABLE_SECTION_
//@Generated(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader
#include "Descriptors.h" //header for org.himalay.si.Descriptors


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_system_time_table_section___USE_SMART_PTR
#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_system_time_table_section___PTR_TYPE boost::shared_ptr<system_time_table_section_>
#define org_himalay_si_system_time_table_section___NEW(x) {/** Serious **/x = org_himalay_si_system_time_table_section___PTR_TYPE(new system_time_table_section_()); }
#define org_himalay_si_system_time_table_section___INIT(x)
#define org_himalay_si_system_time_table_section___DELETE(x)
#else
#define org_himalay_si_system_time_table_section___PTR_TYPE system_time_table_section_*
#define org_himalay_si_system_time_table_section___NEW(x) {x= new system_time_table_section_();}
#define org_himalay_si_system_time_table_section___INIT(x)  x=NULL;
#define org_himalay_si_system_time_table_section___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_system_time_table_section__subtable__PTR_TYPE boost::shared_ptr<system_time_table_section_::subtable>
//#define org_himalay_si_system_time_table_section__subtable__NEW(x) {x =new system_time_table_section_::subtable();}
#define org_himalay_si_system_time_table_section__subtable__NEW(x) {/** Serious **/x = org_himalay_si_system_time_table_section__subtable__PTR_TYPE(new system_time_table_section_::subtable()); }
#define org_himalay_si_system_time_table_section__subtable__INIT(x)
#define org_himalay_si_system_time_table_section__subtable__DELETE(x)
#else
#define org_himalay_si_system_time_table_section__subtable__PTR_TYPE system_time_table_section_::subtable*
#define org_himalay_si_system_time_table_section__subtable__NEW(x) {x= new system_time_table_section_::subtable();}
#define org_himalay_si_system_time_table_section__subtable__INIT(x)  x=NULL;
#define org_himalay_si_system_time_table_section__subtable__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
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




#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
class system_time_table_section_;
typedef ::boost::shared_ptr<system_time_table_section_> system_time_table_section_Ptr;
#endif

class system_time_table_section_ :public   SCTE65TableFactory::SCTE65Table { //Concrete type is system_time_table_section
// member static classes
public:

#ifdef org_himalay_si_system_time_table_section__subtable__USE_SMART_PTR
    class subtable;
    typedef ::boost::shared_ptr<subtable> subtablePtr;
#endif

    class subtable :public BinMessage {

//  public:
//    long    references;

    public:

        system_time_table_section_* parent;

        // members variables
        // zero ---
    public:
        ui8 zero ;
        // systemTime ---
    public:
        i32 systemTime ;
        // GPS_UTC_Offset ---
    public:
        ui8 GPS_UTC_Offset ;
        // descriptor ---
    public:
        org_himalay_si_Descriptors__PTR_TYPE descriptor ;


    public:
        subtable (); // throws Exception
        virtual ~subtable ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for zero
        // public: ui8 getZero();

        // Setter for zero
        // public: void setZero(ui8 val);

        // Getter for systemTime
        // public: ui32 getSystemTime();

        // Setter for systemTime
        // public: void setSystemTime(ui32 val);

        // Getter for GPS_UTC_Offset
        // public: ui8 getGPS_UTC_Offset();

        // Setter for GPS_UTC_Offset
        // public: void setGPS_UTC_Offset(ui8 val);

        // Getter for descriptor
        // public: org_himalay_si_Descriptors__PTR_TYPE getDescriptor();

        // Setter for descriptor
        // public: void setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_system_time_table_section__subtable__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p);
    void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p);
    void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p);
    void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p);
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
    ui8 bf2 ;
    // subtableInstance ---
public:
    org_himalay_si_system_time_table_section__subtable__PTR_TYPE subtableInstance ;
    // CRC ---
public:
    i32 CRC ;


public:
    system_time_table_section_ (); // throws Exception
    virtual ~system_time_table_section_ ();
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
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for subtableInstance
    // public: org_himalay_si_system_time_table_section__subtable__PTR_TYPE getSubtableInstance();

    // Setter for subtableInstance
    // public: void setSubtableInstance(org_himalay_si_system_time_table_section__subtable__PTR_TYPE val);

    // Getter for CRC
    // public: ui32 getCRC();

    // Setter for CRC
    // public: void setCRC(ui32 val);


public:
    int getZeroVersion( );

public:
    void setZeroVersion(int val);

public:
    int getProtocol_version( );

public:
    void setProtocol_version(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p);
void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p);
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_* p);
void intrusive_ptr_release(org::himalay::si::system_time_table_section_* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_SYSTEM_TIME_TABLE_SECTION_
// End of code