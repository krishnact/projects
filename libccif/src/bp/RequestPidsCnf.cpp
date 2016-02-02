//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "RequestPidsCnf.h"

#ifdef org_himalay_ccif_RequestPidsCnf__USE_SMART_PTR
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
RequestPidsCnf::RequestPidsCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // ltsid
    ltsid= (ui8)0;
    // numOfPids
    numOfPids.setMemberSize(0);
}
// Destructor
RequestPidsCnf::~RequestPidsCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // ltsid

    // numOfPids
    {
#ifndef org_himalay_ccif_pids_USE_SMART_PTR
        numOfPids.deleteMembers();
#endif
    }
}

int RequestPidsCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // numOfPids
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_pids__PTR_TYPE temp;
        org_himalay_ccif_pids__NEW( temp);
        retVal += temp->read(istream);
        numOfPids.add(temp);
    }
    return retVal;
}

int RequestPidsCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read ltsid
    {
        ltsid=(istream.readUI8());
        retVal+=1;
    }
    // read numOfPids
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_pids__PTR_TYPE temp;
        org_himalay_ccif_pids__NEW( temp);
        retVal += temp->read(istream);
        numOfPids.add(temp);
    }

    return retVal;
}

int RequestPidsCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for numOfPids**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write ltsid
    ostream.writeUI8(ltsid);
    retVal +=1;
    // write numOfPids
{   for (ArrayList_iterator(pids) it=  numOfPids.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int RequestPidsCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("RequestPidsCnf\n");
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
    // write ltsid
    dc.indent();
    dc.getPs().print("ltsid=");
    dc.getPs().println((long)ltsid);
    // write numOfPids
{   for (ArrayList_iterator(pids) it=  numOfPids.getIterator() ; it.hasNext();) {
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


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE RequestPidsCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void RequestPidsCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 RequestPidsCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void RequestPidsCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for ltsid
//ui8 RequestPidsCnf::getLtsid()
//{
//return this->ltsid;
//}

// Setter for ltsid
//void RequestPidsCnf::setLtsid(ui8 val)
//{
//this->ltsid= val;
//}

// Getter for numOfPids
//ArrayList(pids) RequestPidsCnf::getNumOfPids()
//{
//return this->numOfPids;
//}

// Setter for numOfPids
//void RequestPidsCnf::setNumOfPids(ArrayList(pids) val)
//{
//this->numOfPids= val;
//}

int RequestPidsCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void RequestPidsCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE RequestPidsCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_RequestPidsCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RequestPidsCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::RequestPidsCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code