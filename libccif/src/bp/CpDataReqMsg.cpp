//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CpDataReqMsg.h"

#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
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
CpDataReqMsg::CpDataReqMsg() {
    references= 0;


    // dataTypeId
    dataTypeId= (ui8)0;
    // dataType
    org_himalay_msgs_runtime_ByteArray_NEW(dataType);
    dataType->setSizeType("FIRST_UI8");
    // DataType_id
    org_himalay_msgs_runtime_ByteArray_NEW(DataType_id);
    DataType_id->setSizeType("FIRST_UI8");
}
// Destructor
CpDataReqMsg::~CpDataReqMsg() {
    // dataTypeId

    // dataType
    org_himalay_msgs_runtime_ByteArray_DELETE( dataType);
    // DataType_id
    org_himalay_msgs_runtime_ByteArray_DELETE( DataType_id);
}

int CpDataReqMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // dataTypeId
    {
        dataTypeId=(istream.readUI8());
        retVal+=1;
    }
    // dataType
    {
        retVal+=dataType->read(istream);
    }
    // DataType_id
    {
        retVal+=DataType_id->read(istream);
    }
    return retVal;
}

int CpDataReqMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read dataTypeId
    {
        dataTypeId=(istream.readUI8());
        retVal+=1;
    }
    // read dataType
    {
        retVal+=dataType->read(istream);
    }
    // read DataType_id
    {
        retVal+=DataType_id->read(istream);
    }

    return retVal;
}

int CpDataReqMsg::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for dataType**/
    }
    {   /** fix dependent sizes for DataType_id**/
    }

    int retVal= 0;
    // write dataTypeId
    ostream.writeUI8(dataTypeId);
    retVal +=1;
    // write dataType
    {
        retVal += dataType->write(ostream);
    }
    // write DataType_id
    {
        retVal += DataType_id->write(ostream);
    }

    return retVal;
}

int CpDataReqMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CpDataReqMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write dataTypeId
    dc.indent();
    dc.getPs().print("dataTypeId=");
    dc.getPs().println((long)dataTypeId);
    // write dataType
    dc.indent();
    dc.getPs().print("dataType");
    dataType->dump(dc);
    // write DataType_id
    dc.indent();
    dc.getPs().print("DataType_id");
    DataType_id->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for dataTypeId
//ui8 CpDataReqMsg::getDataTypeId()
//{
//return this->dataTypeId;
//}

// Setter for dataTypeId
//void CpDataReqMsg::setDataTypeId(ui8 val)
//{
//this->dataTypeId= val;
//}

// Getter for dataType
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CpDataReqMsg::getDataType()
//{
//return this->dataType;
//}

// Setter for dataType
//void CpDataReqMsg::setDataType(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->dataType= val;
//}

// Getter for DataType_id
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CpDataReqMsg::getDataType_id()
//{
//return this->DataType_id;
//}

// Setter for DataType_id
//void CpDataReqMsg::setDataType_id(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->DataType_id= val;
//}

int CpDataReqMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CpDataReqMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CpDataReqMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CpDataReqMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code