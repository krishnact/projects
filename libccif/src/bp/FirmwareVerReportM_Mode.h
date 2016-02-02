#ifndef ORG_HIMALAY_CCIF_FIRMWAREVERREPORTM_MODE
#define ORG_HIMALAY_CCIF_FIRMWAREVERREPORTM_MODE
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "FirmWareDate.h" //header for org.himalay.ccif.FirmWareDate




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FirmwareVerReportM_Mode__PTR_TYPE boost::shared_ptr<FirmwareVerReportM_Mode>
#define org_himalay_ccif_FirmwareVerReportM_Mode__NEW(x) {/** Serious **/x = org_himalay_ccif_FirmwareVerReportM_Mode__PTR_TYPE(new FirmwareVerReportM_Mode()); }
#define org_himalay_ccif_FirmwareVerReportM_Mode__INIT(x)
#define org_himalay_ccif_FirmwareVerReportM_Mode__DELETE(x)
#else
#define org_himalay_ccif_FirmwareVerReportM_Mode__PTR_TYPE FirmwareVerReportM_Mode*
#define org_himalay_ccif_FirmwareVerReportM_Mode__NEW(x) {x= new FirmwareVerReportM_Mode();}
#define org_himalay_ccif_FirmwareVerReportM_Mode__INIT(x)  x=NULL;
#define org_himalay_ccif_FirmwareVerReportM_Mode__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
class FirmwareVerReportM_Mode;
typedef ::boost::shared_ptr<FirmwareVerReportM_Mode> FirmwareVerReportM_ModePtr;
#endif

class FirmwareVerReportM_Mode :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // firmWareVersionCharacter ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE firmWareVersionCharacter; ;
    // fwareDate ---
public:
    org_himalay_ccif_FirmWareDate__PTR_TYPE fwareDate ;


public:
    FirmwareVerReportM_Mode (); // throws Exception
    virtual ~FirmwareVerReportM_Mode ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for firmWareVersionCharacter
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getFirmWareVersionCharacter();

    // Setter for firmWareVersionCharacter
    // public: void setFirmWareVersionCharacter(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for fwareDate
    // public: org_himalay_ccif_FirmWareDate__PTR_TYPE getFwareDate();

    // Setter for fwareDate
    // public: void setFwareDate(org_himalay_ccif_FirmWareDate__PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmwareVerReportM_Mode* p);
void intrusive_ptr_release(org::himalay::ccif::FirmwareVerReportM_Mode* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FIRMWAREVERREPORTM_MODE
// End of code