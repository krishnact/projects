#ifndef ORG_HIMALAY_SI_ICM_STRUCTURE_BASE
#define ORG_HIMALAY_SI_ICM_STRUCTURE_BASE
//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
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
#define org_himalay_si_ICM_structure_base__USE_SMART_PTR
#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_ICM_structure_base__PTR_TYPE boost::shared_ptr<ICM_structure_base>
#define org_himalay_si_ICM_structure_base__NEW(x) {/** Serious **/x = org_himalay_si_ICM_structure_base__PTR_TYPE(new ICM_structure_base()); }
#define org_himalay_si_ICM_structure_base__INIT(x)
#define org_himalay_si_ICM_structure_base__DELETE(x)
#else
#define org_himalay_si_ICM_structure_base__PTR_TYPE ICM_structure_base*
#define org_himalay_si_ICM_structure_base__NEW(x) {x= new ICM_structure_base();}
#define org_himalay_si_ICM_structure_base__INIT(x)  x=NULL;
#define org_himalay_si_ICM_structure_base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_ICM_structure_base_icmData__PTR_TYPE boost::shared_ptr<ICM_structure_base::icmData>
//#define org_himalay_si_ICM_structure_base_icmData__NEW(x) {x =new ICM_structure_base::icmData();}
#define org_himalay_si_ICM_structure_base_icmData__NEW(x) {/** Serious **/x = org_himalay_si_ICM_structure_base_icmData__PTR_TYPE(new ICM_structure_base::icmData()); }
#define org_himalay_si_ICM_structure_base_icmData__INIT(x)
#define org_himalay_si_ICM_structure_base_icmData__DELETE(x)
#else
#define org_himalay_si_ICM_structure_base_icmData__PTR_TYPE ICM_structure_base::icmData*
#define org_himalay_si_ICM_structure_base_icmData__NEW(x) {x= new ICM_structure_base::icmData();}
#define org_himalay_si_ICM_structure_base_icmData__INIT(x)  x=NULL;
#define org_himalay_si_ICM_structure_base_icmData__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
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




#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
class ICM_structure_base;
typedef ::boost::shared_ptr<ICM_structure_base> ICM_structure_basePtr;
#endif

class ICM_structure_base :public   S_VCT_SubtableFactory::S_VCT_Subtable { //Concrete type is ICM_structure
// member static classes
public:

#ifdef org_himalay_si_ICM_structure_base_icmData__USE_SMART_PTR
    class icmData;
    typedef ::boost::shared_ptr<icmData> icmDataPtr;
#endif

    class icmData :public BinMessage {

//  public:
//    long    references;

    public:

        ICM_structure_base* parent;

        // members variables
        // sourceId ---
    public:
        ui16 sourceId ;
        // bf5 ---
    public:
        ui16 bf5 ;


    public:
        icmData (); // throws Exception
        virtual ~icmData ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for sourceId
        // public: ui16 getSourceId();

        // Setter for sourceId
        // public: void setSourceId(ui16 val);

        // Getter for bf5
        // public: ui16 getBf5();

        // Setter for bf5
        // public: void setBf5(ui16 val);


    public:
        int getZero( );

    public:
        void setZero(int val);

    public:
        int getVirtual_channel_number( );

    public:
        void setVirtual_channel_number(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_ICM_structure_base_icmData__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p);
    void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p);
    void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p);
    void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p);
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
    // icmDatum ---
public:
    ArrayList(ICM_structure_base::icmData) icmDatum ;


public:
    ICM_structure_base (); // throws Exception
    virtual ~ICM_structure_base ();
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

    // Getter for icmDatum
    // public: ArrayList(ICM_structure_base::icmData) getIcmDatum();

    // Setter for icmDatum
    // public: void setIcmDatum(ArrayList(ICM_structure_base::icmData) val);


public:
    int getZero( );

public:
    void setZero(int val);

public:
    int getFirst_map_index( );

public:
    void setFirst_map_index(int val);

public:
    int getZero2( );

public:
    void setZero2(int val);

public:
    int getRecord_count( );

public:
    void setRecord_count(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_ICM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base::icmData* p);
void intrusive_ptr_release(org::himalay::si::ICM_structure_base::icmData* p);
void intrusive_ptr_add_ref(org::himalay::si::ICM_structure_base* p);
void intrusive_ptr_release(org::himalay::si::ICM_structure_base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_ICM_STRUCTURE_BASE
// End of code