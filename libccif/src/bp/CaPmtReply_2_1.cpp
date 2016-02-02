//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaPmtReply_2_1.h"

#ifdef org_himalay_ccif_CaPmtReply_2_1__USE_SMART_PTR
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
CaPmtReply_2_1::CaPmtReply_2_1() {
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
    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // CaEntries
    CaEntries.setMemberSize(0);
}
// Destructor
CaPmtReply_2_1::~CaPmtReply_2_1() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // programIndex

    // txnId

    // ltsid

    // programNumber

    // sourceId

    // bf1

    // bf2

    // CaEntries
    {
#ifndef org_himalay_ccif_CaEntry_USE_SMART_PTR
        CaEntries.deleteMembers();
#endif
    }
}

int CaPmtReply_2_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaEntry__PTR_TYPE temp;
        org_himalay_ccif_CaEntry__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }
    return retVal;
}

int CaPmtReply_2_1::read(DataInputStream&  istream ) { // throws IOException
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
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CaEntry__PTR_TYPE temp;
        org_himalay_ccif_CaEntry__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }

    return retVal;
}

int CaPmtReply_2_1::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
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
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write CaEntries
{   for (ArrayList_iterator(CaEntry) it=  CaEntries.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CaPmtReply_2_1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaPmtReply_2_1\n");
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
        dc.getPs().print("caEnableFlag: ");
        dc.getPs().printlnBin(getCaEnableFlag(),1);
        dc.indent();
        dc.getPs().print("caEnable: ");
        dc.getPs().printlnBin(getCaEnable(),7);
    }
    // write CaEntries
{   for (ArrayList_iterator(CaEntry) it=  CaEntries.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtReply_2_1::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CaPmtReply_2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CaPmtReply_2_1::getLength()
//{
//return this->length;
//}

// Setter for length
//void CaPmtReply_2_1::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for programIndex
//ui8 CaPmtReply_2_1::getProgramIndex()
//{
//return this->programIndex;
//}

// Setter for programIndex
//void CaPmtReply_2_1::setProgramIndex(ui8 val)
//{
//this->programIndex= val;
//}

// Getter for txnId
//ui8 CaPmtReply_2_1::getTxnId()
//{
//return this->txnId;
//}

// Setter for txnId
//void CaPmtReply_2_1::setTxnId(ui8 val)
//{
//this->txnId= val;
//}

// Getter for ltsid
//ui8 CaPmtReply_2_1::getLtsid()
//{
//return this->ltsid;
//}

// Setter for ltsid
//void CaPmtReply_2_1::setLtsid(ui8 val)
//{
//this->ltsid= val;
//}

// Getter for programNumber
//ui16 CaPmtReply_2_1::getProgramNumber()
//{
//return this->programNumber;
//}

// Setter for programNumber
//void CaPmtReply_2_1::setProgramNumber(ui16 val)
//{
//this->programNumber= val;
//}

// Getter for sourceId
//ui16 CaPmtReply_2_1::getSourceId()
//{
//return this->sourceId;
//}

// Setter for sourceId
//void CaPmtReply_2_1::setSourceId(ui16 val)
//{
//this->sourceId= val;
//}

// Getter for bf1
//ui8 CaPmtReply_2_1::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CaPmtReply_2_1::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 CaPmtReply_2_1::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaPmtReply_2_1::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for CaEntries
//ArrayList(CaEntry) CaPmtReply_2_1::getCaEntries()
//{
//return this->CaEntries;
//}

// Setter for CaEntries
//void CaPmtReply_2_1::setCaEntries(ArrayList(CaEntry) val)
//{
//this->CaEntries= val;
//}

int CaPmtReply_2_1::getReserved1( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void CaPmtReply_2_1::setReserved1(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int CaPmtReply_2_1::getVersionNumber( ) {
    return ( this->bf1 & 0x0000003e ) >> 1 ;
}

void CaPmtReply_2_1::setVersionNumber(int val) {
    bf1=(  (this->bf1 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int CaPmtReply_2_1::getCurrentNext( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void CaPmtReply_2_1::setCurrentNext(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int CaPmtReply_2_1::getCaEnableFlag( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void CaPmtReply_2_1::setCaEnableFlag(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int CaPmtReply_2_1::getCaEnable( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void CaPmtReply_2_1::setCaEnable(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int CaPmtReply_2_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CaPmtReply_2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtReply_2_1::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CaPmtReply_2_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtReply_2_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtReply_2_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code