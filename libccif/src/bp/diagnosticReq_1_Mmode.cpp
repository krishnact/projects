//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "diagnosticReq_1_Mmode.h"

#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
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
diagnosticReq_1_Mmode::diagnosticReq_1_Mmode() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // selfDiagnostics
    selfDiagnostics.setMemberSize(0);
}
// Destructor
diagnosticReq_1_Mmode::~diagnosticReq_1_Mmode() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // selfDiagnostics
    {
#ifndef org_himalay_ccif_diagnosticReq1mMosemsg_USE_SMART_PTR
        selfDiagnostics.deleteMembers();
#endif
    }
}

int diagnosticReq_1_Mmode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // selfDiagnostics
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_diagnosticReq1mMosemsg__PTR_TYPE temp;
        org_himalay_ccif_diagnosticReq1mMosemsg__NEW( temp);
        retVal += temp->read(istream);
        selfDiagnostics.add(temp);
    }
    return retVal;
}

int diagnosticReq_1_Mmode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read selfDiagnostics
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_diagnosticReq1mMosemsg__PTR_TYPE temp;
        org_himalay_ccif_diagnosticReq1mMosemsg__NEW( temp);
        retVal += temp->read(istream);
        selfDiagnostics.add(temp);
    }

    return retVal;
}

int diagnosticReq_1_Mmode::write(DataOutputStream& ostream) { // throws IOException
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
{   for (ArrayList_iterator(diagnosticReq1mMosemsg) it=  selfDiagnostics.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int diagnosticReq_1_Mmode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("diagnosticReq_1_Mmode\n");
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
{   for (ArrayList_iterator(diagnosticReq1mMosemsg) it=  selfDiagnostics.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE diagnosticReq_1_Mmode::getHeader()
//{
//return this->header;
//}

// Setter for header
//void diagnosticReq_1_Mmode::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 diagnosticReq_1_Mmode::getLength()
//{
//return this->length;
//}

// Setter for length
//void diagnosticReq_1_Mmode::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for selfDiagnostics
//ArrayList(diagnosticReq1mMosemsg) diagnosticReq_1_Mmode::getSelfDiagnostics()
//{
//return this->selfDiagnostics;
//}

// Setter for selfDiagnostics
//void diagnosticReq_1_Mmode::setSelfDiagnostics(ArrayList(diagnosticReq1mMosemsg) val)
//{
//this->selfDiagnostics= val;
//}

int diagnosticReq_1_Mmode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void diagnosticReq_1_Mmode::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE diagnosticReq_1_Mmode::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_diagnosticReq_1_Mmode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq_1_Mmode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq_1_Mmode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code