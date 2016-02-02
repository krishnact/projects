//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "flist.h"

#ifdef org_himalay_ccif_flist__USE_SMART_PTR
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
flist::flist() {
    references= 0;


    // featureId
    featureId= (ui8)0;
    // length
    length= (ui16)0;
}
// Destructor
flist::~flist() {
    // featureId

    // length

}

int flist::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // featureId
    {
        featureId=(istream.readUI8());
        retVal+=1;
    }
    // length
    {
        length=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int flist::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read featureId
    {
        featureId=(istream.readUI8());
        retVal+=1;
    }
    // read length
    {
        length=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int flist::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write featureId
    ostream.writeUI8(featureId);
    retVal +=1;
    // write length
    ostream.writeUI16(length);
    retVal +=2;

    return retVal;
}

int flist::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("flist\n");
    dc.increaseIndent();
    int retVal= 0;
    // write featureId
    dc.indent();
    dc.getPs().print("featureId=");
    dc.getPs().println((long)featureId);
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    dc.decreaseIndent();
    return retVal;
}


// Getter for featureId
//ui8 flist::getFeatureId()
//{
//return this->featureId;
//}

// Setter for featureId
//void flist::setFeatureId(ui8 val)
//{
//this->featureId= val;
//}

// Getter for length
//ui16 flist::getLength()
//{
//return this->length;
//}

// Setter for length
//void flist::setLength(ui16 val)
//{
//this->length= val;
//}

int flist::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_flist__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::flist* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::flist* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code