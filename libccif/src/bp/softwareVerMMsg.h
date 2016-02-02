#ifndef ORG_HIMALAY_CCIF_SOFTWAREVERMMSG
#define ORG_HIMALAY_CCIF_SOFTWAREVERMMSG
//@Generated(date = "Mon Feb 01 22:30:16 EST 2016")
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
#define org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_softwareVerMMsg__PTR_TYPE boost::shared_ptr<softwareVerMMsg>
#define org_himalay_ccif_softwareVerMMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_softwareVerMMsg__PTR_TYPE(new softwareVerMMsg()); }
#define org_himalay_ccif_softwareVerMMsg__INIT(x)
#define org_himalay_ccif_softwareVerMMsg__DELETE(x)
#else
#define org_himalay_ccif_softwareVerMMsg__PTR_TYPE softwareVerMMsg*
#define org_himalay_ccif_softwareVerMMsg__NEW(x) {x= new softwareVerMMsg();}
#define org_himalay_ccif_softwareVerMMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_softwareVerMMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
class softwareVerMMsg;
typedef ::boost::shared_ptr<softwareVerMMsg> softwareVerMMsgPtr;
#endif

class softwareVerMMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // ApplicationStatusflag ---
public:
    ui8 ApplicationStatusflag ;
    // applicationNameByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE applicationNameByte; ;
    // applicationSignbyte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE applicationSignbyte; ;
    // applicationVersionbyte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE applicationVersionbyte; ;


public:
    softwareVerMMsg (); // throws Exception
    virtual ~softwareVerMMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for ApplicationStatusflag
    // public: ui8 getApplicationStatusflag();

    // Setter for ApplicationStatusflag
    // public: void setApplicationStatusflag(ui8 val);

    // Getter for applicationNameByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getApplicationNameByte();

    // Setter for applicationNameByte
    // public: void setApplicationNameByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for applicationSignbyte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getApplicationSignbyte();

    // Setter for applicationSignbyte
    // public: void setApplicationSignbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for applicationVersionbyte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getApplicationVersionbyte();

    // Setter for applicationVersionbyte
    // public: void setApplicationVersionbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_softwareVerMMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::softwareVerMMsg* p);
void intrusive_ptr_release(org::himalay::ccif::softwareVerMMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SOFTWAREVERMMSG
// End of code