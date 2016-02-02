#ifndef ORG_HIMALAY_CCIF_SET_DSG_MODE1234
#define ORG_HIMALAY_CCIF_SET_DSG_MODE1234
//@Generated(date = "Mon Feb 01 22:30:19 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "MacAddress.h" //header for org.himalay.ccif.MacAddress


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_Set_DSG_Mode1234__PTR_TYPE boost::shared_ptr<Set_DSG_Mode1234>
#define org_himalay_ccif_Set_DSG_Mode1234__NEW(x) {/** Serious **/x = org_himalay_ccif_Set_DSG_Mode1234__PTR_TYPE(new Set_DSG_Mode1234()); }
#define org_himalay_ccif_Set_DSG_Mode1234__INIT(x)
#define org_himalay_ccif_Set_DSG_Mode1234__DELETE(x)
#else
#define org_himalay_ccif_Set_DSG_Mode1234__PTR_TYPE Set_DSG_Mode1234*
#define org_himalay_ccif_Set_DSG_Mode1234__NEW(x) {x= new Set_DSG_Mode1234();}
#define org_himalay_ccif_Set_DSG_Mode1234__INIT(x)  x=NULL;
#define org_himalay_ccif_Set_DSG_Mode1234__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE boost::shared_ptr<Set_DSG_Mode1234::StatusfieldCheck>
//#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__NEW(x) {x =new Set_DSG_Mode1234::StatusfieldCheck();}
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE(new Set_DSG_Mode1234::StatusfieldCheck()); }
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__INIT(x)
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__DELETE(x)
#else
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE Set_DSG_Mode1234::StatusfieldCheck*
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__NEW(x) {x= new Set_DSG_Mode1234::StatusfieldCheck();}
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
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




#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
class Set_DSG_Mode1234;
typedef ::boost::shared_ptr<Set_DSG_Mode1234> Set_DSG_Mode1234Ptr;
#endif

class Set_DSG_Mode1234 :public   APDUBaseFactory::APDUBase { //Concrete type is Set_DSG_Mode1234
// member static classes
public:

#ifdef org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__USE_SMART_PTR
    class StatusfieldCheck;
    typedef ::boost::shared_ptr<StatusfieldCheck> StatusfieldCheckPtr;
#endif

    class StatusfieldCheck :public BinMessage {

//  public:
//    long    references;

    public:

        Set_DSG_Mode1234* parent;

        // members variables
        // macAddress ---
    public:
        org_himalay_ccif_MacAddress__PTR_TYPE macAddress ;
        // remove_header_bytes ---
    public:
        ui16 remove_header_bytes ;


    public:
        StatusfieldCheck (); // throws Exception
        virtual ~StatusfieldCheck ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for macAddress
        // public: org_himalay_ccif_MacAddress__PTR_TYPE getMacAddress();

        // Setter for macAddress
        // public: void setMacAddress(org_himalay_ccif_MacAddress__PTR_TYPE val);

        // Getter for remove_header_bytes
        // public: ui16 getRemove_header_bytes();

        // Setter for remove_header_bytes
        // public: void setRemove_header_bytes(ui16 val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
#endif

// End of code

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
    // operationalMode ---
public:
    ui8 operationalMode ;
    // StatusfieldCheckInstance ---
public:
    org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE StatusfieldCheckInstance ;


public:
    Set_DSG_Mode1234 (); // throws Exception
    virtual ~Set_DSG_Mode1234 ();
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

    // Getter for operationalMode
    // public: ui8 getOperationalMode();

    // Setter for operationalMode
    // public: void setOperationalMode(ui8 val);

    // Getter for StatusfieldCheckInstance
    // public: org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE getStatusfieldCheckInstance();

    // Setter for StatusfieldCheckInstance
    // public: void setStatusfieldCheckInstance(org_himalay_ccif_Set_DSG_Mode1234_StatusfieldCheck__PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_Set_DSG_Mode1234__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234::StatusfieldCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::Set_DSG_Mode1234* p);
void intrusive_ptr_release(org::himalay::ccif::Set_DSG_Mode1234* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SET_DSG_MODE1234
// End of code