#ifndef ORG_HIMALAY_SI_NETWORK_INFORMATION_TABLE_SECTION
#define ORG_HIMALAY_SI_NETWORK_INFORMATION_TABLE_SECTION
//@Generated(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "MMS_Record.h" //header for org.himalay.si.MMS_Record
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader
#include "Descriptors.h" //header for org.himalay.si.Descriptors
#include "DescriptorCollection.h" //header for org.himalay.si.DescriptorCollection
#include "CDS_Record.h" //header for org.himalay.si.CDS_Record


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_network_information_table_section__USE_SMART_PTR
#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_information_table_section__PTR_TYPE boost::shared_ptr<network_information_table_section>
#define org_himalay_si_network_information_table_section__NEW(x) {/** Serious **/x = org_himalay_si_network_information_table_section__PTR_TYPE(new network_information_table_section()); }
#define org_himalay_si_network_information_table_section__INIT(x)
#define org_himalay_si_network_information_table_section__DELETE(x)
#else
#define org_himalay_si_network_information_table_section__PTR_TYPE network_information_table_section*
#define org_himalay_si_network_information_table_section__NEW(x) {x= new network_information_table_section();}
#define org_himalay_si_network_information_table_section__INIT(x)  x=NULL;
#define org_himalay_si_network_information_table_section__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_information_table_section_subtable_Record__PTR_TYPE boost::shared_ptr<network_information_table_section::subtable::Record>
//#define org_himalay_si_network_information_table_section_subtable_Record__NEW(x) {x =new network_information_table_section::subtable::Record();}
#define org_himalay_si_network_information_table_section_subtable_Record__NEW(x) {/** Serious **/x = org_himalay_si_network_information_table_section_subtable_Record__PTR_TYPE(new network_information_table_section::subtable::Record()); }
#define org_himalay_si_network_information_table_section_subtable_Record__INIT(x)
#define org_himalay_si_network_information_table_section_subtable_Record__DELETE(x)
#else
#define org_himalay_si_network_information_table_section_subtable_Record__PTR_TYPE network_information_table_section::subtable::Record*
#define org_himalay_si_network_information_table_section_subtable_Record__NEW(x) {x= new network_information_table_section::subtable::Record();}
#define org_himalay_si_network_information_table_section_subtable_Record__INIT(x)  x=NULL;
#define org_himalay_si_network_information_table_section_subtable_Record__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_network_information_table_section_subtable__PTR_TYPE boost::shared_ptr<network_information_table_section::subtable>
//#define org_himalay_si_network_information_table_section_subtable__NEW(x) {x =new network_information_table_section::subtable();}
#define org_himalay_si_network_information_table_section_subtable__NEW(x) {/** Serious **/x = org_himalay_si_network_information_table_section_subtable__PTR_TYPE(new network_information_table_section::subtable()); }
#define org_himalay_si_network_information_table_section_subtable__INIT(x)
#define org_himalay_si_network_information_table_section_subtable__DELETE(x)
#else
#define org_himalay_si_network_information_table_section_subtable__PTR_TYPE network_information_table_section::subtable*
#define org_himalay_si_network_information_table_section_subtable__NEW(x) {x= new network_information_table_section::subtable();}
#define org_himalay_si_network_information_table_section_subtable__INIT(x)  x=NULL;
#define org_himalay_si_network_information_table_section_subtable__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
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




#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
class network_information_table_section;
typedef ::boost::shared_ptr<network_information_table_section> network_information_table_sectionPtr;
#endif

class network_information_table_section :public   SCTE65TableFactory::SCTE65Table { //Concrete type is network_information_table_section
// member static classes
public:

#ifdef org_himalay_si_network_information_table_section_subtable__USE_SMART_PTR
    class subtable;
    typedef ::boost::shared_ptr<subtable> subtablePtr;
#endif

    class subtable :public BinMessage {
// member static classes
    public:

#ifdef org_himalay_si_network_information_table_section_subtable_Record__USE_SMART_PTR
        class Record;
        typedef ::boost::shared_ptr<Record> RecordPtr;
#endif

        class Record :public BinMessage {

//  public:
//    long    references;

        public:

            network_information_table_section::subtable* parent;

            // members variables
            // cdsRecord ---
        public:
            org_himalay_si_CDS_Record__PTR_TYPE cdsRecord ;
            // mmsRecord ---
        public:
            org_himalay_si_MMS_Record__PTR_TYPE mmsRecord ;
            // descriptors ---
        public:
            org_himalay_si_DescriptorCollection__PTR_TYPE descriptors ;


        public:
            Record (); // throws Exception
            virtual ~Record ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for cdsRecord
            // public: org_himalay_si_CDS_Record__PTR_TYPE getCdsRecord();

            // Setter for cdsRecord
            // public: void setCdsRecord(org_himalay_si_CDS_Record__PTR_TYPE val);

            // Getter for mmsRecord
            // public: org_himalay_si_MMS_Record__PTR_TYPE getMmsRecord();

            // Setter for mmsRecord
            // public: void setMmsRecord(org_himalay_si_MMS_Record__PTR_TYPE val);

            // Getter for descriptors
            // public: org_himalay_si_DescriptorCollection__PTR_TYPE getDescriptors();

            // Setter for descriptors
            // public: void setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val);


        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_si_network_information_table_section_subtable_Record__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p);
        void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p);
        void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p);
        void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p);
        void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p);
        void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p);
#endif

// End of code

//  public:
//    long    references;

    public:

        network_information_table_section* parent;

        // members variables
        // firstIndex ---
    public:
        ui8 firstIndex ;
        // numberOfRecords ---
    public:
        ui8 numberOfRecords ;
        // bf3 ---
    public:
        ui8 bf3 ;
        // records ---
    public:
        ArrayList(network_information_table_section::subtable::Record) records ;
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


        // Getter for firstIndex
        // public: ui8 getFirstIndex();

        // Setter for firstIndex
        // public: void setFirstIndex(ui8 val);

        // Getter for numberOfRecords
        // public: ui8 getNumberOfRecords();

        // Setter for numberOfRecords
        // public: void setNumberOfRecords(ui8 val);

        // Getter for bf3
        // public: ui8 getBf3();

        // Setter for bf3
        // public: void setBf3(ui8 val);

        // Getter for records
        // public: ArrayList(network_information_table_section::subtable::Record) getRecords();

        // Setter for records
        // public: void setRecords(ArrayList(network_information_table_section::subtable::Record) val);

        // Getter for descriptor
        // public: org_himalay_si_Descriptors__PTR_TYPE getDescriptor();

        // Setter for descriptor
        // public: void setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val);


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

    };

#ifdef org_himalay_si_network_information_table_section_subtable__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p);
    void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p);
    void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p);
    void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p);
    void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p);
    void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p);
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
    // subtableInstance ---
public:
    org_himalay_si_network_information_table_section_subtable__PTR_TYPE subtableInstance ;
    // CRC ---
public:
    i32 CRC ;


public:
    network_information_table_section (); // throws Exception
    virtual ~network_information_table_section ();
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

    // Getter for subtableInstance
    // public: org_himalay_si_network_information_table_section_subtable__PTR_TYPE getSubtableInstance();

    // Setter for subtableInstance
    // public: void setSubtableInstance(org_himalay_si_network_information_table_section_subtable__PTR_TYPE val);

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
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p);
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p);
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p);
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p);
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section* p);
void intrusive_ptr_release(org::himalay::si::network_information_table_section* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_NETWORK_INFORMATION_TABLE_SECTION
// End of code