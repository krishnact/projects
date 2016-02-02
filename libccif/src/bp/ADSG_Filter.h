#ifndef ORG_HIMALAY_CCIF_ADSG_FILTER
#define ORG_HIMALAY_CCIF_ADSG_FILTER
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
#define org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ADSG_Filter__PTR_TYPE boost::shared_ptr<ADSG_Filter>
#define org_himalay_ccif_ADSG_Filter__NEW(x) {/** Serious **/x = org_himalay_ccif_ADSG_Filter__PTR_TYPE(new ADSG_Filter()); }
#define org_himalay_ccif_ADSG_Filter__INIT(x)
#define org_himalay_ccif_ADSG_Filter__DELETE(x)
#else
#define org_himalay_ccif_ADSG_Filter__PTR_TYPE ADSG_Filter*
#define org_himalay_ccif_ADSG_Filter__NEW(x) {x= new ADSG_Filter();}
#define org_himalay_ccif_ADSG_Filter__INIT(x)  x=NULL;
#define org_himalay_ccif_ADSG_Filter__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
class ADSG_Filter;
typedef ::boost::shared_ptr<ADSG_Filter> ADSG_FilterPtr;
#endif

class ADSG_Filter :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // tunnelID ---
public:
    ui8 tunnelID ;
    // tunnelPriority ---
public:
    ui8 tunnelPriority ;
    // source_IP_address ---
public:
    i32 source_IP_address ;
    // source_IP_mask ---
public:
    i32 source_IP_mask ;
    // destination_IP_address ---
public:
    i32 destination_IP_address ;
    // destination_port_start ---
public:
    ui16 destination_port_start ;
    // destination_port_end ---
public:
    ui16 destination_port_end ;


public:
    ADSG_Filter (); // throws Exception
    virtual ~ADSG_Filter ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for tunnelID
    // public: ui8 getTunnelID();

    // Setter for tunnelID
    // public: void setTunnelID(ui8 val);

    // Getter for tunnelPriority
    // public: ui8 getTunnelPriority();

    // Setter for tunnelPriority
    // public: void setTunnelPriority(ui8 val);

    // Getter for source_IP_address
    // public: ui32 getSource_IP_address();

    // Setter for source_IP_address
    // public: void setSource_IP_address(ui32 val);

    // Getter for source_IP_mask
    // public: ui32 getSource_IP_mask();

    // Setter for source_IP_mask
    // public: void setSource_IP_mask(ui32 val);

    // Getter for destination_IP_address
    // public: ui32 getDestination_IP_address();

    // Setter for destination_IP_address
    // public: void setDestination_IP_address(ui32 val);

    // Getter for destination_port_start
    // public: ui16 getDestination_port_start();

    // Setter for destination_port_start
    // public: void setDestination_port_start(ui16 val);

    // Getter for destination_port_end
    // public: ui16 getDestination_port_end();

    // Setter for destination_port_end
    // public: void setDestination_port_end(ui16 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ADSG_Filter* p);
void intrusive_ptr_release(org::himalay::ccif::ADSG_Filter* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_ADSG_FILTER
// End of code