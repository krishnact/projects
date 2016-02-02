#ifndef ORG_HIMALAY_CL_CDL_PV1
#define ORG_HIMALAY_CL_CDL_PV1
//@Generated(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "DownloadType_2.h" //header for org.himalay.cl.cdl.DownloadType_2
#include "DownloadType_0_or_1.h" //header for org.himalay.cl.cdl.DownloadType_0_or_1


#include "PVDataFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_PV1__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_PV1__PTR_TYPE boost::shared_ptr<PV1>
#define org_himalay_cl_cdl_PV1__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_PV1__PTR_TYPE(new PV1()); }
#define org_himalay_cl_cdl_PV1__INIT(x)
#define org_himalay_cl_cdl_PV1__DELETE(x)
#else
#define org_himalay_cl_cdl_PV1__PTR_TYPE PV1*
#define org_himalay_cl_cdl_PV1__NEW(x) {x= new PV1();}
#define org_himalay_cl_cdl_PV1__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_PV1__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
class PV1;
typedef ::boost::shared_ptr<PV1> PV1Ptr;
#endif

class PV1 :public   PVDataFactory::PVData { //Concrete type is PV1

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // downloadType_0 ---
public:
    org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE downloadType_0 ;
    // downloadType_1 ---
public:
    org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE downloadType_1 ;
    // downloadType_2 ---
public:
    org_himalay_cl_cdl_DownloadType_2__PTR_TYPE downloadType_2 ;
    // code_file_name ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE code_file_name; ;


public:
    PV1 (); // throws Exception
    virtual ~PV1 ();
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

    // Getter for downloadType_0
    // public: org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE getDownloadType_0();

    // Setter for downloadType_0
    // public: void setDownloadType_0(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val);

    // Getter for downloadType_1
    // public: org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE getDownloadType_1();

    // Setter for downloadType_1
    // public: void setDownloadType_1(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val);

    // Getter for downloadType_2
    // public: org_himalay_cl_cdl_DownloadType_2__PTR_TYPE getDownloadType_2();

    // Setter for downloadType_2
    // public: void setDownloadType_2(org_himalay_cl_cdl_DownloadType_2__PTR_TYPE val);

    // Getter for code_file_name
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getCode_file_name();

    // Setter for code_file_name
    // public: void setCode_file_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


public:
    int getDownload_type( );

public:
    void setDownload_type(int val);

public:
    int getDownload_command( );

public:
    void setDownload_command(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV1* p);
void intrusive_ptr_release(org::himalay::cl::cdl::PV1* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_PV1
// End of code