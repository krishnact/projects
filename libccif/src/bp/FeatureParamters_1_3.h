#ifndef ORG_HIMALAY_CCIF_FEATUREPARAMTERS_1_3
#define ORG_HIMALAY_CCIF_FEATUREPARAMTERS_1_3
//@Generated(date = "Mon Feb 01 22:30:18 EST 2016")
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
#define org_himalay_ccif_FeatureParamters_1_3__USE_SMART_PTR
#ifdef org_himalay_ccif_FeatureParamters_1_3__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_FeatureParamters_1_3__PTR_TYPE boost::shared_ptr<FeatureParamters_1_3>
#define org_himalay_ccif_FeatureParamters_1_3__NEW(x) {/** Serious **/x = org_himalay_ccif_FeatureParamters_1_3__PTR_TYPE(new FeatureParamters_1_3()); }
#define org_himalay_ccif_FeatureParamters_1_3__INIT(x)
#define org_himalay_ccif_FeatureParamters_1_3__DELETE(x)
#else
#define org_himalay_ccif_FeatureParamters_1_3__PTR_TYPE FeatureParamters_1_3*
#define org_himalay_ccif_FeatureParamters_1_3__NEW(x) {x= new FeatureParamters_1_3();}
#define org_himalay_ccif_FeatureParamters_1_3__INIT(x)  x=NULL;
#define org_himalay_ccif_FeatureParamters_1_3__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_FeatureParamters_1_3__USE_SMART_PTR
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




#ifdef org_himalay_ccif_FeatureParamters_1_3__USE_SMART_PTR
class FeatureParamters_1_3;
typedef ::boost::shared_ptr<FeatureParamters_1_3> FeatureParamters_1_3Ptr;
#endif

class FeatureParamters_1_3 :public   APDUBaseFactory::APDUBase { //Concrete type is FeatureParamters_1_3

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
    // featureList ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE featureList; ;


public:
    FeatureParamters_1_3 (); // throws Exception
    virtual ~FeatureParamters_1_3 ();
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

    // Getter for featureList
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getFeatureList();

    // Setter for featureList
    // public: void setFeatureList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_FeatureParamters_1_3__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FeatureParamters_1_3* p);
void intrusive_ptr_release(org::himalay::ccif::FeatureParamters_1_3* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_FEATUREPARAMTERS_1_3
// End of code