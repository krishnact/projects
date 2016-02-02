#ifndef ORG_HIMALAY_SI_NETWORK_TEXT_TABLE_SECTION_
#define ORG_HIMALAY_SI_NETWORK_TEXT_TABLE_SECTION_
//@Generated(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader
#include "Descriptors.h" //header for org.himalay.si.Descriptors
#include "DescriptorCollection.h" //header for org.himalay.si.DescriptorCollection


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_network_text_table_section___USE_SMART_PTR
#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_text_table_section___PTR_TYPE boost::shared_ptr<network_text_table_section_>
#define org_himalay_si_network_text_table_section___NEW(x) {/** Serious **/x = org_himalay_si_network_text_table_section___PTR_TYPE(new network_text_table_section_()); }
#define org_himalay_si_network_text_table_section___INIT(x)
#define org_himalay_si_network_text_table_section___DELETE(x)
#else
#define org_himalay_si_network_text_table_section___PTR_TYPE network_text_table_section_*
#define org_himalay_si_network_text_table_section___NEW(x) {x= new network_text_table_section_();}
#define org_himalay_si_network_text_table_section___INIT(x)  x=NULL;
#define org_himalay_si_network_text_table_section___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__PTR_TYPE boost::shared_ptr<network_text_table_section_::subtable::source_name_subtable::SNSData>
//#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__NEW(x) {x =new network_text_table_section_::subtable::source_name_subtable::SNSData();}
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__NEW(x) {/** Serious **/x = org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__PTR_TYPE(new network_text_table_section_::subtable::source_name_subtable::SNSData()); }
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__INIT(x)
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__DELETE(x)
#else
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__PTR_TYPE network_text_table_section_::subtable::source_name_subtable::SNSData*
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__NEW(x) {x= new network_text_table_section_::subtable::source_name_subtable::SNSData();}
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__INIT(x)  x=NULL;
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE boost::shared_ptr<network_text_table_section_::subtable::source_name_subtable>
//#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__NEW(x) {x =new network_text_table_section_::subtable::source_name_subtable();}
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__NEW(x) {/** Serious **/x = org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE(new network_text_table_section_::subtable::source_name_subtable()); }
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__INIT(x)
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__DELETE(x)
#else
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE network_text_table_section_::subtable::source_name_subtable*
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__NEW(x) {x= new network_text_table_section_::subtable::source_name_subtable();}
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__INIT(x)  x=NULL;
#define org_himalay_si_network_text_table_section__subtable_source_name_subtable__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_text_table_section__subtable__PTR_TYPE boost::shared_ptr<network_text_table_section_::subtable>
//#define org_himalay_si_network_text_table_section__subtable__NEW(x) {x =new network_text_table_section_::subtable();}
#define org_himalay_si_network_text_table_section__subtable__NEW(x) {/** Serious **/x = org_himalay_si_network_text_table_section__subtable__PTR_TYPE(new network_text_table_section_::subtable()); }
#define org_himalay_si_network_text_table_section__subtable__INIT(x)
#define org_himalay_si_network_text_table_section__subtable__DELETE(x)
#else
#define org_himalay_si_network_text_table_section__subtable__PTR_TYPE network_text_table_section_::subtable*
#define org_himalay_si_network_text_table_section__subtable__NEW(x) {x= new network_text_table_section_::subtable();}
#define org_himalay_si_network_text_table_section__subtable__INIT(x)  x=NULL;
#define org_himalay_si_network_text_table_section__subtable__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
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




#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
class network_text_table_section_;
typedef ::boost::shared_ptr<network_text_table_section_> network_text_table_section_Ptr;
#endif

class network_text_table_section_ :public   SCTE65TableFactory::SCTE65Table { //Concrete type is network_text_table_section
// member static classes
public:

#ifdef org_himalay_si_network_text_table_section__subtable__USE_SMART_PTR
    class subtable;
    typedef ::boost::shared_ptr<subtable> subtablePtr;
#endif

    class subtable :public BinMessage {
// member static classes
    public:

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable__USE_SMART_PTR
        class source_name_subtable;
        typedef ::boost::shared_ptr<source_name_subtable> source_name_subtablePtr;
#endif

        class source_name_subtable :public BinMessage {
// member static classes
        public:

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__USE_SMART_PTR
            class SNSData;
            typedef ::boost::shared_ptr<SNSData> SNSDataPtr;
#endif

            class SNSData :public BinMessage {

//  public:
//    long    references;

            public:

                network_text_table_section_::subtable::source_name_subtable* parent;

                // members variables
                // bf1 ---
            public:
                ui8 bf1 ;
                // appIdOrSourceType ---
            public:
                ui16 appIdOrSourceType ;
                // sourceName ---
            public:
                org_himalay_msgs_runtime_ByteArray_PTR_TYPE sourceName; ;
                // descriptors ---
            public:
                org_himalay_si_DescriptorCollection__PTR_TYPE descriptors ;


            public:
                SNSData (); // throws Exception
                virtual ~SNSData ();
            public:
                int readNoHeader(DataInputStream& istream);// throws IOException

            public:
                int read(DataInputStream& istream);// throws IOException


            public:
                int write(DataOutputStream& ostream);// throws IOException

            public:
                int dump(DumpContext& dc);// throws IOException


                // Getter for bf1
                // public: ui8 getBf1();

                // Setter for bf1
                // public: void setBf1(ui8 val);

                // Getter for appIdOrSourceType
                // public: ui16 getAppIdOrSourceType();

                // Setter for appIdOrSourceType
                // public: void setAppIdOrSourceType(ui16 val);

                // Getter for sourceName
                // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getSourceName();

                // Setter for sourceName
                // public: void setSourceName(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

                // Getter for descriptors
                // public: org_himalay_si_DescriptorCollection__PTR_TYPE getDescriptors();

                // Setter for descriptors
                // public: void setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val);


            public:
                int getApplicationType( );

            public:
                void setApplicationType(int val);

            public:
                int getSize();// throws IOException

            };

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__USE_SMART_PTR
            void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
            void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
            void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
            void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
            void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p);
            void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p);
            void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
            void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
#endif

// End of code

//  public:
//    long    references;

        public:

            network_text_table_section_::subtable* parent;

            // members variables
            // count ---
        public:
            ui8 count ;
            // snsAray ---
        public:
            ArrayList(network_text_table_section_::subtable::source_name_subtable::SNSData) snsAray ;


        public:
            source_name_subtable (); // throws Exception
            virtual ~source_name_subtable ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for count
            // public: ui8 getCount();

            // Setter for count
            // public: void setCount(ui8 val);

            // Getter for snsAray
            // public: ArrayList(network_text_table_section_::subtable::source_name_subtable::SNSData) getSnsAray();

            // Setter for snsAray
            // public: void setSnsAray(ArrayList(network_text_table_section_::subtable::source_name_subtable::SNSData) val);


        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
        void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
        void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
        void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
        void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p);
        void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p);
        void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
        void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
#endif

// End of code

//  public:
//    long    references;

    public:

        network_text_table_section_* parent;

        // members variables
        // source_name_subtableInstance ---
    public:
        org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE source_name_subtableInstance ;
        // descriptor ---
    public:
        org_himalay_si_Descriptors__PTR_TYPE descriptor ;


    public:
        subtable (); // throws Exception
        virtual ~subtable ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for source_name_subtableInstance
        // public: org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE getSource_name_subtableInstance();

        // Setter for source_name_subtableInstance
        // public: void setSource_name_subtableInstance(org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE val);

        // Getter for descriptor
        // public: org_himalay_si_Descriptors__PTR_TYPE getDescriptor();

        // Setter for descriptor
        // public: void setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_network_text_table_section__subtable__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
    void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
    void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
    void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
    void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p);
    void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p);
    void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p);
    void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // tableHeader ---
public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE tableHeader ;
    // bf2 ---
public:
    ui8 bf2 ;
    // languageCode ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE languageCode; ;
    // bf3 ---
public:
    ui8 bf3 ;
    // subtableInstance ---
public:
    org_himalay_si_network_text_table_section__subtable__PTR_TYPE subtableInstance ;
    // CRC ---
public:
    i32 CRC ;


public:
    network_text_table_section_ (); // throws Exception
    virtual ~network_text_table_section_ ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for tableHeader
    // public: org_himalay_si_SCTE65_TableHeader__PTR_TYPE getTableHeader();

    // Setter for tableHeader
    // public: void setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val);

    // Getter for bf2
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for languageCode
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getLanguageCode();

    // Setter for languageCode
    // public: void setLanguageCode(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for bf3
    // public: ui8 getBf3();

    // Setter for bf3
    // public: void setBf3(ui8 val);

    // Getter for subtableInstance
    // public: org_himalay_si_network_text_table_section__subtable__PTR_TYPE getSubtableInstance();

    // Setter for subtableInstance
    // public: void setSubtableInstance(org_himalay_si_network_text_table_section__subtable__PTR_TYPE val);

    // Getter for CRC
    // public: ui32 getCRC();

    // Setter for CRC
    // public: void setCRC(ui32 val);


public:
    int getZeroVersion( );

public:
    void setZeroVersion(int val);

public:
    int getProtocol_version( );

public:
    void setProtocol_version(int val);

public:
    int getTransmission_medium( );

public:
    void setTransmission_medium(int val);

public:
    int getTable_subtype( );

public:
    void setTable_subtype(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p);
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p);
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p);
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p);
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_* p);
void intrusive_ptr_release(org::himalay::si::network_text_table_section_* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_NETWORK_TEXT_TABLE_SECTION_
// End of code