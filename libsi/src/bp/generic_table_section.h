#ifndef ORG_HIMALAY_SI_GENERIC_TABLE_SECTION
#define ORG_HIMALAY_SI_GENERIC_TABLE_SECTION
//@Generated(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_generic_table_section__USE_SMART_PTR
#ifdef org_himalay_si_generic_table_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_generic_table_section__PTR_TYPE boost::shared_ptr<generic_table_section>
#define org_himalay_si_generic_table_section__NEW(x) {/** Serious **/x = org_himalay_si_generic_table_section__PTR_TYPE(new generic_table_section()); }
#define org_himalay_si_generic_table_section__INIT(x)
#define org_himalay_si_generic_table_section__DELETE(x)
#else
#define org_himalay_si_generic_table_section__PTR_TYPE generic_table_section*
#define org_himalay_si_generic_table_section__NEW(x) {x= new generic_table_section();}
#define org_himalay_si_generic_table_section__INIT(x)  x=NULL;
#define org_himalay_si_generic_table_section__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_generic_table_section__USE_SMART_PTR
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




#ifdef org_himalay_si_generic_table_section__USE_SMART_PTR
class generic_table_section;
typedef ::boost::shared_ptr<generic_table_section> generic_table_sectionPtr;
#endif

class generic_table_section :public   SCTE65TableFactory::SCTE65Table { //Concrete type is generic_table_section

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
    // data ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;
    // CRC ---
public:
    i32 CRC ;


public:
    generic_table_section (); // throws Exception
    virtual ~generic_table_section ();
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

    // Getter for data
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

    // Setter for data
    // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

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

#ifdef org_himalay_si_generic_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::generic_table_section* p);
void intrusive_ptr_release(org::himalay::si::generic_table_section* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_GENERIC_TABLE_SECTION
// End of code