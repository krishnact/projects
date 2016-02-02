//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ProgramCnf.h"

#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
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
// member static classes
// Constructor
ProgramCnf::statusfld::statusfld() {
    references= 0;

    parent = NULL;

    // pgmmsg
    pgmmsg.setMemberSize(0);
}
// Destructor
ProgramCnf::statusfld::~statusfld() {
    // pgmmsg
    {
#ifndef org_himalay_ccif_programCnfMsg_USE_SMART_PTR
        pgmmsg.deleteMembers();
#endif
    }
    parent = NULL;
}

int ProgramCnf::statusfld::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // pgmmsg
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_programCnfMsg__PTR_TYPE temp;
        org_himalay_ccif_programCnfMsg__NEW( temp);
        retVal += temp->read(istream);
        pgmmsg.add(temp);
    }
    return retVal;
}

int ProgramCnf::statusfld::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read pgmmsg
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_programCnfMsg__PTR_TYPE temp;
        org_himalay_ccif_programCnfMsg__NEW( temp);
        retVal += temp->read(istream);
        pgmmsg.add(temp);
    }

    return retVal;
}

int ProgramCnf::statusfld::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for pgmmsg**/
    }

    int retVal= 0;
    // write pgmmsg
{   for (ArrayList_iterator(programCnfMsg) it=  pgmmsg.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int ProgramCnf::statusfld::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("statusfld\n");
    dc.increaseIndent();
    int retVal= 0;
    // write pgmmsg
{   for (ArrayList_iterator(programCnfMsg) it=  pgmmsg.getIterator() ; it.hasNext();) {
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


// Getter for pgmmsg
//ArrayList(programCnfMsg) ProgramCnf::statusfld::getPgmmsg()
//{
//return this->pgmmsg;
//}

// Setter for pgmmsg
//void ProgramCnf::statusfld::setPgmmsg(ArrayList(programCnfMsg) val)
//{
//this->pgmmsg= val;
//}

int ProgramCnf::statusfld::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ProgramCnf_statusfld__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->decreaseRef();
};;
#endif

// Constructor
ProgramCnf::ProgramCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // transactionId
    transactionId= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // statusfldInstance
    org_himalay_ccif_ProgramCnf_statusfld__INIT(statusfldInstance)
}
// Destructor
ProgramCnf::~ProgramCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // transactionId

    // statusField

    // statusfldInstance
    org_himalay_ccif_ProgramCnf_statusfld__DELETE( statusfldInstance);
}

int ProgramCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // statusfldInstance
    if (statusField==0x00) {
        org_himalay_ccif_ProgramCnf_statusfld__NEW( statusfldInstance);
        statusfldInstance->parent=this;
        retVal += statusfldInstance->read(istream);
    }
    return retVal;
}

int ProgramCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read transactionId
    {
        transactionId=(istream.readUI8());
        retVal+=1;
    }
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // read statusfldInstance
    if (statusField==0x00) {
        org_himalay_ccif_ProgramCnf_statusfld__NEW( statusfldInstance);
        statusfldInstance->parent=this;
        retVal += statusfldInstance->read(istream);
    }

    return retVal;
}

int ProgramCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    {   /** fix dependent sizes for statusfldInstance **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write transactionId
    ostream.writeUI8(transactionId);
    retVal +=1;
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;
    // write statusfldInstance
    if ( statusfldInstance != NULL ) {
        retVal +=statusfldInstance->write(ostream);
    }

    return retVal;
}

int ProgramCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ProgramCnf\n");
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
    // write transactionId
    dc.indent();
    dc.getPs().print("transactionId=");
    dc.getPs().println((long)transactionId);
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    // write statusfldInstance
    if ( statusfldInstance != NULL ) {
        dc.indent();
        dc.getPs().println("statusfldInstance") ;
        retVal +=statusfldInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ProgramCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ProgramCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 ProgramCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void ProgramCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for transactionId
//ui8 ProgramCnf::getTransactionId()
//{
//return this->transactionId;
//}

// Setter for transactionId
//void ProgramCnf::setTransactionId(ui8 val)
//{
//this->transactionId= val;
//}

// Getter for statusField
//ui8 ProgramCnf::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void ProgramCnf::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for statusfldInstance
//org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE ProgramCnf::getStatusfldInstance()
//{
//return this->statusfldInstance;
//}

// Setter for statusfldInstance
//void ProgramCnf::setStatusfldInstance(org_himalay_ccif_ProgramCnf_statusfld__PTR_TYPE val)
//{
//this->statusfldInstance= val;
//}

int ProgramCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ProgramCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ProgramCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ProgramCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code