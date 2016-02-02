//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "cdlGroupId.h"

#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
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
cdlGroupId::cdlGroupId() {
    references= 0;


    // groupId
    groupId= (ui16)0;
}
// Destructor
cdlGroupId::~cdlGroupId() {
    // groupId

}

int cdlGroupId::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // groupId
    {
        groupId=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int cdlGroupId::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read groupId
    {
        groupId=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int cdlGroupId::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write groupId
    ostream.writeUI16(groupId);
    retVal +=2;

    return retVal;
}

int cdlGroupId::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("cdlGroupId\n");
    dc.increaseIndent();
    int retVal= 0;
    // write groupId
    dc.indent();
    dc.getPs().print("groupId=");
    dc.getPs().println((long)groupId);
    dc.decreaseIndent();
    return retVal;
}


// Getter for groupId
//ui16 cdlGroupId::getGroupId()
//{
//return this->groupId;
//}

// Setter for groupId
//void cdlGroupId::setGroupId(ui16 val)
//{
//this->groupId= val;
//}

int cdlGroupId::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_cdlGroupId__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::cdlGroupId* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::cdlGroupId* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code