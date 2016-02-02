//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaPmtMMode2_1.h"

#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
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
CaPmtMMode2_1::StatusfieldCheck::StatusfieldCheck() {
    references= 0;

    parent = NULL;

    // prgmInfoLength
    prgmInfoLength.setMemberSize(0);
}
// Destructor
CaPmtMMode2_1::StatusfieldCheck::~StatusfieldCheck() {
    // prgmInfoLength
    {
#ifndef org_himalay_ccif_CaDescriptor_USE_SMART_PTR
        prgmInfoLength.deleteMembers();
#endif
    }
    parent = NULL;
}

int CaPmtMMode2_1::StatusfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // prgmInfoLength
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        prgmInfoLength.add(temp);
    }
    return retVal;
}

int CaPmtMMode2_1::StatusfieldCheck::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read prgmInfoLength
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaDescriptor__PTR_TYPE temp;
        org_himalay_ccif_CaDescriptor__NEW( temp);
        retVal += temp->read(istream);
        prgmInfoLength.add(temp);
    }

    return retVal;
}

int CaPmtMMode2_1::StatusfieldCheck::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for prgmInfoLength**/
    }

    int retVal= 0;
    // write prgmInfoLength
{   for (ArrayList_iterator(CaDescriptor) it=  prgmInfoLength.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CaPmtMMode2_1::StatusfieldCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("StatusfieldCheck\n");
    dc.increaseIndent();
    int retVal= 0;
    // write prgmInfoLength
{   for (ArrayList_iterator(CaDescriptor) it=  prgmInfoLength.getIterator() ; it.hasNext();) {
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


// Getter for prgmInfoLength
//ArrayList(CaDescriptor) CaPmtMMode2_1::StatusfieldCheck::getPrgmInfoLength()
//{
//return this->prgmInfoLength;
//}

// Setter for prgmInfoLength
//void CaPmtMMode2_1::StatusfieldCheck::setPrgmInfoLength(ArrayList(CaDescriptor) val)
//{
//this->prgmInfoLength= val;
//}

int CaPmtMMode2_1::StatusfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
CaPmtMMode2_1::CaPmtMMode2_1() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // programIndex
    programIndex= (ui8)0;
    // txnId
    txnId= (ui8)0;
    // ltsid
    ltsid= (ui8)0;
    // programNumber
    programNumber= (ui16)0;
    // sourceId
    sourceId= (ui16)0;
    // caPmtCmdId
    caPmtCmdId= (ui8)0;
    // bf2
    bf2 = 0;
    // StatusfieldCheckInstance
    org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__INIT(StatusfieldCheckInstance)
    // CaEntries
    CaEntries.setMemberSize(0);
}
// Destructor
CaPmtMMode2_1::~CaPmtMMode2_1() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // programIndex

    // txnId

    // ltsid

    // programNumber

    // sourceId

    // caPmtCmdId

    // bf2

    // StatusfieldCheckInstance
    org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__DELETE( StatusfieldCheckInstance);
    // CaEntries
    {
#ifndef org_himalay_ccif_CaPmtModeMsg_USE_SMART_PTR
        CaEntries.deleteMembers();
#endif
    }
}

int CaPmtMMode2_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // programIndex
    {
        programIndex=(istream.readUI8());
        retVal+=1;
    }
    // txnId
    {
        txnId=(istream.readUI8());
        retVal+=1;
    }
    // ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // caPmtCmdId
    {
        caPmtCmdId=(istream.readUI8());
        retVal+=1;
    }
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // StatusfieldCheckInstance
    if(getProgramInfoLength()!= 0) {
        org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__NEW( StatusfieldCheckInstance);
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

int CaPmtMMode2_1::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read programIndex
    {
        programIndex=(istream.readUI8());
        retVal+=1;
    }
    // read txnId
    {
        txnId=(istream.readUI8());
        retVal+=1;
    }
    // read ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // read programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // read sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // read caPmtCmdId
    {
        caPmtCmdId=(istream.readUI8());
        retVal+=1;
    }
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read StatusfieldCheckInstance
    if(getProgramInfoLength()!= 0) {
        org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__NEW( StatusfieldCheckInstance);
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

int CaPmtMMode2_1::write(DataOutputStream& ostream) { // throws IOException
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
    // write programIndex
    ostream.writeUI8(programIndex);
    retVal +=1;
    // write txnId
    ostream.writeUI8(txnId);
    retVal +=1;
    // write ltsid
    ostream.writeUI8(ltsid);
    retVal +=1;
    // write programNumber
    ostream.writeUI16(programNumber);
    retVal +=2;
    // write sourceId
    ostream.writeUI16(sourceId);
    retVal +=2;
    // write caPmtCmdId
    ostream.writeUI8(caPmtCmdId);
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

int CaPmtMMode2_1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaPmtMMode2_1\n");
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
    // write programIndex
    dc.indent();
    dc.getPs().print("programIndex=");
    dc.getPs().println((long)programIndex);
    // write txnId
    dc.indent();
    dc.getPs().print("txnId=");
    dc.getPs().println((long)txnId);
    // write ltsid
    dc.indent();
    dc.getPs().print("ltsid=");
    dc.getPs().println((long)ltsid);
    // write programNumber
    dc.indent();
    dc.getPs().print("programNumber=");
    dc.getPs().println((long)programNumber);
    // write sourceId
    dc.indent();
    dc.getPs().print("sourceId=");
    dc.getPs().println((long)sourceId);
    // write caPmtCmdId
    dc.indent();
    dc.getPs().print("caPmtCmdId=");
    dc.getPs().println((long)caPmtCmdId);
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
//org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtMMode2_1::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CaPmtMMode2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CaPmtMMode2_1::getLength()
//{
//return this->length;
//}

// Setter for length
//void CaPmtMMode2_1::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for programIndex
//ui8 CaPmtMMode2_1::getProgramIndex()
//{
//return this->programIndex;
//}

// Setter for programIndex
//void CaPmtMMode2_1::setProgramIndex(ui8 val)
//{
//this->programIndex= val;
//}

// Getter for txnId
//ui8 CaPmtMMode2_1::getTxnId()
//{
//return this->txnId;
//}

// Setter for txnId
//void CaPmtMMode2_1::setTxnId(ui8 val)
//{
//this->txnId= val;
//}

// Getter for ltsid
//ui8 CaPmtMMode2_1::getLtsid()
//{
//return this->ltsid;
//}

// Setter for ltsid
//void CaPmtMMode2_1::setLtsid(ui8 val)
//{
//this->ltsid= val;
//}

// Getter for programNumber
//ui16 CaPmtMMode2_1::getProgramNumber()
//{
//return this->programNumber;
//}

// Setter for programNumber
//void CaPmtMMode2_1::setProgramNumber(ui16 val)
//{
//this->programNumber= val;
//}

// Getter for sourceId
//ui16 CaPmtMMode2_1::getSourceId()
//{
//return this->sourceId;
//}

// Setter for sourceId
//void CaPmtMMode2_1::setSourceId(ui16 val)
//{
//this->sourceId= val;
//}

// Getter for caPmtCmdId
//ui8 CaPmtMMode2_1::getCaPmtCmdId()
//{
//return this->caPmtCmdId;
//}

// Setter for caPmtCmdId
//void CaPmtMMode2_1::setCaPmtCmdId(ui8 val)
//{
//this->caPmtCmdId= val;
//}

// Getter for bf2
//ui16 CaPmtMMode2_1::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaPmtMMode2_1::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for StatusfieldCheckInstance
//org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE CaPmtMMode2_1::getStatusfieldCheckInstance()
//{
//return this->StatusfieldCheckInstance;
//}

// Setter for StatusfieldCheckInstance
//void CaPmtMMode2_1::setStatusfieldCheckInstance(org_himalay_ccif_CaPmtMMode2_1_StatusfieldCheck__PTR_TYPE val)
//{
//this->StatusfieldCheckInstance= val;
//}

// Getter for CaEntries
//ArrayList(CaPmtModeMsg) CaPmtMMode2_1::getCaEntries()
//{
//return this->CaEntries;
//}

// Setter for CaEntries
//void CaPmtMMode2_1::setCaEntries(ArrayList(CaPmtModeMsg) val)
//{
//this->CaEntries= val;
//}

int CaPmtMMode2_1::getReserved( ) {
    return ( this->bf2 & 0x0000f080 ) >> 7 ;
}

void CaPmtMMode2_1::setReserved(int val) {
    bf2=(  (this->bf2 & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
}

int CaPmtMMode2_1::getProgramInfoLength( ) {
    return ( this->bf2 & 0x00000fff ) >> 0 ;
}

void CaPmtMMode2_1::setProgramInfoLength(int val) {
    bf2=(  (this->bf2 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int CaPmtMMode2_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CaPmtMMode2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtMMode2_1::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CaPmtMMode2_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1::StatusfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtMMode2_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtMMode2_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code