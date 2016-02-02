#ifndef ORG_HIMALAY_CCIF_PORTREPORTMMODE1394
#define ORG_HIMALAY_CCIF_PORTREPORTMMODE1394
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
#define org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_PortReportMMode1394__PTR_TYPE boost::shared_ptr<PortReportMMode1394>
#define org_himalay_ccif_PortReportMMode1394__NEW(x) {/** Serious **/x = org_himalay_ccif_PortReportMMode1394__PTR_TYPE(new PortReportMMode1394()); }
#define org_himalay_ccif_PortReportMMode1394__INIT(x)
#define org_himalay_ccif_PortReportMMode1394__DELETE(x)
#else
#define org_himalay_ccif_PortReportMMode1394__PTR_TYPE PortReportMMode1394*
#define org_himalay_ccif_PortReportMMode1394__NEW(x) {x= new PortReportMMode1394();}
#define org_himalay_ccif_PortReportMMode1394__INIT(x)  x=NULL;
#define org_himalay_ccif_PortReportMMode1394__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
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




#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
class PortReportMMode1394;
typedef ::boost::shared_ptr<PortReportMMode1394> PortReportMMode1394Ptr;
#endif

class PortReportMMode1394 :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // totalNumberOfNodes ---
public:
    ui16 totalNumberOfNodes ;
    // bf1 ---
public:
    ui8 bf1 ;
    // numberOfConnectedDevices ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE numberOfConnectedDevices; ;


public:
    PortReportMMode1394 (); // throws Exception
    virtual ~PortReportMMode1394 ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for totalNumberOfNodes
    // public: ui16 getTotalNumberOfNodes();

    // Setter for totalNumberOfNodes
    // public: void setTotalNumberOfNodes(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for numberOfConnectedDevices
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getNumberOfConnectedDevices();

    // Setter for numberOfConnectedDevices
    // public: void setNumberOfConnectedDevices(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getLoopStatus( );

public:
    void setLoopStatus(int val);

public:
    int getRootStatus( );

public:
    void setRootStatus(int val);

public:
    int getCycleMasterStatus( );

public:
    void setCycleMasterStatus(int val);

public:
    int getHost_ad_sourceSelectionStatus( );

public:
    void setHost_ad_sourceSelectionStatus(int val);

public:
    int getPort_1ConnectionStatus( );

public:
    void setPort_1ConnectionStatus(int val);

public:
    int getPort_2ConnectionStatus( );

public:
    void setPort_2ConnectionStatus(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_PortReportMMode1394__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PortReportMMode1394* p);
void intrusive_ptr_release(org::himalay::ccif::PortReportMMode1394* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PORTREPORTMMODE1394
// End of code