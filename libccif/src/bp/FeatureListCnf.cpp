//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FeatureListCnf.h"

#ifdef org_himalay_ccif_FeatureListCnf__USE_SMART_PTR
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
FeatureListCnf::FeatureListCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
}
// Destructor
FeatureListCnf::~FeatureListCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

}

int FeatureListCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int FeatureListCnf::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int FeatureListCnf::write(DataOutputStream& ostream) { // throws IOException
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

    return retVal;
}

int FeatureListCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FeatureListCnf\n");
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
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE FeatureListCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FeatureListCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 FeatureListCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void FeatureListCnf::setLength(ui8 val)
//{
//this->length= val;
//}

int FeatureListCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void FeatureListCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE FeatureListCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_FeatureListCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FeatureListCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FeatureListCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code