#ifndef ORG_HIMALAY_CCIF_CPDATAREQTRANSMISSION2_1
#define ORG_HIMALAY_CCIF_CPDATAREQTRANSMISSION2_1
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "CpDataReqMsg.h" //header for org.himalay.ccif.CpDataReqMsg


#include "APDUBase_1Factory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CpDataReqTransMission2_1__USE_SMART_PTR
#ifdef org_himalay_ccif_CpDataReqTransMission2_1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CpDataReqTransMission2_1__PTR_TYPE boost::shared_ptr<CpDataReqTransMission2_1>
#define org_himalay_ccif_CpDataReqTransMission2_1__NEW(x) {/** Serious **/x = org_himalay_ccif_CpDataReqTransMission2_1__PTR_TYPE(new CpDataReqTransMission2_1()); }
#define org_himalay_ccif_CpDataReqTransMission2_1__INIT(x)
#define org_himalay_ccif_CpDataReqTransMission2_1__DELETE(x)
#else
#define org_himalay_ccif_CpDataReqTransMission2_1__PTR_TYPE CpDataReqTransMission2_1*
#define org_himalay_ccif_CpDataReqTransMission2_1__NEW(x) {x= new CpDataReqTransMission2_1();}
#define org_himalay_ccif_CpDataReqTransMission2_1__INIT(x)  x=NULL;
#define org_himalay_ccif_CpDataReqTransMission2_1__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CpDataReqTransMission2_1__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CpDataReqTransMission2_1__USE_SMART_PTR
class CpDataReqTransMission2_1;
typedef ::boost::shared_ptr<CpDataReqTransMission2_1> CpDataReqTransMission2_1Ptr;
#endif

class CpDataReqTransMission2_1 :public   APDUBase_1Factory::APDUBase_1 { //Concrete type is CpDataReqTransMission2_1

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
    // cpSystemId ---
public:
    ui8 cpSystemId ;
    // cadatanbr ---
public:
    ArrayList(CpDataReqMsg) cadatanbr ;
    // DataType_id ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE DataType_id; ;


public:
    CpDataReqTransMission2_1 (); // throws Exception
    virtual ~CpDataReqTransMission2_1 ();
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

    // Getter for cpSystemId
    // public: ui8 getCpSystemId();

    // Setter for cpSystemId
    // public: void setCpSystemId(ui8 val);

    // Getter for cadatanbr
    // public: ArrayList(CpDataReqMsg) getCadatanbr();

    // Setter for cadatanbr
    // public: void setCadatanbr(ArrayList(CpDataReqMsg) val);

    // Getter for DataType_id
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getDataType_id();

    // Setter for DataType_id
    // public: void setDataType_id(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_CpDataReqTransMission2_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CpDataReqTransMission2_1* p);
void intrusive_ptr_release(org::himalay::ccif::CpDataReqTransMission2_1* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CPDATAREQTRANSMISSION2_1
// End of code