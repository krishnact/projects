//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaPmtReply_1_2.h"

#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
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
CaPmtReply_1_2::CaPmtReply_1_2() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // programNumber
    programNumber= (ui16)0;
    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // CaEntries
    CaEntries.setMemberSize(0);
}
// Destructor
CaPmtReply_1_2::~CaPmtReply_1_2() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // programNumber

    // bf1

    // bf2

    // CaEntries
    {
#ifndef org_himalay_ccif_CaEntry_USE_SMART_PTR
        CaEntries.deleteMembers();
#endif
    }
}

int CaPmtReply_1_2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
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

int CaPmtReply_1_2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
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

int CaPmtReply_1_2::write(DataOutputStream& ostream) { // throws IOException
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
    // write programNumber
    ostream.writeUI16(programNumber);
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

int CaPmtReply_1_2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaPmtReply_1_2\n");
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
//org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtReply_1_2::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CaPmtReply_1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CaPmtReply_1_2::getLength()
//{
//return this->length;
//}

// Setter for length
//void CaPmtReply_1_2::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for programNumber
//ui16 CaPmtReply_1_2::getProgramNumber()
//{
//return this->programNumber;
//}

// Setter for programNumber
//void CaPmtReply_1_2::setProgramNumber(ui16 val)
//{
//this->programNumber= val;
//}

// Getter for bf1
//ui8 CaPmtReply_1_2::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void CaPmtReply_1_2::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 CaPmtReply_1_2::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaPmtReply_1_2::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for CaEntries
//ArrayList(CaEntry) CaPmtReply_1_2::getCaEntries()
//{
//return this->CaEntries;
//}

// Setter for CaEntries
//void CaPmtReply_1_2::setCaEntries(ArrayList(CaEntry) val)
//{
//this->CaEntries= val;
//}

int CaPmtReply_1_2::getReserved1( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void CaPmtReply_1_2::setReserved1(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int CaPmtReply_1_2::getVersionNumber( ) {
    return ( this->bf1 & 0x0000003e ) >> 1 ;
}

void CaPmtReply_1_2::setVersionNumber(int val) {
    bf1=(  (this->bf1 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int CaPmtReply_1_2::getCurrentNext( ) {
    return ( this->bf1 & 0x00000001 ) >> 0 ;
}

void CaPmtReply_1_2::setCurrentNext(int val) {
    bf1=(  (this->bf1 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int CaPmtReply_1_2::getCaEnableFlag( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void CaPmtReply_1_2::setCaEnableFlag(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int CaPmtReply_1_2::getCaEnable( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void CaPmtReply_1_2::setCaEnable(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int CaPmtReply_1_2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CaPmtReply_1_2::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CaPmtReply_1_2::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CaPmtReply_1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtReply_1_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtReply_1_2* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code