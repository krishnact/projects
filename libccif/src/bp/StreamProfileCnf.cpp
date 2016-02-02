//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "StreamProfileCnf.h"

#ifdef org_himalay_ccif_StreamProfileCnf__USE_SMART_PTR
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
StreamProfileCnf::StreamProfileCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // NumberOfStreamsUsed
    NumberOfStreamsUsed= (ui8)0;
}
// Destructor
StreamProfileCnf::~StreamProfileCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // NumberOfStreamsUsed

}

int StreamProfileCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // NumberOfStreamsUsed
    {
        NumberOfStreamsUsed=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int StreamProfileCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read NumberOfStreamsUsed
    {
        NumberOfStreamsUsed=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int StreamProfileCnf::write(DataOutputStream& ostream) { // throws IOException
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
    // write NumberOfStreamsUsed
    ostream.writeUI8(NumberOfStreamsUsed);
    retVal +=1;

    return retVal;
}

int StreamProfileCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("StreamProfileCnf\n");
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
    // write NumberOfStreamsUsed
    dc.indent();
    dc.getPs().print("NumberOfStreamsUsed=");
    dc.getPs().println((long)NumberOfStreamsUsed);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE StreamProfileCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void StreamProfileCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 StreamProfileCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void StreamProfileCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for NumberOfStreamsUsed
//ui8 StreamProfileCnf::getNumberOfStreamsUsed()
//{
//return this->NumberOfStreamsUsed;
//}

// Setter for NumberOfStreamsUsed
//void StreamProfileCnf::setNumberOfStreamsUsed(ui8 val)
//{
//this->NumberOfStreamsUsed= val;
//}

int StreamProfileCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void StreamProfileCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE StreamProfileCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_StreamProfileCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::StreamProfileCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::StreamProfileCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code