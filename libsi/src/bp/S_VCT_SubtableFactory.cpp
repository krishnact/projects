//@Generated(date = "Mon Feb 01 22:29:56 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
#include "S_VCT_SubtableFactory.h"
#include "DCM_structure_base.h"
#include "DCM_structure.h"
#include "ICM_structure_base.h"
#include "ICM_structure.h"
#include "VCM_structure_base.h"
#include "VCM_structure.h"
// Namespace
namespace org {
namespace himalay {
namespace si {

using namespace ::org::himalay::msgs::runtime;


org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable::S_VCT_Subtable() {};
org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable::~S_VCT_Subtable() {};
bool S_VCT_SubtableFactory::isDebug = true;
/**
 *
 *S_VCT_SubtableFactory::S_VCT_SubtablePtr S_VCT_SubtableFactory::lastParsedObject= NULL;
 *
 */
org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE S_VCT_SubtableFactory::createMsg( int messageType, DataInputStream& istream, int& iHolder) throw(IOException)
{

    int retVal= 0;
    org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE retObj;
    try {
        switch( messageType )
        {
        case 1 :
        {
            retObj= org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE((S_VCT_SubtableFactory::S_VCT_Subtable *) new DCM_structure ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 3 :
        {
            retObj= org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE((S_VCT_SubtableFactory::S_VCT_Subtable *) new ICM_structure ());
            retVal+=retObj->readNoHeader(istream);
            break;
        }
        case 0 :
        {
            retObj= org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE((S_VCT_SubtableFactory::S_VCT_Subtable *) new VCM_structure ());
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
void intrusive_ptr_add_ref(org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::S_VCT_SubtableFactory::S_VCT_Subtable* p) {
    if (p->decreaseRef() == 0u) delete p;
};

}
}
} // End Namespace org.himalay.si




// End of code