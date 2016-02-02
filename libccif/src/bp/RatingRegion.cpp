//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "RatingRegion.h"

#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
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
RatingRegion::RatingRegion() {
    references= 0;


    // ratingRegionSetting
    ratingRegionSetting= (ui8)0;
}
// Destructor
RatingRegion::~RatingRegion() {
    // ratingRegionSetting

}

int RatingRegion::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ratingRegionSetting
    {
        ratingRegionSetting=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int RatingRegion::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ratingRegionSetting
    {
        ratingRegionSetting=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int RatingRegion::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write ratingRegionSetting
    ostream.writeUI8(ratingRegionSetting);
    retVal +=1;

    return retVal;
}

int RatingRegion::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("RatingRegion\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ratingRegionSetting
    dc.indent();
    dc.getPs().print("ratingRegionSetting=");
    dc.getPs().println((long)ratingRegionSetting);
    dc.decreaseIndent();
    return retVal;
}


// Getter for ratingRegionSetting
//ui8 RatingRegion::getRatingRegionSetting()
//{
//return this->ratingRegionSetting;
//}

// Setter for ratingRegionSetting
//void RatingRegion::setRatingRegionSetting(ui8 val)
//{
//this->ratingRegionSetting= val;
//}

int RatingRegion::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_RatingRegion__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RatingRegion* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::RatingRegion* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code