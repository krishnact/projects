#ifndef ORG_HIMALAY_CCIF_CODEVERSIONTABLE1_2
#define ORG_HIMALAY_CCIF_CODEVERSIONTABLE1_2
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "APDUHeader.h" //header for org.himalay.ccif.APDUHeader
#include "CodeVeriFicationCertiFication.h" //header for org.himalay.ccif.CodeVeriFicationCertiFication
#include "codeVersionTableMsg.h" //header for org.himalay.ccif.codeVersionTableMsg
#include "MacAddress.h" //header for org.himalay.ccif.MacAddress
#include "IPddress.h" //header for org.himalay.ccif.IPddress


#include "APDUBaseFactory.h"


/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_codeVersionTable1_2__PTR_TYPE boost::shared_ptr<codeVersionTable1_2>
#define org_himalay_ccif_codeVersionTable1_2__NEW(x) {/** Serious **/x = org_himalay_ccif_codeVersionTable1_2__PTR_TYPE(new codeVersionTable1_2()); }
#define org_himalay_ccif_codeVersionTable1_2__INIT(x)
#define org_himalay_ccif_codeVersionTable1_2__DELETE(x)
#else
#define org_himalay_ccif_codeVersionTable1_2__PTR_TYPE codeVersionTable1_2*
#define org_himalay_ccif_codeVersionTable1_2__NEW(x) {x= new codeVersionTable1_2();}
#define org_himalay_ccif_codeVersionTable1_2__INIT(x)  x=NULL;
#define org_himalay_ccif_codeVersionTable1_2__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE boost::shared_ptr<codeVersionTable1_2::statusfld>
//#define org_himalay_ccif_codeVersionTable1_2_statusfld__NEW(x) {x =new codeVersionTable1_2::statusfld();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld__NEW(x) {/** Serious **/x = org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE(new codeVersionTable1_2::statusfld()); }
#define org_himalay_ccif_codeVersionTable1_2_statusfld__INIT(x)
#define org_himalay_ccif_codeVersionTable1_2_statusfld__DELETE(x)
#else
#define org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE codeVersionTable1_2::statusfld*
#define org_himalay_ccif_codeVersionTable1_2_statusfld__NEW(x) {x= new codeVersionTable1_2::statusfld();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld__INIT(x)  x=NULL;
#define org_himalay_ccif_codeVersionTable1_2_statusfld__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE boost::shared_ptr<codeVersionTable1_2::statusfld2>
//#define org_himalay_ccif_codeVersionTable1_2_statusfld2__NEW(x) {x =new codeVersionTable1_2::statusfld2();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__NEW(x) {/** Serious **/x = org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE(new codeVersionTable1_2::statusfld2()); }
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__INIT(x)
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__DELETE(x)
#else
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE codeVersionTable1_2::statusfld2*
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__NEW(x) {x= new codeVersionTable1_2::statusfld2();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__INIT(x)  x=NULL;
#define org_himalay_ccif_codeVersionTable1_2_statusfld2__DELETE(x)  {delete(x);x=NULL;}
#endif


#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE boost::shared_ptr<codeVersionTable1_2::statusfld3>
//#define org_himalay_ccif_codeVersionTable1_2_statusfld3__NEW(x) {x =new codeVersionTable1_2::statusfld3();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__NEW(x) {/** Serious **/x = org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE(new codeVersionTable1_2::statusfld3()); }
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__INIT(x)
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__DELETE(x)
#else
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE codeVersionTable1_2::statusfld3*
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__NEW(x) {x= new codeVersionTable1_2::statusfld3();}
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__INIT(x)  x=NULL;
#define org_himalay_ccif_codeVersionTable1_2_statusfld3__DELETE(x)  {delete(x);x=NULL;}
#endif


//#ifndef ArrayList
#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
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




#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
class codeVersionTable1_2;
typedef ::boost::shared_ptr<codeVersionTable1_2> codeVersionTable1_2Ptr;
#endif

class codeVersionTable1_2 :public   APDUBaseFactory::APDUBase { //Concrete type is codeVersionTable1_2
// member static classes
public:

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld__USE_SMART_PTR
    class statusfld;
    typedef ::boost::shared_ptr<statusfld> statusfldPtr;
#endif

    class statusfld :public BinMessage {

//  public:
//    long    references;

    public:

        codeVersionTable1_2* parent;

        // members variables
        // frequencyVector ---
    public:
        ui16 frequencyVector ;
        // modulationType ---
    public:
        ui8 modulationType ;
        // bf1 ---
    public:
        ui16 bf1 ;


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


        // Getter for frequencyVector
        // public: ui16 getFrequencyVector();

        // Setter for frequencyVector
        // public: void setFrequencyVector(ui16 val);

        // Getter for modulationType
        // public: ui8 getModulationType();

        // Setter for modulationType
        // public: void setModulationType(ui8 val);

        // Getter for bf1
        // public: ui16 getBf1();

        // Setter for bf1
        // public: void setBf1(ui16 val);


    public:
        int getReserved( );

    public:
        void setReserved(int val);

    public:
        int getPid( );

    public:
        void setPid(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
#endif

// End of code
// member static classes
public:

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld2__USE_SMART_PTR
    class statusfld2;
    typedef ::boost::shared_ptr<statusfld2> statusfld2Ptr;
#endif

    class statusfld2 :public BinMessage {

//  public:
//    long    references;

    public:

        codeVersionTable1_2* parent;

        // members variables
        // mcAddress ---
    public:
        org_himalay_ccif_MacAddress__PTR_TYPE mcAddress ;
        // sourceIpAddress ---
    public:
        org_himalay_ccif_IPddress__PTR_TYPE sourceIpAddress ;
        // destinationIpAddress ---
    public:
        org_himalay_ccif_IPddress__PTR_TYPE destinationIpAddress ;
        // sourcePortNumber ---
    public:
        ui16 sourcePortNumber ;
        // destinatioPortNumber ---
    public:
        ui16 destinatioPortNumber ;
        // applicationId ---
    public:
        ui16 applicationId ;
        // modulationType ---
    public:
        ui8 modulationType ;
        // bf2 ---
    public:
        ui16 bf2 ;


    public:
        statusfld2 (); // throws Exception
        virtual ~statusfld2 ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for mcAddress
        // public: org_himalay_ccif_MacAddress__PTR_TYPE getMcAddress();

        // Setter for mcAddress
        // public: void setMcAddress(org_himalay_ccif_MacAddress__PTR_TYPE val);

        // Getter for sourceIpAddress
        // public: org_himalay_ccif_IPddress__PTR_TYPE getSourceIpAddress();

        // Setter for sourceIpAddress
        // public: void setSourceIpAddress(org_himalay_ccif_IPddress__PTR_TYPE val);

        // Getter for destinationIpAddress
        // public: org_himalay_ccif_IPddress__PTR_TYPE getDestinationIpAddress();

        // Setter for destinationIpAddress
        // public: void setDestinationIpAddress(org_himalay_ccif_IPddress__PTR_TYPE val);

        // Getter for sourcePortNumber
        // public: ui16 getSourcePortNumber();

        // Setter for sourcePortNumber
        // public: void setSourcePortNumber(ui16 val);

        // Getter for destinatioPortNumber
        // public: ui16 getDestinatioPortNumber();

        // Setter for destinatioPortNumber
        // public: void setDestinatioPortNumber(ui16 val);

        // Getter for applicationId
        // public: ui16 getApplicationId();

        // Setter for applicationId
        // public: void setApplicationId(ui16 val);

        // Getter for modulationType
        // public: ui8 getModulationType();

        // Setter for modulationType
        // public: void setModulationType(ui8 val);

        // Getter for bf2
        // public: ui16 getBf2();

        // Setter for bf2
        // public: void setBf2(ui16 val);


    public:
        int getPid( );

    public:
        void setPid(int val);

    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld2__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
#endif

// End of code
// member static classes
public:

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld3__USE_SMART_PTR
    class statusfld3;
    typedef ::boost::shared_ptr<statusfld3> statusfld3Ptr;
#endif

    class statusfld3 :public BinMessage {

//  public:
//    long    references;

    public:

        codeVersionTable1_2* parent;

        // members variables
        // ftpServerAddress ---
    public:
        org_himalay_ccif_IPddress__PTR_TYPE ftpServerAddress ;


    public:
        statusfld3 (); // throws Exception
        virtual ~statusfld3 ();
    public:
        int readNoHeader(DataInputStream& istream);// throws IOException

    public:
        int read(DataInputStream& istream);// throws IOException


    public:
        int write(DataOutputStream& ostream);// throws IOException

    public:
        int dump(DumpContext& dc);// throws IOException


        // Getter for ftpServerAddress
        // public: org_himalay_ccif_IPddress__PTR_TYPE getFtpServerAddress();

        // Setter for ftpServerAddress
        // public: void setFtpServerAddress(org_himalay_ccif_IPddress__PTR_TYPE val);


    public:
        int getSize();// throws IOException

    };

#ifdef org_himalay_ccif_codeVersionTable1_2_statusfld3__USE_SMART_PTR
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
    void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
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
    // configurationCountChange ---
public:
    ui8 configurationCountChange ;
    // statusField ---
public:
    ui8 statusField ;
    // pgmmsg ---
public:
    ArrayList(codeVersionTableMsg) pgmmsg ;
    // bf1 ---
public:
    ui8 bf1 ;
    // statusfldInstance ---
public:
    org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE statusfldInstance ;
    // statusfld2Instance ---
public:
    org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE statusfld2Instance ;
    // statusfld3Instance ---
public:
    org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE statusfld3Instance ;
    // codeFileByte ---
public:
    org_himalay_msgs_runtime_ByteArray_PTR_TYPE codeFileByte; ;
    // codeVeriFicationCertiFication ---
public:
    org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE codeVeriFicationCertiFication ;


public:
    codeVersionTable1_2 (); // throws Exception
    virtual ~codeVersionTable1_2 ();
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

    // Getter for configurationCountChange
    // public: ui8 getConfigurationCountChange();

    // Setter for configurationCountChange
    // public: void setConfigurationCountChange(ui8 val);

    // Getter for statusField
    // public: ui8 getStatusField();

    // Setter for statusField
    // public: void setStatusField(ui8 val);

    // Getter for pgmmsg
    // public: ArrayList(codeVersionTableMsg) getPgmmsg();

    // Setter for pgmmsg
    // public: void setPgmmsg(ArrayList(codeVersionTableMsg) val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);

    // Getter for statusfldInstance
    // public: org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE getStatusfldInstance();

    // Setter for statusfldInstance
    // public: void setStatusfldInstance(org_himalay_ccif_codeVersionTable1_2_statusfld__PTR_TYPE val);

    // Getter for statusfld2Instance
    // public: org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE getStatusfld2Instance();

    // Setter for statusfld2Instance
    // public: void setStatusfld2Instance(org_himalay_ccif_codeVersionTable1_2_statusfld2__PTR_TYPE val);

    // Getter for statusfld3Instance
    // public: org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE getStatusfld3Instance();

    // Setter for statusfld3Instance
    // public: void setStatusfld3Instance(org_himalay_ccif_codeVersionTable1_2_statusfld3__PTR_TYPE val);

    // Getter for codeFileByte
    // public: org_himalay_msgs_runtime_ByteArray_PTR_TYPE getCodeFileByte();

    // Setter for codeFileByte
    // public: void setCodeFileByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val);

    // Getter for codeVeriFicationCertiFication
    // public: org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE getCodeVeriFicationCertiFication();

    // Setter for codeVeriFicationCertiFication
    // public: void setCodeVeriFicationCertiFication(org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE val);


public:
    int getDownload_type( );

public:
    void setDownload_type(int val);

public:
    int getDownloadCommand( );

public:
    void setDownloadCommand(int val);

public:
    int getSize();// throws IOException

public:
    void setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header);

public:
    org_himalay_ccif_APDUHeader__PTR_TYPE getHeader();
};

#ifdef org_himalay_ccif_codeVersionTable1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld* p);
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld2* p);
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2::statusfld3* p);
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_2* p);
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_2* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CODEVERSIONTABLE1_2
// End of code