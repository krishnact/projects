#ifndef ORG_HIMALAY_CCIF_RFOUTPUT_CHANNEL
#define ORG_HIMALAY_CCIF_RFOUTPUT_CHANNEL
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
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
#define org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_RfOutput_channel__PTR_TYPE boost::shared_ptr<RfOutput_channel>
#define org_himalay_ccif_RfOutput_channel__NEW(x) {/** Serious **/x = org_himalay_ccif_RfOutput_channel__PTR_TYPE(new RfOutput_channel()); }
#define org_himalay_ccif_RfOutput_channel__INIT(x)
#define org_himalay_ccif_RfOutput_channel__DELETE(x)
#else
#define org_himalay_ccif_RfOutput_channel__PTR_TYPE RfOutput_channel*
#define org_himalay_ccif_RfOutput_channel__NEW(x) {x= new RfOutput_channel();}
#define org_himalay_ccif_RfOutput_channel__INIT(x)  x=NULL;
#define org_himalay_ccif_RfOutput_channel__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
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




#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
class RfOutput_channel;
typedef ::boost::shared_ptr<RfOutput_channel> RfOutput_channelPtr;
#endif

class RfOutput_channel :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // outputChannel ---
public:
    ui8 outputChannel ;
    // outputChannelUi ---
public:
    ui8 outputChannelUi ;


public:
    RfOutput_channel (); // throws Exception
    virtual ~RfOutput_channel ();
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

    // Getter for outputChannel
    // public: ui8 getOutputChannel();

    // Setter for outputChannel
    // public: void setOutputChannel(ui8 val);

    // Getter for outputChannelUi
    // public: ui8 getOutputChannelUi();

    // Setter for outputChannelUi
    // public: void setOutputChannelUi(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RfOutput_channel* p);
void intrusive_ptr_release(org::himalay::ccif::RfOutput_channel* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_RFOUTPUT_CHANNEL
// End of code