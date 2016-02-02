//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FirmwareVerReportS_Mode.h"

#ifdef org_himalay_ccif_FirmwareVerReportS_Mode__USE_SMART_PTR
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
FirmwareVerReportS_Mode::FirmwareVerReportS_Mode() {
    references= 0;


    // firmwareVersion
    firmwareVersion= (ui16)0;
    // fwareDate
    org_himalay_ccif_FirmWareDate__NEW( fwareDate);
}
// Destructor
FirmwareVerReportS_Mode::~FirmwareVerReportS_Mode() {
    // firmwareVersion

    // fwareDate
    org_himalay_ccif_FirmWareDate__DELETE( fwareDate);
}

int FirmwareVerReportS_Mode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // firmwareVersion
    {
        firmwareVersion=istream.readUI16();
        retVal+=2;
    }
    // fwareDate
    retVal += fwareDate->read(istream);
    return retVal;
}

int FirmwareVerReportS_Mode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read firmwareVersion
    {
        firmwareVersion=istream.readUI16();
        retVal+=2;
    }
    // read fwareDate
    retVal += fwareDate->read(istream);

    return retVal;
}

int FirmwareVerReportS_Mode::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for fwareDate **/
    }

    int retVal= 0;
    // write firmwareVersion
    ostream.writeUI16(firmwareVersion);
    retVal +=2;
    // write fwareDate
    if ( fwareDate != NULL ) {
        retVal +=fwareDate->write(ostream);
    }

    return retVal;
}

int FirmwareVerReportS_Mode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FirmwareVerReportS_Mode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write firmwareVersion
    dc.indent();
    dc.getPs().print("firmwareVersion=");
    dc.getPs().println((long)firmwareVersion);
    // write fwareDate
    if ( fwareDate != NULL ) {
        dc.indent();
        dc.getPs().println("fwareDate") ;
        retVal +=fwareDate->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for firmwareVersion
//ui16 FirmwareVerReportS_Mode::getFirmwareVersion()
//{
//return this->firmwareVersion;
//}

// Setter for firmwareVersion
//void FirmwareVerReportS_Mode::setFirmwareVersion(ui16 val)
//{
//this->firmwareVersion= val;
//}

// Getter for fwareDate
//org_himalay_ccif_FirmWareDate__PTR_TYPE FirmwareVerReportS_Mode::getFwareDate()
//{
//return this->fwareDate;
//}

// Setter for fwareDate
//void FirmwareVerReportS_Mode::setFwareDate(org_himalay_ccif_FirmWareDate__PTR_TYPE val)
//{
//this->fwareDate= val;
//}

int FirmwareVerReportS_Mode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_FirmwareVerReportS_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmwareVerReportS_Mode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FirmwareVerReportS_Mode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code