#ifndef ORG_HIMALAY_CCIF_PROGRAMREQ
#define ORG_HIMALAY_CCIF_PROGRAMREQ
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "CaDescriptor.h" //header for org.himalay.ccif.CaDescriptor


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ProgramReq__USE_SMART_PTR
#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ProgramReq__PTR_TYPE boost::shared_ptr<ProgramReq>
#define org_himalay_ccif_ProgramReq__NEW(x) {/** Serious **/x = org_himalay_ccif_ProgramReq__PTR_TYPE(new ProgramReq()); }
#define org_himalay_ccif_ProgramReq__INIT(x)
#define org_himalay_ccif_ProgramReq__DELETE(x)
#else
#define org_himalay_ccif_ProgramReq__PTR_TYPE ProgramReq*
#define org_himalay_ccif_ProgramReq__NEW(x) {x= new ProgramReq();}
#define org_himalay_ccif_ProgramReq__INIT(x)  x=NULL;
#define org_himalay_ccif_ProgramReq__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
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




#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
class ProgramReq;
typedef ::boost::shared_ptr<ProgramReq> ProgramReqPtr;
#endif

class ProgramReq :public   APDUBaseFactory::APDUBase { //Concrete type is ProgramReq

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
    // transportStreamId ---
public:
    ui16 transportStreamId ;
    // program_number ---
public:
    ui16 program_number ;
    // sourceId ---
public:
    ui16 sourceId ;
    // eventId ---
public:
    ui16 eventId ;
    // currentNextIndicator ---
public:
    ui8 currentNextIndicator ;
    // bf1 ---
public:
    ui8 bf1 ;
    // descriptors ---
public:
    ArrayList(CaDescriptor) descriptors ;


public:
    ProgramReq (); // throws Exception
    virtual ~ProgramReq ();
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

    // Getter for transportStreamId
    // public: ui16 getTransportStreamId();

    // Setter for transportStreamId
    // public: void setTransportStreamId(ui16 val);

    // Getter for program_number
    // public: ui16 getProgram_number();

    // Setter for program_number
    // public: void setProgram_number(ui16 val);

    // Getter for sourceId
    // public: ui16 getSourceId();

    // Setter for sourceId
    // public: void setSourceId(ui16 val);

    // Getter for eventId
    // public: ui16 getEventId();

    // Setter for eventId
    // public: void setEventId(ui16 val);

    // Getter for currentNextIndicator
    // public: ui8 getCurrentNextIndicator();

    // Setter for currentNextIndicator
    // public: void setCurrentNextIndicator(ui8 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for descriptors
    // public: ArrayList(CaDescriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(CaDescriptor) val);


public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getCurrentNext( );

public:
    void setCurrentNext(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramReq* p);
void intrusive_ptr_release(org::himalay::ccif::ProgramReq* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_PROGRAMREQ
// End of code