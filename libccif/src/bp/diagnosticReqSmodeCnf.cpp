//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "diagnosticReqSmodeCnf.h"

#ifdef org_himalay_ccif_diagnosticReqSmodeCnf__USE_SMART_PTR
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
diagnosticReqSmodeCnf::diagnosticReqSmodeCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // selfDiagnostics
    org_himalay_msgs_runtime_ByteArray_NEW(selfDiagnostics);
    selfDiagnostics->setSizeType("FIRST_UI8");
}
// Destructor
diagnosticReqSmodeCnf::~diagnosticReqSmodeCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // selfDiagnostics
    org_himalay_msgs_runtime_ByteArray_DELETE( selfDiagnostics);
}

int diagnosticReqSmodeCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
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

int diagnosticReqSmodeCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
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

int diagnosticReqSmodeCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for selfDiagnostics**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write selfDiagnostics
    {
        retVal += selfDiagnostics->write(ostream);
    }

    return retVal;
}

int diagnosticReqSmodeCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("diagnosticReqSmodeCnf\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
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


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE diagnosticReqSmodeCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void diagnosticReqSmodeCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 diagnosticReqSmodeCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void diagnosticReqSmodeCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for selfDiagnostics
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE diagnosticReqSmodeCnf::getSelfDiagnostics()
//{
//return this->selfDiagnostics;
//}

// Setter for selfDiagnostics
//void diagnosticReqSmodeCnf::setSelfDiagnostics(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->selfDiagnostics= val;
//}

int diagnosticReqSmodeCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void diagnosticReqSmodeCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE diagnosticReqSmodeCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_diagnosticReqSmodeCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReqSmodeCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::diagnosticReqSmodeCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code