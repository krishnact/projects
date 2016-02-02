//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Inquire_DSG_mode.h"

#ifdef org_himalay_ccif_Inquire_DSG_mode__USE_SMART_PTR
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
Inquire_DSG_mode::Inquire_DSG_mode() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
}
// Destructor
Inquire_DSG_mode::~Inquire_DSG_mode() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

}

int Inquire_DSG_mode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int Inquire_DSG_mode::read(DataInputStream&  istream ) { // throws IOException
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

int Inquire_DSG_mode::write(DataOutputStream& ostream) { // throws IOException
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

int Inquire_DSG_mode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Inquire_DSG_mode\n");
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
//org_himalay_ccif_APDUHeader__PTR_TYPE Inquire_DSG_mode::getHeader()
//{
//return this->header;
//}

// Setter for header
//void Inquire_DSG_mode::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 Inquire_DSG_mode::getLength()
//{
//return this->length;
//}

// Setter for length
//void Inquire_DSG_mode::setLength(ui8 val)
//{
//this->length= val;
//}

int Inquire_DSG_mode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void Inquire_DSG_mode::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE Inquire_DSG_mode::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_Inquire_DSG_mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::Inquire_DSG_mode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::Inquire_DSG_mode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code