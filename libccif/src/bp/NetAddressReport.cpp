//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "NetAddressReport.h"

#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
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
NetAddressReport::NetAddressReport() {
    references= 0;


    // ntAddrs
    ntAddrs.setMemberSize(0);
}
// Destructor
NetAddressReport::~NetAddressReport() {
    // ntAddrs
    {
#ifndef org_himalay_ccif_NetAddressReportMsg_USE_SMART_PTR
        ntAddrs.deleteMembers();
#endif
    }
}

int NetAddressReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ntAddrs
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_NetAddressReportMsg__PTR_TYPE temp;
        org_himalay_ccif_NetAddressReportMsg__NEW( temp);
        retVal += temp->read(istream);
        ntAddrs.add(temp);
    }
    return retVal;
}

int NetAddressReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ntAddrs
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_NetAddressReportMsg__PTR_TYPE temp;
        org_himalay_ccif_NetAddressReportMsg__NEW( temp);
        retVal += temp->read(istream);
        ntAddrs.add(temp);
    }

    return retVal;
}

int NetAddressReport::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for ntAddrs**/
    }

    int retVal= 0;
    // write ntAddrs
{   for (ArrayList_iterator(NetAddressReportMsg) it=  ntAddrs.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int NetAddressReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("NetAddressReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ntAddrs
{   for (ArrayList_iterator(NetAddressReportMsg) it=  ntAddrs.getIterator() ; it.hasNext();) {
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


// Getter for ntAddrs
//ArrayList(NetAddressReportMsg) NetAddressReport::getNtAddrs()
//{
//return this->ntAddrs;
//}

// Setter for ntAddrs
//void NetAddressReport::setNtAddrs(ArrayList(NetAddressReportMsg) val)
//{
//this->ntAddrs= val;
//}

int NetAddressReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_NetAddressReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::NetAddressReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::NetAddressReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code