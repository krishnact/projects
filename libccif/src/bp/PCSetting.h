#ifndef ORG_HIMALAY_CCIF_PCSETTING
#define ORG_HIMALAY_CCIF_PCSETTING
//@Generated(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "pcsMsg.h" //header for org.himalay.ccif.pcsMsg




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_PCSetting__USE_SMART_PTR
#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_PCSetting__PTR_TYPE boost::shared_ptr<PCSetting>
#define org_himalay_ccif_PCSetting__NEW(x) {/** Serious **/x = org_himalay_ccif_PCSetting__PTR_TYPE(new PCSetting()); }
#define org_himalay_ccif_PCSetting__INIT(x)
#define org_himalay_ccif_PCSetting__DELETE(x)
#else
#define org_himalay_ccif_PCSetting__PTR_TYPE PCSetting*
#define org_himalay_ccif_PCSetting__NEW(x) {x= new PCSetting();}
#define org_himalay_ccif_PCSetting__INIT(x)  x=NULL;
#define org_himalay_ccif_PCSetting__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
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




#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
class PCSetting;
typedef ::boost::shared_ptr<PCSetting> PCSettingPtr;
#endif

class PCSetting :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // PC_factoryReset ---
public:
    ui8 PC_factoryReset ;
    // featureList ---
public:
    ArrayList(pcsMsg) featureList ;


public:
    PCSetting (); // throws Exception
    virtual ~PCSetting ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for PC_factoryReset
    // public: ui8 getPC_factoryReset();

    // Setter for PC_factoryReset
    // public: void setPC_factoryReset(ui8 val);

    // Getter for featureList
    // public: ArrayList(pcsMsg) getFeatureList();

    // Setter for featureList
    // public: void setFeatureList(ArrayList(pcsMsg) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PCSetting* p);
void intrusive_ptr_release(org::himalay::ccif::PCSetting* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PCSETTING
// End of code