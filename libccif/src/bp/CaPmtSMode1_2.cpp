//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaPmtSMode1_2.h"

#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
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
CaPmtSMode1_2::StatusfieldCheck::StatusfieldCheck() {
    references= 0;

    parent = NULL;

    // caPmtCmdId
    caPmtCmdId= (ui8)0;
    // programInfoLength
    programInfoLength.setMemberSize(0);
}
// Destructor
CaPmtSMode1_2::StatusfieldCheck::~StatusfieldCheck() {
    // caPmtCmdId

    // programInfoLength
    {
#ifndef org_himalay_ccif_CaDescriptor_USE_SMART_PTR
        programInfoLength.deleteMembers();
#endif
    }
    parent = NULL;
}

int CaPmtSMode1_2::StatusfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // caPmtCmdId
    {
        caPmtCmdId=(istream.readUI8());
        retVal+=1;
    }
    // programInfoLength
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        programInfoLength.add(temp);
    }
    return retVal;
}

int CaPmtSMode1_2::StatusfieldCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read caPmtCmdId
    {
        caPmtCmdId=(istream.readUI8());
        retVal+=1;
    }
    // read programInfoLength
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        programInfoLength.add(temp);
    }

    return retVal;
}

int CaPmtSMode1_2::StatusfieldCheck::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for programInfoLength**/
    }

    int retVal= 0;
    // write caPmtCmdId
    ostream.writeUI8(caPmtCmdId);
    retVal +=1;
    // write programInfoLength
{   for (ArrayList_iterator(CaDescriptor) it=  programInfoLength.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CaPmtSMode1_2::StatusfieldCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("StatusfieldCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write caPmtCmdId
    dc.indent();
    dc.getPs().print("caPmtCmdId=");
    dc.getPs().println((long)caPmtCmdId);
    // write programInfoLength
{   for (ArrayList_iterator(CaDescriptor) it=  programInfoLength.getIterator() ; it.hasNext();) {
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


// Getter for caPmtCmdId
//ui8 CaPmtSMode1_2::StatusfieldCheck::getCaPmtCmdId()
//{
//return this->caPmtCmdId;
//}

// Setter for caPmtCmdId
//void CaPmtSMode1_2::StatusfieldCheck::setCaPmtCmdId(ui8 val)
//{
//this->caPmtCmdId= val;
//}

// Getter for programInfoLength
//ArrayList(CaDescriptor) CaPmtSMode1_2::StatusfieldCheck::getProgramInfoLength()
//{
//return this->programInfoLength;
//}

// Setter for programInfoLength
//void CaPmtSMode1_2::StatusfieldCheck::setProgramInfoLength(ArrayList(CaDescriptor) val)
//{
//this->programInfoLength= val;
//}

int CaPmtSMode1_2::StatusfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
CaPmtSMode1_2::CaPmtSMode1_2() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // caPmtlisMngement
    caPmtlisMngement= (ui8)0;
    // programNumber
    programNumber= (ui16)0;
    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // StatusfieldCheckInstance
    org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__INIT(StatusfieldCheckInstance)
    // CaEntries
    CaEntries.setMemberSize(0);
}
// Destructor
CaPmtSMode1_2::~CaPmtSMode1_2() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // caPmtlisMngement

    // programNumber

    // bf1

    // bf2

    // StatusfieldCheckInstance
    org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__DELETE( StatusfieldCheckInstance);
    // CaEntries
    {
#ifndef org_himalay_ccif_CaPmtModeMsg_USE_SMART_PTR
        CaEntries.deleteMembers();
#endif
    }
}

int CaPmtSMode1_2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // caPmtlisMngement
    {
        caPmtlisMngement=(istream.readUI8());
        retVal+=1;
    }
    // programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // StatusfieldCheckInstance
    if(getProgramInfoLength() != 0) {
        org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }
    // CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaPmtModeMsg__PTR_TYPE temp;
        org_himalay_ccif_CaPmtModeMsg__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }
    return retVal;
}

int CaPmtSMode1_2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read caPmtlisMngement
    {
        caPmtlisMngement=(istream.readUI8());
        retVal+=1;
    }
    // read programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read StatusfieldCheckInstance
    if(getProgramInfoLength() != 0) {
        org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__NEW( StatusfieldCheckInstance);
        StatusfieldCheckInstance->parent=this;
        retVal += StatusfieldCheckInstance->read(istream);
    }
    // read CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaPmtModeMsg__PTR_TYPE temp;
        org_himalay_ccif_CaPmtModeMsg__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }

    return retVal;
}

int CaPmtSMode1_2::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }





    {   /** fix dependent sizes for StatusfieldCheckInstance **/
    }
    {   /** fix dependent sizes for CaEntries**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write caPmtlisMngement
    ostream.writeUI8(caPmtlisMngement);
    retVal +=1;
    // write programNumber
    ostream.writeUI16(programNumber);
    retVal +=2;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;
    // write StatusfieldCheckInstance
    if ( StatusfieldCheckInstance != NULL ) {
        retVal +=StatusfieldCheckInstance->write(ostream);
    }
    // write CaEntries
{   for (ArrayList_iterator(CaPmtModeMsg) it=  CaEntries.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CaPmtSMode1_2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaPmtSMode1_2\n");
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
    // write caPmtlisMngement
    dc.indent();
    dc.getPs().print("caPmtlisMngement=");
    dc.getPs().println((long)caPmtlisMngement);
    // write programNumber
    dc.indent();
    dc.getPs().print("programNumber=");
    dc.getPs().println((long)programNumber);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved1: ");
        dc.getPs().printlnBin(getReserved1(),2);
        dc.indent();
        dc.getPs().print("versionNumber: ");
        dc.getPs().printlnBin(getVersionNumber(),5);
        dc.indent();
        dc.getPs().print("currentNext: ");
        dc.getPs().printlnBin(getCurrentNext(),1);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),5);
        dc.indent();
        dc.getPs().print("programInfoLength: ");
        dc.getPs().printlnBin(getProgramInfoLength(),12);
    }
    // write StatusfieldCheckInstance
    if ( StatusfieldCheckInstance != NULL ) {
        dc.indent();
        dc.getPs().println("StatusfieldCheckInstance") ;
        retVal +=StatusfieldCheckInstance->dump(dc);
    }
    // write CaEntries
{   for (ArrayList_iterator(CaPmtModeMsg) it=  CaEntries.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtSMode1_2::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CaPmtSMode1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CaPmtSMode1_2::getLength()
//{
//return this->length;
//}

// Setter for length
//void CaPmtSMode1_2::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for caPmtlisMngement
//ui8 CaPmtSMode1_2::getCaPmtlisMngement()
//{
//return this->caPmtlisMngement;
//}

// Setter for caPmtlisMngement
//void CaPmtSMode1_2::setCaPmtlisMngement(ui8 val)
//{
//this->caPmtlisMngement= val;
//}

// Getter for programNumber
//ui16 CaPmtSMode1_2::getProgramNumber()
//{
//return this->programNumber;
//}

// Setter for programNumber
//void CaPmtSMode1_2::setProgramNumber(ui16 val)
//{
//this->programNumber= val;
//}

// Getter for bf1
//ui8 CaPmtSMode1_2::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CaPmtSMode1_2::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui16 CaPmtSMode1_2::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaPmtSMode1_2::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for StatusfieldCheckInstance
//org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE CaPmtSMode1_2::getStatusfieldCheckInstance()
//{
//return this->StatusfieldCheckInstance;
//}

// Setter for StatusfieldCheckInstance
//void CaPmtSMode1_2::setStatusfieldCheckInstance(org_himalay_ccif_CaPmtSMode1_2_StatusfieldCheck__PTR_TYPE val)
//{
//this->StatusfieldCheckInstance= val;
//}

// Getter for CaEntries
//ArrayList(CaPmtModeMsg) CaPmtSMode1_2::getCaEntries()
//{
//return this->CaEntries;
//}

// Setter for CaEntries
//void CaPmtSMode1_2::setCaEntries(ArrayList(CaPmtModeMsg) val)
//{
//this->CaEntries= val;
//}

int CaPmtSMode1_2::getReserved1( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void CaPmtSMode1_2::setReserved1(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int CaPmtSMode1_2::getVersionNumber( ) {
    return ( this->bf1 & 0x0000003e ) >> 1 ;
}

void CaPmtSMode1_2::setVersionNumber(int val) {
    bf1=(  (this->bf1 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int CaPmtSMode1_2::getCurrentNext( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void CaPmtSMode1_2::setCurrentNext(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int CaPmtSMode1_2::getReserved( ) {
    return ( this->bf2 & 0x0000f080 ) >> 7 ;
}

void CaPmtSMode1_2::setReserved(int val) {
    bf2=(  (this->bf2 & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
}

int CaPmtSMode1_2::getProgramInfoLength( ) {
    return ( this->bf2 & 0x00000fff ) >> 0 ;
}

void CaPmtSMode1_2::setProgramInfoLength(int val) {
    bf2=(  (this->bf2 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int CaPmtSMode1_2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CaPmtSMode1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtSMode1_2::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CaPmtSMode1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtSMode1_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtSMode1_2* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code