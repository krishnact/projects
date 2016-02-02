//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DiagnosticCnf.h"

#ifdef org_himalay_ccif_DiagnosticCnf__USE_SMART_PTR
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
DiagnosticCnf::DiagnosticCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // numberOfDiag
    org_himalay_msgs_runtime_ByteArray_NEW(numberOfDiag);
    numberOfDiag->setSizeType("FIRST_UI8");
}
// Destructor
DiagnosticCnf::~DiagnosticCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // numberOfDiag
    org_himalay_msgs_runtime_ByteArray_DELETE( numberOfDiag);
}

int DiagnosticCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // numberOfDiag
    {
        retVal+=numberOfDiag->read(istream);
    }
    return retVal;
}

int DiagnosticCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read numberOfDiag
    {
        retVal+=numberOfDiag->read(istream);
    }

    return retVal;
}

int DiagnosticCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for numberOfDiag**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write numberOfDiag
    {
        retVal += numberOfDiag->write(ostream);
    }

    return retVal;
}

int DiagnosticCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DiagnosticCnf\n");
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
    // write numberOfDiag
    dc.indent();
    dc.getPs().print("numberOfDiag");
    numberOfDiag->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE DiagnosticCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void DiagnosticCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 DiagnosticCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void DiagnosticCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for numberOfDiag
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE DiagnosticCnf::getNumberOfDiag()
//{
//return this->numberOfDiag;
//}

// Setter for numberOfDiag
//void DiagnosticCnf::setNumberOfDiag(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->numberOfDiag= val;
//}

int DiagnosticCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void DiagnosticCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE DiagnosticCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_DiagnosticCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DiagnosticCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DiagnosticCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code