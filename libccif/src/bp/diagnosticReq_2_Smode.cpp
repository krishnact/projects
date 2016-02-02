//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "diagnosticReq_2_Smode.h"

#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
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
diagnosticReq_2_Smode::diagnosticReq_2_Smode() {
    references= 0;


    // length
    length= (ui8)0;
    // selfDiagnostics
    org_himalay_msgs_runtime_ByteArray_NEW(selfDiagnostics);
    selfDiagnostics->setSizeType("FIRST_UI8");
}
// Destructor
diagnosticReq_2_Smode::~diagnosticReq_2_Smode() {
    // length

    // selfDiagnostics
    org_himalay_msgs_runtime_ByteArray_DELETE( selfDiagnostics);
}

int diagnosticReq_2_Smode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // selfDiagnostics
    {
        retVal+=selfDiagnostics->read(istream);
    }
    return retVal;
}

int diagnosticReq_2_Smode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read selfDiagnostics
    {
        retVal+=selfDiagnostics->read(istream);
    }

    return retVal;
}

int diagnosticReq_2_Smode::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for selfDiagnostics**/
    }

    int retVal= 0;
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write selfDiagnostics
    {
        retVal += selfDiagnostics->write(ostream);
    }

    return retVal;
}

int diagnosticReq_2_Smode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("diagnosticReq_2_Smode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    // write selfDiagnostics
    dc.indent();
    dc.getPs().print("selfDiagnostics");
    selfDiagnostics->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for length
//ui8 diagnosticReq_2_Smode::getLength()
//{
//return this->length;
//}

// Setter for length
//void diagnosticReq_2_Smode::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for selfDiagnostics
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE diagnosticReq_2_Smode::getSelfDiagnostics()
//{
//return this->selfDiagnostics;
//}

// Setter for selfDiagnostics
//void diagnosticReq_2_Smode::setSelfDiagnostics(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->selfDiagnostics= val;
//}

int diagnosticReq_2_Smode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_diagnosticReq_2_Smode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq_2_Smode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq_2_Smode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code