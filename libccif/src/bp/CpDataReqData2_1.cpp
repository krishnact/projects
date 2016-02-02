//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CpDataReqData2_1.h"

#ifdef org_himalay_ccif_CpDataReqData2_1__USE_SMART_PTR
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
CpDataReqData2_1::CpDataReqData2_1() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // cpSystemId
    cpSystemId= (ui8)0;
    // cadatanbr
    cadatanbr.setMemberSize(0);
    // DataType_id
    org_himalay_msgs_runtime_ByteArray_NEW(DataType_id);
    DataType_id->setSizeType("FIRST_UI8");
}
// Destructor
CpDataReqData2_1::~CpDataReqData2_1() {
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
    // DataType_id
    org_himalay_msgs_runtime_ByteArray_DELETE( DataType_id);
}

int CpDataReqData2_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // DataType_id
    {
        retVal+=DataType_id->read(istream);
    }
    return retVal;
}

int CpDataReqData2_1::read(DataInputStream&  istream ) { // throws IOException
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
    // read DataType_id
    {
        retVal+=DataType_id->read(istream);
    }

    return retVal;
}

int CpDataReqData2_1::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for cadatanbr**/
    }
    {   /** fix dependent sizes for DataType_id**/
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
    // write DataType_id
    {
        retVal += DataType_id->write(ostream);
    }

    return retVal;
}

int CpDataReqData2_1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CpDataReqData2_1\n");
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
    // write DataType_id
    dc.indent();
    dc.getPs().print("DataType_id");
    DataType_id->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE CpDataReqData2_1::getHeader()
//{
//return this->header;
//}

// Setter for header
//void CpDataReqData2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 CpDataReqData2_1::getLength()
//{
//return this->length;
//}

// Setter for length
//void CpDataReqData2_1::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for cpSystemId
//ui8 CpDataReqData2_1::getCpSystemId()
//{
//return this->cpSystemId;
//}

// Setter for cpSystemId
//void CpDataReqData2_1::setCpSystemId(ui8 val)
//{
//this->cpSystemId= val;
//}

// Getter for cadatanbr
//ArrayList(CpDataReqMsg) CpDataReqData2_1::getCadatanbr()
//{
//return this->cadatanbr;
//}

// Setter for cadatanbr
//void CpDataReqData2_1::setCadatanbr(ArrayList(CpDataReqMsg) val)
//{
//this->cadatanbr= val;
//}

// Getter for DataType_id
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CpDataReqData2_1::getDataType_id()
//{
//return this->DataType_id;
//}

// Setter for DataType_id
//void CpDataReqData2_1::setDataType_id(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->DataType_id= val;
//}

int CpDataReqData2_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void CpDataReqData2_1::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE CpDataReqData2_1::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_CpDataReqData2_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CpDataReqData2_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CpDataReqData2_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code