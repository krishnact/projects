#ifndef ORG_HIMALAY_SI_LONGFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
#define ORG_HIMALAY_SI_LONGFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
//@Generated(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65DescriptorFactory.h" //header for org.himalay.si.SCTE65DescriptorFactory
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_longform_virtual_channel_table_section___PTR_TYPE boost::shared_ptr<longform_virtual_channel_table_section_>
#define org_himalay_si_longform_virtual_channel_table_section___NEW(x) {/** Serious **/x = org_himalay_si_longform_virtual_channel_table_section___PTR_TYPE(new longform_virtual_channel_table_section_()); }
#define org_himalay_si_longform_virtual_channel_table_section___INIT(x)
#define org_himalay_si_longform_virtual_channel_table_section___DELETE(x)
#else
#define org_himalay_si_longform_virtual_channel_table_section___PTR_TYPE longform_virtual_channel_table_section_*
#define org_himalay_si_longform_virtual_channel_table_section___NEW(x) {x= new longform_virtual_channel_table_section_();}
#define org_himalay_si_longform_virtual_channel_table_section___INIT(x)  x=NULL;
#define org_himalay_si_longform_virtual_channel_table_section___DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_longform_virtual_channel_table_section__record__PTR_TYPE boost::shared_ptr<longform_virtual_channel_table_section_::record>
//#define org_himalay_si_longform_virtual_channel_table_section__record__NEW(x) {x =new longform_virtual_channel_table_section_::record();}
#define org_himalay_si_longform_virtual_channel_table_section__record__NEW(x) {/** Serious **/x = org_himalay_si_longform_virtual_channel_table_section__record__PTR_TYPE(new longform_virtual_channel_table_section_::record()); }
#define org_himalay_si_longform_virtual_channel_table_section__record__INIT(x)
#define org_himalay_si_longform_virtual_channel_table_section__record__DELETE(x)
#else
#define org_himalay_si_longform_virtual_channel_table_section__record__PTR_TYPE longform_virtual_channel_table_section_::record*
#define org_himalay_si_longform_virtual_channel_table_section__record__NEW(x) {x= new longform_virtual_channel_table_section_::record();}
#define org_himalay_si_longform_virtual_channel_table_section__record__INIT(x)  x=NULL;
#define org_himalay_si_longform_virtual_channel_table_section__record__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
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




#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
class longform_virtual_channel_table_section_;
typedef ::boost::shared_ptr<longform_virtual_channel_table_section_> longform_virtual_channel_table_section_Ptr;
#endif

class longform_virtual_channel_table_section_ :public   SCTE65TableFactory::SCTE65Table { //Concrete type is longform_virtual_channel_table_section
// member static classes
public:

#ifdef org_himalay_si_longform_virtual_channel_table_section__record__USE_SMART_PTR
    class record;
    typedef ::boost::shared_ptr<record> recordPtr;
#endif

    class record :public BinMessage {

//  public:
//    long    references;

    public:

        longform_virtual_channel_table_section_* parent;

        // members variables
        // short_name ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE short_name; ;
        // bf1 ---
    public:
        ui32 bf1 ;
        // carrierFrequency ---
    public:
        i32 carrierFrequency ;
        // channelTSID ---
    public:
        ui16 channelTSID ;
        // programNumber ---
    public:
        ui16 programNumber ;
        // bf2 ---
    public:
        ui16 bf2 ;
        // sourceType ---
    public:
        ui16 sourceType ;
        // bf3 ---
    public:
        ui16 bf3 ;
        // descriptors ---
    public:
        ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) descriptors ;


    public:
        record (); // throws Exception
        virtual ~record ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for short_name
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getShort_name();

        // Setter for short_name
        // public: void setShort_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

        // Getter for bf1
        // public: ui32 getBf1();

        // Setter for bf1
        // public: void setBf1(ui32 val);

        // Getter for carrierFrequency
        // public: ui32 getCarrierFrequency();

        // Setter for carrierFrequency
        // public: void setCarrierFrequency(ui32 val);

        // Getter for channelTSID
        // public: ui16 getChannelTSID();

        // Setter for channelTSID
        // public: void setChannelTSID(ui16 val);

        // Getter for programNumber
        // public: ui16 getProgramNumber();

        // Setter for programNumber
        // public: void setProgramNumber(ui16 val);

        // Getter for bf2
        // public: ui16 getBf2();

        // Setter for bf2
        // public: void setBf2(ui16 val);

        // Getter for sourceType
        // public: ui16 getSourceType();

        // Setter for sourceType
        // public: void setSourceType(ui16 val);

        // Getter for bf3
        // public: ui16 getBf3();

        // Setter for bf3
        // public: void setBf3(ui16 val);

        // Getter for descriptors
        // public: ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) getDescriptors();

        // Setter for descriptors
        // public: void setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val);


    public:
        int getReserved_( );

    public:
        void setReserved_(int val);

    public:
        int getMajorChannelNumber( );

    public:
        void setMajorChannelNumber(int val);

    public:
        int getMinorChannelNumber( );

    public:
        void setMinorChannelNumber(int val);

    public:
        int getModulationMode( );

    public:
        void setModulationMode(int val);

    public:
        int getReserved2_( );

    public:
        void setReserved2_(int val);

    public:
        int getAccessControlled( );

    public:
        void setAccessControlled(int val);

    public:
        int getHidden( );

    public:
        void setHidden(int val);

    public:
        int getPathSelect( );

    public:
        void setPathSelect(int val);

    public:
        int getOutOfBand( );

    public:
        void setOutOfBand(int val);

    public:
        int getHideGuide( );

    public:
        void setHideGuide(int val);

    public:
        int getReserved3_( );

    public:
        void setReserved3_(int val);

    public:
        int getServiceType( );

    public:
        void setServiceType(int val);

    public:
        int getReserved4_( );

    public:
        void setReserved4_(int val);

    public:
        int getDescriptorsLength( );

    public:
        void setDescriptorsLength(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_longform_virtual_channel_table_section__record__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p);
    void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p);
    void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p);
    void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // tableHeader ---
public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE tableHeader ;
    // mapId ---
public:
    ui16 mapId ;
    // bf3 ---
public:
    ui8 bf3 ;
    // section_number ---
public:
    ui8 section_number ;
    // last_section_number ---
public:
    ui8 last_section_number ;
    // protocol_version ---
public:
    ui8 protocol_version ;
    // num_channel_in_section ---
public:
    ui8 num_channel_in_section ;
    // records ---
public:
    ArrayList(longform_virtual_channel_table_section_::record) records ;
    // bf4 ---
public:
    ui16 bf4 ;
    // descriptors ---
public:
    ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) descriptors ;
    // CRC ---
public:
    i32 CRC ;


public:
    longform_virtual_channel_table_section_ (); // throws Exception
    virtual ~longform_virtual_channel_table_section_ ();
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

    // Getter for mapId
    // public: ui16 getMapId();

    // Setter for mapId
    // public: void setMapId(ui16 val);

    // Getter for bf3
    // public: ui8 getBf3();

    // Setter for bf3
    // public: void setBf3(ui8 val);

    // Getter for section_number
    // public: ui8 getSection_number();

    // Setter for section_number
    // public: void setSection_number(ui8 val);

    // Getter for last_section_number
    // public: ui8 getLast_section_number();

    // Setter for last_section_number
    // public: void setLast_section_number(ui8 val);

    // Getter for protocol_version
    // public: ui8 getProtocol_version();

    // Setter for protocol_version
    // public: void setProtocol_version(ui8 val);

    // Getter for num_channel_in_section
    // public: ui8 getNum_channel_in_section();

    // Setter for num_channel_in_section
    // public: void setNum_channel_in_section(ui8 val);

    // Getter for records
    // public: ArrayList(longform_virtual_channel_table_section_::record) getRecords();

    // Setter for records
    // public: void setRecords(ArrayList(longform_virtual_channel_table_section_::record) val);

    // Getter for bf4
    // public: ui16 getBf4();

    // Setter for bf4
    // public: void setBf4(ui16 val);

    // Getter for descriptors
    // public: ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val);

    // Getter for CRC
    // public: ui32 getCRC();

    // Setter for CRC
    // public: void setCRC(ui32 val);


public:
    int getReserved2( );

public:
    void setReserved2(int val);

public:
    int getVersion_number( );

public:
    void setVersion_number(int val);

public:
    int getCurrent_next_indicator( );

public:
    void setCurrent_next_indicator(int val);

public:
    int getReserved4_( );

public:
    void setReserved4_(int val);

public:
    int getAdditionalDescriptorsLength( );

public:
    void setAdditionalDescriptorsLength(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p);
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p);
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_* p);
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_LONGFORM_VIRTUAL_CHANNEL_TABLE_SECTION_
// End of code