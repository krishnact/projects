#ifndef ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2_
#define ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2_
//@Generated(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "PVDataFactory.h" //header for org.himalay.cl.cdl.PVDataFactory
#include "Header.h" //header for org.himalay.cl.cdl.Header
#include "CVCertificate.h" //header for org.himalay.cl.cdl.CVCertificate
#include "Resources.h" //header for org.himalay.cl.cdl.Resources


#include "code_version_tableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_code_version_table2___PTR_TYPE boost::shared_ptr<code_version_table2_>
#define org_himalay_cl_cdl_code_version_table2___NEW(x) {/** Serious **/x = org_himalay_cl_cdl_code_version_table2___PTR_TYPE(new code_version_table2_()); }
#define org_himalay_cl_cdl_code_version_table2___INIT(x)
#define org_himalay_cl_cdl_code_version_table2___DELETE(x)
#else
#define org_himalay_cl_cdl_code_version_table2___PTR_TYPE code_version_table2_*
#define org_himalay_cl_cdl_code_version_table2___NEW(x) {x= new code_version_table2_();}
#define org_himalay_cl_cdl_code_version_table2___INIT(x)  x=NULL;
#define org_himalay_cl_cdl_code_version_table2___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
class code_version_table2_;
typedef ::boost::shared_ptr<code_version_table2_> code_version_table2_Ptr;
#endif

class code_version_table2_ :public   code_version_tableFactory::code_version_table { //Concrete type is code_version_table2

//  public:
//    long    references;

public:


    // members variables
    // header ---
public:
    org_himalay_cl_cdl_Header__PTR_TYPE header ;
    // protocol_version ---
public:
    ui8 protocol_version ;
    // configuration_count_change ---
public:
    ui8 configuration_count_change ;
    // resources ---
public:
    org_himalay_cl_cdl_Resources__PTR_TYPE resources ;
    // pvData ---
public:
    org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE  pvData ;
    // certificateCount ---
public:
    ui8 certificateCount ;
    // cvCertificates ---
public:
    ArrayList(CVCertificate) cvCertificates ;


public:
    code_version_table2_ (); // throws Exception
    virtual ~code_version_table2_ ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for header
    // public: org_himalay_cl_cdl_Header__PTR_TYPE getHeader();

    // Setter for header
    // public: void setHeader(org_himalay_cl_cdl_Header__PTR_TYPE val);

    // Getter for protocol_version
    // public: ui8 getProtocol_version();

    // Setter for protocol_version
    // public: void setProtocol_version(ui8 val);

    // Getter for configuration_count_change
    // public: ui8 getConfiguration_count_change();

    // Setter for configuration_count_change
    // public: void setConfiguration_count_change(ui8 val);

    // Getter for resources
    // public: org_himalay_cl_cdl_Resources__PTR_TYPE getResources();

    // Setter for resources
    // public: void setResources(org_himalay_cl_cdl_Resources__PTR_TYPE val);

    // Getter for pvData
    // public: org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE  getPvData();

    // Setter for pvData
    // public: void setPvData(org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE  val);

    // Getter for certificateCount
    // public: ui8 getCertificateCount();

    // Setter for certificateCount
    // public: void setCertificateCount(ui8 val);

    // Getter for cvCertificates
    // public: ArrayList(CVCertificate) getCvCertificates();

    // Setter for cvCertificates
    // public: void setCvCertificates(ArrayList(CVCertificate) val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_cl_cdl_Header__PTR_TYPE header);

public:
    org_himalay_cl_cdl_Header__PTR_TYPE getHeader();
};

#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::code_version_table2_* p);
void intrusive_ptr_release(org::himalay::cl::cdl::code_version_table2_* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_CODE_VERSION_TABLE2_
// End of code