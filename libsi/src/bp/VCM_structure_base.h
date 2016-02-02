#ifndef ORG_HIMALAY_SI_VCM_STRUCTURE_BASE
#define ORG_HIMALAY_SI_VCM_STRUCTURE_BASE
//@Generated(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "DescriptorCollection.h" //header for org.himalay.si.DescriptorCollection


#include "S_VCT_SubtableFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_si_VCM_structure_base__USE_SMART_PTR
#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_VCM_structure_base__PTR_TYPE boost::shared_ptr<VCM_structure_base>
#define org_himalay_si_VCM_structure_base__NEW(x) {/** Serious **/x = org_himalay_si_VCM_structure_base__PTR_TYPE(new VCM_structure_base()); }
#define org_himalay_si_VCM_structure_base__INIT(x)
#define org_himalay_si_VCM_structure_base__DELETE(x)
#else
#define org_himalay_si_VCM_structure_base__PTR_TYPE VCM_structure_base*
#define org_himalay_si_VCM_structure_base__NEW(x) {x= new VCM_structure_base();}
#define org_himalay_si_VCM_structure_base__INIT(x)  x=NULL;
#define org_himalay_si_VCM_structure_base__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE boost::shared_ptr<VCM_structure_base::virtual_channel::MpegInfo>
//#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__NEW(x) {x =new VCM_structure_base::virtual_channel::MpegInfo();}
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__NEW(x) {/** Serious **/x = org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE(new VCM_structure_base::virtual_channel::MpegInfo()); }
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__INIT(x)
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__DELETE(x)
#else
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE VCM_structure_base::virtual_channel::MpegInfo*
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__NEW(x) {x= new VCM_structure_base::virtual_channel::MpegInfo();}
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__INIT(x)  x=NULL;
#define org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE boost::shared_ptr<VCM_structure_base::virtual_channel::Non_MpegInfo>
//#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__NEW(x) {x =new VCM_structure_base::virtual_channel::Non_MpegInfo();}
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__NEW(x) {/** Serious **/x = org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE(new VCM_structure_base::virtual_channel::Non_MpegInfo()); }
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__INIT(x)
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__DELETE(x)
#else
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE VCM_structure_base::virtual_channel::Non_MpegInfo*
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__NEW(x) {x= new VCM_structure_base::virtual_channel::Non_MpegInfo();}
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__INIT(x)  x=NULL;
#define org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_si_VCM_structure_base_virtual_channel__PTR_TYPE boost::shared_ptr<VCM_structure_base::virtual_channel>
//#define org_himalay_si_VCM_structure_base_virtual_channel__NEW(x) {x =new VCM_structure_base::virtual_channel();}
#define org_himalay_si_VCM_structure_base_virtual_channel__NEW(x) {/** Serious **/x = org_himalay_si_VCM_structure_base_virtual_channel__PTR_TYPE(new VCM_structure_base::virtual_channel()); }
#define org_himalay_si_VCM_structure_base_virtual_channel__INIT(x)
#define org_himalay_si_VCM_structure_base_virtual_channel__DELETE(x)
#else
#define org_himalay_si_VCM_structure_base_virtual_channel__PTR_TYPE VCM_structure_base::virtual_channel*
#define org_himalay_si_VCM_structure_base_virtual_channel__NEW(x) {x= new VCM_structure_base::virtual_channel();}
#define org_himalay_si_VCM_structure_base_virtual_channel__INIT(x)  x=NULL;
#define org_himalay_si_VCM_structure_base_virtual_channel__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
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




#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
class VCM_structure_base;
typedef ::boost::shared_ptr<VCM_structure_base> VCM_structure_basePtr;
#endif

class VCM_structure_base :public   S_VCT_SubtableFactory::S_VCT_Subtable { //Concrete type is VCM_structure
// member static classes
public:

#ifdef org_himalay_si_VCM_structure_base_virtual_channel__USE_SMART_PTR
    class virtual_channel;
    typedef ::boost::shared_ptr<virtual_channel> virtual_channelPtr;
#endif

    class virtual_channel :public BinMessage {
// member static classes
    public:

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__USE_SMART_PTR
        class MpegInfo;
        typedef ::boost::shared_ptr<MpegInfo> MpegInfoPtr;
#endif

        class MpegInfo :public BinMessage {

//  public:
//    long    references;

        public:

            VCM_structure_base::virtual_channel* parent;

            // members variables
            // CDS_reference ---
        public:
            ui8 CDS_reference ;
            // program_number ---
        public:
            ui16 program_number ;
            // MMS_reference ---
        public:
            ui8 MMS_reference ;


        public:
            MpegInfo (); // throws Exception
            virtual ~MpegInfo ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for CDS_reference
            // public: ui8 getCDS_reference();

            // Setter for CDS_reference
            // public: void setCDS_reference(ui8 val);

            // Getter for program_number
            // public: ui16 getProgram_number();

            // Setter for program_number
            // public: void setProgram_number(ui16 val);

            // Getter for MMS_reference
            // public: ui8 getMMS_reference();

            // Setter for MMS_reference
            // public: void setMMS_reference(ui8 val);


        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
#endif

// End of code
// member static classes
    public:

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__USE_SMART_PTR
        class Non_MpegInfo;
        typedef ::boost::shared_ptr<Non_MpegInfo> Non_MpegInfoPtr;
#endif

        class Non_MpegInfo :public BinMessage {

//  public:
//    long    references;

        public:

            VCM_structure_base::virtual_channel* parent;

            // members variables
            // CDS_reference ---
        public:
            ui8 CDS_reference ;
            // bf41 ---
        public:
            ui8 bf41 ;
            // reserver_zero ---
        public:
            ui16 reserver_zero ;


        public:
            Non_MpegInfo (); // throws Exception
            virtual ~Non_MpegInfo ();
        public:
            int readNoHeader(DataInputStream& istream);// throws IOException

        public:
            int read(DataInputStream& istream);// throws IOException


        public:
            int write(DataOutputStream& ostream);// throws IOException

        public:
            int dump(DumpContext& dc);// throws IOException


            // Getter for CDS_reference
            // public: ui8 getCDS_reference();

            // Setter for CDS_reference
            // public: void setCDS_reference(ui8 val);

            // Getter for bf41
            // public: ui8 getBf41();

            // Setter for bf41
            // public: void setBf41(ui8 val);

            // Getter for reserver_zero
            // public: ui16 getReserver_zero();

            // Setter for reserver_zero
            // public: void setReserver_zero(ui16 val);


        public:
            int getScrambled( );

        public:
            void setScrambled(int val);

        public:
            int getVideo_standard( );

        public:
            void setVideo_standard(int val);

        public:
            int getSize();// throws IOException

        };

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__USE_SMART_PTR
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p);
        void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
        void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
#endif

// End of code

//  public:
//    long    references;

    public:

        VCM_structure_base* parent;

        // members variables
        // bf1 ---
    public:
        ui16 bf1 ;
        // bf2 ---
    public:
        ui8 bf2 ;
        // src_or_app_id ---
    public:
        ui16 src_or_app_id ;
        // MpegInfoInstance ---
    public:
        org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE MpegInfoInstance ;
        // Non_MpegInfoInstance ---
    public:
        org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE Non_MpegInfoInstance ;
        // descriptors ---
    public:
        org_himalay_si_DescriptorCollection__PTR_TYPE descriptors ;


    public:
        virtual_channel (); // throws Exception
        virtual ~virtual_channel ();
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

        // Getter for src_or_app_id
        // public: ui16 getSrc_or_app_id();

        // Setter for src_or_app_id
        // public: void setSrc_or_app_id(ui16 val);

        // Getter for MpegInfoInstance
        // public: org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE getMpegInfoInstance();

        // Setter for MpegInfoInstance
        // public: void setMpegInfoInstance(org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE val);

        // Getter for Non_MpegInfoInstance
        // public: org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE getNon_MpegInfoInstance();

        // Setter for Non_MpegInfoInstance
        // public: void setNon_MpegInfoInstance(org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE val);

        // Getter for descriptors
        // public: org_himalay_si_DescriptorCollection__PTR_TYPE getDescriptors();

        // Setter for descriptors
        // public: void setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val);


    public:
        int getVirtual_channel_number( );

    public:
        void setVirtual_channel_number(int val);

    public:
        int getApplication_virtual_channel( );

    public:
        void setApplication_virtual_channel(int val);

    public:
        int getPath_select( );

    public:
        void setPath_select(int val);

    public:
        int getTransport_type( );

    public:
        void setTransport_type(int val);

    public:
        int getChannel_type( );

    public:
        void setChannel_type(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_si_VCM_structure_base_virtual_channel__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
    void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
    void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
    void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
    void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p);
    void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p);
    void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p);
    void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p);
#endif

// End of code

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;
    // bf2 ---
public:
    ui8 bf2 ;
    // activationTime ---
public:
    i32 activationTime ;
    // numberOfVCRecords ---
public:
    ui8 numberOfVCRecords ;
    // vcRecords ---
public:
    ArrayList(VCM_structure_base::virtual_channel) vcRecords ;


public:
    VCM_structure_base (); // throws Exception
    virtual ~VCM_structure_base ();
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

    // Getter for bf2
    // public: ui8 getBf2();

    // Setter for bf2
    // public: void setBf2(ui8 val);

    // Getter for activationTime
    // public: ui32 getActivationTime();

    // Setter for activationTime
    // public: void setActivationTime(ui32 val);

    // Getter for numberOfVCRecords
    // public: ui8 getNumberOfVCRecords();

    // Setter for numberOfVCRecords
    // public: void setNumberOfVCRecords(ui8 val);

    // Getter for vcRecords
    // public: ArrayList(VCM_structure_base::virtual_channel) getVcRecords();

    // Setter for vcRecords
    // public: void setVcRecords(ArrayList(VCM_structure_base::virtual_channel) val);


public:
    int getZero1( );

public:
    void setZero1(int val);

public:
    int getDescriptorsIncluded( );

public:
    void setDescriptorsIncluded(int val);

public:
    int getZero2( );

public:
    void setZero2(int val);

public:
    int getSplice( );

public:
    void setSplice(int val);

public:
    int getZero3( );

public:
    void setZero3(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p);
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p);
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p);
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p);
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base* p);
void intrusive_ptr_release(org::himalay::si::VCM_structure_base* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_SI_VCM_STRUCTURE_BASE
// End of code