#ifndef ORG_HIMALAY_CCIF_MACADDRESS
#define ORG_HIMALAY_CCIF_MACADDRESS
//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
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
#define org_himalay_ccif_MacAddress__USE_SMART_PTR
#ifdef org_himalay_ccif_MacAddress__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_MacAddress__PTR_TYPE boost::shared_ptr<MacAddress>
#define org_himalay_ccif_MacAddress__NEW(x) {/** Serious **/x = org_himalay_ccif_MacAddress__PTR_TYPE(new MacAddress()); }
#define org_himalay_ccif_MacAddress__INIT(x)
#define org_himalay_ccif_MacAddress__DELETE(x)
#else
#define org_himalay_ccif_MacAddress__PTR_TYPE MacAddress*
#define org_himalay_ccif_MacAddress__NEW(x) {x= new MacAddress();}
#define org_himalay_ccif_MacAddress__INIT(x)  x=NULL;
#define org_himalay_ccif_MacAddress__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_MacAddress__USE_SMART_PTR
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




#ifdef org_himalay_ccif_MacAddress__USE_SMART_PTR
class MacAddress;
typedef ::boost::shared_ptr<MacAddress> MacAddressPtr;
#endif

class MacAddress :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // data ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;


public:
    MacAddress (); // throws Exception
    virtual ~MacAddress ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for data
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

    // Setter for data
    // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_MacAddress__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::MacAddress* p);
void intrusive_ptr_release(org::himalay::ccif::MacAddress* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_MACADDRESS
// End of code