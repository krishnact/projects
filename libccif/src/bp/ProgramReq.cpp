//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ProgramReq.h"

#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
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
ProgramReq::ProgramReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transactionId
    transactionId= (ui8)0;
    // transportStreamId
    transportStreamId= (ui16)0;
    // program_number
    program_number= (ui16)0;
    // sourceId
    sourceId= (ui16)0;
    // eventId
    eventId= (ui16)0;
    // currentNextIndicator
    currentNextIndicator= (ui8)0;
    // bf1
    bf1 = 0;
    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
ProgramReq::~ProgramReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transactionId

    // transportStreamId

    // program_number

    // sourceId

    // eventId

    // currentNextIndicator

    // bf1

    // descriptors
    {
#ifndef org_himalay_ccif_CaDescriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
}

int ProgramReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // transportStreamId
    {
        transportStreamId=istream.readUI16();
        retVal+=2;
    }
    // program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }
    // sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // eventId
    {
        eventId=istream.readUI16();
        retVal+=2;
    }
    // currentNextIndicator
    {
        currentNextIndicator=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // descriptors
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        descriptors.add(temp);
    }
    return retVal;
}

int ProgramReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // read transportStreamId
    {
        transportStreamId=istream.readUI16();
        retVal+=2;
    }
    // read program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }
    // read sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // read eventId
    {
        eventId=istream.readUI16();
        retVal+=2;
    }
    // read currentNextIndicator
    {
        currentNextIndicator=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read descriptors
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        descriptors.add(temp);
    }

    return retVal;
}

int ProgramReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }








    {   /** fix dependent sizes for descriptors**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write transactionId
    ostream.writeUI8(transactionId);
    retVal +=1;
    // write transportStreamId
    ostream.writeUI16(transportStreamId);
    retVal +=2;
    // write program_number
    ostream.writeUI16(program_number);
    retVal +=2;
    // write sourceId
    ostream.writeUI16(sourceId);
    retVal +=2;
    // write eventId
    ostream.writeUI16(eventId);
    retVal +=2;
    // write currentNextIndicator
    ostream.writeUI8(currentNextIndicator);
    retVal +=1;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write descriptors
{   for (ArrayList_iterator(CaDescriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int ProgramReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ProgramReq\n");
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
    // write transactionId
    dc.indent();
    dc.getPs().print("transactionId=");
    dc.getPs().println((long)transactionId);
    // write transportStreamId
    dc.indent();
    dc.getPs().print("transportStreamId=");
    dc.getPs().println((long)transportStreamId);
    // write program_number
    dc.indent();
    dc.getPs().print("program_number=");
    dc.getPs().println((long)program_number);
    // write sourceId
    dc.indent();
    dc.getPs().print("sourceId=");
    dc.getPs().println((long)sourceId);
    // write eventId
    dc.indent();
    dc.getPs().print("eventId=");
    dc.getPs().println((long)eventId);
    // write currentNextIndicator
    dc.indent();
    dc.getPs().print("currentNextIndicator=");
    dc.getPs().println((long)currentNextIndicator);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),7);
        dc.indent();
        dc.getPs().print("currentNext: ");
        dc.getPs().printlnBin(getCurrentNext(),1);
    }
    // write descriptors
{   for (ArrayList_iterator(CaDescriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ProgramReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ProgramReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 ProgramReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void ProgramReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transactionId
//ui8 ProgramReq::getTransactionId()
//{
//return this->transactionId;
//}

// Setter for transactionId
//void ProgramReq::setTransactionId(ui8 val)
//{
//this->transactionId= val;
//}

// Getter for transportStreamId
//ui16 ProgramReq::getTransportStreamId()
//{
//return this->transportStreamId;
//}

// Setter for transportStreamId
//void ProgramReq::setTransportStreamId(ui16 val)
//{
//this->transportStreamId= val;
//}

// Getter for program_number
//ui16 ProgramReq::getProgram_number()
//{
//return this->program_number;
//}

// Setter for program_number
//void ProgramReq::setProgram_number(ui16 val)
//{
//this->program_number= val;
//}

// Getter for sourceId
//ui16 ProgramReq::getSourceId()
//{
//return this->sourceId;
//}

// Setter for sourceId
//void ProgramReq::setSourceId(ui16 val)
//{
//this->sourceId= val;
//}

// Getter for eventId
//ui16 ProgramReq::getEventId()
//{
//return this->eventId;
//}

// Setter for eventId
//void ProgramReq::setEventId(ui16 val)
//{
//this->eventId= val;
//}

// Getter for currentNextIndicator
//ui8 ProgramReq::getCurrentNextIndicator()
//{
//return this->currentNextIndicator;
//}

// Setter for currentNextIndicator
//void ProgramReq::setCurrentNextIndicator(ui8 val)
//{
//this->currentNextIndicator= val;
//}

// Getter for bf1
//ui8 ProgramReq::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ProgramReq::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for descriptors
//ArrayList(CaDescriptor) ProgramReq::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void ProgramReq::setDescriptors(ArrayList(CaDescriptor) val)
//{
//this->descriptors= val;
//}

int ProgramReq::getReserved( ) {
    return ( this->bf1 & 0x000000fe ) >> 1 ;
}

void ProgramReq::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff01) | ( (val << 1 ) & 0x000000fe));
}

int ProgramReq::getCurrentNext( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void ProgramReq::setCurrentNext(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int ProgramReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ProgramReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ProgramReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ProgramReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code