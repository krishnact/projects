//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FirmwareVerReportM_Mode.h"

#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
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
FirmwareVerReportM_Mode::FirmwareVerReportM_Mode() {
    references= 0;


    // firmWareVersionCharacter
    org_himalay_msgs_runtime_ByteArray_NEW(firmWareVersionCharacter);
    firmWareVersionCharacter->setSizeType("FIRST_UI8");
    // fwareDate
    org_himalay_ccif_FirmWareDate__NEW( fwareDate);
}
// Destructor
FirmwareVerReportM_Mode::~FirmwareVerReportM_Mode() {
    // firmWareVersionCharacter
    org_himalay_msgs_runtime_ByteArray_DELETE( firmWareVersionCharacter);
    // fwareDate
    org_himalay_ccif_FirmWareDate__DELETE( fwareDate);
}

int FirmwareVerReportM_Mode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // firmWareVersionCharacter
    {
        retVal+=firmWareVersionCharacter->read(istream);
    }
    // fwareDate
    retVal += fwareDate->read(istream);
    return retVal;
}

int FirmwareVerReportM_Mode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read firmWareVersionCharacter
    {
        retVal+=firmWareVersionCharacter->read(istream);
    }
    // read fwareDate
    retVal += fwareDate->read(istream);

    return retVal;
}

int FirmwareVerReportM_Mode::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for firmWareVersionCharacter**/
    }
    {   /** fix dependent sizes for fwareDate **/
    }

    int retVal= 0;
    // write firmWareVersionCharacter
    {
        retVal += firmWareVersionCharacter->write(ostream);
    }
    // write fwareDate
    if ( fwareDate != NULL ) {
        retVal +=fwareDate->write(ostream);
    }

    return retVal;
}

int FirmwareVerReportM_Mode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FirmwareVerReportM_Mode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write firmWareVersionCharacter
    dc.indent();
    dc.getPs().print("firmWareVersionCharacter");
    firmWareVersionCharacter->dump(dc);
    // write fwareDate
    if ( fwareDate != NULL ) {
        dc.indent();
        dc.getPs().println("fwareDate") ;
        retVal +=fwareDate->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for firmWareVersionCharacter
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE FirmwareVerReportM_Mode::getFirmWareVersionCharacter()
//{
//return this->firmWareVersionCharacter;
//}

// Setter for firmWareVersionCharacter
//void FirmwareVerReportM_Mode::setFirmWareVersionCharacter(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->firmWareVersionCharacter= val;
//}

// Getter for fwareDate
//org_himalay_ccif_FirmWareDate__PTR_TYPE FirmwareVerReportM_Mode::getFwareDate()
//{
//return this->fwareDate;
//}

// Setter for fwareDate
//void FirmwareVerReportM_Mode::setFwareDate(org_himalay_ccif_FirmWareDate__PTR_TYPE val)
//{
//this->fwareDate= val;
//}

int FirmwareVerReportM_Mode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_FirmwareVerReportM_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmwareVerReportM_Mode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FirmwareVerReportM_Mode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code