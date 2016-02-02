//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "GetRootOidReqply.h"

#ifdef org_himalay_ccif_GetRootOidReqply__USE_SMART_PTR
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
GetRootOidReqply::GetRootOidReqply() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // oidBytes
    org_himalay_msgs_runtime_ByteArray_NEW(oidBytes);
    oidBytes->setSizeType("FIRST_UI8");
}
// Destructor
GetRootOidReqply::~GetRootOidReqply() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // oidBytes
    org_himalay_msgs_runtime_ByteArray_DELETE( oidBytes);
}

int GetRootOidReqply::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // oidBytes
    {
        retVal+=oidBytes->read(istream);
    }
    return retVal;
}

int GetRootOidReqply::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read oidBytes
    {
        retVal+=oidBytes->read(istream);
    }

    return retVal;
}

int GetRootOidReqply::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for oidBytes**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write oidBytes
    {
        retVal += oidBytes->write(ostream);
    }

    return retVal;
}

int GetRootOidReqply::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("GetRootOidReqply\n");
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
    // write oidBytes
    dc.indent();
    dc.getPs().print("oidBytes");
    oidBytes->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE GetRootOidReqply::getHeader()
//{
//return this->header;
//}

// Setter for header
//void GetRootOidReqply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 GetRootOidReqply::getLength()
//{
//return this->length;
//}

// Setter for length
//void GetRootOidReqply::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for oidBytes
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE GetRootOidReqply::getOidBytes()
//{
//return this->oidBytes;
//}

// Setter for oidBytes
//void GetRootOidReqply::setOidBytes(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->oidBytes= val;
//}

int GetRootOidReqply::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void GetRootOidReqply::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE GetRootOidReqply::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_GetRootOidReqply__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::GetRootOidReqply* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::GetRootOidReqply* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code