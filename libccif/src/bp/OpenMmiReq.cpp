//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "OpenMmiReq.h"

#ifdef org_himalay_ccif_OpenMmiReq__USE_SMART_PTR
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
OpenMmiReq::OpenMmiReq() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // displayType
    displayType= (ui8)0;
    // urlBytes
    org_himalay_msgs_runtime_ByteArray_NEW(urlBytes);
    urlBytes->setSizeType("FIRST_UI16");
}
// Destructor
OpenMmiReq::~OpenMmiReq() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // displayType

    // urlBytes
    org_himalay_msgs_runtime_ByteArray_DELETE( urlBytes);
}

int OpenMmiReq::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // displayType
    {
        displayType=(istream.readUI8());
        retVal+=1;
    }
    // urlBytes
    {
        retVal+=urlBytes->read(istream);
    }
    return retVal;
}

int OpenMmiReq::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read displayType
    {
        displayType=(istream.readUI8());
        retVal+=1;
    }
    // read urlBytes
    {
        retVal+=urlBytes->read(istream);
    }

    return retVal;
}

int OpenMmiReq::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for urlBytes**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write displayType
    ostream.writeUI8(displayType);
    retVal +=1;
    // write urlBytes
    {
        retVal += urlBytes->write(ostream);
    }

    return retVal;
}

int OpenMmiReq::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("OpenMmiReq\n");
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
    // write displayType
    dc.indent();
    dc.getPs().print("displayType=");
    dc.getPs().println((long)displayType);
    // write urlBytes
    dc.indent();
    dc.getPs().print("urlBytes");
    urlBytes->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE OpenMmiReq::getHeader()
//{
//return this->header;
//}

// Setter for header
//void OpenMmiReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 OpenMmiReq::getLength()
//{
//return this->length;
//}

// Setter for length
//void OpenMmiReq::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for displayType
//ui8 OpenMmiReq::getDisplayType()
//{
//return this->displayType;
//}

// Setter for displayType
//void OpenMmiReq::setDisplayType(ui8 val)
//{
//this->displayType= val;
//}

// Getter for urlBytes
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE OpenMmiReq::getUrlBytes()
//{
//return this->urlBytes;
//}

// Setter for urlBytes
//void OpenMmiReq::setUrlBytes(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->urlBytes= val;
//}

int OpenMmiReq::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void OpenMmiReq::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE OpenMmiReq::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_OpenMmiReq__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::OpenMmiReq* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::OpenMmiReq* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code