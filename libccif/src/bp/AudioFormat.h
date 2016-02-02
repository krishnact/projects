#ifndef ORG_HIMALAY_CCIF_AUDIOFORMAT
#define ORG_HIMALAY_CCIF_AUDIOFORMAT
//@Generated(date = "Mon Feb 01 22:30:14 EST 2016")
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
#define org_himalay_ccif_AudioFormat__USE_SMART_PTR
#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_AudioFormat__PTR_TYPE boost::shared_ptr<AudioFormat>
#define org_himalay_ccif_AudioFormat__NEW(x) {/** Serious **/x = org_himalay_ccif_AudioFormat__PTR_TYPE(new AudioFormat()); }
#define org_himalay_ccif_AudioFormat__INIT(x)
#define org_himalay_ccif_AudioFormat__DELETE(x)
#else
#define org_himalay_ccif_AudioFormat__PTR_TYPE AudioFormat*
#define org_himalay_ccif_AudioFormat__NEW(x) {x= new AudioFormat();}
#define org_himalay_ccif_AudioFormat__INIT(x)  x=NULL;
#define org_himalay_ccif_AudioFormat__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
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




#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
class AudioFormat;
typedef ::boost::shared_ptr<AudioFormat> AudioFormatPtr;
#endif

class AudioFormat :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // bf1 ---
public:
    ui8 bf1 ;


public:
    AudioFormat (); // throws Exception
    virtual ~AudioFormat ();
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


public:
    int getAudioSampleSize( );

public:
    void setAudioSampleSize(int val);

public:
    int getAudioFormat( );

public:
    void setAudioFormat(int val);

public:
    int getAudioSamplefreq( );

public:
    void setAudioSamplefreq(int val);

public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::AudioFormat* p);
void intrusive_ptr_release(org::himalay::ccif::AudioFormat* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_AUDIOFORMAT
// End of code