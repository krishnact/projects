#ifndef ORG_HIMALAY_SI_CA_TABLE_SECTION_
#define ORG_HIMALAY_SI_CA_TABLE_SECTION_
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
#define org_himalay_si_ca_table_section___USE_SMART_PTR
#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_ca_table_section___PTR_TYPE boost::shared_ptr<ca_table_section_>
#define org_himalay_si_ca_table_section___NEW(x) {/** Serious **/x = org_himalay_si_ca_table_section___PTR_TYPE(new ca_table_section_()); }
#define org_himalay_si_ca_table_section___INIT(x)
#define org_himalay_si_ca_table_section___DELETE(x)
#else
#define org_himalay_si_ca_table_section___PTR_TYPE ca_table_section_*
#define org_himalay_si_ca_table_section___NEW(x) {x= new ca_table_section_();}
#define org_himalay_si_ca_table_section___INIT(x)  x=NULL;
#define org_himalay_si_ca_table_section___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
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




#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
class ca_table_section_;
typedef ::boost::shared_ptr<ca_table_section_> ca_table_section_Ptr;
#endif

class ca_table_section_ :public   SCTE65TableFactory::SCTE65Table { //Concrete type is ca_table_section

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
    ca_table_section_ (); // throws Exception
    virtual ~ca_table_section_ ();
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

#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ca_table_section_* p);
void intrusive_ptr_release(org::himalay::si::ca_table_section_* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_CA_TABLE_SECTION_
// End of code