#ifndef ORG_HIMALAY_CCIF_CURRENTCHANNEL
#define ORG_HIMALAY_CCIF_CURRENTCHANNEL
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CurrentChannel__USE_SMART_PTR
#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CurrentChannel__PTR_TYPE boost::shared_ptr<CurrentChannel>
#define org_himalay_ccif_CurrentChannel__NEW(x) {/** Serious **/x = org_himalay_ccif_CurrentChannel__PTR_TYPE(new CurrentChannel()); }
#define org_himalay_ccif_CurrentChannel__INIT(x)
#define org_himalay_ccif_CurrentChannel__DELETE(x)
#else
#define org_himalay_ccif_CurrentChannel__PTR_TYPE CurrentChannel*
#define org_himalay_ccif_CurrentChannel__NEW(x) {x= new CurrentChannel();}
#define org_himalay_ccif_CurrentChannel__INIT(x)  x=NULL;
#define org_himalay_ccif_CurrentChannel__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
class CurrentChannel;
typedef ::boost::shared_ptr<CurrentChannel> CurrentChannelPtr;
#endif

class CurrentChannel :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // currentChannel ---
public:
    ui16 currentChannel ;
    // bf1 ---
public:
    ui8 bf1 ;


public:
    CurrentChannel (); // throws Exception
    virtual ~CurrentChannel ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for header
    // public: org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();

    // Setter for header
    // public: void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val);

    // Getter for currentChannel
    // public: ui16 getCurrentChannel();

    // Setter for currentChannel
    // public: void setCurrentChannel(ui16 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getChannelType( );

public:
    void setChannelType(int val);

public:
    int getAuthorizationFlag( );

public:
    void setAuthorizationFlag(int val);

public:
    int getPurchasableFlag( );

public:
    void setPurchasableFlag(int val);

public:
    int getPurchasedFlag( );

public:
    void setPurchasedFlag(int val);

public:
    int getPreviewFlag( );

public:
    void setPreviewFlag(int val);

public:
    int getParentalControlFlag( );

public:
    void setParentalControlFlag(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CurrentChannel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CurrentChannel* p);
void intrusive_ptr_release(org::himalay::ccif::CurrentChannel* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CURRENTCHANNEL
// End of code