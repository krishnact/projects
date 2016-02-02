#ifndef ORG_HIMALAY_CCIF_SOFTWAREVERSMSG
#define ORG_HIMALAY_CCIF_SOFTWAREVERSMSG
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
#define org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_softwareVerSMsg__PTR_TYPE boost::shared_ptr<softwareVerSMsg>
#define org_himalay_ccif_softwareVerSMsg__NEW(x) {/** Serious **/x = org_himalay_ccif_softwareVerSMsg__PTR_TYPE(new softwareVerSMsg()); }
#define org_himalay_ccif_softwareVerSMsg__INIT(x)
#define org_himalay_ccif_softwareVerSMsg__DELETE(x)
#else
#define org_himalay_ccif_softwareVerSMsg__PTR_TYPE softwareVerSMsg*
#define org_himalay_ccif_softwareVerSMsg__NEW(x) {x= new softwareVerSMsg();}
#define org_himalay_ccif_softwareVerSMsg__INIT(x)  x=NULL;
#define org_himalay_ccif_softwareVerSMsg__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
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




#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
class softwareVerSMsg;
typedef ::boost::shared_ptr<softwareVerSMsg> softwareVerSMsgPtr;
#endif

class softwareVerSMsg :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // applicationVersionNumber ---
public:
    ui16 applicationVersionNumber ;
    // ApplicationStatusfield ---
public:
    ui8 ApplicationStatusfield ;
    // applicationNameByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE applicationNameByte; ;
    // applicationSignbyte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE applicationSignbyte; ;


public:
    softwareVerSMsg (); // throws Exception
    virtual ~softwareVerSMsg ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for applicationVersionNumber
    // public: ui16 getApplicationVersionNumber();

    // Setter for applicationVersionNumber
    // public: void setApplicationVersionNumber(ui16 val);

    // Getter for ApplicationStatusfield
    // public: ui8 getApplicationStatusfield();

    // Setter for ApplicationStatusfield
    // public: void setApplicationStatusfield(ui8 val);

    // Getter for applicationNameByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getApplicationNameByte();

    // Setter for applicationNameByte
    // public: void setApplicationNameByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for applicationSignbyte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getApplicationSignbyte();

    // Setter for applicationSignbyte
    // public: void setApplicationSignbyte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_softwareVerSMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::softwareVerSMsg* p);
void intrusive_ptr_release(org::himalay::ccif::softwareVerSMsg* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SOFTWAREVERSMSG
// End of code