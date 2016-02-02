#ifndef ORG_HIMALAY_CL_CDL_PV2
#define ORG_HIMALAY_CL_CDL_PV2
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
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
#define org_himalay_cl_cdl_PV2__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_PV2__PTR_TYPE boost::shared_ptr<PV2>
#define org_himalay_cl_cdl_PV2__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_PV2__PTR_TYPE(new PV2()); }
#define org_himalay_cl_cdl_PV2__INIT(x)
#define org_himalay_cl_cdl_PV2__DELETE(x)
#else
#define org_himalay_cl_cdl_PV2__PTR_TYPE PV2*
#define org_himalay_cl_cdl_PV2__NEW(x) {x= new PV2();}
#define org_himalay_cl_cdl_PV2__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_PV2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_PV2_PV2Object__PTR_TYPE boost::shared_ptr<PV2::PV2Object>
//#define org_himalay_cl_cdl_PV2_PV2Object__NEW(x) {x =new PV2::PV2Object();}
#define org_himalay_cl_cdl_PV2_PV2Object__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_PV2_PV2Object__PTR_TYPE(new PV2::PV2Object()); }
#define org_himalay_cl_cdl_PV2_PV2Object__INIT(x)
#define org_himalay_cl_cdl_PV2_PV2Object__DELETE(x)
#else
#define org_himalay_cl_cdl_PV2_PV2Object__PTR_TYPE PV2::PV2Object*
#define org_himalay_cl_cdl_PV2_PV2Object__NEW(x) {x= new PV2::PV2Object();}
#define org_himalay_cl_cdl_PV2_PV2Object__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_PV2_PV2Object__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
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
namespace org{namespace himalay{namespace cl{namespace cdl{

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::msgs::runtime;
using namespace org::himalay::cl::cdl;




#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
    class PV2;
    typedef ::boost::shared_ptr<PV2> PV2Ptr;
#endif

 class PV2 :public   PVDataFactory::PVData { //Concrete type is PV2
// member static classes
    public:

#ifdef org_himalay_cl_cdl_PV2_PV2Object__USE_SMART_PTR
    class PV2Object;
    typedef ::boost::shared_ptr<PV2Object> PV2ObjectPtr;
#endif

 class PV2Object :public BinMessage {

//  public:
//    long    references;

  public:

PV2* parent;

    // members variables
    // bf1 ---
    public: ui8 bf1 ;
    // downloadType_0 ---
    public: org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE downloadType_0 ;
    // downloadType_1 ---
    public: org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE downloadType_1 ;
    // downloadType_2 ---
    public: org_himalay_cl_cdl_DownloadType_2__PTR_TYPE downloadType_2 ;
    // object_type ---
    public: ui16 object_type ;
    // object_data ---
    public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE object_data; ;
    // code_file_name ---
    public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE code_file_name; ;


    public: PV2Object (); // throws Exception
    virtual ~PV2Object ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
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
 
    // Getter for object_type
    // public: ui16 getObject_type();

        // Setter for object_type
    // public: void setObject_type(ui16 val);
 
    // Getter for object_data
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getObject_data();

        // Setter for object_data
    // public: void setObject_data(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);
 
    // Getter for code_file_name
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getCode_file_name();

        // Setter for code_file_name
    // public: void setCode_file_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public: int getDownload_type( );
    
    public: void setDownload_type(int val);
    
    public: int getDownload_command( );
    
    public: void setDownload_command(int val);
    
    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_PV2_PV2Object__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p);
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p);
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p);
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p);
#endif

// End of code

//  public:
//    long    references;

  public:


    // members variables
    // number_of_objects ---
    public: ui8 number_of_objects ;
    // pv2Datum ---
    public: ArrayList(PV2::PV2Object) pv2Datum ;


    public: PV2 (); // throws Exception
    virtual ~PV2 ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for number_of_objects
    // public: ui8 getNumber_of_objects();

        // Setter for number_of_objects
    // public: void setNumber_of_objects(ui8 val);
 
    // Getter for pv2Datum
    // public: ArrayList(PV2::PV2Object) getPv2Datum();

        // Setter for pv2Datum
    // public: void setPv2Datum(ArrayList(PV2::PV2Object) val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p);
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p);
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2* p);
void intrusive_ptr_release(org::himalay::cl::cdl::PV2* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_PV2
// End of code