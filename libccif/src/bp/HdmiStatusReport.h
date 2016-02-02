#ifndef ORG_HIMALAY_CCIF_HDMISTATUSREPORT
#define ORG_HIMALAY_CCIF_HDMISTATUSREPORT
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "VideoFormat.h" //header for org.himalay.ccif.VideoFormat
#include "AudioFormat.h" //header for org.himalay.ccif.AudioFormat




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_HdmiStatusReport__PTR_TYPE boost::shared_ptr<HdmiStatusReport>
#define org_himalay_ccif_HdmiStatusReport__NEW(x) {/** Serious **/x = org_himalay_ccif_HdmiStatusReport__PTR_TYPE(new HdmiStatusReport()); }
#define org_himalay_ccif_HdmiStatusReport__INIT(x)
#define org_himalay_ccif_HdmiStatusReport__DELETE(x)
#else
#define org_himalay_ccif_HdmiStatusReport__PTR_TYPE HdmiStatusReport*
#define org_himalay_ccif_HdmiStatusReport__NEW(x) {x= new HdmiStatusReport();}
#define org_himalay_ccif_HdmiStatusReport__INIT(x)  x=NULL;
#define org_himalay_ccif_HdmiStatusReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
class HdmiStatusReport;
typedef ::boost::shared_ptr<HdmiStatusReport> HdmiStatusReportPtr;
#endif

class HdmiStatusReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // vdoFormat ---
public:
    org_himalay_ccif_VideoFormat__PTR_TYPE vdoFormat ;
    // adoFormat ---
public:
    org_himalay_ccif_AudioFormat__PTR_TYPE adoFormat ;


public:
    HdmiStatusReport (); // throws Exception
    virtual ~HdmiStatusReport ();
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

    // Getter for vdoFormat
    // public: org_himalay_ccif_VideoFormat__PTR_TYPE getVdoFormat();

    // Setter for vdoFormat
    // public: void setVdoFormat(org_himalay_ccif_VideoFormat__PTR_TYPE val);

    // Getter for adoFormat
    // public: org_himalay_ccif_AudioFormat__PTR_TYPE getAdoFormat();

    // Setter for adoFormat
    // public: void setAdoFormat(org_himalay_ccif_AudioFormat__PTR_TYPE val);


public:
    int getDeviceType( );

public:
    void setDeviceType(int val);

public:
    int getColorSpace( );

public:
    void setColorSpace(int val);

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

#ifdef org_himalay_ccif_HdmiStatusReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HdmiStatusReport* p);
void intrusive_ptr_release(org::himalay::ccif::HdmiStatusReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_HDMISTATUSREPORT
// End of code