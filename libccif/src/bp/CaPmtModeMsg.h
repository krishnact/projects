#ifndef ORG_HIMALAY_CCIF_CAPMTMODEMSG
#define ORG_HIMALAY_CCIF_CAPMTMODEMSG
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "CaDescriptor.h" //header for org.himalay.ccif.CaDescriptor




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtModeMsg__PTR_TYPE boost::shared_ptr<CaPmtModeMsg>
#define org_himalay_ccif_CaPmtModeMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtModeMsg__PTR_TYPE(new CaPmtModeMsg()); }
#define org_himalay_ccif_CaPmtModeMsg__INIT(x)
#define org_himalay_ccif_CaPmtModeMsg__DELETE(x)
#else
#define org_himalay_ccif_CaPmtModeMsg__PTR_TYPE CaPmtModeMsg*
#define org_himalay_ccif_CaPmtModeMsg__NEW(x) {x= new CaPmtModeMsg();}
#define org_himalay_ccif_CaPmtModeMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtModeMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE boost::shared_ptr<CaPmtModeMsg::esfieldCheck>
//#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__NEW(x) {x =new CaPmtModeMsg::esfieldCheck();}
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE(new CaPmtModeMsg::esfieldCheck()); }
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__INIT(x)
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__DELETE(x)
#else
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE CaPmtModeMsg::esfieldCheck*
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__NEW(x) {x= new CaPmtModeMsg::esfieldCheck();}
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_CaPmtModeMsg_esfieldCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
class CaPmtModeMsg;
typedef ::boost::shared_ptr<CaPmtModeMsg> CaPmtModeMsgPtr;
#endif

class CaPmtModeMsg :public BinMessage {
// member static classes
public:

#ifdef org_himalay_ccif_CaPmtModeMsg_esfieldCheck__USE_SMART_PTR
    class esfieldCheck;
    typedef ::boost::shared_ptr<esfieldCheck> esfieldCheckPtr;
#endif

    class esfieldCheck :public BinMessage {

//  public:
//    long    references;

    public:

        CaPmtModeMsg* parent;

        // members variables
        // caPmtCmdId ---
    public:
        ui8 caPmtCmdId ;
        // programInfoLength ---
    public:
        ArrayList(CaDescriptor) programInfoLength ;


    public:
        esfieldCheck (); // throws Exception
        virtual ~esfieldCheck ();
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

#ifdef org_himalay_ccif_CaPmtModeMsg_esfieldCheck__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // streamType ---
public:
    ui8 streamType ;
    // bf2 ---
public:
    ui16 bf2 ;
    // bf3 ---
public:
    ui16 bf3 ;
    // esfieldCheckInstance ---
public:
    org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE esfieldCheckInstance ;


public:
    CaPmtModeMsg (); // throws Exception
    virtual ~CaPmtModeMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for streamType
    // public: ui8 getStreamType();

    // Setter for streamType
    // public: void setStreamType(ui8 val);

    // Getter for bf2
    // public: ui16 getBf2();

    // Setter for bf2
    // public: void setBf2(ui16 val);

    // Getter for bf3
    // public: ui16 getBf3();

    // Setter for bf3
    // public: void setBf3(ui16 val);

    // Getter for esfieldCheckInstance
    // public: org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE getEsfieldCheckInstance();

    // Setter for esfieldCheckInstance
    // public: void setEsfieldCheckInstance(org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getEsInfoLength( );

public:
    void setEsInfoLength(int val);

public:
    int getReserved1( );

public:
    void setReserved1(int val);

public:
    int getElementryPid( );

public:
    void setElementryPid(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg* p);
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CAPMTMODEMSG
// End of code