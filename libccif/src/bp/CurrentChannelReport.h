#ifndef ORG_HIMALAY_CCIF_CURRENTCHANNELREPORT
#define ORG_HIMALAY_CCIF_CURRENTCHANNELREPORT
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
#define org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CurrentChannelReport__PTR_TYPE boost::shared_ptr<CurrentChannelReport>
#define org_himalay_ccif_CurrentChannelReport__NEW(x) {/** Serious **/x = org_himalay_ccif_CurrentChannelReport__PTR_TYPE(new CurrentChannelReport()); }
#define org_himalay_ccif_CurrentChannelReport__INIT(x)
#define org_himalay_ccif_CurrentChannelReport__DELETE(x)
#else
#define org_himalay_ccif_CurrentChannelReport__PTR_TYPE CurrentChannelReport*
#define org_himalay_ccif_CurrentChannelReport__NEW(x) {x= new CurrentChannelReport();}
#define org_himalay_ccif_CurrentChannelReport__INIT(x)  x=NULL;
#define org_himalay_ccif_CurrentChannelReport__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
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




#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
class CurrentChannelReport;
typedef ::boost::shared_ptr<CurrentChannelReport> CurrentChannelReportPtr;
#endif

class CurrentChannelReport :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // currentChannel ---
public:
    ui16 currentChannel ;


public:
    CurrentChannelReport (); // throws Exception
    virtual ~CurrentChannelReport ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for currentChannel
    // public: ui16 getCurrentChannel();

    // Setter for currentChannel
    // public: void setCurrentChannel(ui16 val);


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

#ifdef org_himalay_ccif_CurrentChannelReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CurrentChannelReport* p);
void intrusive_ptr_release(org::himalay::ccif::CurrentChannelReport* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CURRENTCHANNELREPORT
// End of code