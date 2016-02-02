//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "VctId.h"

#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
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
VctId::VctId() {
    references= 0;


    // vctId
    vctId= (ui16)0;
}
// Destructor
VctId::~VctId() {
    // vctId

}

int VctId::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // vctId
    {
        vctId=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int VctId::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read vctId
    {
        vctId=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int VctId::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write vctId
    ostream.writeUI16(vctId);
    retVal +=2;

    return retVal;
}

int VctId::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("VctId\n");
    dc.increaseIndent();
    int retVal= 0;
    // write vctId
    dc.indent();
    dc.getPs().print("vctId=");
    dc.getPs().println((long)vctId);
    dc.decreaseIndent();
    return retVal;
}


// Getter for vctId
//ui16 VctId::getVctId()
//{
//return this->vctId;
//}

// Setter for vctId
//void VctId::setVctId(ui16 val)
//{
//this->vctId= val;
//}

int VctId::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_VctId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::VctId* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::VctId* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code