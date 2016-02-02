//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ProgramProfile.h"

#ifdef org_himalay_ccif_ProgramProfile__USE_SMART_PTR
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
ProgramProfile::ProgramProfile() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // maxNumberOfStreams
    maxNumberOfStreams= (ui8)0;
}
// Destructor
ProgramProfile::~ProgramProfile() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // maxNumberOfStreams

}

int ProgramProfile::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // maxNumberOfStreams
    {
        maxNumberOfStreams=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int ProgramProfile::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read maxNumberOfStreams
    {
        maxNumberOfStreams=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int ProgramProfile::write(DataOutputStream& ostream) { // throws IOException
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
    // write maxNumberOfStreams
    ostream.writeUI8(maxNumberOfStreams);
    retVal +=1;

    return retVal;
}

int ProgramProfile::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ProgramProfile\n");
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
    // write maxNumberOfStreams
    dc.indent();
    dc.getPs().print("maxNumberOfStreams=");
    dc.getPs().println((long)maxNumberOfStreams);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ProgramProfile::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ProgramProfile::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 ProgramProfile::getLength()
//{
//return this->length;
//}

// Setter for length
//void ProgramProfile::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for maxNumberOfStreams
//ui8 ProgramProfile::getMaxNumberOfStreams()
//{
//return this->maxNumberOfStreams;
//}

// Setter for maxNumberOfStreams
//void ProgramProfile::setMaxNumberOfStreams(ui8 val)
//{
//this->maxNumberOfStreams= val;
//}

int ProgramProfile::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ProgramProfile::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ProgramProfile::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ProgramProfile__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramProfile* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramProfile* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code