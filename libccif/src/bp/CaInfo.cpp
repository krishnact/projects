//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "CaInfo.h"

#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
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
CaInfo::CaInfo() {
    references= 0;


    // caPmtId
    caPmtId= (ui8)0;
    // CaDescriptors
    org_himalay_msgs_runtime_ByteArray_NEW(CaDescriptors);
    CaDescriptors->setSizeType("EOS");
}
// Destructor
CaInfo::~CaInfo() {
    // caPmtId

    // CaDescriptors
    org_himalay_msgs_runtime_ByteArray_DELETE( CaDescriptors);
}

int CaInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // caPmtId
    {
        caPmtId=(istream.readUI8());
        retVal+=1;
    }
    // CaDescriptors
    {
        retVal+=CaDescriptors->read(istream);
    }
    return retVal;
}

int CaInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read caPmtId
    {
        caPmtId=(istream.readUI8());
        retVal+=1;
    }
    // read CaDescriptors
    {
        retVal+=CaDescriptors->read(istream);
    }

    return retVal;
}

int CaInfo::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for CaDescriptors**/
    }

    int retVal= 0;
    // write caPmtId
    ostream.writeUI8(caPmtId);
    retVal +=1;
    // write CaDescriptors
    {
        retVal += CaDescriptors->write(ostream);
    }

    return retVal;
}

int CaInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("CaInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write caPmtId
    dc.indent();
    dc.getPs().print("caPmtId=");
    dc.getPs().println((long)caPmtId);
    // write CaDescriptors
    dc.indent();
    dc.getPs().print("CaDescriptors");
    CaDescriptors->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for caPmtId
//ui8 CaInfo::getCaPmtId()
//{
//return this->caPmtId;
//}

// Setter for caPmtId
//void CaInfo::setCaPmtId(ui8 val)
//{
//this->caPmtId= val;
//}

// Getter for CaDescriptors
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE CaInfo::getCaDescriptors()
//{
//return this->CaDescriptors;
//}

// Setter for CaDescriptors
//void CaInfo::setCaDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->CaDescriptors= val;
//}

int CaInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_CaInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CaInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::CaInfo* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code