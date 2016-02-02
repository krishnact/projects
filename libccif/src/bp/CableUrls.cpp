//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CableUrls.h"

#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
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
CableUrls::CableUrls() {
    references= 0;


    // CaEntries
    CaEntries.setMemberSize(0);
}
// Destructor
CableUrls::~CableUrls() {
    // CaEntries
    {
#ifndef org_himalay_ccif_cblurlmsg_USE_SMART_PTR
        CaEntries.deleteMembers();
#endif
    }
}

int CableUrls::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_cblurlmsg__PTR_TYPE temp;
        org_himalay_ccif_cblurlmsg__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }
    return retVal;
}

int CableUrls::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read CaEntries
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_cblurlmsg__PTR_TYPE temp;
        org_himalay_ccif_cblurlmsg__NEW( temp);
        retVal += temp->read(istream);
        CaEntries.add(temp);
    }

    return retVal;
}

int CableUrls::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for CaEntries**/
    }

    int retVal= 0;
    // write CaEntries
{   for (ArrayList_iterator(cblurlmsg) it=  CaEntries.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int CableUrls::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CableUrls\n");
    dc.increaseIndent();
    int retVal= 0;
    // write CaEntries
{   for (ArrayList_iterator(cblurlmsg) it=  CaEntries.getIterator() ; it.hasNext();) {
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


// Getter for CaEntries
//ArrayList(cblurlmsg) CableUrls::getCaEntries()
//{
//return this->CaEntries;
//}

// Setter for CaEntries
//void CableUrls::setCaEntries(ArrayList(cblurlmsg) val)
//{
//this->CaEntries= val;
//}

int CableUrls::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CableUrls__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CableUrls* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CableUrls* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code