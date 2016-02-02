#ifndef ORG_HIMALAY_CCIF_IPV6ADDRESS
#define ORG_HIMALAY_CCIF_IPV6ADDRESS
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
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
#define org_himalay_ccif_IPV6Address__USE_SMART_PTR
#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_IPV6Address__PTR_TYPE boost::shared_ptr<IPV6Address>
#define org_himalay_ccif_IPV6Address__NEW(x) {/** Serious **/x = org_himalay_ccif_IPV6Address__PTR_TYPE(new IPV6Address()); }
#define org_himalay_ccif_IPV6Address__INIT(x)
#define org_himalay_ccif_IPV6Address__DELETE(x)
#else
#define org_himalay_ccif_IPV6Address__PTR_TYPE IPV6Address*
#define org_himalay_ccif_IPV6Address__NEW(x) {x= new IPV6Address();}
#define org_himalay_ccif_IPV6Address__INIT(x)  x=NULL;
#define org_himalay_ccif_IPV6Address__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
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




#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
class IPV6Address;
typedef ::boost::shared_ptr<IPV6Address> IPV6AddressPtr;
#endif

class IPV6Address :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // data ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;


public:
    IPV6Address (); // throws Exception
    virtual ~IPV6Address ();
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

#ifdef org_himalay_ccif_IPV6Address__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::IPV6Address* p);
void intrusive_ptr_release(org::himalay::ccif::IPV6Address* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_IPV6ADDRESS
// End of code