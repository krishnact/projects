#ifndef ORG_HIMALAY_CCIF_PROGRAMCNF
#define ORG_HIMALAY_CCIF_PROGRAMCNF
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "programCnfMsg.h" //header for org.himalay.ccif.programCnfMsg


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ProgramCnf__USE_SMART_PTR
#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ProgramCnf__PTR_TYPE boost::shared_ptr<ProgramCnf>
#define org_himalay_ccif_ProgramCnf__NEW(x) {/** Serious **/x = org_himalay_ccif_ProgramCnf__PTR_TYPE(new ProgramCnf()); }
#define org_himalay_ccif_ProgramCnf__INIT(x)
#define org_himalay_ccif_ProgramCnf__DELETE(x)
#else
#define org_himalay_ccif_ProgramCnf__PTR_TYPE ProgramCnf*
#define org_himalay_ccif_ProgramCnf__NEW(x) {x= new ProgramCnf();}
#define org_himalay_ccif_ProgramCnf__INIT(x)  x=NULL;
#define org_himalay_ccif_ProgramCnf__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE boost::shared_ptr<ProgramCnf::statusfld>
//#define org_himalay_ccif_ProgramCnf_statusfld__NEW(x) {x =new ProgramCnf::statusfld();}
#define org_himalay_ccif_ProgramCnf_statusfld__NEW(x) {/** Serious **/x = org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE(new ProgramCnf::statusfld()); }
#define org_himalay_ccif_ProgramCnf_statusfld__INIT(x)
#define org_himalay_ccif_ProgramCnf_statusfld__DELETE(x)
#else
#define org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE ProgramCnf::statusfld*
#define org_himalay_ccif_ProgramCnf_statusfld__NEW(x) {x= new ProgramCnf::statusfld();}
#define org_himalay_ccif_ProgramCnf_statusfld__INIT(x)  x=NULL;
#define org_himalay_ccif_ProgramCnf_statusfld__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
class ProgramCnf;
typedef ::boost::shared_ptr<ProgramCnf> ProgramCnfPtr;
#endif

class ProgramCnf :public   APDUBaseFactory::APDUBase { //Concrete type is ProgramCnf
// member static classes
public:

#ifdef org_himalay_ccif_ProgramCnf_statusfld__USE_SMART_PTR
    class statusfld;
    typedef ::boost::shared_ptr<statusfld> statusfldPtr;
#endif

    class statusfld :public BinMessage {

//  public:
//    long    references;

    public:

        ProgramCnf* parent;

        // members variables
        // pgmmsg ---
    public:
        ArrayList(programCnfMsg) pgmmsg ;


    public:
        statusfld (); // throws Exception
        virtual ~statusfld ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for pgmmsg
        // public: ArrayList(programCnfMsg) getPgmmsg();

        // Setter for pgmmsg
        // public: void setPgmmsg(ArrayList(programCnfMsg) val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_ProgramCnf_statusfld__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p);
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
    // transactionId ---
public:
    ui8 transactionId ;
    // statusField ---
public:
    ui8 statusField ;
    // statusfldInstance ---
public:
    org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE statusfldInstance ;


public:
    ProgramCnf (); // throws Exception
    virtual ~ProgramCnf ();
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

    // Getter for transactionId
    // public: ui8 getTransactionId();

    // Setter for transactionId
    // public: void setTransactionId(ui8 val);

    // Getter for statusField
    // public: ui8 getStatusField();

    // Setter for statusField
    // public: void setStatusField(ui8 val);

    // Getter for statusfldInstance
    // public: org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE getStatusfldInstance();

    // Setter for statusfldInstance
    // public: void setStatusfldInstance(org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p);
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p);
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf* p);
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PROGRAMCNF
// End of code