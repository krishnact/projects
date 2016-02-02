//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SAS_data_rqst.h"

#ifdef org_himalay_ccif_SAS_data_rqst__USE_SMART_PTR
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
SAS_data_rqst::SAS_data_rqst() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
}
// Destructor
SAS_data_rqst::~SAS_data_rqst() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

}

int SAS_data_rqst::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SAS_data_rqst::read(DataInputStream&  istream ) { // throws IOException
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

int SAS_data_rqst::write(DataOutputStream& ostream) { // throws IOException
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

int SAS_data_rqst::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SAS_data_rqst\n");
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
//org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_rqst::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SAS_data_rqst::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SAS_data_rqst::getLength()
//{
//return this->length;
//}

// Setter for length
//void SAS_data_rqst::setLength(ui8 val)
//{
//this->length= val;
//}

int SAS_data_rqst::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SAS_data_rqst::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_rqst::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SAS_data_rqst__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SAS_data_rqst* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SAS_data_rqst* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code