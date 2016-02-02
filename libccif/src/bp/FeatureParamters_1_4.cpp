//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FeatureParamters_1_4.h"

#ifdef org_himalay_ccif_FeatureParamters_1_4__USE_SMART_PTR
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
FeatureParamters_1_4::FeatureParamters_1_4() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // featureList
    featureList.setMemberSize(0);
}
// Destructor
FeatureParamters_1_4::~FeatureParamters_1_4() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // featureList
    {
#ifndef org_himalay_ccif_flist_USE_SMART_PTR
        featureList.deleteMembers();
#endif
    }
}

int FeatureParamters_1_4::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // featureList
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_flist__PTR_TYPE temp;
        org_himalay_ccif_flist__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }
    return retVal;
}

int FeatureParamters_1_4::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read featureList
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_flist__PTR_TYPE temp;
        org_himalay_ccif_flist__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }

    return retVal;
}

int FeatureParamters_1_4::write(DataOutputStream& ostream) { // throws IOException
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
{   for (ArrayList_iterator(flist) it=  featureList.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int FeatureParamters_1_4::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FeatureParamters_1_4\n");
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
{   for (ArrayList_iterator(flist) it=  featureList.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE FeatureParamters_1_4::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FeatureParamters_1_4::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 FeatureParamters_1_4::getLength()
//{
//return this->length;
//}

// Setter for length
//void FeatureParamters_1_4::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for featureList
//ArrayList(flist) FeatureParamters_1_4::getFeatureList()
//{
//return this->featureList;
//}

// Setter for featureList
//void FeatureParamters_1_4::setFeatureList(ArrayList(flist) val)
//{
//this->featureList= val;
//}

int FeatureParamters_1_4::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void FeatureParamters_1_4::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE FeatureParamters_1_4::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_FeatureParamters_1_4__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FeatureParamters_1_4* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FeatureParamters_1_4* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code