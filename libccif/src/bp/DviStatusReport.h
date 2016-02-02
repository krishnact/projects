#ifndef ORG_HIMALAY_CCIF_DVISTATUSREPORT
#define ORG_HIMALAY_CCIF_DVISTATUSREPORT
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "VideoFormat.h" //header for org.himalay.ccif.VideoFormat




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_DviStatusReport__USE_SMART_PTR
#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_DviStatusReport__PTR_TYPE boost::shared_ptr<DviStatusReport>
#define org_himalay_ccif_DviStatusReport__NEW(x) {/** Serious **/x = org_himalay_ccif_DviStatusReport__PTR_TYPE(new DviStatusReport()); }
#define org_himalay_ccif_DviStatusReport__INIT(x)
#define org_himalay_ccif_DviStatusReport__DELETE(x)
#else
#define org_himalay_ccif_DviStatusReport__PTR_TYPE DviStatusReport*
#define org_himalay_ccif_DviStatusReport__NEW(x) {x= new DviStatusReport();}
#define org_himalay_ccif_DviStatusReport__INIT(x)  x=NULL;
#define org_himalay_ccif_DviStatusReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
class DviStatusReport;
typedef ::boost::shared_ptr<DviStatusReport> DviStatusReportPtr;
#endif

class DviStatusReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // videoFormat ---
public:
    org_himalay_ccif_VideoFormat__PTR_TYPE videoFormat ;


public:
    DviStatusReport (); // throws Exception
    virtual ~DviStatusReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for videoFormat
    // public: org_himalay_ccif_VideoFormat__PTR_TYPE getVideoFormat();

    // Setter for videoFormat
    // public: void setVideoFormat(org_himalay_ccif_VideoFormat__PTR_TYPE val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getConnectionStatus( );

public:
    void setConnectionStatus(int val);

public:
    int getHostHdcpStatus( );

public:
    void setHostHdcpStatus(int val);

public:
    int getDeviceHdcpStatus( );

public:
    void setDeviceHdcpStatus(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_DviStatusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DviStatusReport* p);
void intrusive_ptr_release(org::himalay::ccif::DviStatusReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_DVISTATUSREPORT
// End of code