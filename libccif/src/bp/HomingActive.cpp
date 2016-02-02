//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HomingActive.h"

#ifdef org_himalay_ccif_HomingActive__USE_SMART_PTR
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
HomingActive::HomingActive() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
}
// Destructor
HomingActive::~HomingActive() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

}

int HomingActive::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int HomingActive::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int HomingActive::write(DataOutputStream& ostream) { // throws IOException
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

    return retVal;
}

int HomingActive::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HomingActive\n");
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
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE HomingActive::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HomingActive::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HomingActive::getLength()
//{
//return this->length;
//}

// Setter for length
//void HomingActive::setLength(ui8 val)
//{
//this->length= val;
//}

int HomingActive::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HomingActive::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HomingActive::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HomingActive__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HomingActive* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HomingActive* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code