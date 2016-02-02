#ifndef ORG_HIMALAY_CCIF_INQUIRE_DSG_MODE1234
#define ORG_HIMALAY_CCIF_INQUIRE_DSG_MODE1234
//@Generated(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_Inquire_DSG_Mode1234__USE_SMART_PTR
#ifdef org_himalay_ccif_Inquire_DSG_Mode1234__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_Inquire_DSG_Mode1234__PTR_TYPE boost::shared_ptr<Inquire_DSG_Mode1234>
#define org_himalay_ccif_Inquire_DSG_Mode1234__NEW(x) {/** Serious **/x = org_himalay_ccif_Inquire_DSG_Mode1234__PTR_TYPE(new Inquire_DSG_Mode1234()); }
#define org_himalay_ccif_Inquire_DSG_Mode1234__INIT(x)
#define org_himalay_ccif_Inquire_DSG_Mode1234__DELETE(x)
#else
#define org_himalay_ccif_Inquire_DSG_Mode1234__PTR_TYPE Inquire_DSG_Mode1234*
#define org_himalay_ccif_Inquire_DSG_Mode1234__NEW(x) {x= new Inquire_DSG_Mode1234();}
#define org_himalay_ccif_Inquire_DSG_Mode1234__INIT(x)  x=NULL;
#define org_himalay_ccif_Inquire_DSG_Mode1234__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_Inquire_DSG_Mode1234__USE_SMART_PTR
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




#ifdef org_himalay_ccif_Inquire_DSG_Mode1234__USE_SMART_PTR
class Inquire_DSG_Mode1234;
typedef ::boost::shared_ptr<Inquire_DSG_Mode1234> Inquire_DSG_Mode1234Ptr;
#endif

class Inquire_DSG_Mode1234 :public   APDUBaseFactory::APDUBase { //Concrete type is Inquire_DSG_Mode1234

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


public:
    Inquire_DSG_Mode1234 (); // throws Exception
    virtual ~Inquire_DSG_Mode1234 ();
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


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_Inquire_DSG_Mode1234__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Inquire_DSG_Mode1234* p);
void intrusive_ptr_release(org::himalay::ccif::Inquire_DSG_Mode1234* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_INQUIRE_DSG_MODE1234
// End of code