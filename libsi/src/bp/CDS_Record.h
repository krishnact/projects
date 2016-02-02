#ifndef ORG_HIMALAY_SI_CDS_RECORD
#define ORG_HIMALAY_SI_CDS_RECORD
//@Generated(date = "Mon Feb 01 22:29:58 EST 2016")
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
#define org_himalay_si_CDS_Record__USE_SMART_PTR
#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_CDS_Record__PTR_TYPE boost::shared_ptr<CDS_Record>
#define org_himalay_si_CDS_Record__NEW(x) {/** Serious **/x = org_himalay_si_CDS_Record__PTR_TYPE(new CDS_Record()); }
#define org_himalay_si_CDS_Record__INIT(x)
#define org_himalay_si_CDS_Record__DELETE(x)
#else
#define org_himalay_si_CDS_Record__PTR_TYPE CDS_Record*
#define org_himalay_si_CDS_Record__NEW(x) {x= new CDS_Record();}
#define org_himalay_si_CDS_Record__INIT(x)  x=NULL;
#define org_himalay_si_CDS_Record__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
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




#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
class CDS_Record;
typedef ::boost::shared_ptr<CDS_Record> CDS_RecordPtr;
#endif

class CDS_Record :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // number_of_carriers ---
public:
    ui8 number_of_carriers ;
    // bf1 ---
public:
    ui16 bf1 ;
    // bf2 ---
public:
    ui16 bf2 ;


public:
    CDS_Record (); // throws Exception
    virtual ~CDS_Record ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for number_of_carriers
    // public: ui8 getNumber_of_carriers();

    // Setter for number_of_carriers
    // public: void setNumber_of_carriers(ui8 val);

    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);

    // Getter for bf2
    // public: ui16 getBf2();

    // Setter for bf2
    // public: void setBf2(ui16 val);


public:
    int getSpacingUnit( );

public:
    void setSpacingUnit(int val);

public:
    int getFrequencySpacing( );

public:
    void setFrequencySpacing(int val);

public:
    int getFrequencyUnit( );

public:
    void setFrequencyUnit(int val);

public:
    int getFirstCarrierFrequency( );

public:
    void setFirstCarrierFrequency(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_CDS_Record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::CDS_Record* p);
void intrusive_ptr_release(org::himalay::si::CDS_Record* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_CDS_RECORD
// End of code