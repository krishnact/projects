//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "OpenMmiCnf.h"

#ifdef org_himalay_ccif_OpenMmiCnf__USE_SMART_PTR
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
OpenMmiCnf::OpenMmiCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // dialogNumber
    dialogNumber= (ui8)0;
    // openStatus
    openStatus= (ui8)0;
}
// Destructor
OpenMmiCnf::~OpenMmiCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // dialogNumber

    // openStatus

}

int OpenMmiCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // dialogNumber
    {
        dialogNumber=(istream.readUI8());
        retVal+=1;
    }
    // openStatus
    {
        openStatus=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int OpenMmiCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read dialogNumber
    {
        dialogNumber=(istream.readUI8());
        retVal+=1;
    }
    // read openStatus
    {
        openStatus=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int OpenMmiCnf::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }




    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write dialogNumber
    ostream.writeUI8(dialogNumber);
    retVal +=1;
    // write openStatus
    ostream.writeUI8(openStatus);
    retVal +=1;

    return retVal;
}

int OpenMmiCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("OpenMmiCnf\n");
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
    // write dialogNumber
    dc.indent();
    dc.getPs().print("dialogNumber=");
    dc.getPs().println((long)dialogNumber);
    // write openStatus
    dc.indent();
    dc.getPs().print("openStatus=");
    dc.getPs().println((long)openStatus);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE OpenMmiCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void OpenMmiCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 OpenMmiCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void OpenMmiCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for dialogNumber
//ui8 OpenMmiCnf::getDialogNumber()
//{
//return this->dialogNumber;
//}

// Setter for dialogNumber
//void OpenMmiCnf::setDialogNumber(ui8 val)
//{
//this->dialogNumber= val;
//}

// Getter for openStatus
//ui8 OpenMmiCnf::getOpenStatus()
//{
//return this->openStatus;
//}

// Setter for openStatus
//void OpenMmiCnf::setOpenStatus(ui8 val)
//{
//this->openStatus= val;
//}

int OpenMmiCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void OpenMmiCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE OpenMmiCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_OpenMmiCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::OpenMmiCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::OpenMmiCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code