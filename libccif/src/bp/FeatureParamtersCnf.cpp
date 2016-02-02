//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FeatureParamtersCnf.h"

#ifdef org_himalay_ccif_FeatureParamtersCnf__USE_SMART_PTR
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
FeatureParamtersCnf::FeatureParamtersCnf() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // featureList
    featureList.setMemberSize(0);
}
// Destructor
FeatureParamtersCnf::~FeatureParamtersCnf() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // featureList
    {
#ifndef org_himalay_ccif_nOF_USE_SMART_PTR
        featureList.deleteMembers();
#endif
    }
}

int FeatureParamtersCnf::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // featureList
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_nOF__PTR_TYPE temp;
        org_himalay_ccif_nOF__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }
    return retVal;
}

int FeatureParamtersCnf::read(DataInputStream&  istream ) { // throws IOException
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
        org_himalay_ccif_nOF__PTR_TYPE temp;
        org_himalay_ccif_nOF__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }

    return retVal;
}

int FeatureParamtersCnf::write(DataOutputStream& ostream) { // throws IOException
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
{   for (ArrayList_iterator(nOF) it=  featureList.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int FeatureParamtersCnf::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FeatureParamtersCnf\n");
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
{   for (ArrayList_iterator(nOF) it=  featureList.getIterator() ; it.hasNext();) {
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
//org_himalay_ccif_APDUHeader__PTR_TYPE FeatureParamtersCnf::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FeatureParamtersCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 FeatureParamtersCnf::getLength()
//{
//return this->length;
//}

// Setter for length
//void FeatureParamtersCnf::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for featureList
//ArrayList(nOF) FeatureParamtersCnf::getFeatureList()
//{
//return this->featureList;
//}

// Setter for featureList
//void FeatureParamtersCnf::setFeatureList(ArrayList(nOF) val)
//{
//this->featureList= val;
//}

int FeatureParamtersCnf::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void FeatureParamtersCnf::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE FeatureParamtersCnf::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_FeatureParamtersCnf__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FeatureParamtersCnf* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FeatureParamtersCnf* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code