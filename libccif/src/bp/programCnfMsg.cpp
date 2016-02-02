//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "programCnfMsg.h"

#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
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
programCnfMsg::programCnfMsg() {
    references= 0;


    // purchaseType
    purchaseType= (ui8)0;
    // purchasePrice
    purchasePrice= (ui16)0;
    // purchaseValidation
    purchaseValidation= (ui8)0;
    // expirationdatee
    expirationdatee= (ui32)0;
    // ProgramStartTim
    ProgramStartTim= (ui32)0;
    // initialFreepreviewDuration
    initialFreepreviewDuration= (ui16)0;
    // anyTimeFreepreviewDuration
    anyTimeFreepreviewDuration= (ui16)0;
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIRST_UI8");
    // data1
    org_himalay_msgs_runtime_ByteArray_NEW(data1);
    data1->setSizeType("FIRST_UI8");
    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
programCnfMsg::~programCnfMsg() {
    // purchaseType

    // purchasePrice

    // purchaseValidation

    // expirationdatee

    // ProgramStartTim

    // initialFreepreviewDuration

    // anyTimeFreepreviewDuration

    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
    // data1
    org_himalay_msgs_runtime_ByteArray_DELETE( data1);
    // descriptors
    {
#ifndef org_himalay_ccif_CaDescriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
}

int programCnfMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // purchaseType
    {
        purchaseType=(istream.readUI8());
        retVal+=1;
    }
    // purchasePrice
    {
        purchasePrice=istream.readUI16();
        retVal+=2;
    }
    // purchaseValidation
    {
        purchaseValidation=(istream.readUI8());
        retVal+=1;
    }
    // expirationdatee
    {
        expirationdatee=istream.readUI32() ;
        retVal+=4;
    }
    // ProgramStartTim
    {
        ProgramStartTim=istream.readUI32() ;
        retVal+=4;
    }
    // initialFreepreviewDuration
    {
        initialFreepreviewDuration=istream.readUI16();
        retVal+=2;
    }
    // anyTimeFreepreviewDuration
    {
        anyTimeFreepreviewDuration=istream.readUI16();
        retVal+=2;
    }
    // data
    {
        retVal+=data->read(istream);
    }
    // data1
    {
        retVal+=data1->read(istream);
    }
    // descriptors
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        descriptors.add(temp);
    }
    return retVal;
}

int programCnfMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read purchaseType
    {
        purchaseType=(istream.readUI8());
        retVal+=1;
    }
    // read purchasePrice
    {
        purchasePrice=istream.readUI16();
        retVal+=2;
    }
    // read purchaseValidation
    {
        purchaseValidation=(istream.readUI8());
        retVal+=1;
    }
    // read expirationdatee
    {
        expirationdatee=istream.readUI32() ;
        retVal+=4;
    }
    // read ProgramStartTim
    {
        ProgramStartTim=istream.readUI32() ;
        retVal+=4;
    }
    // read initialFreepreviewDuration
    {
        initialFreepreviewDuration=istream.readUI16();
        retVal+=2;
    }
    // read anyTimeFreepreviewDuration
    {
        anyTimeFreepreviewDuration=istream.readUI16();
        retVal+=2;
    }
    // read data
    {
        retVal+=data->read(istream);
    }
    // read data1
    {
        retVal+=data1->read(istream);
    }
    // read descriptors
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        descriptors.add(temp);
    }

    return retVal;
}

int programCnfMsg::write(DataOutputStream& ostream) { // throws IOException







    {   /** fix dependent sizes for data**/
    }
    {   /** fix dependent sizes for data1**/
    }
    {   /** fix dependent sizes for descriptors**/
    }

    int retVal= 0;
    // write purchaseType
    ostream.writeUI8(purchaseType);
    retVal +=1;
    // write purchasePrice
    ostream.writeUI16(purchasePrice);
    retVal +=2;
    // write purchaseValidation
    ostream.writeUI8(purchaseValidation);
    retVal +=1;
    // write expirationdatee
    ostream.writeUI32(expirationdatee);
    retVal +=4;
    // write ProgramStartTim
    ostream.writeUI32(ProgramStartTim);
    retVal +=4;
    // write initialFreepreviewDuration
    ostream.writeUI16(initialFreepreviewDuration);
    retVal +=2;
    // write anyTimeFreepreviewDuration
    ostream.writeUI16(anyTimeFreepreviewDuration);
    retVal +=2;
    // write data
    {
        retVal += data->write(ostream);
    }
    // write data1
    {
        retVal += data1->write(ostream);
    }
    // write descriptors
{   for (ArrayList_iterator(CaDescriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int programCnfMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("programCnfMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write purchaseType
    dc.indent();
    dc.getPs().print("purchaseType=");
    dc.getPs().println((long)purchaseType);
    // write purchasePrice
    dc.indent();
    dc.getPs().print("purchasePrice=");
    dc.getPs().println((long)purchasePrice);
    // write purchaseValidation
    dc.indent();
    dc.getPs().print("purchaseValidation=");
    dc.getPs().println((long)purchaseValidation);
    // write expirationdatee
    dc.indent();
    dc.getPs().print("expirationdatee=");
    dc.getPs().println((long)expirationdatee);
    // write ProgramStartTim
    dc.indent();
    dc.getPs().print("ProgramStartTim=");
    dc.getPs().println((long)ProgramStartTim);
    // write initialFreepreviewDuration
    dc.indent();
    dc.getPs().print("initialFreepreviewDuration=");
    dc.getPs().println((long)initialFreepreviewDuration);
    // write anyTimeFreepreviewDuration
    dc.indent();
    dc.getPs().print("anyTimeFreepreviewDuration=");
    dc.getPs().println((long)anyTimeFreepreviewDuration);
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    // write data1
    dc.indent();
    dc.getPs().print("data1");
    data1->dump(dc);
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


// Getter for purchaseType
//ui8 programCnfMsg::getPurchaseType()
//{
//return this->purchaseType;
//}

// Setter for purchaseType
//void programCnfMsg::setPurchaseType(ui8 val)
//{
//this->purchaseType= val;
//}

// Getter for purchasePrice
//ui16 programCnfMsg::getPurchasePrice()
//{
//return this->purchasePrice;
//}

// Setter for purchasePrice
//void programCnfMsg::setPurchasePrice(ui16 val)
//{
//this->purchasePrice= val;
//}

// Getter for purchaseValidation
//ui8 programCnfMsg::getPurchaseValidation()
//{
//return this->purchaseValidation;
//}

// Setter for purchaseValidation
//void programCnfMsg::setPurchaseValidation(ui8 val)
//{
//this->purchaseValidation= val;
//}

// Getter for expirationdatee
//ui32 programCnfMsg::getExpirationdatee()
//{
//return this->expirationdatee;
//}

// Setter for expirationdatee
//void programCnfMsg::setExpirationdatee(ui32 val)
//{
//this->expirationdatee= val;
//}

// Getter for ProgramStartTim
//ui32 programCnfMsg::getProgramStartTim()
//{
//return this->ProgramStartTim;
//}

// Setter for ProgramStartTim
//void programCnfMsg::setProgramStartTim(ui32 val)
//{
//this->ProgramStartTim= val;
//}

// Getter for initialFreepreviewDuration
//ui16 programCnfMsg::getInitialFreepreviewDuration()
//{
//return this->initialFreepreviewDuration;
//}

// Setter for initialFreepreviewDuration
//void programCnfMsg::setInitialFreepreviewDuration(ui16 val)
//{
//this->initialFreepreviewDuration= val;
//}

// Getter for anyTimeFreepreviewDuration
//ui16 programCnfMsg::getAnyTimeFreepreviewDuration()
//{
//return this->anyTimeFreepreviewDuration;
//}

// Setter for anyTimeFreepreviewDuration
//void programCnfMsg::setAnyTimeFreepreviewDuration(ui16 val)
//{
//this->anyTimeFreepreviewDuration= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE programCnfMsg::getData()
//{
//return this->data;
//}

// Setter for data
//void programCnfMsg::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

// Getter for data1
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE programCnfMsg::getData1()
//{
//return this->data1;
//}

// Setter for data1
//void programCnfMsg::setData1(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data1= val;
//}

// Getter for descriptors
//ArrayList(CaDescriptor) programCnfMsg::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void programCnfMsg::setDescriptors(ArrayList(CaDescriptor) val)
//{
//this->descriptors= val;
//}

int programCnfMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_programCnfMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::programCnfMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::programCnfMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code