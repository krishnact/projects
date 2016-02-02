//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "TimeZone.h"

#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
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
TimeZone::TimeZone() {
    references= 0;


    // timeZoneOffset
    timeZoneOffset= (ui16)0;
}
// Destructor
TimeZone::~TimeZone() {
    // timeZoneOffset

}

int TimeZone::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // timeZoneOffset
    {
        timeZoneOffset=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int TimeZone::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read timeZoneOffset
    {
        timeZoneOffset=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int TimeZone::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write timeZoneOffset
    ostream.writeUI16(timeZoneOffset);
    retVal +=2;

    return retVal;
}

int TimeZone::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("TimeZone\n");
    dc.increaseIndent();
    int retVal= 0;
    // write timeZoneOffset
    dc.indent();
    dc.getPs().print("timeZoneOffset=");
    dc.getPs().println((long)timeZoneOffset);
    dc.decreaseIndent();
    return retVal;
}


// Getter for timeZoneOffset
//ui16 TimeZone::getTimeZoneOffset()
//{
//return this->timeZoneOffset;
//}

// Setter for timeZoneOffset
//void TimeZone::setTimeZoneOffset(ui16 val)
//{
//this->timeZoneOffset= val;
//}

int TimeZone::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_TimeZone__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::TimeZone* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::TimeZone* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code