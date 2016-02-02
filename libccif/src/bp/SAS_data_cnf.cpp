//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SAS_data_cnf.h"

#ifdef org_himalay_ccif_SAS_data_cnf__USE_SMART_PTR
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
SAS_data_cnf::SAS_data_cnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transaction_nb
    transaction_nb= (ui8)0;
}
// Destructor
SAS_data_cnf::~SAS_data_cnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transaction_nb

}

int SAS_data_cnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SAS_data_cnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transaction_nb
    {
        transaction_nb=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int SAS_data_cnf::write(DataOutputStream& ostream) { // throws IOException
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
    // write transaction_nb
    ostream.writeUI8(transaction_nb);
    retVal +=1;

    return retVal;
}

int SAS_data_cnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SAS_data_cnf\n");
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
    // write transaction_nb
    dc.indent();
    dc.getPs().print("transaction_nb=");
    dc.getPs().println((long)transaction_nb);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_cnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SAS_data_cnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SAS_data_cnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void SAS_data_cnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transaction_nb
//ui8 SAS_data_cnf::getTransaction_nb()
//{
//return this->transaction_nb;
//}

// Setter for transaction_nb
//void SAS_data_cnf::setTransaction_nb(ui8 val)
//{
//this->transaction_nb= val;
//}

int SAS_data_cnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SAS_data_cnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SAS_data_cnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SAS_data_cnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SAS_data_cnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SAS_data_cnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code