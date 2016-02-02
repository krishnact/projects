#ifndef ORG_HIMALAY_SI_SCTE65_TABLEHEADER
#define ORG_HIMALAY_SI_SCTE65_TABLEHEADER
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
#define org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_SCTE65_TableHeader__PTR_TYPE boost::shared_ptr<SCTE65_TableHeader>
#define org_himalay_si_SCTE65_TableHeader__NEW(x) {/** Serious **/x = org_himalay_si_SCTE65_TableHeader__PTR_TYPE(new SCTE65_TableHeader()); }
#define org_himalay_si_SCTE65_TableHeader__INIT(x)
#define org_himalay_si_SCTE65_TableHeader__DELETE(x)
#else
#define org_himalay_si_SCTE65_TableHeader__PTR_TYPE SCTE65_TableHeader*
#define org_himalay_si_SCTE65_TableHeader__NEW(x) {x= new SCTE65_TableHeader();}
#define org_himalay_si_SCTE65_TableHeader__INIT(x)  x=NULL;
#define org_himalay_si_SCTE65_TableHeader__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
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




#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
class SCTE65_TableHeader;
typedef ::boost::shared_ptr<SCTE65_TableHeader> SCTE65_TableHeaderPtr;
#endif

class SCTE65_TableHeader :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // messageType ---
public:
    ui8 messageType ;
    // bf1 ---
public:
    ui16 bf1 ;


public:
    SCTE65_TableHeader (); // throws Exception
    virtual ~SCTE65_TableHeader ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for messageType
public:
    ui8 getMessageType();

    // Setter for messageType
public:
    void setMessageType(ui8 val);

    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);


public:
    int getZero( );

public:
    void setZero(int val);

public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getSection_length( );

public:
    void setSection_length(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_SCTE65_TableHeader__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::SCTE65_TableHeader* p);
void intrusive_ptr_release(org::himalay::si::SCTE65_TableHeader* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_SCTE65_TABLEHEADER
// End of code