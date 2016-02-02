#ifndef ORG_HIMALAY_CCIF_INBANDTUNEREQ
#define ORG_HIMALAY_CCIF_INBANDTUNEREQ
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
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
#define org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_InbandTuneReq__PTR_TYPE boost::shared_ptr<InbandTuneReq>
#define org_himalay_ccif_InbandTuneReq__NEW(x) {/** Serious **/x = org_himalay_ccif_InbandTuneReq__PTR_TYPE(new InbandTuneReq()); }
#define org_himalay_ccif_InbandTuneReq__INIT(x)
#define org_himalay_ccif_InbandTuneReq__DELETE(x)
#else
#define org_himalay_ccif_InbandTuneReq__PTR_TYPE InbandTuneReq*
#define org_himalay_ccif_InbandTuneReq__NEW(x) {x= new InbandTuneReq();}
#define org_himalay_ccif_InbandTuneReq__INIT(x)  x=NULL;
#define org_himalay_ccif_InbandTuneReq__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_InbandTuneReq_first__PTR_TYPE boost::shared_ptr<InbandTuneReq::first>
//#define org_himalay_ccif_InbandTuneReq_first__NEW(x) {x =new InbandTuneReq::first();}
#define org_himalay_ccif_InbandTuneReq_first__NEW(x) {/** Serious **/x = org_himalay_ccif_InbandTuneReq_first__PTR_TYPE(new InbandTuneReq::first()); }
#define org_himalay_ccif_InbandTuneReq_first__INIT(x)
#define org_himalay_ccif_InbandTuneReq_first__DELETE(x)
#else
#define org_himalay_ccif_InbandTuneReq_first__PTR_TYPE InbandTuneReq::first*
#define org_himalay_ccif_InbandTuneReq_first__NEW(x) {x= new InbandTuneReq::first();}
#define org_himalay_ccif_InbandTuneReq_first__INIT(x)  x=NULL;
#define org_himalay_ccif_InbandTuneReq_first__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_InbandTuneReq_second__PTR_TYPE boost::shared_ptr<InbandTuneReq::second>
//#define org_himalay_ccif_InbandTuneReq_second__NEW(x) {x =new InbandTuneReq::second();}
#define org_himalay_ccif_InbandTuneReq_second__NEW(x) {/** Serious **/x = org_himalay_ccif_InbandTuneReq_second__PTR_TYPE(new InbandTuneReq::second()); }
#define org_himalay_ccif_InbandTuneReq_second__INIT(x)
#define org_himalay_ccif_InbandTuneReq_second__DELETE(x)
#else
#define org_himalay_ccif_InbandTuneReq_second__PTR_TYPE InbandTuneReq::second*
#define org_himalay_ccif_InbandTuneReq_second__NEW(x) {x= new InbandTuneReq::second();}
#define org_himalay_ccif_InbandTuneReq_second__INIT(x)  x=NULL;
#define org_himalay_ccif_InbandTuneReq_second__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
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




#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
class InbandTuneReq;
typedef ::boost::shared_ptr<InbandTuneReq> InbandTuneReqPtr;
#endif

class InbandTuneReq :public   APDUBaseFactory::APDUBase { //Concrete type is InbandTuneReq
// member static classes
public:

#ifdef org_himalay_ccif_InbandTuneReq_first__USE_SMART_PTR
    class first;
    typedef ::boost::shared_ptr<first> firstPtr;
#endif

    class first :public BinMessage {

//  public:
//    long    references;

    public:

        InbandTuneReq* parent;

        // members variables
        // sourceid ---
    public:
        ui16 sourceid ;


    public:
        first (); // throws Exception
        virtual ~first ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for sourceid
        // public: ui16 getSourceid();

        // Setter for sourceid
        // public: void setSourceid(ui16 val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_InbandTuneReq_first__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p);
#endif

// End of code
// member static classes
public:

#ifdef org_himalay_ccif_InbandTuneReq_second__USE_SMART_PTR
    class second;
    typedef ::boost::shared_ptr<second> secondPtr;
#endif

    class second :public BinMessage {

//  public:
//    long    references;

    public:

        InbandTuneReq* parent;

        // members variables
        // tuneFrequencyValu ---
    public:
        ui16 tuneFrequencyValu ;
        // modulationvalue ---
    public:
        ui8 modulationvalue ;


    public:
        second (); // throws Exception
        virtual ~second ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for tuneFrequencyValu
        // public: ui16 getTuneFrequencyValu();

        // Setter for tuneFrequencyValu
        // public: void setTuneFrequencyValu(ui16 val);

        // Getter for modulationvalue
        // public: ui8 getModulationvalue();

        // Setter for modulationvalue
        // public: void setModulationvalue(ui8 val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_InbandTuneReq_second__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p);
    void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p);
#endif

// End of code

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
    // tuneType ---
public:
    ui8 tuneType ;
    // firstInstance ---
public:
    org_himalay_ccif_InbandTuneReq_first__PTR_TYPE firstInstance ;
    // secondInstance ---
public:
    org_himalay_ccif_InbandTuneReq_second__PTR_TYPE secondInstance ;


public:
    InbandTuneReq (); // throws Exception
    virtual ~InbandTuneReq ();
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

    // Getter for tuneType
    // public: ui8 getTuneType();

    // Setter for tuneType
    // public: void setTuneType(ui8 val);

    // Getter for firstInstance
    // public: org_himalay_ccif_InbandTuneReq_first__PTR_TYPE getFirstInstance();

    // Setter for firstInstance
    // public: void setFirstInstance(org_himalay_ccif_InbandTuneReq_first__PTR_TYPE val);

    // Getter for secondInstance
    // public: org_himalay_ccif_InbandTuneReq_second__PTR_TYPE getSecondInstance();

    // Setter for secondInstance
    // public: void setSecondInstance(org_himalay_ccif_InbandTuneReq_second__PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p);
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p);
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p);
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p);
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq* p);
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_INBANDTUNEREQ
// End of code