#ifndef ORG_HIMALAY_CCIF_SOFTWAREVERREPORTM_MODE
#define ORG_HIMALAY_CCIF_SOFTWAREVERREPORTM_MODE
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "softwareVerMMsg.h" //header for org.himalay.ccif.softwareVerMMsg




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_SoftwareVerReportM_Mode__PTR_TYPE boost::shared_ptr<SoftwareVerReportM_Mode>
#define org_himalay_ccif_SoftwareVerReportM_Mode__NEW(x) {/** Serious **/x = org_himalay_ccif_SoftwareVerReportM_Mode__PTR_TYPE(new SoftwareVerReportM_Mode()); }
#define org_himalay_ccif_SoftwareVerReportM_Mode__INIT(x)
#define org_himalay_ccif_SoftwareVerReportM_Mode__DELETE(x)
#else
#define org_himalay_ccif_SoftwareVerReportM_Mode__PTR_TYPE SoftwareVerReportM_Mode*
#define org_himalay_ccif_SoftwareVerReportM_Mode__NEW(x) {x= new SoftwareVerReportM_Mode();}
#define org_himalay_ccif_SoftwareVerReportM_Mode__INIT(x)  x=NULL;
#define org_himalay_ccif_SoftwareVerReportM_Mode__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
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




#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
class SoftwareVerReportM_Mode;
typedef ::boost::shared_ptr<SoftwareVerReportM_Mode> SoftwareVerReportM_ModePtr;
#endif

class SoftwareVerReportM_Mode :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // applicationsInReport ---
public:
    ArrayList(softwareVerMMsg) applicationsInReport ;


public:
    SoftwareVerReportM_Mode (); // throws Exception
    virtual ~SoftwareVerReportM_Mode ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for applicationsInReport
    // public: ArrayList(softwareVerMMsg) getApplicationsInReport();

    // Setter for applicationsInReport
    // public: void setApplicationsInReport(ArrayList(softwareVerMMsg) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SoftwareVerReportM_Mode* p);
void intrusive_ptr_release(org::himalay::ccif::SoftwareVerReportM_Mode* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SOFTWAREVERREPORTM_MODE
// End of code