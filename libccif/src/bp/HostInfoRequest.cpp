//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostInfoRequest.h"

#ifdef org_himalay_ccif_HostInfoRequest__USE_SMART_PTR
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
HostInfoRequest::HostInfoRequest() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // supportedDownloadType
    supportedDownloadType= (ui8)0;
}
// Destructor
HostInfoRequest::~HostInfoRequest() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // supportedDownloadType

}

int HostInfoRequest::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // supportedDownloadType
    {
        supportedDownloadType=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int HostInfoRequest::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read supportedDownloadType
    {
        supportedDownloadType=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int HostInfoRequest::write(DataOutputStream& ostream) { // throws IOException
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
    // write supportedDownloadType
    ostream.writeUI8(supportedDownloadType);
    retVal +=1;

    return retVal;
}

int HostInfoRequest::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostInfoRequest\n");
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
    // write supportedDownloadType
    dc.indent();
    dc.getPs().print("supportedDownloadType=");
    dc.getPs().println((long)supportedDownloadType);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE HostInfoRequest::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HostInfoRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HostInfoRequest::getLength()
//{
//return this->length;
//}

// Setter for length
//void HostInfoRequest::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for supportedDownloadType
//ui8 HostInfoRequest::getSupportedDownloadType()
//{
//return this->supportedDownloadType;
//}

// Setter for supportedDownloadType
//void HostInfoRequest::setSupportedDownloadType(ui8 val)
//{
//this->supportedDownloadType= val;
//}

int HostInfoRequest::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HostInfoRequest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HostInfoRequest::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HostInfoRequest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HostInfoRequest* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HostInfoRequest* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code