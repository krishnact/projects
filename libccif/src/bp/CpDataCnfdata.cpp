//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CpDataCnfdata.h"

#ifdef org_himalay_ccif_CpDataCnfdata__USE_SMART_PTR
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
CpDataCnfdata::CpDataCnfdata() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // cpSystemId
    cpSystemId= (ui8)0;
    // cadatanbr
    cadatanbr.setMemberSize(0);
}
// Destructor
CpDataCnfdata::~CpDataCnfdata() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // cpSystemId

    // cadatanbr
    {
#ifndef org_himalay_ccif_CpDataReqMsg_USE_SMART_PTR
        cadatanbr.deleteMembers();
#endif
    }
}

int CpDataCnfdata::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // cpSystemId
    {
        cpSystemId=(istream.readUI8());
        retVal+=1;
    }
    // cadatanbr
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CpDataReqMsg__PTR_TYPE temp;
        org_himalay_ccif_CpDataReqMsg__NEW( temp);
        retVal += temp->read(istream);
        cadatanbr.add(temp);
    }
    return retVal;
}

int CpDataCnfdata::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read cpSystemId
    {
        cpSystemId=(istream.readUI8());
        retVal+=1;
    }
    // read cadatanbr
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_CpDataReqMsg__PTR_TYPE temp;
        org_himalay_ccif_CpDataReqMsg__NEW( temp);
        retVal += temp->read(istream);
        cadatanbr.add(temp);
    }

    return retVal;
}

int CpDataCnfdata::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for cadatanbr**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write cpSystemId
    ostream.writeUI8(cpSystemId);
    retVal +=1;
    // write cadatanbr
{   for (ArrayList_iterator(CpDataReqMsg) it=  cadatanbr.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CpDataCnfdata::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CpDataCnfdata\n");
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
    // write cpSystemId
    dc.indent();
    dc.getPs().print("cpSystemId=");
    dc.getPs().println((long)cpSystemId);
    // write cadatanbr
{   for (ArrayList_iterator(CpDataReqMsg) it=  cadatanbr.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE CpDataCnfdata::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CpDataCnfdata::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CpDataCnfdata::getLength()
//{
//return this->length;
//}

// Setter for length
//void CpDataCnfdata::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for cpSystemId
//ui8 CpDataCnfdata::getCpSystemId()
//{
//return this->cpSystemId;
//}

// Setter for cpSystemId
//void CpDataCnfdata::setCpSystemId(ui8 val)
//{
//this->cpSystemId= val;
//}

// Getter for cadatanbr
//ArrayList(CpDataReqMsg) CpDataCnfdata::getCadatanbr()
//{
//return this->cadatanbr;
//}

// Setter for cadatanbr
//void CpDataCnfdata::setCadatanbr(ArrayList(CpDataReqMsg) val)
//{
//this->cadatanbr= val;
//}

int CpDataCnfdata::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CpDataCnfdata::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CpDataCnfdata::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CpDataCnfdata__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CpDataCnfdata* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CpDataCnfdata* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code