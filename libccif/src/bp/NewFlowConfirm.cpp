//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NewFlowConfirm.h"

#ifdef org_himalay_ccif_NewFlowConfirm__USE_SMART_PTR
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
NewFlowConfirm::NewFlowConfirm() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // flowsRemaining
    flowsRemaining= (ui8)0;
    // flowDetails
    org_himalay_ccif_APDUFlowConf_Detail__INIT(flowDetails)
}
// Destructor
NewFlowConfirm::~NewFlowConfirm() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // statusField

    // flowsRemaining

    // flowDetails
    org_himalay_ccif_APDUFlowConf_Detail__DELETE( flowDetails);
}

int NewFlowConfirm::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // flowsRemaining
    {
        flowsRemaining=(istream.readUI8());
        retVal+=1;
    }
    // flowDetails
    if (statusField==0x00) {
        org_himalay_ccif_APDUFlowConf_Detail__NEW( flowDetails);
        retVal += flowDetails->read(istream);
    }
    return retVal;
}

int NewFlowConfirm::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // read flowsRemaining
    {
        flowsRemaining=(istream.readUI8());
        retVal+=1;
    }
    // read flowDetails
    if (statusField==0x00) {
        org_himalay_ccif_APDUFlowConf_Detail__NEW( flowDetails);
        retVal += flowDetails->read(istream);
    }

    return retVal;
}

int NewFlowConfirm::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    {   /** fix dependent sizes for flowDetails **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;
    // write flowsRemaining
    ostream.writeUI8(flowsRemaining);
    retVal +=1;
    // write flowDetails
    if ( flowDetails != NULL ) {
        retVal +=flowDetails->write(ostream);
    }

    return retVal;
}

int NewFlowConfirm::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NewFlowConfirm\n");
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
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    // write flowsRemaining
    dc.indent();
    dc.getPs().print("flowsRemaining=");
    dc.getPs().println((long)flowsRemaining);
    // write flowDetails
    if ( flowDetails != NULL ) {
        dc.indent();
        dc.getPs().println("flowDetails") ;
        retVal +=flowDetails->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm::getHeader()
//{
//return this->header;
//}

// Setter for header
//void NewFlowConfirm::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 NewFlowConfirm::getLength()
//{
//return this->length;
//}

// Setter for length
//void NewFlowConfirm::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for statusField
//ui8 NewFlowConfirm::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void NewFlowConfirm::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for flowsRemaining
//ui8 NewFlowConfirm::getFlowsRemaining()
//{
//return this->flowsRemaining;
//}

// Setter for flowsRemaining
//void NewFlowConfirm::setFlowsRemaining(ui8 val)
//{
//this->flowsRemaining= val;
//}

// Getter for flowDetails
//org_himalay_ccif_APDUFlowConf_Detail__PTR_TYPE NewFlowConfirm::getFlowDetails()
//{
//return this->flowDetails;
//}

// Setter for flowDetails
//void NewFlowConfirm::setFlowDetails(org_himalay_ccif_APDUFlowConf_Detail__PTR_TYPE val)
//{
//this->flowDetails= val;
//}

int NewFlowConfirm::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void NewFlowConfirm::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE NewFlowConfirm::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_NewFlowConfirm__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NewFlowConfirm* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NewFlowConfirm* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code