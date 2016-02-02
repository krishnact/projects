#ifndef ORG_HIMALAY_CCIF_TURNONCHANNEL
#define ORG_HIMALAY_CCIF_TURNONCHANNEL
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
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
#define org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_TurnOnChannel__PTR_TYPE boost::shared_ptr<TurnOnChannel>
#define org_himalay_ccif_TurnOnChannel__NEW(x) {/** Serious **/x = org_himalay_ccif_TurnOnChannel__PTR_TYPE(new TurnOnChannel()); }
#define org_himalay_ccif_TurnOnChannel__INIT(x)
#define org_himalay_ccif_TurnOnChannel__DELETE(x)
#else
#define org_himalay_ccif_TurnOnChannel__PTR_TYPE TurnOnChannel*
#define org_himalay_ccif_TurnOnChannel__NEW(x) {x= new TurnOnChannel();}
#define org_himalay_ccif_TurnOnChannel__INIT(x)  x=NULL;
#define org_himalay_ccif_TurnOnChannel__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
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




#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
class TurnOnChannel;
typedef ::boost::shared_ptr<TurnOnChannel> TurnOnChannelPtr;
#endif

class TurnOnChannel :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui16 bf1 ;


public:
    TurnOnChannel (); // throws Exception
    virtual ~TurnOnChannel ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getTurnOnChannelDefined( );

public:
    void setTurnOnChannelDefined(int val);

public:
    int getTurnOnVirtualChannel( );

public:
    void setTurnOnVirtualChannel(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_TurnOnChannel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::TurnOnChannel* p);
void intrusive_ptr_release(org::himalay::ccif::TurnOnChannel* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_TURNONCHANNEL
// End of code