#ifndef ORG_HIMALAY_CCIF_CAPMTREPLY_1_2
#define ORG_HIMALAY_CCIF_CAPMTREPLY_1_2
//@Generated(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "CaEntry.h" //header for org.himalay.ccif.CaEntry


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtReply_1_2__PTR_TYPE boost::shared_ptr<CaPmtReply_1_2>
#define org_himalay_ccif_CaPmtReply_1_2__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtReply_1_2__PTR_TYPE(new CaPmtReply_1_2()); }
#define org_himalay_ccif_CaPmtReply_1_2__INIT(x)
#define org_himalay_ccif_CaPmtReply_1_2__DELETE(x)
#else
#define org_himalay_ccif_CaPmtReply_1_2__PTR_TYPE CaPmtReply_1_2*
#define org_himalay_ccif_CaPmtReply_1_2__NEW(x) {x= new CaPmtReply_1_2();}
#define org_himalay_ccif_CaPmtReply_1_2__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtReply_1_2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
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
namespace ccif {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::ccif;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
class CaPmtReply_1_2;
typedef ::boost::shared_ptr<CaPmtReply_1_2> CaPmtReply_1_2Ptr;
#endif

class CaPmtReply_1_2 :public   APDUBaseFactory::APDUBase { //Concrete type is CaPmtReply_1_2

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // length ---
public:
    ui8 length ;
    // programNumber ---
public:
    ui16 programNumber ;
    // bf1 ---
public:
    ui8 bf1 ;
    // bf2 ---
public:
    ui8 bf2 ;
    // CaEntries ---
public:
    ArrayList(CaEntry) CaEntries ;


public:
    CaPmtReply_1_2 (); // throws Exception
    virtual ~CaPmtReply_1_2 ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for header
    // public: org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();

    // Setter for header
    // public: void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val);

    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for programNumber
    // public: ui16 getProgramNumber();

    // Setter for programNumber
    // public: void setProgramNumber(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for bf2
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for CaEntries
    // public: ArrayList(CaEntry) getCaEntries();

    // Setter for CaEntries
    // public: void setCaEntries(ArrayList(CaEntry) val);


public:
    int getReserved1( );

public:
    void setReserved1(int val);

public:
    int getVersionNumber( );

public:
    void setVersionNumber(int val);

public:
    int getCurrentNext( );

public:
    void setCurrentNext(int val);

public:
    int getCaEnableFlag( );

public:
    void setCaEnableFlag(int val);

public:
    int getCaEnable( );

public:
    void setCaEnable(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtReply_1_2* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtReply_1_2* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CAPMTREPLY_1_2
// End of code