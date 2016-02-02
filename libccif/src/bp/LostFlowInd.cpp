//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LostFlowInd.h"

#ifdef org_himalay_ccif_LostFlowInd__USE_SMART_PTR
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
LostFlowInd::LostFlowInd() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // flowId
    flowId= (ui24)0;
    // reasonField
    reasonField= (ui8)0;
}
// Destructor
LostFlowInd::~LostFlowInd() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // flowId

    // reasonField

}

int LostFlowInd::readNoHeader(DataInputStream&  istream ) { // throws IOException
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
    // reasonField
    {
        reasonField=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int LostFlowInd::read(DataInputStream&  istream ) { // throws IOException
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
    // read reasonField
    {
        reasonField=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int LostFlowInd::write(DataOutputStream& ostream) { // throws IOException
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
    // write reasonField
    ostream.writeUI8(reasonField);
    retVal +=1;

    return retVal;
}

int LostFlowInd::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LostFlowInd\n");
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
    // write reasonField
    dc.indent();
    dc.getPs().print("reasonField=");
    dc.getPs().println((long)reasonField);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE LostFlowInd::getHeader()
//{
//return this->header;
//}

// Setter for header
//void LostFlowInd::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 LostFlowInd::getLength()
//{
//return this->length;
//}

// Setter for length
//void LostFlowInd::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for flowId
//ui24 LostFlowInd::getFlowId()
//{
//return this->flowId;
//}

// Setter for flowId
//void LostFlowInd::setFlowId(ui24 val)
//{
//this->flowId= val;
//}

// Getter for reasonField
//ui8 LostFlowInd::getReasonField()
//{
//return this->reasonField;
//}

// Setter for reasonField
//void LostFlowInd::setReasonField(ui8 val)
//{
//this->reasonField= val;
//}

int LostFlowInd::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void LostFlowInd::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE LostFlowInd::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_LostFlowInd__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::LostFlowInd* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::LostFlowInd* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code