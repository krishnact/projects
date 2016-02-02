#ifndef ORG_HIMALAY_CCIF_VIDEOFORMAT
#define ORG_HIMALAY_CCIF_VIDEOFORMAT
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_VideoFormat__USE_SMART_PTR
#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_VideoFormat__PTR_TYPE boost::shared_ptr<VideoFormat>
#define org_himalay_ccif_VideoFormat__NEW(x) {/** Serious **/x = org_himalay_ccif_VideoFormat__PTR_TYPE(new VideoFormat()); }
#define org_himalay_ccif_VideoFormat__INIT(x)
#define org_himalay_ccif_VideoFormat__DELETE(x)
#else
#define org_himalay_ccif_VideoFormat__PTR_TYPE VideoFormat*
#define org_himalay_ccif_VideoFormat__NEW(x) {x= new VideoFormat();}
#define org_himalay_ccif_VideoFormat__INIT(x)  x=NULL;
#define org_himalay_ccif_VideoFormat__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
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
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
class VideoFormat;
typedef ::boost::shared_ptr<VideoFormat> VideoFormatPtr;
#endif

class VideoFormat :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // horizontalLine ---
public:
    ui16 horizontalLine ;
    // verticalline ---
public:
    ui16 verticalline ;
    // frameRate ---
public:
    ui8 frameRate ;
    // bf1 ---
public:
    ui8 bf1 ;


public:
    VideoFormat (); // throws Exception
    virtual ~VideoFormat ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for horizontalLine
    // public: ui16 getHorizontalLine();

    // Setter for horizontalLine
    // public: void setHorizontalLine(ui16 val);

    // Getter for verticalline
    // public: ui16 getVerticalline();

    // Setter for verticalline
    // public: void setVerticalline(ui16 val);

    // Getter for frameRate
    // public: ui8 getFrameRate();

    // Setter for frameRate
    // public: void setFrameRate(ui8 val);

    // Getter for bf1
    // public: ui8 getBf1();

    // Setter for bf1
    // public: void setBf1(ui8 val);


public:
    int getAspectRatio( );

public:
    void setAspectRatio(int val);

public:
    int getProgInterType( );

public:
    void setProgInterType(int val);

public:
    int getReserved( );

public:
    void setReserved(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_VideoFormat__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::VideoFormat* p);
void intrusive_ptr_release(org::himalay::ccif::VideoFormat* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_VIDEOFORMAT
// End of code