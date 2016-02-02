#ifndef ORG_HIMALAY_SI_SHORTFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
#define ORG_HIMALAY_SI_SHORTFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
//@Generated(date = "Mon Sep 22 23:15:30 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "S_VCT_SubtableFactory.h" //header for org.himalay.si.S_VCT_SubtableFactory
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_shortform_virtual_channel_table_section___PTR_TYPE boost::shared_ptr<shortform_virtual_channel_table_section_>
#define org_himalay_si_shortform_virtual_channel_table_section___NEW(x) {/** Serious **/x = org_himalay_si_shortform_virtual_channel_table_section___PTR_TYPE(new shortform_virtual_channel_table_section_()); }
#define org_himalay_si_shortform_virtual_channel_table_section___INIT(x)
#define org_himalay_si_shortform_virtual_channel_table_section___DELETE(x)
#else
#define org_himalay_si_shortform_virtual_channel_table_section___PTR_TYPE shortform_virtual_channel_table_section_*
#define org_himalay_si_shortform_virtual_channel_table_section___NEW(x) {x= new shortform_virtual_channel_table_section_();}
#define org_himalay_si_shortform_virtual_channel_table_section___INIT(x)  x=NULL;
#define org_himalay_si_shortform_virtual_channel_table_section___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
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




#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
class shortform_virtual_channel_table_section_;
typedef ::boost::shared_ptr<shortform_virtual_channel_table_section_> shortform_virtual_channel_table_section_Ptr;
#endif

class shortform_virtual_channel_table_section_ :public   SCTE65TableFactory::SCTE65Table { //Concrete type is shortform_virtual_channel_table_section

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
    // bf3 ---
public:
    ui8 bf3 ;
    // VCT_ID ---
public:
    ui16 VCT_ID ;
    // subTable ---
public:
    org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE  subTable ;
    // CRC ---
public:
    i32 CRC ;


public:
    shortform_virtual_channel_table_section_ (); // throws Exception
    virtual ~shortform_virtual_channel_table_section_ ();
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

    // Getter for bf3
    // public: ui8 getBf3();

    // Setter for bf3
    // public: void setBf3(ui8 val);

    // Getter for VCT_ID
    // public: ui16 getVCT_ID();

    // Setter for VCT_ID
    // public: void setVCT_ID(ui16 val);

    // Getter for subTable
    // public: org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE  getSubTable();

    // Setter for subTable
    // public: void setSubTable(org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE  val);

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
    int getTransmission_medium( );

public:
    void setTransmission_medium(int val);

public:
    int getTable_subtype( );

public:
    void setTable_subtype(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::shortform_virtual_channel_table_section_* p);
void intrusive_ptr_release(org::himalay::si::shortform_virtual_channel_table_section_* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_SHORTFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
// End of code