#ifndef ORG_HIMALAY_CCIF_CAPMTSMODE1_2
#define ORG_HIMALAY_CCIF_CAPMTSMODE1_2
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "CaDescriptor.h" //header for org.himalay.ccif.CaDescriptor
#include "CaPmtModeMsg.h" //header for org.himalay.ccif.CaPmtModeMsg


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtSMode1_2__PTR_TYPE boost::shared_ptr<CaPmtSMode1_2>
#define org_himalay_ccif_CaPmtSMode1_2__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtSMode1_2__PTR_TYPE(new CaPmtSMode1_2()); }
#define org_himalay_ccif_CaPmtSMode1_2__INIT(x)
#define org_himalay_ccif_CaPmtSMode1_2__DELETE(x)
#else
#define org_himalay_ccif_CaPmtSMode1_2__PTR_TYPE CaPmtSMode1_2*
#define org_himalay_ccif_CaPmtSMode1_2__NEW(x) {x= new CaPmtSMode1_2();}
#define org_himalay_ccif_CaPmtSMode1_2__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtSMode1_2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE boost::shared_ptr<CaPmtSMode1_2::StatusfieldCheck>
//#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__NEW(x) {x =new CaPmtSMode1_2::StatusfieldCheck();}
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE(new CaPmtSMode1_2::StatusfieldCheck()); }
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__INIT(x)
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__DELETE(x)
#else
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE CaPmtSMode1_2::StatusfieldCheck*
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__NEW(x) {x= new CaPmtSMode1_2::StatusfieldCheck();}
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
class CaPmtSMode1_2;
typedef ::boost::shared_ptr<CaPmtSMode1_2> CaPmtSMode1_2Ptr;
#endif

class CaPmtSMode1_2 :public   APDUBaseFactory::APDUBase { //Concrete type is CaPmtSMode1_2
// member static classes
public:

#ifdef org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__USE_SMART_PTR
    class StatusfieldCheck;
    typedef ::boost::shared_ptr<StatusfieldCheck> StatusfieldCheckPtr;
#endif

    class StatusfieldCheck :public BinMessage {

//  public:
//    long    references;

    public:

        CaPmtSMode1_2* parent;

        // members variables
        // caPmtCmdId ---
    public:
        ui8 caPmtCmdId ;
        // programInfoLength ---
    public:
        ArrayList(CaDescriptor) programInfoLength ;


    public:
        StatusfieldCheck (); // throws Exception
        virtual ~StatusfieldCheck ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for caPmtCmdId
        // public: ui8 getCaPmtCmdId();

        // Setter for caPmtCmdId
        // public: void setCaPmtCmdId(ui8 val);

        // Getter for programInfoLength
        // public: ArrayList(CaDescriptor) getProgramInfoLength();

        // Setter for programInfoLength
        // public: void setProgramInfoLength(ArrayList(CaDescriptor) val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
#endif

// End of code

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
    // caPmtlisMngement ---
public:
    ui8 caPmtlisMngement ;
    // programNumber ---
public:
    ui16 programNumber ;
    // bf1 ---
public:
    ui8 bf1 ;
    // bf2 ---
public:
    ui16 bf2 ;
    // StatusfieldCheckInstance ---
public:
    org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE StatusfieldCheckInstance ;
    // CaEntries ---
public:
    ArrayList(CaPmtModeMsg) CaEntries ;


public:
    CaPmtSMode1_2 (); // throws Exception
    virtual ~CaPmtSMode1_2 ();
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

    // Getter for caPmtlisMngement
    // public: ui8 getCaPmtlisMngement();

    // Setter for caPmtlisMngement
    // public: void setCaPmtlisMngement(ui8 val);

    // Getter for programNumber
    // public: ui16 getProgramNumber();

    // Setter for programNumber
    // public: void setProgramNumber(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for bf2
    // public: ui16 getBf2();

    // Setter for bf2
    // public: void setBf2(ui16 val);

    // Getter for StatusfieldCheckInstance
    // public: org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE getStatusfieldCheckInstance();

    // Setter for StatusfieldCheckInstance
    // public: void setStatusfieldCheckInstance(org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE val);

    // Getter for CaEntries
    // public: ArrayList(CaPmtModeMsg) getCaEntries();

    // Setter for CaEntries
    // public: void setCaEntries(ArrayList(CaPmtModeMsg) val);


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
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getProgramInfoLength( );

public:
    void setProgramInfoLength(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CAPMTSMODE1_2
// End of code