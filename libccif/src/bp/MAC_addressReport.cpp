//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "MAC_addressReport.h"

#ifdef org_himalay_ccif_MAC_addressReport__USE_SMART_PTR
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
MAC_addressReport::MAC_addressReport() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // numberOfAddress
    org_himalay_msgs_runtime_ByteArray_NEW(numberOfAddress);
    numberOfAddress->setSizeType("FIRST_UI8");
}
// Destructor
MAC_addressReport::~MAC_addressReport() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // numberOfAddress
    org_himalay_msgs_runtime_ByteArray_DELETE( numberOfAddress);
}

int MAC_addressReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // header
    retVal += header->read(istream);
    // numberOfAddress
    {
        retVal+=numberOfAddress->read(istream);
    }
    return retVal;
}

int MAC_addressReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read numberOfAddress
    {
        retVal+=numberOfAddress->read(istream);
    }

    return retVal;
}

int MAC_addressReport::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }
    {   /** fix dependent sizes for numberOfAddress**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write numberOfAddress
    {
        retVal += numberOfAddress->write(ostream);
    }

    return retVal;
}

int MAC_addressReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("MAC_addressReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write numberOfAddress
    dc.indent();
    dc.getPs().print("numberOfAddress");
    numberOfAddress->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE MAC_addressReport::getHeader()
//{
//return this->header;
//}

// Setter for header
//void MAC_addressReport::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for numberOfAddress
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE MAC_addressReport::getNumberOfAddress()
//{
//return this->numberOfAddress;
//}

// Setter for numberOfAddress
//void MAC_addressReport::setNumberOfAddress(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->numberOfAddress= val;
//}

int MAC_addressReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_MAC_addressReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::MAC_addressReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::MAC_addressReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code