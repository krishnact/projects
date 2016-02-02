//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SAS_connectCnf.h"

#ifdef org_himalay_ccif_SAS_connectCnf__USE_SMART_PTR
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
SAS_connectCnf::SAS_connectCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // SASSessionStatus
    SASSessionStatus= (ui8)0;
}
// Destructor
SAS_connectCnf::~SAS_connectCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // SASSessionStatus

}

int SAS_connectCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // SASSessionStatus
    {
        SASSessionStatus=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SAS_connectCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read SASSessionStatus
    {
        SASSessionStatus=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int SAS_connectCnf::write(DataOutputStream& ostream) { // throws IOException
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
    // write SASSessionStatus
    ostream.writeUI8(SASSessionStatus);
    retVal +=1;

    return retVal;
}

int SAS_connectCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SAS_connectCnf\n");
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
    // write SASSessionStatus
    dc.indent();
    dc.getPs().print("SASSessionStatus=");
    dc.getPs().println((long)SASSessionStatus);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SAS_connectCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SAS_connectCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SAS_connectCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void SAS_connectCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for SASSessionStatus
//ui8 SAS_connectCnf::getSASSessionStatus()
//{
//return this->SASSessionStatus;
//}

// Setter for SASSessionStatus
//void SAS_connectCnf::setSASSessionStatus(ui8 val)
//{
//this->SASSessionStatus= val;
//}

int SAS_connectCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SAS_connectCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SAS_connectCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SAS_connectCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SAS_connectCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SAS_connectCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code