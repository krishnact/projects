#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PID
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PID
//@Generated(date = "Mon Sep 22 23:05:26 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"


#include "LocationTypeFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationType_pid__PTR_TYPE boost::shared_ptr<LocationType_pid>
#define org_himalay_cl_cdl_LocationType_pid__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_LocationType_pid__PTR_TYPE(new LocationType_pid()); }
#define org_himalay_cl_cdl_LocationType_pid__INIT(x)
#define org_himalay_cl_cdl_LocationType_pid__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationType_pid__PTR_TYPE LocationType_pid*
#define org_himalay_cl_cdl_LocationType_pid__NEW(x) {x= new LocationType_pid();}
#define org_himalay_cl_cdl_LocationType_pid__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_LocationType_pid__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
    class LocationType_pid;
    typedef ::boost::shared_ptr<LocationType_pid> LocationType_pidPtr;
#endif

 class LocationType_pid :public   LocationTypeFactory::LocationType { //Concrete type is LocationType_pid

//  public:
//    long    references;

  public:


    // members variables
    // frequency_vector ---
    public: ui16 frequency_vector ;
    // modulation_type ---
    public: ui8 modulation_type ;
    // bf1 ---
    public: ui16 bf1 ;


    public: LocationType_pid (); // throws Exception
    virtual ~LocationType_pid ();
    public: int readNoHeader(DataInputStream& istream);// throws IOException 
    
    public: int read(DataInputStream& istream);// throws IOException 
 

    public: int write(DataOutputStream& ostream);// throws IOException 
     
    public: int dump(DumpContext& dc);// throws IOException 
   
     
    // Getter for frequency_vector
    // public: ui16 getFrequency_vector();

        // Setter for frequency_vector
    // public: void setFrequency_vector(ui16 val);
 
    // Getter for modulation_type
    // public: ui8 getModulation_type();

        // Setter for modulation_type
    // public: void setModulation_type(ui8 val);
 
    // Getter for bf1
    // public: ui16 getBf1();

        // Setter for bf1
    // public: void setBf1(ui16 val);


    public: int getReserved_( );
    
    public: void setReserved_(int val);
    
    public: int getPid( );
    
    public: void setPid(int val);
    
    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_LocationType_pid__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_pid* p);
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_pid* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PID
// End of code