//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DeleteFlowCnf.h"

#ifdef org_himalay_ccif_DeleteFlowCnf__USE_SMART_PTR
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
DeleteFlowCnf::DeleteFlowCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // flowId
    flowId= (ui24)0;
    // statusField
    statusField= (ui8)0;
}
// Destructor
DeleteFlowCnf::~DeleteFlowCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // flowId

    // statusField

}

int DeleteFlowCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // flowId
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        flowId= i1 | i2;
        retVal += 3;
    }
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int DeleteFlowCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read flowId
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        flowId= i1 | i2;
        retVal += 3;
    }
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int DeleteFlowCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }




    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write flowId
    {
        ostream.writeUI8((flowId  & 0x00FF0000)>>16);
        ostream.writeUI16((flowId & 0x0000FFFF));
        retVal+=3;
    }
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;

    return retVal;
}

int DeleteFlowCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DeleteFlowCnf\n");
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
    // write flowId
    dc.indent();
    dc.getPs().print("flowId=");
    dc.getPs().println((long)flowId);
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE DeleteFlowCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void DeleteFlowCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 DeleteFlowCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void DeleteFlowCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for flowId
//ui24 DeleteFlowCnf::getFlowId()
//{
//return this->flowId;
//}

// Setter for flowId
//void DeleteFlowCnf::setFlowId(ui24 val)
//{
//this->flowId= val;
//}

// Getter for statusField
//ui8 DeleteFlowCnf::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void DeleteFlowCnf::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

int DeleteFlowCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void DeleteFlowCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE DeleteFlowCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_DeleteFlowCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DeleteFlowCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DeleteFlowCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code