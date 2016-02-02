#ifndef ORG_HIMALAY_CCIF_CPDATAREQMSG
#define ORG_HIMALAY_CCIF_CPDATAREQMSG
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
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
#define org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CpDataReqMsg__PTR_TYPE boost::shared_ptr<CpDataReqMsg>
#define org_himalay_ccif_CpDataReqMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_CpDataReqMsg__PTR_TYPE(new CpDataReqMsg()); }
#define org_himalay_ccif_CpDataReqMsg__INIT(x)
#define org_himalay_ccif_CpDataReqMsg__DELETE(x)
#else
#define org_himalay_ccif_CpDataReqMsg__PTR_TYPE CpDataReqMsg*
#define org_himalay_ccif_CpDataReqMsg__NEW(x) {x= new CpDataReqMsg();}
#define org_himalay_ccif_CpDataReqMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_CpDataReqMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
class CpDataReqMsg;
typedef ::boost::shared_ptr<CpDataReqMsg> CpDataReqMsgPtr;
#endif

class CpDataReqMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // dataTypeId ---
public:
    ui8 dataTypeId ;
    // dataType ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE dataType; ;
    // DataType_id ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE DataType_id; ;


public:
    CpDataReqMsg (); // throws Exception
    virtual ~CpDataReqMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for dataTypeId
    // public: ui8 getDataTypeId();

    // Setter for dataTypeId
    // public: void setDataTypeId(ui8 val);

    // Getter for dataType
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getDataType();

    // Setter for dataType
    // public: void setDataType(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for DataType_id
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getDataType_id();

    // Setter for DataType_id
    // public: void setDataType_id(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CpDataReqMsg* p);
void intrusive_ptr_release(org::himalay::ccif::CpDataReqMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CPDATAREQMSG
// End of code