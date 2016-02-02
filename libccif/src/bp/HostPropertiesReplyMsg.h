#ifndef ORG_HIMALAY_CCIF_HOSTPROPERTIESREPLYMSG
#define ORG_HIMALAY_CCIF_HOSTPROPERTIESREPLYMSG
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
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
#define org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_HostPropertiesReplyMsg__PTR_TYPE boost::shared_ptr<HostPropertiesReplyMsg>
#define org_himalay_ccif_HostPropertiesReplyMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_HostPropertiesReplyMsg__PTR_TYPE(new HostPropertiesReplyMsg()); }
#define org_himalay_ccif_HostPropertiesReplyMsg__INIT(x)
#define org_himalay_ccif_HostPropertiesReplyMsg__DELETE(x)
#else
#define org_himalay_ccif_HostPropertiesReplyMsg__PTR_TYPE HostPropertiesReplyMsg*
#define org_himalay_ccif_HostPropertiesReplyMsg__NEW(x) {x= new HostPropertiesReplyMsg();}
#define org_himalay_ccif_HostPropertiesReplyMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_HostPropertiesReplyMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
class HostPropertiesReplyMsg;
typedef ::boost::shared_ptr<HostPropertiesReplyMsg> HostPropertiesReplyMsgPtr;
#endif

class HostPropertiesReplyMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // propertyKeyByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE propertyKeyByte; ;
    // propertyValueByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE propertyValueByte; ;


public:
    HostPropertiesReplyMsg (); // throws Exception
    virtual ~HostPropertiesReplyMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for propertyKeyByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getPropertyKeyByte();

    // Setter for propertyKeyByte
    // public: void setPropertyKeyByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for propertyValueByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getPropertyValueByte();

    // Setter for propertyValueByte
    // public: void setPropertyValueByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_HostPropertiesReplyMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HostPropertiesReplyMsg* p);
void intrusive_ptr_release(org::himalay::ccif::HostPropertiesReplyMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_HOSTPROPERTIESREPLYMSG
// End of code