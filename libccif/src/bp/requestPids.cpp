//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "requestPids.h"

#ifdef org_himalay_ccif_requestPids__USE_SMART_PTR
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
requestPids::requestPids() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // ltsid
    ltsid= (ui8)0;
    // pidFilteringStatus
    pidFilteringStatus= (ui8)0;
}
// Destructor
requestPids::~requestPids() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // ltsid

    // pidFilteringStatus

}

int requestPids::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // pidFilteringStatus
    {
        pidFilteringStatus=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int requestPids::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // read pidFilteringStatus
    {
        pidFilteringStatus=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int requestPids::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }




    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write ltsid
    ostream.writeUI8(ltsid);
    retVal +=1;
    // write pidFilteringStatus
    ostream.writeUI8(pidFilteringStatus);
    retVal +=1;

    return retVal;
}

int requestPids::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("requestPids\n");
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
    // write ltsid
    dc.indent();
    dc.getPs().print("ltsid=");
    dc.getPs().println((long)ltsid);
    // write pidFilteringStatus
    dc.indent();
    dc.getPs().print("pidFilteringStatus=");
    dc.getPs().println((long)pidFilteringStatus);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE requestPids::getHeader()
//{
//return this->header;
//}

// Setter for header
//void requestPids::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 requestPids::getLength()
//{
//return this->length;
//}

// Setter for length
//void requestPids::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for ltsid
//ui8 requestPids::getLtsid()
//{
//return this->ltsid;
//}

// Setter for ltsid
//void requestPids::setLtsid(ui8 val)
//{
//this->ltsid= val;
//}

// Getter for pidFilteringStatus
//ui8 requestPids::getPidFilteringStatus()
//{
//return this->pidFilteringStatus;
//}

// Setter for pidFilteringStatus
//void requestPids::setPidFilteringStatus(ui8 val)
//{
//this->pidFilteringStatus= val;
//}

int requestPids::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void requestPids::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE requestPids::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_requestPids__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::requestPids* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::requestPids* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code