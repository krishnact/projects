//@Generated(date = "Mon Feb 01 22:30:10 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "APDUBase_2Factory.h"
#include "NewFlowRequest1_3and1_4.h"
#include "diagnosticReqMmodeCnf.h"
#include "NewFlowConfirm1Type1234.h"
// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;


org::himalay::ccif::APDUBase_2Factory::APDUBase_2::APDUBase_2() {};
org::himalay::ccif::APDUBase_2Factory::APDUBase_2::~APDUBase_2() {};
bool APDUBase_2Factory::isDebug = true;
/**
 *
 *APDUBase_2Factory::APDUBase_2Ptr APDUBase_2Factory::lastParsedObject= NULL;
 *
 */
org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE APDUBase_2Factory::createMsg(DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    //org_himalay_ccif_APDUHeader__PTR_TYPE temp;
    org_himalay_ccif_APDUHeader__PTR_TYPE header ;
    org_himalay_ccif_APDUHeader__NEW( header); ;
    //org_himalay_ccif_APDUHeader__NEW(temp) ;//new org.himalay.msgs.cpp.Complex@2c97a473());
    retVal += header->read(istream);


    org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE retObj= createMsg( header,  istream,  iHolder);
    iHolder=iHolder+retVal;
    return retObj;
}

org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE APDUBase_2Factory::createMsg( org_himalay_ccif_APDUHeader__PTR_TYPE temp, DataInputStream& istream, int& iHolder) throw(IOException)
{
    int retVal= 0;
    org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE retObj;
    try {
        switch( temp->getMessageType() )        {
        case 0x9F8E00 :
        {
            retObj= org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE((APDUBase_2Factory::APDUBase_2 *) new NewFlowRequest1_3and1_4 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9FDF01 :
        {
            retObj= org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE((APDUBase_2Factory::APDUBase_2 *) new diagnosticReqMmodeCnf ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0x9F8E01 :
        {
            retObj= org_himalay_ccif_APDUBase_2Factory_APDUBase_2__PTR_TYPE((APDUBase_2Factory::APDUBase_2 *) new NewFlowConfirm1Type1234 ());
            retObj->setHeader(temp);
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        }
    } catch(IOException& ioex)
    {
        if (isDebug)
        {
//        lastParsedObject = retVal;
        }
        throw ioex;
    }
    iHolder=retVal;
    return retObj;
}
void intrusive_ptr_add_ref(org::himalay::ccif::APDUBase_2Factory::APDUBase_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::APDUBase_2Factory::APDUBase_2* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.ccif




// End of code