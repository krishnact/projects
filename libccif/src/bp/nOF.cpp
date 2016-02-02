//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "nOF.h"

#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
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
nOF::nOF() {
    references= 0;


    // featureId
    featureId= (ui8)0;
    // status
    status= (ui8)0;
}
// Destructor
nOF::~nOF() {
    // featureId

    // status

}

int nOF::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // featureId
    {
        featureId=(istream.readUI8());
        retVal+=1;
    }
    // status
    {
        status=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int nOF::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read featureId
    {
        featureId=(istream.readUI8());
        retVal+=1;
    }
    // read status
    {
        status=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int nOF::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write featureId
    ostream.writeUI8(featureId);
    retVal +=1;
    // write status
    ostream.writeUI8(status);
    retVal +=1;

    return retVal;
}

int nOF::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("nOF\n");
    dc.increaseIndent();
    int retVal= 0;
    // write featureId
    dc.indent();
    dc.getPs().print("featureId=");
    dc.getPs().println((long)featureId);
    // write status
    dc.indent();
    dc.getPs().print("status=");
    dc.getPs().println((long)status);
    dc.decreaseIndent();
    return retVal;
}


// Getter for featureId
//ui8 nOF::getFeatureId()
//{
//return this->featureId;
//}

// Setter for featureId
//void nOF::setFeatureId(ui8 val)
//{
//this->featureId= val;
//}

// Getter for status
//ui8 nOF::getStatus()
//{
//return this->status;
//}

// Setter for status
//void nOF::setStatus(ui8 val)
//{
//this->status= val;
//}

int nOF::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_nOF__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::nOF* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::nOF* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code