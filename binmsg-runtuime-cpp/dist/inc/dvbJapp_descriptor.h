#ifndef ORG_HIMALAY_SI_DVBJAPP_DESCRIPTOR
#define ORG_HIMALAY_SI_DVBJAPP_DESCRIPTOR
//@Generated(date = "Mon Sep 22 23:15:31 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "descriptor_header.h" //header for org.himalay.si.descriptor_header


#include "app_desc_baseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_dvbJapp_descriptor__PTR_TYPE boost::shared_ptr<dvbJapp_descriptor>
#define org_himalay_si_dvbJapp_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_dvbJapp_descriptor__PTR_TYPE(new dvbJapp_descriptor()); }
#define org_himalay_si_dvbJapp_descriptor__INIT(x)
#define org_himalay_si_dvbJapp_descriptor__DELETE(x)
#else
#define org_himalay_si_dvbJapp_descriptor__PTR_TYPE dvbJapp_descriptor*
#define org_himalay_si_dvbJapp_descriptor__NEW(x) {x= new dvbJapp_descriptor();}
#define org_himalay_si_dvbJapp_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_dvbJapp_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_dvbJapp_descriptor_Param__PTR_TYPE boost::shared_ptr<dvbJapp_descriptor::Param>
//#define org_himalay_si_dvbJapp_descriptor_Param__NEW(x) {x =new dvbJapp_descriptor::Param();}
#define org_himalay_si_dvbJapp_descriptor_Param__NEW(x) {/** Serious **/x = org_himalay_si_dvbJapp_descriptor_Param__PTR_TYPE(new dvbJapp_descriptor::Param()); }
#define org_himalay_si_dvbJapp_descriptor_Param__INIT(x)
#define org_himalay_si_dvbJapp_descriptor_Param__DELETE(x)
#else
#define org_himalay_si_dvbJapp_descriptor_Param__PTR_TYPE dvbJapp_descriptor::Param*
#define org_himalay_si_dvbJapp_descriptor_Param__NEW(x) {x= new dvbJapp_descriptor::Param();}
#define org_himalay_si_dvbJapp_descriptor_Param__INIT(x)  x=NULL;
#define org_himalay_si_dvbJapp_descriptor_Param__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;
using namespace org::himalay::si;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
class dvbJapp_descriptor;
typedef ::boost::shared_ptr<dvbJapp_descriptor> dvbJapp_descriptorPtr;
#endif

class dvbJapp_descriptor :public   app_desc_baseFactory::app_desc_base { //Concrete type is dvbJapp_descriptor
// member static classes
public:

#ifdef org_himalay_si_dvbJapp_descriptor_Param__USE_SMART_PTR
    class Param;
    typedef ::boost::shared_ptr<Param> ParamPtr;
#endif

    class Param :public BinMessage {

//  public:
//    long    references;

    public:

        dvbJapp_descriptor* parent;

        // members variables
        // data ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE data; ;


    public:
        Param (); // throws Exception
        virtual ~Param ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for data
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getData();

        // Setter for data
        // public: void setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_dvbJapp_descriptor_Param__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p);
    void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p);
    void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p);
    void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // desc_header ---
public:
    org_himalay_si_descriptor_header__PTR_TYPE desc_header ;
    // params ---
public:
    ArrayList(dvbJapp_descriptor::Param) params ;


public:
    dvbJapp_descriptor (); // throws Exception
    virtual ~dvbJapp_descriptor ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for desc_header
    // public: org_himalay_si_descriptor_header__PTR_TYPE getDesc_header();

    // Setter for desc_header
    // public: void setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val);

    // Getter for params
    // public: ArrayList(dvbJapp_descriptor::Param) getParams();

    // Setter for params
    // public: void setParams(ArrayList(dvbJapp_descriptor::Param) val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_descriptor_header__PTR_TYPE header);

public:
    org_himalay_si_descriptor_header__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p);
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p);
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor* p);
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DVBJAPP_DESCRIPTOR
// End of code