#ifndef ORG_HIMALAY_CCIF_APPLICATIONINFOREQEST
#define ORG_HIMALAY_CCIF_APPLICATIONINFOREQEST
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "HTMLCapabilities.h" //header for org.himalay.ccif.HTMLCapabilities


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ApplicationInfoReqest__PTR_TYPE boost::shared_ptr<ApplicationInfoReqest>
#define org_himalay_ccif_ApplicationInfoReqest__NEW(x) {/** Serious **/x = org_himalay_ccif_ApplicationInfoReqest__PTR_TYPE(new ApplicationInfoReqest()); }
#define org_himalay_ccif_ApplicationInfoReqest__INIT(x)
#define org_himalay_ccif_ApplicationInfoReqest__DELETE(x)
#else
#define org_himalay_ccif_ApplicationInfoReqest__PTR_TYPE ApplicationInfoReqest*
#define org_himalay_ccif_ApplicationInfoReqest__NEW(x) {x= new ApplicationInfoReqest();}
#define org_himalay_ccif_ApplicationInfoReqest__INIT(x)  x=NULL;
#define org_himalay_ccif_ApplicationInfoReqest__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
class ApplicationInfoReqest;
typedef ::boost::shared_ptr<ApplicationInfoReqest> ApplicationInfoReqestPtr;
#endif

class ApplicationInfoReqest :public   APDUBaseFactory::APDUBase { //Concrete type is ApplicationInfoReqest

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    // length ---
public:
    ui8 length ;
    // displayRow ---
public:
    ui16 displayRow ;
    // displayColumns ---
public:
    ui16 displayColumns ;
    // verticalScrolling ---
public:
    ui8 verticalScrolling ;
    // horizontalScrolling ---
public:
    ui8 horizontalScrolling ;
    // dataEntrySupport ---
public:
    ui8 dataEntrySupport ;
    // HTMLSupport ---
public:
    ui8 HTMLSupport ;
    // htmlCapabilities ---
public:
    org_himalay_ccif_HTMLCapabilities__PTR_TYPE htmlCapabilities ;


public:
    ApplicationInfoReqest (); // throws Exception
    virtual ~ApplicationInfoReqest ();
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

    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);

    // Getter for displayRow
    // public: ui16 getDisplayRow();

    // Setter for displayRow
    // public: void setDisplayRow(ui16 val);

    // Getter for displayColumns
    // public: ui16 getDisplayColumns();

    // Setter for displayColumns
    // public: void setDisplayColumns(ui16 val);

    // Getter for verticalScrolling
    // public: ui8 getVerticalScrolling();

    // Setter for verticalScrolling
    // public: void setVerticalScrolling(ui8 val);

    // Getter for horizontalScrolling
    // public: ui8 getHorizontalScrolling();

    // Setter for horizontalScrolling
    // public: void setHorizontalScrolling(ui8 val);

    // Getter for dataEntrySupport
    // public: ui8 getDataEntrySupport();

    // Setter for dataEntrySupport
    // public: void setDataEntrySupport(ui8 val);

    // Getter for HTMLSupport
    // public: ui8 getHTMLSupport();

    // Setter for HTMLSupport
    // public: void setHTMLSupport(ui8 val);

    // Getter for htmlCapabilities
    // public: org_himalay_ccif_HTMLCapabilities__PTR_TYPE getHtmlCapabilities();

    // Setter for htmlCapabilities
    // public: void setHtmlCapabilities(org_himalay_ccif_HTMLCapabilities__PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ApplicationInfoReqest* p);
void intrusive_ptr_release(org::himalay::ccif::ApplicationInfoReqest* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_APPLICATIONINFOREQEST
// End of code