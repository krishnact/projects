#ifndef ORG_HIMALAY_CCIF_NEWFLOWCONFIRM1TYPE1_5
#define ORG_HIMALAY_CCIF_NEWFLOWCONFIRM1TYPE1_5
//@Generated(date = "Mon Feb 01 22:30:19 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader


#include "APDUBase_3Factory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowConfirm1Type1_5__PTR_TYPE boost::shared_ptr<NewFlowConfirm1Type1_5>
#define org_himalay_ccif_NewFlowConfirm1Type1_5__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowConfirm1Type1_5__PTR_TYPE(new NewFlowConfirm1Type1_5()); }
#define org_himalay_ccif_NewFlowConfirm1Type1_5__INIT(x)
#define org_himalay_ccif_NewFlowConfirm1Type1_5__DELETE(x)
#else
#define org_himalay_ccif_NewFlowConfirm1Type1_5__PTR_TYPE NewFlowConfirm1Type1_5*
#define org_himalay_ccif_NewFlowConfirm1Type1_5__NEW(x) {x= new NewFlowConfirm1Type1_5();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowConfirm1Type1_5__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE boost::shared_ptr<NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck>
//#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__NEW(x) {x =new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE(new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck()); }
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__INIT(x)
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__DELETE(x)
#else
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck*
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__NEW(x) {x= new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE boost::shared_ptr<NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck>
//#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__NEW(x) {x =new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE(new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck()); }
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__INIT(x)
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__DELETE(x)
#else
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck*
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__NEW(x) {x= new NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE boost::shared_ptr<NewFlowConfirm1Type1_5::StatusfieldCheck>
//#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__NEW(x) {x =new NewFlowConfirm1Type1_5::StatusfieldCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__NEW(x) {/** Serious **/x = org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE(new NewFlowConfirm1Type1_5::StatusfieldCheck()); }
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__INIT(x)
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__DELETE(x)
#else
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE NewFlowConfirm1Type1_5::StatusfieldCheck*
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__NEW(x) {x= new NewFlowConfirm1Type1_5::StatusfieldCheck();}
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__INIT(x)  x=NULL;
#define org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
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




#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
class NewFlowConfirm1Type1_5;
typedef ::boost::shared_ptr<NewFlowConfirm1Type1_5> NewFlowConfirm1Type1_5Ptr;
#endif

class NewFlowConfirm1Type1_5 :public   APDUBase_3Factory::APDUBase_3 { //Concrete type is NewFlowConfirm1Type1_5
// member static classes
public:

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__USE_SMART_PTR
    class StatusfieldCheck;
    typedef ::boost::shared_ptr<StatusfieldCheck> StatusfieldCheckPtr;
#endif

    class StatusfieldCheck :public BinMessage {
// member static classes
    public:

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__USE_SMART_PTR
        class ServiceTypeCheck;
        typedef ::boost::shared_ptr<ServiceTypeCheck> ServiceTypeCheckPtr;
#endif

        class ServiceTypeCheck :public BinMessage {
// member static classes
        public:

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__USE_SMART_PTR
            class stypeCheck;
            typedef ::boost::shared_ptr<stypeCheck> stypeCheckPtr;
#endif

            class stypeCheck :public BinMessage {

//  public:
//    long    references;

            public:

                NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* parent;

                // members variables
                // bf2 ---
            public:
                ui16 bf2 ;


            public:
                stypeCheck (); // throws Exception
                virtual ~stypeCheck ();
            public:
                int readNoHeader(DataInputStream& istream);// throws IOException

            public:
                int read(DataInputStream& istream);// throws IOException


            public:
                int write(DataOutputStream& ostream);// throws IOException

            public:
                int dump(DumpContext& dc);// throws IOException


                // Getter for bf2
                // public: ui16 getBf2();

                // Setter for bf2
                // public: void setBf2(ui16 val);


            public:
                int getReserved( );

            public:
                void setReserved(int val);

            public:
                int getMaxpduSize( );

            public:
                void setMaxpduSize(int val);

            public:
                int getSize();// throws IOException

            };

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__USE_SMART_PTR
            void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
            void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
            void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
            void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
            void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
            void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
            void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
            void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
#endif

// End of code

//  public:
//    long    references;

        public:

            NewFlowConfirm1Type1_5::StatusfieldCheck* parent;

            // members variables
            // ip_address ---
        public:
            i32 ip_address ;
            // flowType ---
        public:
            ui8 flowType ;
            // bf1 ---
        public:
            ui16 bf1 ;
            // optionByte ---
        public:
            org_himalay_msgs_runtime_ByteArray_PTR_TYPE optionByte; ;
            // stypeCheckInstance ---
        public:
            org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE stypeCheckInstance ;


        public:
            ServiceTypeCheck (); // throws Exception
            virtual ~ServiceTypeCheck ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for ip_address
            // public: ui32 getIp_address();

            // Setter for ip_address
            // public: void setIp_address(ui32 val);

            // Getter for flowType
            // public: ui8 getFlowType();

            // Setter for flowType
            // public: void setFlowType(ui8 val);

            // Getter for bf1
            // public: ui16 getBf1();

            // Setter for bf1
            // public: void setBf1(ui16 val);

            // Getter for optionByte
            // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getOptionByte();

            // Setter for optionByte
            // public: void setOptionByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

            // Getter for stypeCheckInstance
            // public: org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE getStypeCheckInstance();

            // Setter for stypeCheckInstance
            // public: void setStypeCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck_stypeCheck__PTR_TYPE val);


        public:
            int getFlag( );

        public:
            void setFlag(int val);

        public:
            int getMaxpduSize( );

        public:
            void setMaxpduSize(int val);

        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
        void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
        void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
        void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
        void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
        void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
        void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
        void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
#endif

// End of code

//  public:
//    long    references;

    public:

        NewFlowConfirm1Type1_5* parent;

        // members variables
        // flowId ---
    public:
        int flowId ;
        // serviceType ---
    public:
        ui8 serviceType ;
        // ServiceTypeCheckInstance ---
    public:
        org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE ServiceTypeCheckInstance ;


    public:
        StatusfieldCheck (); // throws Exception
        virtual ~StatusfieldCheck ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for flowId
        // public: ui24 getFlowId();

        // Setter for flowId
        // public: void setFlowId(ui24 val);

        // Getter for serviceType
        // public: ui8 getServiceType();

        // Setter for serviceType
        // public: void setServiceType(ui8 val);

        // Getter for ServiceTypeCheckInstance
        // public: org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE getServiceTypeCheckInstance();

        // Setter for ServiceTypeCheckInstance
        // public: void setServiceTypeCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck_ServiceTypeCheck__PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
    void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
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
    // statusField ---
public:
    ui8 statusField ;
    // flowsRemaining ---
public:
    ui8 flowsRemaining ;
    // StatusfieldCheckInstance ---
public:
    org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE StatusfieldCheckInstance ;


public:
    NewFlowConfirm1Type1_5 (); // throws Exception
    virtual ~NewFlowConfirm1Type1_5 ();
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

    // Getter for statusField
    // public: ui8 getStatusField();

    // Setter for statusField
    // public: void setStatusField(ui8 val);

    // Getter for flowsRemaining
    // public: ui8 getFlowsRemaining();

    // Setter for flowsRemaining
    // public: void setFlowsRemaining(ui8 val);

    // Getter for StatusfieldCheckInstance
    // public: org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE getStatusfieldCheckInstance();

    // Setter for StatusfieldCheckInstance
    // public: void setStatusfieldCheckInstance(org_himalay_ccif_NewFlowConfirm1Type1_5_StatusfieldCheck__PTR_TYPE val);


public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_NewFlowConfirm1Type1_5__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck::stypeCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck::ServiceTypeCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5::StatusfieldCheck* p);
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm1Type1_5* p);
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm1Type1_5* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_NEWFLOWCONFIRM1TYPE1_5
// End of code