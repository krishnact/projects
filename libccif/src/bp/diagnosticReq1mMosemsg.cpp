//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "diagnosticReq1mMosemsg.h"

#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
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
diagnosticReq1mMosemsg::diagnosticReq1mMosemsg() {
    references= 0;


    // diagnosticid
    diagnosticid= (ui8)0;
    // itsid
    itsid= (ui8)0;
}
// Destructor
diagnosticReq1mMosemsg::~diagnosticReq1mMosemsg() {
    // diagnosticid

    // itsid

}

int diagnosticReq1mMosemsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // diagnosticid
    {
        diagnosticid=(istream.readUI8());
        retVal+=1;
    }
    // itsid
    {
        itsid=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int diagnosticReq1mMosemsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read diagnosticid
    {
        diagnosticid=(istream.readUI8());
        retVal+=1;
    }
    // read itsid
    {
        itsid=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int diagnosticReq1mMosemsg::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write diagnosticid
    ostream.writeUI8(diagnosticid);
    retVal +=1;
    // write itsid
    ostream.writeUI8(itsid);
    retVal +=1;

    return retVal;
}

int diagnosticReq1mMosemsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("diagnosticReq1mMosemsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write diagnosticid
    dc.indent();
    dc.getPs().print("diagnosticid=");
    dc.getPs().println((long)diagnosticid);
    // write itsid
    dc.indent();
    dc.getPs().print("itsid=");
    dc.getPs().println((long)itsid);
    dc.decreaseIndent();
    return retVal;
}


// Getter for diagnosticid
//ui8 diagnosticReq1mMosemsg::getDiagnosticid()
//{
//return this->diagnosticid;
//}

// Setter for diagnosticid
//void diagnosticReq1mMosemsg::setDiagnosticid(ui8 val)
//{
//this->diagnosticid= val;
//}

// Getter for itsid
//ui8 diagnosticReq1mMosemsg::getItsid()
//{
//return this->itsid;
//}

// Setter for itsid
//void diagnosticReq1mMosemsg::setItsid(ui8 val)
//{
//this->itsid= val;
//}

int diagnosticReq1mMosemsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_diagnosticReq1mMosemsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::diagnosticReq1mMosemsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::diagnosticReq1mMosemsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code