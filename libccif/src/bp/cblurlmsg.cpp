//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "cblurlmsg.h"

#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif

// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;

// Constructor
cblurlmsg::cblurlmsg() {
    references= 0;


    // urlType
    urlType= (ui8)0;
    // urlchars
    org_himalay_msgs_runtime_ByteArray_NEW(urlchars);
    urlchars->setSizeType("FIRST_UI8");
}
// Destructor
cblurlmsg::~cblurlmsg() {
    // urlType

    // urlchars
    org_himalay_msgs_runtime_ByteArray_DELETE( urlchars);
}

int cblurlmsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // urlType
    {
        urlType=(istream.readUI8());
        retVal+=1;
    }
    // urlchars
    {
        retVal+=urlchars->read(istream);
    }
    return retVal;
}

int cblurlmsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read urlType
    {
        urlType=(istream.readUI8());
        retVal+=1;
    }
    // read urlchars
    {
        retVal+=urlchars->read(istream);
    }

    return retVal;
}

int cblurlmsg::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for urlchars**/
    }

    int retVal= 0;
    // write urlType
    ostream.writeUI8(urlType);
    retVal +=1;
    // write urlchars
    {
        retVal += urlchars->write(ostream);
    }

    return retVal;
}

int cblurlmsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("cblurlmsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write urlType
    dc.indent();
    dc.getPs().print("urlType=");
    dc.getPs().println((long)urlType);
    // write urlchars
    dc.indent();
    dc.getPs().print("urlchars");
    urlchars->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for urlType
//ui8 cblurlmsg::getUrlType()
//{
//return this->urlType;
//}

// Setter for urlType
//void cblurlmsg::setUrlType(ui8 val)
//{
//this->urlType= val;
//}

// Getter for urlchars
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE cblurlmsg::getUrlchars()
//{
//return this->urlchars;
//}

// Setter for urlchars
//void cblurlmsg::setUrlchars(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->urlchars= val;
//}

int cblurlmsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_cblurlmsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::cblurlmsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::cblurlmsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code