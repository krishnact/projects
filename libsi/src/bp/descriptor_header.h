#ifndef ORG_HIMALAY_SI_DESCRIPTOR_HEADER
#define ORG_HIMALAY_SI_DESCRIPTOR_HEADER
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
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
#define org_himalay_si_descriptor_header__USE_SMART_PTR
#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_descriptor_header__PTR_TYPE boost::shared_ptr<descriptor_header>
#define org_himalay_si_descriptor_header__NEW(x) {/** Serious **/x = org_himalay_si_descriptor_header__PTR_TYPE(new descriptor_header()); }
#define org_himalay_si_descriptor_header__INIT(x)
#define org_himalay_si_descriptor_header__DELETE(x)
#else
#define org_himalay_si_descriptor_header__PTR_TYPE descriptor_header*
#define org_himalay_si_descriptor_header__NEW(x) {x= new descriptor_header();}
#define org_himalay_si_descriptor_header__INIT(x)  x=NULL;
#define org_himalay_si_descriptor_header__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
class descriptor_header;
typedef ::boost::shared_ptr<descriptor_header> descriptor_headerPtr;
#endif

class descriptor_header :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // messageType ---
public:
    ui8 messageType ;
    // length ---
public:
    ui8 length ;


public:
    descriptor_header (); // throws Exception
    virtual ~descriptor_header ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for messageType
public:
    ui8 getMessageType();

    // Setter for messageType
public:
    void setMessageType(ui8 val);

    // Getter for length
    // public: ui8 getLength();

    // Setter for length
    // public: void setLength(ui8 val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_descriptor_header__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::descriptor_header* p);
void intrusive_ptr_release(org::himalay::si::descriptor_header* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DESCRIPTOR_HEADER
// End of code