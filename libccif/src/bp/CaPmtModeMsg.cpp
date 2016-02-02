//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaPmtModeMsg.h"

#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
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
CaPmtModeMsg::esfieldCheck::esfieldCheck() {
    references= 0;

    parent = NULL;

    // caPmtCmdId
    caPmtCmdId= (ui8)0;
    // programInfoLength
    programInfoLength.setMemberSize(0);
}
// Destructor
CaPmtModeMsg::esfieldCheck::~esfieldCheck() {
    // caPmtCmdId

    // programInfoLength
    {
#ifndef org_himalay_ccif_CaDescriptor_USE_SMART_PTR
        programInfoLength.deleteMembers();
#endif
    }
    parent = NULL;
}

int CaPmtModeMsg::esfieldCheck::readNoHeader(DataInputStream&  istream ) { // throws IOException
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

int CaPmtModeMsg::esfieldCheck::read(DataInputStream&  istream ) { // throws IOException
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

int CaPmtModeMsg::esfieldCheck::write(DataOutputStream& ostream) { // throws IOException

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

int CaPmtModeMsg::esfieldCheck::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("esfieldCheck\n");
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
//ui8 CaPmtModeMsg::esfieldCheck::getCaPmtCmdId()
//{
//return this->caPmtCmdId;
//}

// Setter for caPmtCmdId
//void CaPmtModeMsg::esfieldCheck::setCaPmtCmdId(ui8 val)
//{
//this->caPmtCmdId= val;
//}

// Getter for programInfoLength
//ArrayList(CaDescriptor) CaPmtModeMsg::esfieldCheck::getProgramInfoLength()
//{
//return this->programInfoLength;
//}

// Setter for programInfoLength
//void CaPmtModeMsg::esfieldCheck::setProgramInfoLength(ArrayList(CaDescriptor) val)
//{
//this->programInfoLength= val;
//}

int CaPmtModeMsg::esfieldCheck::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaPmtModeMsg_esfieldCheck__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->decreaseRef();
};;
#endif

// Constructor
CaPmtModeMsg::CaPmtModeMsg() {
    references= 0;


    // streamType
    streamType= (ui8)0;
    // bf2
    bf2 = 0;
    // bf3
    bf3 = 0;
    // esfieldCheckInstance
    org_himalay_ccif_CaPmtModeMsg_esfieldCheck__INIT(esfieldCheckInstance)
}
// Destructor
CaPmtModeMsg::~CaPmtModeMsg() {
    // streamType

    // bf2

    // bf3

    // esfieldCheckInstance
    org_himalay_ccif_CaPmtModeMsg_esfieldCheck__DELETE( esfieldCheckInstance);
}

int CaPmtModeMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // streamType
    {
        streamType=(istream.readUI8());
        retVal+=1;
    }
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // bf3
    bf3= istream.readUI16();
    retVal += 2;
    // esfieldCheckInstance
    if(getEsInfoLength()!= 0) {
        org_himalay_ccif_CaPmtModeMsg_esfieldCheck__NEW( esfieldCheckInstance);
        esfieldCheckInstance->parent=this;
        retVal += esfieldCheckInstance->read(istream);
    }
    return retVal;
}

int CaPmtModeMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read streamType
    {
        streamType=(istream.readUI8());
        retVal+=1;
    }
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read bf3
    bf3= istream.readUI16();
    retVal += 2;
    // read esfieldCheckInstance
    if(getEsInfoLength()!= 0) {
        org_himalay_ccif_CaPmtModeMsg_esfieldCheck__NEW( esfieldCheckInstance);
        esfieldCheckInstance->parent=this;
        retVal += esfieldCheckInstance->read(istream);
    }

    return retVal;
}

int CaPmtModeMsg::write(DataOutputStream& ostream) { // throws IOException



    {   /** fix dependent sizes for esfieldCheckInstance **/
    }

    int retVal= 0;
    // write streamType
    ostream.writeUI8(streamType);
    retVal +=1;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;
    // write bf3
    ostream.writeUI16(bf3);
    retVal +=2;
    // write esfieldCheckInstance
    if ( esfieldCheckInstance != NULL ) {
        retVal +=esfieldCheckInstance->write(ostream);
    }

    return retVal;
}

int CaPmtModeMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaPmtModeMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write streamType
    dc.indent();
    dc.getPs().print("streamType=");
    dc.getPs().println((long)streamType);
    // write bf2
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),5);
        dc.indent();
        dc.getPs().print("esInfoLength: ");
        dc.getPs().printlnBin(getEsInfoLength(),12);
    }
    // write bf3
    {
        dc.indent();
        dc.getPs().print("reserved1: ");
        dc.getPs().printlnBin(getReserved1(),3);
        dc.indent();
        dc.getPs().print("elementryPid: ");
        dc.getPs().printlnBin(getElementryPid(),13);
    }
    // write esfieldCheckInstance
    if ( esfieldCheckInstance != NULL ) {
        dc.indent();
        dc.getPs().println("esfieldCheckInstance") ;
        retVal +=esfieldCheckInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for streamType
//ui8 CaPmtModeMsg::getStreamType()
//{
//return this->streamType;
//}

// Setter for streamType
//void CaPmtModeMsg::setStreamType(ui8 val)
//{
//this->streamType= val;
//}

// Getter for bf2
//ui16 CaPmtModeMsg::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void CaPmtModeMsg::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for bf3
//ui16 CaPmtModeMsg::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void CaPmtModeMsg::setBf3(ui16 val)
//{
//this->bf3= val;
//}

// Getter for esfieldCheckInstance
//org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE CaPmtModeMsg::getEsfieldCheckInstance()
//{
//return this->esfieldCheckInstance;
//}

// Setter for esfieldCheckInstance
//void CaPmtModeMsg::setEsfieldCheckInstance(org_himalay_ccif_CaPmtModeMsg_esfieldCheck__PTR_TYPE val)
//{
//this->esfieldCheckInstance= val;
//}

int CaPmtModeMsg::getReserved( ) {
    return ( this->bf2 & 0x0000f080 ) >> 7 ;
}

void CaPmtModeMsg::setReserved(int val) {
    bf2=(  (this->bf2 & 0xffff0f7f) | ( (val << 7 ) & 0x0000f080));
}

int CaPmtModeMsg::getEsInfoLength( ) {
    return ( this->bf2 & 0x00000fff ) >> 0 ;
}

void CaPmtModeMsg::setEsInfoLength(int val) {
    bf2=(  (this->bf2 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int CaPmtModeMsg::getReserved1( ) {
    return ( this->bf3 & 0x0000e000 ) >> 13 ;
}

void CaPmtModeMsg::setReserved1(int val) {
    bf3=(  (this->bf3 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int CaPmtModeMsg::getElementryPid( ) {
    return ( this->bf3 & 0x00001fff ) >> 0 ;
}

void CaPmtModeMsg::setElementryPid(int val) {
    bf3=(  (this->bf3 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int CaPmtModeMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaPmtModeMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg::esfieldCheck* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::CaPmtModeMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaPmtModeMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code