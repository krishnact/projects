//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostPropertiesReq.h"

#ifdef org_himalay_ccif_HostPropertiesReq__USE_SMART_PTR
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
HostPropertiesReq::HostPropertiesReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // hpr
    hpr.setMemberSize(0);
}
// Destructor
HostPropertiesReq::~HostPropertiesReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // hpr
    {
#ifndef org_himalay_ccif_HostPropertiesReqMsg_USE_SMART_PTR
        hpr.deleteMembers();
#endif
    }
}

int HostPropertiesReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // hpr
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_HostPropertiesReqMsg__PTR_TYPE temp;
        org_himalay_ccif_HostPropertiesReqMsg__NEW( temp);
        retVal += temp->read(istream);
        hpr.add(temp);
    }
    return retVal;
}

int HostPropertiesReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read hpr
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_HostPropertiesReqMsg__PTR_TYPE temp;
        org_himalay_ccif_HostPropertiesReqMsg__NEW( temp);
        retVal += temp->read(istream);
        hpr.add(temp);
    }

    return retVal;
}

int HostPropertiesReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for hpr**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write hpr
{   for (ArrayList_iterator(HostPropertiesReqMsg) it=  hpr.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int HostPropertiesReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostPropertiesReq\n");
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
    // write hpr
{   for (ArrayList_iterator(HostPropertiesReqMsg) it=  hpr.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE HostPropertiesReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HostPropertiesReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HostPropertiesReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void HostPropertiesReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for hpr
//ArrayList(HostPropertiesReqMsg) HostPropertiesReq::getHpr()
//{
//return this->hpr;
//}

// Setter for hpr
//void HostPropertiesReq::setHpr(ArrayList(HostPropertiesReqMsg) val)
//{
//this->hpr= val;
//}

int HostPropertiesReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HostPropertiesReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HostPropertiesReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HostPropertiesReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HostPropertiesReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HostPropertiesReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code