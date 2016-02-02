//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DSG_packetError.h"

#ifdef org_himalay_ccif_DSG_packetError__USE_SMART_PTR
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
DSG_packetError::DSG_packetError() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transaction_id
    transaction_id= (ui8)0;
}
// Destructor
DSG_packetError::~DSG_packetError() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transaction_id

}

int DSG_packetError::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transaction_id
    {
        transaction_id=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int DSG_packetError::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transaction_id
    {
        transaction_id=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int DSG_packetError::write(DataOutputStream& ostream) { // throws IOException
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
    // write transaction_id
    ostream.writeUI8(transaction_id);
    retVal +=1;

    return retVal;
}

int DSG_packetError::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DSG_packetError\n");
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
    // write transaction_id
    dc.indent();
    dc.getPs().print("transaction_id=");
    dc.getPs().println((long)transaction_id);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE DSG_packetError::getHeader()
//{
//return this->header;
//}

// Setter for header
//void DSG_packetError::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 DSG_packetError::getLength()
//{
//return this->length;
//}

// Setter for length
//void DSG_packetError::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transaction_id
//ui8 DSG_packetError::getTransaction_id()
//{
//return this->transaction_id;
//}

// Setter for transaction_id
//void DSG_packetError::setTransaction_id(ui8 val)
//{
//this->transaction_id= val;
//}

int DSG_packetError::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void DSG_packetError::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE DSG_packetError::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_DSG_packetError__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DSG_packetError* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DSG_packetError* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code