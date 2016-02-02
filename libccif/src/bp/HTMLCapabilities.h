#ifndef ORG_HIMALAY_CCIF_HTMLCAPABILITIES
#define ORG_HIMALAY_CCIF_HTMLCAPABILITIES
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
#define org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_HTMLCapabilities__PTR_TYPE boost::shared_ptr<HTMLCapabilities>
#define org_himalay_ccif_HTMLCapabilities__NEW(x) {/** Serious **/x = org_himalay_ccif_HTMLCapabilities__PTR_TYPE(new HTMLCapabilities()); }
#define org_himalay_ccif_HTMLCapabilities__INIT(x)
#define org_himalay_ccif_HTMLCapabilities__DELETE(x)
#else
#define org_himalay_ccif_HTMLCapabilities__PTR_TYPE HTMLCapabilities*
#define org_himalay_ccif_HTMLCapabilities__NEW(x) {x= new HTMLCapabilities();}
#define org_himalay_ccif_HTMLCapabilities__INIT(x)  x=NULL;
#define org_himalay_ccif_HTMLCapabilities__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
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




#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
class HTMLCapabilities;
typedef ::boost::shared_ptr<HTMLCapabilities> HTMLCapabilitiesPtr;
#endif

class HTMLCapabilities :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // linkSupport ---
public:
    ui8 linkSupport ;
    // tableSupport ---
public:
    ui8 tableSupport ;
    // listSupport ---
public:
    ui8 listSupport ;
    // imageSupport ---
public:
    ui8 imageSupport ;


public:
    HTMLCapabilities (); // throws Exception
    virtual ~HTMLCapabilities ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for linkSupport
    // public: ui8 getLinkSupport();

    // Setter for linkSupport
    // public: void setLinkSupport(ui8 val);

    // Getter for tableSupport
    // public: ui8 getTableSupport();

    // Setter for tableSupport
    // public: void setTableSupport(ui8 val);

    // Getter for listSupport
    // public: ui8 getListSupport();

    // Setter for listSupport
    // public: void setListSupport(ui8 val);

    // Getter for imageSupport
    // public: ui8 getImageSupport();

    // Setter for imageSupport
    // public: void setImageSupport(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HTMLCapabilities* p);
void intrusive_ptr_release(org::himalay::ccif::HTMLCapabilities* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_HTMLCAPABILITIES
// End of code