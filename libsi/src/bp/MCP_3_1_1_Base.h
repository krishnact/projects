#ifndef ORG_HIMALAY_SI_MCP_3_1_1_BASE
#define ORG_HIMALAY_SI_MCP_3_1_1_BASE
//@Generated(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "SCTE65_TableHeader.h" //header for org.himalay.si.SCTE65_TableHeader


#include "SCTE65TableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MCP_3_1_1_Base__PTR_TYPE boost::shared_ptr<MCP_3_1_1_Base>
#define org_himalay_si_MCP_3_1_1_Base__NEW(x) {/** Serious **/x = org_himalay_si_MCP_3_1_1_Base__PTR_TYPE(new MCP_3_1_1_Base()); }
#define org_himalay_si_MCP_3_1_1_Base__INIT(x)
#define org_himalay_si_MCP_3_1_1_Base__DELETE(x)
#else
#define org_himalay_si_MCP_3_1_1_Base__PTR_TYPE MCP_3_1_1_Base*
#define org_himalay_si_MCP_3_1_1_Base__NEW(x) {x= new MCP_3_1_1_Base();}
#define org_himalay_si_MCP_3_1_1_Base__INIT(x)  x=NULL;
#define org_himalay_si_MCP_3_1_1_Base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__PTR_TYPE boost::shared_ptr<MCP_3_1_1_Base::channelInfo::ch_descriptor>
//#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__NEW(x) {x =new MCP_3_1_1_Base::channelInfo::ch_descriptor();}
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__PTR_TYPE(new MCP_3_1_1_Base::channelInfo::ch_descriptor()); }
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__INIT(x)
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__DELETE(x)
#else
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__PTR_TYPE MCP_3_1_1_Base::channelInfo::ch_descriptor*
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__NEW(x) {x= new MCP_3_1_1_Base::channelInfo::ch_descriptor();}
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__PTR_TYPE boost::shared_ptr<MCP_3_1_1_Base::channelInfo>
//#define org_himalay_si_MCP_3_1_1_Base_channelInfo__NEW(x) {x =new MCP_3_1_1_Base::channelInfo();}
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__NEW(x) {/** Serious **/x = org_himalay_si_MCP_3_1_1_Base_channelInfo__PTR_TYPE(new MCP_3_1_1_Base::channelInfo()); }
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__INIT(x)
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__DELETE(x)
#else
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__PTR_TYPE MCP_3_1_1_Base::channelInfo*
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__NEW(x) {x= new MCP_3_1_1_Base::channelInfo();}
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__INIT(x)  x=NULL;
#define org_himalay_si_MCP_3_1_1_Base_channelInfo__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__PTR_TYPE boost::shared_ptr<MCP_3_1_1_Base::mc_descriptor>
//#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__NEW(x) {x =new MCP_3_1_1_Base::mc_descriptor();}
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__NEW(x) {/** Serious **/x = org_himalay_si_MCP_3_1_1_Base_mc_descriptor__PTR_TYPE(new MCP_3_1_1_Base::mc_descriptor()); }
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__INIT(x)
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__DELETE(x)
#else
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__PTR_TYPE MCP_3_1_1_Base::mc_descriptor*
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__NEW(x) {x= new MCP_3_1_1_Base::mc_descriptor();}
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__INIT(x)  x=NULL;
#define org_himalay_si_MCP_3_1_1_Base_mc_descriptor__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
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




#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
class MCP_3_1_1_Base;
typedef ::boost::shared_ptr<MCP_3_1_1_Base> MCP_3_1_1_BasePtr;
#endif

class MCP_3_1_1_Base :public   SCTE65TableFactory::SCTE65Table { //Concrete type is MCP_3_1_1
// member static classes
public:

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo__USE_SMART_PTR
    class channelInfo;
    typedef ::boost::shared_ptr<channelInfo> channelInfoPtr;
#endif

    class channelInfo :public BinMessage {
// member static classes
    public:

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__USE_SMART_PTR
        class ch_descriptor;
        typedef ::boost::shared_ptr<ch_descriptor> ch_descriptorPtr;
#endif

        class ch_descriptor :public BinMessage {

//  public:
//    long    references;

        public:

            MCP_3_1_1_Base::channelInfo* parent;

            // members variables
            // tag ---
        public:
            ui8 tag ;
            // descriptors ---
        public:
            org_himalay_msgs_runtime_ByteArray_PTR_TYPE descriptors; ;


        public:
            ch_descriptor (); // throws Exception
            virtual ~ch_descriptor ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for tag
            // public: ui8 getTag();

            // Setter for tag
            // public: void setTag(ui8 val);

            // Getter for descriptors
            // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getDescriptors();

            // Setter for descriptors
            // public: void setDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
        void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
        void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
        void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
        void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
        void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
        void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
        void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
#endif

// End of code

//  public:
//    long    references;

    public:

        MCP_3_1_1_Base* parent;

        // members variables
        // shortName ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE shortName; ;
        // chNumAndMM ---
    public:
        i32 chNumAndMM ;
        // frequency ---
    public:
        i32 frequency ;
        // channelTsid ---
    public:
        ui16 channelTsid ;
        // programNumn ---
    public:
        ui16 programNumn ;
        // bf2 ---
    public:
        ui16 bf2 ;
        // sourceId ---
    public:
        ui16 sourceId ;
        // bf3 ---
    public:
        ui16 bf3 ;
        // descriptors ---
    public:
        ArrayList(MCP_3_1_1_Base::channelInfo::ch_descriptor) descriptors ;


    public:
        channelInfo (); // throws Exception
        virtual ~channelInfo ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for shortName
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getShortName();

        // Setter for shortName
        // public: void setShortName(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

        // Getter for chNumAndMM
        // public: ui32 getChNumAndMM();

        // Setter for chNumAndMM
        // public: void setChNumAndMM(ui32 val);

        // Getter for frequency
        // public: ui32 getFrequency();

        // Setter for frequency
        // public: void setFrequency(ui32 val);

        // Getter for channelTsid
        // public: ui16 getChannelTsid();

        // Setter for channelTsid
        // public: void setChannelTsid(ui16 val);

        // Getter for programNumn
        // public: ui16 getProgramNumn();

        // Setter for programNumn
        // public: void setProgramNumn(ui16 val);

        // Getter for bf2
        // public: ui16 getBf2();

        // Setter for bf2
        // public: void setBf2(ui16 val);

        // Getter for sourceId
        // public: ui16 getSourceId();

        // Setter for sourceId
        // public: void setSourceId(ui16 val);

        // Getter for bf3
        // public: ui16 getBf3();

        // Setter for bf3
        // public: void setBf3(ui16 val);

        // Getter for descriptors
        // public: ArrayList(MCP_3_1_1_Base::channelInfo::ch_descriptor) getDescriptors();

        // Setter for descriptors
        // public: void setDescriptors(ArrayList(MCP_3_1_1_Base::channelInfo::ch_descriptor) val);


    public:
        int getETM_Location( );

    public:
        void setETM_Location(int val);

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
        int getReserved3( );

    public:
        void setReserved3(int val);

    public:
        int getServiceType( );

    public:
        void setServiceType(int val);

    public:
        int getReserved4( );

    public:
        void setReserved4(int val);

    public:
        int getDescriptorCount( );

    public:
        void setDescriptorCount(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
#endif

// End of code
// member static classes
public:

#ifdef org_himalay_si_MCP_3_1_1_Base_mc_descriptor__USE_SMART_PTR
    class mc_descriptor;
    typedef ::boost::shared_ptr<mc_descriptor> mc_descriptorPtr;
#endif

    class mc_descriptor :public BinMessage {

//  public:
//    long    references;

    public:

        MCP_3_1_1_Base* parent;

        // members variables
        // tag ---
    public:
        ui8 tag ;
        // descriptors ---
    public:
        org_himalay_msgs_runtime_ByteArray_PTR_TYPE descriptors; ;


    public:
        mc_descriptor (); // throws Exception
        virtual ~mc_descriptor ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for tag
        // public: ui8 getTag();

        // Setter for tag
        // public: void setTag(ui8 val);

        // Getter for descriptors
        // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getDescriptors();

        // Setter for descriptors
        // public: void setDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_MCP_3_1_1_Base_mc_descriptor__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
    void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
    void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // tableHeader ---
public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE tableHeader ;
    // tsid ---
public:
    ui16 tsid ;
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
    // num_of_channels_in_section ---
public:
    ui8 num_of_channels_in_section ;
    // channels ---
public:
    ArrayList(MCP_3_1_1_Base::channelInfo) channels ;
    // bf5 ---
public:
    ui16 bf5 ;
    // descriptors ---
public:
    ArrayList(MCP_3_1_1_Base::mc_descriptor) descriptors ;
    // CRC ---
public:
    i32 CRC ;


public:
    MCP_3_1_1_Base (); // throws Exception
    virtual ~MCP_3_1_1_Base ();
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

    // Getter for tsid
    // public: ui16 getTsid();

    // Setter for tsid
    // public: void setTsid(ui16 val);

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

    // Getter for num_of_channels_in_section
    // public: ui8 getNum_of_channels_in_section();

    // Setter for num_of_channels_in_section
    // public: void setNum_of_channels_in_section(ui8 val);

    // Getter for channels
    // public: ArrayList(MCP_3_1_1_Base::channelInfo) getChannels();

    // Setter for channels
    // public: void setChannels(ArrayList(MCP_3_1_1_Base::channelInfo) val);

    // Getter for bf5
    // public: ui16 getBf5();

    // Setter for bf5
    // public: void setBf5(ui16 val);

    // Getter for descriptors
    // public: ArrayList(MCP_3_1_1_Base::mc_descriptor) getDescriptors();

    // Setter for descriptors
    // public: void setDescriptors(ArrayList(MCP_3_1_1_Base::mc_descriptor) val);

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
    int getReserved4( );

public:
    void setReserved4(int val);

public:
    int getMcDescriptorCount( );

public:
    void setMcDescriptorCount(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header);

public:
    org_himalay_si_SCTE65_TableHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p);
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p);
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p);
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base* p);
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_MCP_3_1_1_BASE
// End of code