#ifndef ORG_HIMALAY_CCIF_PROGRAMCNFMSG
#define ORG_HIMALAY_CCIF_PROGRAMCNFMSG
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
#define org_himalay_ccif_programCnfMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_programCnfMsg__PTR_TYPE boost::shared_ptr<programCnfMsg>
#define org_himalay_ccif_programCnfMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_programCnfMsg__PTR_TYPE(new programCnfMsg()); }
#define org_himalay_ccif_programCnfMsg__INIT(x)
#define org_himalay_ccif_programCnfMsg__DELETE(x)
#else
#define org_himalay_ccif_programCnfMsg__PTR_TYPE programCnfMsg*
#define org_himalay_ccif_programCnfMsg__NEW(x) {x= new programCnfMsg();}
#define org_himalay_ccif_programCnfMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_programCnfMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
class programCnfMsg;
typedef ::boost::shared_ptr<programCnfMsg> programCnfMsgPtr;
#endif

class programCnfMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // purchaseType ---
public:
    ui8 purchaseType ;
    // purchasePrice ---
public:
    ui16 purchasePrice ;
    // purchaseValidation ---
public:
    ui8 purchaseValidation ;
    // expirationdatee ---
public:
    i32 expirationdatee ;
    // ProgramStartTim ---
public:
    i32 ProgramStartTim ;
    // initialFreepreviewDuration ---
public:
    ui16 initialFreepreviewDuration ;
    // anyTimeFreepreviewDuration ---
public:
    ui16 anyTimeFreepreviewDuration ;
    // data ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;
    // data1 ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data1; ;
    // descriptors ---
public:
    ArrayList(CaDescriptor) descriptors ;


public:
    programCnfMsg (); // throws Exception
    virtual ~programCnfMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for purchaseType
    // public: ui8 getPurchaseType();

    // Setter for purchaseType
    // public: void setPurchaseType(ui8 val);

    // Getter for purchasePrice
    // public: ui16 getPurchasePrice();

    // Setter for purchasePrice
    // public: void setPurchasePrice(ui16 val);

    // Getter for purchaseValidation
    // public: ui8 getPurchaseValidation();

    // Setter for purchaseValidation
    // public: void setPurchaseValidation(ui8 val);

    // Getter for expirationdatee
    // public: ui32 getExpirationdatee();

    // Setter for expirationdatee
    // public: void setExpirationdatee(ui32 val);

    // Getter for ProgramStartTim
    // public: ui32 getProgramStartTim();

    // Setter for ProgramStartTim
    // public: void setProgramStartTim(ui32 val);

    // Getter for initialFreepreviewDuration
    // public: ui16 getInitialFreepreviewDuration();

    // Setter for initialFreepreviewDuration
    // public: void setInitialFreepreviewDuration(ui16 val);

    // Getter for anyTimeFreepreviewDuration
    // public: ui16 getAnyTimeFreepreviewDuration();

    // Setter for anyTimeFreepreviewDuration
    // public: void setAnyTimeFreepreviewDuration(ui16 val);

    // Getter for data
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

    // Setter for data
    // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for data1
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData1();

    // Setter for data1
    // public: void setData1(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for descriptors
    // public: ArrayList(CaDescriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(CaDescriptor) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::programCnfMsg* p);
void intrusive_ptr_release(org::himalay::ccif::programCnfMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PROGRAMCNFMSG
// End of code