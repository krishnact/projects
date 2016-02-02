//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SAS_data_av.h"

#ifdef org_himalay_ccif_SAS_data_av__USE_SMART_PTR
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
SAS_data_av::SAS_data_av() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // SAS_dataStatus
    SAS_dataStatus= (ui8)0;
    // transaction_nb
    transaction_nb= (ui8)0;
}
// Destructor
SAS_data_av::~SAS_data_av() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // SAS_dataStatus

    // transaction_nb

}

int SAS_data_av::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // SAS_dataStatus
    {
        SAS_dataStatus=(istream.readUI8());
        retVal+=1;
    }
    // transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SAS_data_av::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read SAS_dataStatus
    {
        SAS_dataStatus=(istream.readUI8());
        retVal+=1;
    }
    // read transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int SAS_data_av::write(DataOutputStream& ostream) { // throws IOException
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
    // write SAS_dataStatus
    ostream.writeUI8(SAS_dataStatus);
    retVal +=1;
    // write transaction_nb
    ostream.writeUI8(transaction_nb);
    retVal +=1;

    return retVal;
}

int SAS_data_av::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SAS_data_av\n");
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
    // write SAS_dataStatus
    dc.indent();
    dc.getPs().print("SAS_dataStatus=");
    dc.getPs().println((long)SAS_dataStatus);
    // write transaction_nb
    dc.indent();
    dc.getPs().print("transaction_nb=");
    dc.getPs().println((long)transaction_nb);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_av::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SAS_data_av::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SAS_data_av::getLength()
//{
//return this->length;
//}

// Setter for length
//void SAS_data_av::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for SAS_dataStatus
//ui8 SAS_data_av::getSAS_dataStatus()
//{
//return this->SAS_dataStatus;
//}

// Setter for SAS_dataStatus
//void SAS_data_av::setSAS_dataStatus(ui8 val)
//{
//this->SAS_dataStatus= val;
//}

// Getter for transaction_nb
//ui8 SAS_data_av::getTransaction_nb()
//{
//return this->transaction_nb;
//}

// Setter for transaction_nb
//void SAS_data_av::setTransaction_nb(ui8 val)
//{
//this->transaction_nb= val;
//}

int SAS_data_av::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SAS_data_av::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_av::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SAS_data_av__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SAS_data_av* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SAS_data_av* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code