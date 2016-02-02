//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SoftwareVerReportM_Mode.h"

#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
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
SoftwareVerReportM_Mode::SoftwareVerReportM_Mode() {
    references= 0;


    // applicationsInReport
    applicationsInReport.setMemberSize(0);
}
// Destructor
SoftwareVerReportM_Mode::~SoftwareVerReportM_Mode() {
    // applicationsInReport
    {
#ifndef org_himalay_ccif_softwareVerMMsg_USE_SMART_PTR
        applicationsInReport.deleteMembers();
#endif
    }
}

int SoftwareVerReportM_Mode::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // applicationsInReport
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_softwareVerMMsg__PTR_TYPE temp;
        org_himalay_ccif_softwareVerMMsg__NEW( temp);
        retVal += temp->read(istream);
        applicationsInReport.add(temp);
    }
    return retVal;
}

int SoftwareVerReportM_Mode::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read applicationsInReport
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_softwareVerMMsg__PTR_TYPE temp;
        org_himalay_ccif_softwareVerMMsg__NEW( temp);
        retVal += temp->read(istream);
        applicationsInReport.add(temp);
    }

    return retVal;
}

int SoftwareVerReportM_Mode::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for applicationsInReport**/
    }

    int retVal= 0;
    // write applicationsInReport
{   for (ArrayList_iterator(softwareVerMMsg) it=  applicationsInReport.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int SoftwareVerReportM_Mode::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SoftwareVerReportM_Mode\n");
    dc.increaseIndent();
    int retVal= 0;
    // write applicationsInReport
{   for (ArrayList_iterator(softwareVerMMsg) it=  applicationsInReport.getIterator() ; it.hasNext();) {
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


// Getter for applicationsInReport
//ArrayList(softwareVerMMsg) SoftwareVerReportM_Mode::getApplicationsInReport()
//{
//return this->applicationsInReport;
//}

// Setter for applicationsInReport
//void SoftwareVerReportM_Mode::setApplicationsInReport(ArrayList(softwareVerMMsg) val)
//{
//this->applicationsInReport= val;
//}

int SoftwareVerReportM_Mode::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_SoftwareVerReportM_Mode__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SoftwareVerReportM_Mode* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SoftwareVerReportM_Mode* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code