//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "InbandTuneReq.h"

#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
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
// member static classes
// Constructor
InbandTuneReq::first::first() {
    references= 0;

    parent = NULL;

    // sourceid
    sourceid= (ui16)0;
}
// Destructor
InbandTuneReq::first::~first() {
    // sourceid

    parent = NULL;
}

int InbandTuneReq::first::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // sourceid
    {
        sourceid=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int InbandTuneReq::first::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read sourceid
    {
        sourceid=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int InbandTuneReq::first::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write sourceid
    ostream.writeUI16(sourceid);
    retVal +=2;

    return retVal;
}

int InbandTuneReq::first::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("first\n");
    dc.increaseIndent();
    int retVal= 0;
    // write sourceid
    dc.indent();
    dc.getPs().print("sourceid=");
    dc.getPs().println((long)sourceid);
    dc.decreaseIndent();
    return retVal;
}


// Getter for sourceid
//ui16 InbandTuneReq::first::getSourceid()
//{
//return this->sourceid;
//}

// Setter for sourceid
//void InbandTuneReq::first::setSourceid(ui16 val)
//{
//this->sourceid= val;
//}

int InbandTuneReq::first::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_InbandTuneReq_first__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p) {
    p->decreaseRef();
};;
#endif
// member static classes
// Constructor
InbandTuneReq::second::second() {
    references= 0;

    parent = NULL;

    // tuneFrequencyValu
    tuneFrequencyValu= (ui16)0;
    // modulationvalue
    modulationvalue= (ui8)0;
}
// Destructor
InbandTuneReq::second::~second() {
    // tuneFrequencyValu

    // modulationvalue

    parent = NULL;
}

int InbandTuneReq::second::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tuneFrequencyValu
    {
        tuneFrequencyValu=istream.readUI16();
        retVal+=2;
    }
    // modulationvalue
    {
        modulationvalue=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int InbandTuneReq::second::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tuneFrequencyValu
    {
        tuneFrequencyValu=istream.readUI16();
        retVal+=2;
    }
    // read modulationvalue
    {
        modulationvalue=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int InbandTuneReq::second::write(DataOutputStream& ostream) { // throws IOException



    int retVal= 0;
    // write tuneFrequencyValu
    ostream.writeUI16(tuneFrequencyValu);
    retVal +=2;
    // write modulationvalue
    ostream.writeUI8(modulationvalue);
    retVal +=1;

    return retVal;
}

int InbandTuneReq::second::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("second\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tuneFrequencyValu
    dc.indent();
    dc.getPs().print("tuneFrequencyValu=");
    dc.getPs().println((long)tuneFrequencyValu);
    // write modulationvalue
    dc.indent();
    dc.getPs().print("modulationvalue=");
    dc.getPs().println((long)modulationvalue);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tuneFrequencyValu
//ui16 InbandTuneReq::second::getTuneFrequencyValu()
//{
//return this->tuneFrequencyValu;
//}

// Setter for tuneFrequencyValu
//void InbandTuneReq::second::setTuneFrequencyValu(ui16 val)
//{
//this->tuneFrequencyValu= val;
//}

// Getter for modulationvalue
//ui8 InbandTuneReq::second::getModulationvalue()
//{
//return this->modulationvalue;
//}

// Setter for modulationvalue
//void InbandTuneReq::second::setModulationvalue(ui8 val)
//{
//this->modulationvalue= val;
//}

int InbandTuneReq::second::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_InbandTuneReq_second__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p) {
    p->decreaseRef();
};;
#endif

// Constructor
InbandTuneReq::InbandTuneReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // tuneType
    tuneType= (ui8)0;
    // firstInstance
    org_himalay_ccif_InbandTuneReq_first__INIT(firstInstance)
    // secondInstance
    org_himalay_ccif_InbandTuneReq_second__INIT(secondInstance)
}
// Destructor
InbandTuneReq::~InbandTuneReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // tuneType

    // firstInstance
    org_himalay_ccif_InbandTuneReq_first__DELETE( firstInstance);
    // secondInstance
    org_himalay_ccif_InbandTuneReq_second__DELETE( secondInstance);
}

int InbandTuneReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // tuneType
    {
        tuneType=(istream.readUI8());
        retVal+=1;
    }
    // firstInstance
    if(tuneType ==0x00) {
        org_himalay_ccif_InbandTuneReq_first__NEW( firstInstance);
        firstInstance->parent=this;
        retVal += firstInstance->read(istream);
    }
    // secondInstance
    if(tuneType ==0x01) {
        org_himalay_ccif_InbandTuneReq_second__NEW( secondInstance);
        secondInstance->parent=this;
        retVal += secondInstance->read(istream);
    }
    return retVal;
}

int InbandTuneReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read tuneType
    {
        tuneType=(istream.readUI8());
        retVal+=1;
    }
    // read firstInstance
    if(tuneType ==0x00) {
        org_himalay_ccif_InbandTuneReq_first__NEW( firstInstance);
        firstInstance->parent=this;
        retVal += firstInstance->read(istream);
    }
    // read secondInstance
    if(tuneType ==0x01) {
        org_himalay_ccif_InbandTuneReq_second__NEW( secondInstance);
        secondInstance->parent=this;
        retVal += secondInstance->read(istream);
    }

    return retVal;
}

int InbandTuneReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for firstInstance **/
    }
    {   /** fix dependent sizes for secondInstance **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write tuneType
    ostream.writeUI8(tuneType);
    retVal +=1;
    // write firstInstance
    if ( firstInstance != NULL ) {
        retVal +=firstInstance->write(ostream);
    }
    // write secondInstance
    if ( secondInstance != NULL ) {
        retVal +=secondInstance->write(ostream);
    }

    return retVal;
}

int InbandTuneReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("InbandTuneReq\n");
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
    // write tuneType
    dc.indent();
    dc.getPs().print("tuneType=");
    dc.getPs().println((long)tuneType);
    // write firstInstance
    if ( firstInstance != NULL ) {
        dc.indent();
        dc.getPs().println("firstInstance") ;
        retVal +=firstInstance->dump(dc);
    }
    // write secondInstance
    if ( secondInstance != NULL ) {
        dc.indent();
        dc.getPs().println("secondInstance") ;
        retVal +=secondInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE InbandTuneReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void InbandTuneReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 InbandTuneReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void InbandTuneReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for tuneType
//ui8 InbandTuneReq::getTuneType()
//{
//return this->tuneType;
//}

// Setter for tuneType
//void InbandTuneReq::setTuneType(ui8 val)
//{
//this->tuneType= val;
//}

// Getter for firstInstance
//org_himalay_ccif_InbandTuneReq_first__PTR_TYPE InbandTuneReq::getFirstInstance()
//{
//return this->firstInstance;
//}

// Setter for firstInstance
//void InbandTuneReq::setFirstInstance(org_himalay_ccif_InbandTuneReq_first__PTR_TYPE val)
//{
//this->firstInstance= val;
//}

// Getter for secondInstance
//org_himalay_ccif_InbandTuneReq_second__PTR_TYPE InbandTuneReq::getSecondInstance()
//{
//return this->secondInstance;
//}

// Setter for secondInstance
//void InbandTuneReq::setSecondInstance(org_himalay_ccif_InbandTuneReq_second__PTR_TYPE val)
//{
//this->secondInstance= val;
//}

int InbandTuneReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void InbandTuneReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE InbandTuneReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_InbandTuneReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::first* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::first* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq::second* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq::second* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::InbandTuneReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::InbandTuneReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code