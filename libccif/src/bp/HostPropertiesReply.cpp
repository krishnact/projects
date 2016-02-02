//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HostPropertiesReply.h"

#ifdef org_himalay_ccif_HostPropertiesReply__USE_SMART_PTR
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
HostPropertiesReply::HostPropertiesReply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // hpr
    hpr.setMemberSize(0);
}
// Destructor
HostPropertiesReply::~HostPropertiesReply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // hpr
    {
#ifndef org_himalay_ccif_HostPropertiesReplyMsg_USE_SMART_PTR
        hpr.deleteMembers();
#endif
    }
}

int HostPropertiesReply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // hpr
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_HostPropertiesReplyMsg__PTR_TYPE temp;
        org_himalay_ccif_HostPropertiesReplyMsg__NEW( temp);
        retVal += temp->read(istream);
        hpr.add(temp);
    }
    return retVal;
}

int HostPropertiesReply::read(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_HostPropertiesReplyMsg__PTR_TYPE temp;
        org_himalay_ccif_HostPropertiesReplyMsg__NEW( temp);
        retVal += temp->read(istream);
        hpr.add(temp);
    }

    return retVal;
}

int HostPropertiesReply::write(DataOutputStream& ostream) { // throws IOException
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
{   for (ArrayList_iterator(HostPropertiesReplyMsg) it=  hpr.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int HostPropertiesReply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HostPropertiesReply\n");
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
{   for (ArrayList_iterator(HostPropertiesReplyMsg) it=  hpr.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE HostPropertiesReply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void HostPropertiesReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 HostPropertiesReply::getLength()
//{
//return this->length;
//}

// Setter for length
//void HostPropertiesReply::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for hpr
//ArrayList(HostPropertiesReplyMsg) HostPropertiesReply::getHpr()
//{
//return this->hpr;
//}

// Setter for hpr
//void HostPropertiesReply::setHpr(ArrayList(HostPropertiesReplyMsg) val)
//{
//this->hpr= val;
//}

int HostPropertiesReply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void HostPropertiesReply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE HostPropertiesReply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_HostPropertiesReply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HostPropertiesReply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HostPropertiesReply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code