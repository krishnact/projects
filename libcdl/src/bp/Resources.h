#ifndef ORG_HIMALAY_CL_CDL_RESOURCES
#define ORG_HIMALAY_CL_CDL_RESOURCES
//@Generated(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ResourceFactory.h" //header for org.himalay.cl.cdl.ResourceFactory




/**
 * Definitions for enclosing type
 */
#define org_himalay_cl_cdl_Resources__USE_SMART_PTR
#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_cl_cdl_Resources__PTR_TYPE boost::shared_ptr<Resources>
#define org_himalay_cl_cdl_Resources__NEW(x) {/** Serious **/x = org_himalay_cl_cdl_Resources__PTR_TYPE(new Resources()); }
#define org_himalay_cl_cdl_Resources__INIT(x)
#define org_himalay_cl_cdl_Resources__DELETE(x)
#else
#define org_himalay_cl_cdl_Resources__PTR_TYPE Resources*
#define org_himalay_cl_cdl_Resources__NEW(x) {x= new Resources();}
#define org_himalay_cl_cdl_Resources__INIT(x)  x=NULL;
#define org_himalay_cl_cdl_Resources__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
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




#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
class Resources;
typedef ::boost::shared_ptr<Resources> ResourcesPtr;
#endif

class Resources :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // descriptor_count ---
public:
    ui8 descriptor_count ;
    // reourceList ---
public:
    ArrayList(ResourceFactory::Resource) reourceList ;


public:
    Resources (); // throws Exception
    virtual ~Resources ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for descriptor_count
    // public: ui8 getDescriptor_count();

    // Setter for descriptor_count
    // public: void setDescriptor_count(ui8 val);

    // Getter for reourceList
    // public: ArrayList(ResourceFactory::Resource) getReourceList();

    // Setter for reourceList
    // public: void setReourceList(ArrayList(ResourceFactory::Resource) val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::Resources* p);
void intrusive_ptr_release(org::himalay::cl::cdl::Resources* p);
#endif


}
}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CL_CDL_RESOURCES
// End of code