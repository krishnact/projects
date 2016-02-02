//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "memoryReportMsg.h"

#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
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
memoryReportMsg::memoryReportMsg() {
    references= 0;


    // memoryType
    memoryType= (ui8)0;
    // memorySize
    memorySize= (ui32)0;
}
// Destructor
memoryReportMsg::~memoryReportMsg() {
    // memoryType

    // memorySize

}

int memoryReportMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // memoryType
    {
        memoryType=(istream.readUI8());
        retVal+=1;
    }
    // memorySize
    {
        memorySize=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int memoryReportMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read memoryType
    {
        memoryType=(istream.readUI8());
        retVal+=1;
    }
    // read memorySize
    {
        memorySize=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int memoryReportMsg::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write memoryType
    ostream.writeUI8(memoryType);
    retVal +=1;
    // write memorySize
    ostream.writeUI32(memorySize);
    retVal +=4;

    return retVal;
}

int memoryReportMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("memoryReportMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write memoryType
    dc.indent();
    dc.getPs().print("memoryType=");
    dc.getPs().println((long)memoryType);
    // write memorySize
    dc.indent();
    dc.getPs().print("memorySize=");
    dc.getPs().println((long)memorySize);
    dc.decreaseIndent();
    return retVal;
}


// Getter for memoryType
//ui8 memoryReportMsg::getMemoryType()
//{
//return this->memoryType;
//}

// Setter for memoryType
//void memoryReportMsg::setMemoryType(ui8 val)
//{
//this->memoryType= val;
//}

// Getter for memorySize
//ui32 memoryReportMsg::getMemorySize()
//{
//return this->memorySize;
//}

// Setter for memorySize
//void memoryReportMsg::setMemorySize(ui32 val)
//{
//this->memorySize= val;
//}

int memoryReportMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_memoryReportMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::memoryReportMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::memoryReportMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code