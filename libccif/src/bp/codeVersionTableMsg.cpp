//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "codeVersionTableMsg.h"

#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
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
codeVersionTableMsg::codeVersionTableMsg() {
    references= 0;


    // purchaseType
    purchaseType= (ui8)0;
    // purchasePrice
    purchasePrice= (ui16)0;
    // videoFormat
    org_himalay_ccif_DescriptionData__NEW( videoFormat);
}
// Destructor
codeVersionTableMsg::~codeVersionTableMsg() {
    // purchaseType

    // purchasePrice

    // videoFormat
    org_himalay_ccif_DescriptionData__DELETE( videoFormat);
}

int codeVersionTableMsg::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // purchaseType
    {
        purchaseType=(istream.readUI8());
        retVal+=1;
    }
    // purchasePrice
    {
        purchasePrice=istream.readUI16();
        retVal+=2;
    }
    // videoFormat
    retVal += videoFormat->read(istream);
    return retVal;
}

int codeVersionTableMsg::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read purchaseType
    {
        purchaseType=(istream.readUI8());
        retVal+=1;
    }
    // read purchasePrice
    {
        purchasePrice=istream.readUI16();
        retVal+=2;
    }
    // read videoFormat
    retVal += videoFormat->read(istream);

    return retVal;
}

int codeVersionTableMsg::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for videoFormat **/
    }

    int retVal= 0;
    // write purchaseType
    ostream.writeUI8(purchaseType);
    retVal +=1;
    // write purchasePrice
    ostream.writeUI16(purchasePrice);
    retVal +=2;
    // write videoFormat
    if ( videoFormat != NULL ) {
        retVal +=videoFormat->write(ostream);
    }

    return retVal;
}

int codeVersionTableMsg::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("codeVersionTableMsg\n");
    dc.increaseIndent();
    int retVal= 0;
    // write purchaseType
    dc.indent();
    dc.getPs().print("purchaseType=");
    dc.getPs().println((long)purchaseType);
    // write purchasePrice
    dc.indent();
    dc.getPs().print("purchasePrice=");
    dc.getPs().println((long)purchasePrice);
    // write videoFormat
    if ( videoFormat != NULL ) {
        dc.indent();
        dc.getPs().println("videoFormat") ;
        retVal +=videoFormat->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for purchaseType
//ui8 codeVersionTableMsg::getPurchaseType()
//{
//return this->purchaseType;
//}

// Setter for purchaseType
//void codeVersionTableMsg::setPurchaseType(ui8 val)
//{
//this->purchaseType= val;
//}

// Getter for purchasePrice
//ui16 codeVersionTableMsg::getPurchasePrice()
//{
//return this->purchasePrice;
//}

// Setter for purchasePrice
//void codeVersionTableMsg::setPurchasePrice(ui16 val)
//{
//this->purchasePrice= val;
//}

// Getter for videoFormat
//org_himalay_ccif_DescriptionData__PTR_TYPE codeVersionTableMsg::getVideoFormat()
//{
//return this->videoFormat;
//}

// Setter for videoFormat
//void codeVersionTableMsg::setVideoFormat(org_himalay_ccif_DescriptionData__PTR_TYPE val)
//{
//this->videoFormat= val;
//}

int codeVersionTableMsg::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_codeVersionTableMsg__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTableMsg* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTableMsg* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code