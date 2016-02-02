#ifndef ORG_HIMALAY_CCIF_PORTREPORT1394_MMSG
#define ORG_HIMALAY_CCIF_PORTREPORT1394_MMSG
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "Eui64.h" //header for org.himalay.ccif.Eui64




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_PortReport1394_MMsg__PTR_TYPE boost::shared_ptr<PortReport1394_MMsg>
#define org_himalay_ccif_PortReport1394_MMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_PortReport1394_MMsg__PTR_TYPE(new PortReport1394_MMsg()); }
#define org_himalay_ccif_PortReport1394_MMsg__INIT(x)
#define org_himalay_ccif_PortReport1394_MMsg__DELETE(x)
#else
#define org_himalay_ccif_PortReport1394_MMsg__PTR_TYPE PortReport1394_MMsg*
#define org_himalay_ccif_PortReport1394_MMsg__NEW(x) {x= new PortReport1394_MMsg();}
#define org_himalay_ccif_PortReport1394_MMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_PortReport1394_MMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
class PortReport1394_MMsg;
typedef ::boost::shared_ptr<PortReport1394_MMsg> PortReport1394_MMsgPtr;
#endif

class PortReport1394_MMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // eui64 ---
public:
    org_himalay_ccif_Eui64__PTR_TYPE eui64 ;


public:
    PortReport1394_MMsg (); // throws Exception
    virtual ~PortReport1394_MMsg ();
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

    // Getter for eui64
    // public: org_himalay_ccif_Eui64__PTR_TYPE getEui64();

    // Setter for eui64
    // public: void setEui64(org_himalay_ccif_Eui64__PTR_TYPE val);


public:
    int getDeviceSubUnitType( );

public:
    void setDeviceSubUnitType(int val);

public:
    int getDeviceSourceSelectionStatus( );

public:
    void setDeviceSourceSelectionStatus(int val);

public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_PortReport1394_MMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReport1394_MMsg* p);
void intrusive_ptr_release(org::himalay::ccif::PortReport1394_MMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PORTREPORT1394_MMSG
// End of code