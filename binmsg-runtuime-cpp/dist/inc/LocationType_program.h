#ifndef ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PROGRAM
#define ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PROGRAM
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
#define org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_LocationType_program__PTR_TYPE boost::shared_ptr<LocationType_program>
#define org_himalay_cl_cdl_LocationType_program__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_LocationType_program__PTR_TYPE(new LocationType_program()); }
#define org_himalay_cl_cdl_LocationType_program__INIT(x)
#define org_himalay_cl_cdl_LocationType_program__DELETE(x)
#else
#define org_himalay_cl_cdl_LocationType_program__PTR_TYPE LocationType_program*
#define org_himalay_cl_cdl_LocationType_program__NEW(x) {x= new LocationType_program();}
#define org_himalay_cl_cdl_LocationType_program__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_LocationType_program__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
    class LocationType_program;
    typedef ::boost::shared_ptr<LocationType_program> LocationType_programPtr;
#endif

 class LocationType_program :public   LocationTypeFactory::LocationType { //Concrete type is LocationType_program

//  public:
//    long    references;

  public:


    // members variables
    // frequency_vector ---
    public: ui16 frequency_vector ;
    // modulation_type ---
    public: ui8 modulation_type ;
    // program_number ---
    public: ui16 program_number ;


    public: LocationType_program (); // throws Exception
    virtual ~LocationType_program ();
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
 
    // Getter for program_number
    // public: ui16 getProgram_number();

        // Setter for program_number
    // public: void setProgram_number(ui16 val);


    public: int getSize();// throws IOException
    
};

#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_program* p);
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_program* p);
#endif


}}}}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_LOCATIONTYPE_PROGRAM
// End of code