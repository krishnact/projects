#ifndef ORG_HIMALAY_CCIF_FIRMWAREUPGRADE
#define ORG_HIMALAY_CCIF_FIRMWAREUPGRADE
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
#define org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FirmwareUpgrade__PTR_TYPE boost::shared_ptr<FirmwareUpgrade>
#define org_himalay_ccif_FirmwareUpgrade__NEW(x) {/** Serious **/x = org_himalay_ccif_FirmwareUpgrade__PTR_TYPE(new FirmwareUpgrade()); }
#define org_himalay_ccif_FirmwareUpgrade__INIT(x)
#define org_himalay_ccif_FirmwareUpgrade__DELETE(x)
#else
#define org_himalay_ccif_FirmwareUpgrade__PTR_TYPE FirmwareUpgrade*
#define org_himalay_ccif_FirmwareUpgrade__NEW(x) {x= new FirmwareUpgrade();}
#define org_himalay_ccif_FirmwareUpgrade__INIT(x)  x=NULL;
#define org_himalay_ccif_FirmwareUpgrade__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
class FirmwareUpgrade;
typedef ::boost::shared_ptr<FirmwareUpgrade> FirmwareUpgradePtr;
#endif

class FirmwareUpgrade :public   APDUBaseFactory::APDUBase { //Concrete type is FirmwareUpgrade

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
    // upgrade_source ---
public:
    ui8 upgrade_source ;
    // download_time ---
public:
    ui16 download_time ;
    // download_timeout_period ---
public:
    ui8 download_timeout_period ;
    // length1 ---
public:
    ui16 length1 ;
    // texts ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE texts; ;


public:
    FirmwareUpgrade (); // throws Exception
    virtual ~FirmwareUpgrade ();
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

    // Getter for upgrade_source
    // public: ui8 getUpgrade_source();

    // Setter for upgrade_source
    // public: void setUpgrade_source(ui8 val);

    // Getter for download_time
    // public: ui16 getDownload_time();

    // Setter for download_time
    // public: void setDownload_time(ui16 val);

    // Getter for download_timeout_period
    // public: ui8 getDownload_timeout_period();

    // Setter for download_timeout_period
    // public: void setDownload_timeout_period(ui8 val);

    // Getter for length1
    // public: ui16 getLength1();

    // Setter for length1
    // public: void setLength1(ui16 val);

    // Getter for texts
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getTexts();

    // Setter for texts
    // public: void setTexts(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmwareUpgrade* p);
void intrusive_ptr_release(org::himalay::ccif::FirmwareUpgrade* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FIRMWAREUPGRADE
// End of code