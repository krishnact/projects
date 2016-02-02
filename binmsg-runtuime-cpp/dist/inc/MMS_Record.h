#ifndef ORG_HIMALAY_SI_MMS_RECORD
#define ORG_HIMALAY_SI_MMS_RECORD
//@Generated(date = "Mon Sep 22 23:15:30 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"




/**
 * Definitions for enclosing type
 */
#define org_himalay_si_MMS_Record__USE_SMART_PTR
#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MMS_Record__PTR_TYPE boost::shared_ptr<MMS_Record>
#define org_himalay_si_MMS_Record__NEW(x) {/** Serious **/x = org_himalay_si_MMS_Record__PTR_TYPE(new MMS_Record()); }
#define org_himalay_si_MMS_Record__INIT(x)
#define org_himalay_si_MMS_Record__DELETE(x)
#else
#define org_himalay_si_MMS_Record__PTR_TYPE MMS_Record*
#define org_himalay_si_MMS_Record__NEW(x) {x= new MMS_Record();}
#define org_himalay_si_MMS_Record__INIT(x)  x=NULL;
#define org_himalay_si_MMS_Record__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
class MMS_Record;
typedef ::boost::shared_ptr<MMS_Record> MMS_RecordPtr;
#endif

class MMS_Record :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // bf2 ---
public:
    ui8 bf2 ;
    // symbolRate ---
public:
    i32 symbolRate ;


public:
    MMS_Record (); // throws Exception
    virtual ~MMS_Record ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for bf2
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for symbolRate
    // public: ui32 getSymbolRate();

    // Setter for symbolRate
    // public: void setSymbolRate(ui32 val);


public:
    int getTransmissionSystem( );

public:
    void setTransmissionSystem(int val);

public:
    int getInnerCodignMode( );

public:
    void setInnerCodignMode(int val);

public:
    int getSplit_bitstream_mode( );

public:
    void setSplit_bitstream_mode(int val);

public:
    int getModulation_format( );

public:
    void setModulation_format(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_MMS_Record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MMS_Record* p);
void intrusive_ptr_release(org::himalay::si::MMS_Record* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_MMS_RECORD
// End of code