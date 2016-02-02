#ifndef ORG_HIMALAY_SI_DCM_STRUCTURE_BASE
#define ORG_HIMALAY_SI_DCM_STRUCTURE_BASE
//@Generated(date = "Mon Sep 22 23:15:28 EDT 2014")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"


#include "S_VCT_SubtableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_DCM_structure_base__USE_SMART_PTR
#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_DCM_structure_base__PTR_TYPE boost::shared_ptr<DCM_structure_base>
#define org_himalay_si_DCM_structure_base__NEW(x) {/** Serious **/x = org_himalay_si_DCM_structure_base__PTR_TYPE(new DCM_structure_base()); }
#define org_himalay_si_DCM_structure_base__INIT(x)
#define org_himalay_si_DCM_structure_base__DELETE(x)
#else
#define org_himalay_si_DCM_structure_base__PTR_TYPE DCM_structure_base*
#define org_himalay_si_DCM_structure_base__NEW(x) {x= new DCM_structure_base();}
#define org_himalay_si_DCM_structure_base__INIT(x)  x=NULL;
#define org_himalay_si_DCM_structure_base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_DCM_structure_base_dcmData__PTR_TYPE boost::shared_ptr<DCM_structure_base::dcmData>
//#define org_himalay_si_DCM_structure_base_dcmData__NEW(x) {x =new DCM_structure_base::dcmData();}
#define org_himalay_si_DCM_structure_base_dcmData__NEW(x) {/** Serious **/x = org_himalay_si_DCM_structure_base_dcmData__PTR_TYPE(new DCM_structure_base::dcmData()); }
#define org_himalay_si_DCM_structure_base_dcmData__INIT(x)
#define org_himalay_si_DCM_structure_base_dcmData__DELETE(x)
#else
#define org_himalay_si_DCM_structure_base_dcmData__PTR_TYPE DCM_structure_base::dcmData*
#define org_himalay_si_DCM_structure_base_dcmData__NEW(x) {x= new DCM_structure_base::dcmData();}
#define org_himalay_si_DCM_structure_base_dcmData__INIT(x)  x=NULL;
#define org_himalay_si_DCM_structure_base_dcmData__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
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




#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
class DCM_structure_base;
typedef ::boost::shared_ptr<DCM_structure_base> DCM_structure_basePtr;
#endif

class DCM_structure_base :public   S_VCT_SubtableFactory::S_VCT_Subtable { //Concrete type is DCM_structure
// member static classes
public:

#ifdef org_himalay_si_DCM_structure_base_dcmData__USE_SMART_PTR
    class dcmData;
    typedef ::boost::shared_ptr<dcmData> dcmDataPtr;
#endif

    class dcmData :public BinMessage {

//  public:
//    long    references;

    public:

        DCM_structure_base* parent;

        // members variables
        // bf5 ---
    public:
        ui8 bf5 ;


    public:
        dcmData (); // throws Exception
        virtual ~dcmData ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for bf5
        // public: ui8 getBf5();

        // Setter for bf5
        // public: void setBf5(ui8 val);


    public:
        int getRange_defined( );

    public:
        void setRange_defined(int val);

    public:
        int getChannelsCount( );

    public:
        void setChannelsCount(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_DCM_structure_base_dcmData__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p);
    void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p);
    void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p);
    void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui16 bf1 ;
    // bf2 ---
public:
    ui8 bf2 ;
    // dcmDatum ---
public:
    ArrayList(DCM_structure_base::dcmData) dcmDatum ;


public:
    DCM_structure_base (); // throws Exception
    virtual ~DCM_structure_base ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for bf1
    // public: ui16 getBf1();

    // Setter for bf1
    // public: void setBf1(ui16 val);

    // Getter for bf2
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for dcmDatum
    // public: ArrayList(DCM_structure_base::dcmData) getDcmDatum();

    // Setter for dcmDatum
    // public: void setDcmDatum(ArrayList(DCM_structure_base::dcmData) val);


public:
    int getZero( );

public:
    void setZero(int val);

public:
    int getFirst_virtual_channel( );

public:
    void setFirst_virtual_channel(int val);

public:
    int getZero2( );

public:
    void setZero2(int val);

public:
    int getDCM_data_length( );

public:
    void setDCM_data_length(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_DCM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base::dcmData* p);
void intrusive_ptr_release(org::himalay::si::DCM_structure_base::dcmData* p);
void intrusive_ptr_add_ref(org::himalay::si::DCM_structure_base* p);
void intrusive_ptr_release(org::himalay::si::DCM_structure_base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_DCM_STRUCTURE_BASE
// End of code