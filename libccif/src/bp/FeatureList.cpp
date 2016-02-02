//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FeatureList.h"

#ifdef org_himalay_ccif_FeatureList__USE_SMART_PTR
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
FeatureList::FeatureList() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // featureList
    org_himalay_msgs_runtime_ByteArray_NEW(featureList);
    featureList->setSizeType("FIRST_UI8");
}
// Destructor
FeatureList::~FeatureList() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // featureList
    org_himalay_msgs_runtime_ByteArray_DELETE( featureList);
}

int FeatureList::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // featureList
    {
        retVal+=featureList->read(istream);
    }
    return retVal;
}

int FeatureList::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read featureList
    {
        retVal+=featureList->read(istream);
    }

    return retVal;
}

int FeatureList::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }

    {   /** fix dependent sizes for featureList**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write featureList
    {
        retVal += featureList->write(ostream);
    }

    return retVal;
}

int FeatureList::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FeatureList\n");
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
    // write featureList
    dc.indent();
    dc.getPs().print("featureList");
    featureList->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE FeatureList::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FeatureList::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 FeatureList::getLength()
//{
//return this->length;
//}

// Setter for length
//void FeatureList::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for featureList
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE FeatureList::getFeatureList()
//{
//return this->featureList;
//}

// Setter for featureList
//void FeatureList::setFeatureList(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->featureList= val;
//}

int FeatureList::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void FeatureList::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE FeatureList::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_FeatureList__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FeatureList* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FeatureList* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code