#ifndef ORG_HIMALAY_CCIF_CAPMTMMODE2_1
#define ORG_HIMALAY_CCIF_CAPMTMMODE2_1
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
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


#include "APDUBase_1Factory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtMMode2_1__PTR_TYPE boost::shared_ptr<CaPmtMMode2_1>
#define org_himalay_ccif_CaPmtMMode2_1__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtMMode2_1__PTR_TYPE(new CaPmtMMode2_1()); }
#define org_himalay_ccif_CaPmtMMode2_1__INIT(x)
#define org_himalay_ccif_CaPmtMMode2_1__DELETE(x)
#else
#define org_himalay_ccif_CaPmtMMode2_1__PTR_TYPE CaPmtMMode2_1*
#define org_himalay_ccif_CaPmtMMode2_1__NEW(x) {x= new CaPmtMMode2_1();}
#define org_himalay_ccif_CaPmtMMode2_1__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtMMode2_1__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE boost::shared_ptr<CaPmtMMode2_1::StatusfieldCheck>
//#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__NEW(x) {x =new CaPmtMMode2_1::StatusfieldCheck();}
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE(new CaPmtMMode2_1::StatusfieldCheck()); }
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__INIT(x)
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__DELETE(x)
#else
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE CaPmtMMode2_1::StatusfieldCheck*
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__NEW(x) {x= new CaPmtMMode2_1::StatusfieldCheck();}
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
class CaPmtMMode2_1;
typedef ::boost::shared_ptr<CaPmtMMode2_1> CaPmtMMode2_1Ptr;
#endif

class CaPmtMMode2_1 :public   APDUBase_1Factory::APDUBase_1 { //Concrete type is CaPmtMMode2_1
// member static classes
public:

#ifdef org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__USE_SMART_PTR
    class StatusfieldCheck;
    typedef ::boost::shared_ptr<StatusfieldCheck> StatusfieldCheckPtr;
#endif

    class StatusfieldCheck :public BinMessage {

//  public:
//    long    references;

    public:

        CaPmtMMode2_1* parent;

        // members variables
        // prgmInfoLength ---
    public:
        ArrayList(CaDescriptor) prgmInfoLength ;


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


        // Getter for prgmInfoLength
        // public: ArrayList(CaDescriptor) getPrgmInfoLength();

        // Setter for prgmInfoLength
        // public: void setPrgmInfoLength(ArrayList(CaDescriptor) val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
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
    // programIndex ---
public:
    ui8 programIndex ;
    // txnId ---
public:
    ui8 txnId ;
    // ltsid ---
public:
    ui8 ltsid ;
    // programNumber ---
public:
    ui16 programNumber ;
    // sourceId ---
public:
    ui16 sourceId ;
    // caPmtCmdId ---
public:
    ui8 caPmtCmdId ;
    // bf2 ---
public:
    ui16 bf2 ;
    // StatusfieldCheckInstance ---
public:
    org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE StatusfieldCheckInstance ;
    // CaEntries ---
public:
    ArrayList(CaPmtModeMsg) CaEntries ;


public:
    CaPmtMMode2_1 (); // throws Exception
    virtual ~CaPmtMMode2_1 ();
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

    // Getter for programIndex
    // public: ui8 getProgramIndex();

    // Setter for programIndex
    // public: void setProgramIndex(ui8 val);

    // Getter for txnId
    // public: ui8 getTxnId();

    // Setter for txnId
    // public: void setTxnId(ui8 val);

    // Getter for ltsid
    // public: ui8 getLtsid();

    // Setter for ltsid
    // public: void setLtsid(ui8 val);

    // Getter for programNumber
    // public: ui16 getProgramNumber();

    // Setter for programNumber
    // public: void setProgramNumber(ui16 val);

    // Getter for sourceId
    // public: ui16 getSourceId();

    // Setter for sourceId
    // public: void setSourceId(ui16 val);

    // Getter for caPmtCmdId
    // public: ui8 getCaPmtCmdId();

    // Setter for caPmtCmdId
    // public: void setCaPmtCmdId(ui8 val);

    // Getter for bf2
    // public: ui16 getBf2();

    // Setter for bf2
    // public: void setBf2(ui16 val);

    // Getter for StatusfieldCheckInstance
    // public: org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE getStatusfieldCheckInstance();

    // Setter for StatusfieldCheckInstance
    // public: void setStatusfieldCheckInstance(org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE val);

    // Getter for CaEntries
    // public: ArrayList(CaPmtModeMsg) getCaEntries();

    // Setter for CaEntries
    // public: void setCaEntries(ArrayList(CaPmtModeMsg) val);


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

#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CAPMTMMODE2_1
// End of code