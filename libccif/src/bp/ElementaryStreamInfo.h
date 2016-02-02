#ifndef ORG_HIMALAY_CCIF_ELEMENTARYSTREAMINFO
#define ORG_HIMALAY_CCIF_ELEMENTARYSTREAMINFO
//@Generated(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "CaInfo.h" //header for org.himalay.ccif.CaInfo




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ElementaryStreamInfo__PTR_TYPE boost::shared_ptr<ElementaryStreamInfo>
#define org_himalay_ccif_ElementaryStreamInfo__NEW(x) {/** Serious **/x = org_himalay_ccif_ElementaryStreamInfo__PTR_TYPE(new ElementaryStreamInfo()); }
#define org_himalay_ccif_ElementaryStreamInfo__INIT(x)
#define org_himalay_ccif_ElementaryStreamInfo__DELETE(x)
#else
#define org_himalay_ccif_ElementaryStreamInfo__PTR_TYPE ElementaryStreamInfo*
#define org_himalay_ccif_ElementaryStreamInfo__NEW(x) {x= new ElementaryStreamInfo();}
#define org_himalay_ccif_ElementaryStreamInfo__INIT(x)  x=NULL;
#define org_himalay_ccif_ElementaryStreamInfo__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
class ElementaryStreamInfo;
typedef ::boost::shared_ptr<ElementaryStreamInfo> ElementaryStreamInfoPtr;
#endif

class ElementaryStreamInfo :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // streamType ---
public:
    ui8 streamType ;
    // bf1 ---
public:
    ui16 bf1 ;
    // caInfo ---
public:
    org_himalay_ccif_CaInfo__PTR_TYPE caInfo ;


public:
    ElementaryStreamInfo (); // throws Exception
    virtual ~ElementaryStreamInfo ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for streamType
    // public: ui8 getStreamType();

    // Setter for streamType
    // public: void setStreamType(ui8 val);

    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);

    // Getter for caInfo
    // public: org_himalay_ccif_CaInfo__PTR_TYPE getCaInfo();

    // Setter for caInfo
    // public: void setCaInfo(org_himalay_ccif_CaInfo__PTR_TYPE val);


public:
    int getReserved2( );

public:
    void setReserved2(int val);

public:
    int getElementaryStreamInfoLength( );

public:
    void setElementaryStreamInfoLength(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ElementaryStreamInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ElementaryStreamInfo* p);
void intrusive_ptr_release(org::himalay::ccif::ElementaryStreamInfo* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_ELEMENTARYSTREAMINFO
// End of code