//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DaylightSavings_1_2.h"

#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
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
// member static classes
// Constructor
DaylightSavings_1_2::daylightSaving::daylightSaving() {
    references= 0;

    parent = NULL;

    // daylight_savings_delta
    daylight_savings_delta= (ui8)0;
    // daylightSavingsEntryTime
    daylightSavingsEntryTime= (ui32)0;
    // daylightSavingsExitTime
    daylightSavingsExitTime= (ui32)0;
}
// Destructor
DaylightSavings_1_2::daylightSaving::~daylightSaving() {
    // daylight_savings_delta

    // daylightSavingsEntryTime

    // daylightSavingsExitTime

    parent = NULL;
}

int DaylightSavings_1_2::daylightSaving::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // daylight_savings_delta
    {
        daylight_savings_delta=(istream.readUI8());
        retVal+=1;
    }
    // daylightSavingsEntryTime
    {
        daylightSavingsEntryTime=istream.readUI32() ;
        retVal+=4;
    }
    // daylightSavingsExitTime
    {
        daylightSavingsExitTime=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int DaylightSavings_1_2::daylightSaving::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read daylight_savings_delta
    {
        daylight_savings_delta=(istream.readUI8());
        retVal+=1;
    }
    // read daylightSavingsEntryTime
    {
        daylightSavingsEntryTime=istream.readUI32() ;
        retVal+=4;
    }
    // read daylightSavingsExitTime
    {
        daylightSavingsExitTime=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int DaylightSavings_1_2::daylightSaving::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write daylight_savings_delta
    ostream.writeUI8(daylight_savings_delta);
    retVal +=1;
    // write daylightSavingsEntryTime
    ostream.writeUI32(daylightSavingsEntryTime);
    retVal +=4;
    // write daylightSavingsExitTime
    ostream.writeUI32(daylightSavingsExitTime);
    retVal +=4;

    return retVal;
}

int DaylightSavings_1_2::daylightSaving::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("daylightSaving\n");
    dc.increaseIndent();
    int retVal= 0;
    // write daylight_savings_delta
    dc.indent();
    dc.getPs().print("daylight_savings_delta=");
    dc.getPs().println((long)daylight_savings_delta);
    // write daylightSavingsEntryTime
    dc.indent();
    dc.getPs().print("daylightSavingsEntryTime=");
    dc.getPs().println((long)daylightSavingsEntryTime);
    // write daylightSavingsExitTime
    dc.indent();
    dc.getPs().print("daylightSavingsExitTime=");
    dc.getPs().println((long)daylightSavingsExitTime);
    dc.decreaseIndent();
    return retVal;
}


// Getter for daylight_savings_delta
//ui8 DaylightSavings_1_2::daylightSaving::getDaylight_savings_delta()
//{
//return this->daylight_savings_delta;
//}

// Setter for daylight_savings_delta
//void DaylightSavings_1_2::daylightSaving::setDaylight_savings_delta(ui8 val)
//{
//this->daylight_savings_delta= val;
//}

// Getter for daylightSavingsEntryTime
//ui32 DaylightSavings_1_2::daylightSaving::getDaylightSavingsEntryTime()
//{
//return this->daylightSavingsEntryTime;
//}

// Setter for daylightSavingsEntryTime
//void DaylightSavings_1_2::daylightSaving::setDaylightSavingsEntryTime(ui32 val)
//{
//this->daylightSavingsEntryTime= val;
//}

// Getter for daylightSavingsExitTime
//ui32 DaylightSavings_1_2::daylightSaving::getDaylightSavingsExitTime()
//{
//return this->daylightSavingsExitTime;
//}

// Setter for daylightSavingsExitTime
//void DaylightSavings_1_2::daylightSaving::setDaylightSavingsExitTime(ui32 val)
//{
//this->daylightSavingsExitTime= val;
//}

int DaylightSavings_1_2::daylightSaving::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_DaylightSavings_1_2_daylightSaving__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->decreaseRef();
};;
#endif

// Constructor
DaylightSavings_1_2::DaylightSavings_1_2() {
    references= 0;


    // daylightSavingsControl
    daylightSavingsControl= (ui8)0;
    // daylightSavingInstance
    org_himalay_ccif_DaylightSavings_1_2_daylightSaving__INIT(daylightSavingInstance)
}
// Destructor
DaylightSavings_1_2::~DaylightSavings_1_2() {
    // daylightSavingsControl

    // daylightSavingInstance
    org_himalay_ccif_DaylightSavings_1_2_daylightSaving__DELETE( daylightSavingInstance);
}

int DaylightSavings_1_2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // daylightSavingsControl
    {
        daylightSavingsControl=(istream.readUI8());
        retVal+=1;
    }
    // daylightSavingInstance
    if (daylightSavingsControl==0x02) {
        org_himalay_ccif_DaylightSavings_1_2_daylightSaving__NEW( daylightSavingInstance);
        daylightSavingInstance->parent=this;
        retVal += daylightSavingInstance->read(istream);
    }
    return retVal;
}

int DaylightSavings_1_2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read daylightSavingsControl
    {
        daylightSavingsControl=(istream.readUI8());
        retVal+=1;
    }
    // read daylightSavingInstance
    if (daylightSavingsControl==0x02) {
        org_himalay_ccif_DaylightSavings_1_2_daylightSaving__NEW( daylightSavingInstance);
        daylightSavingInstance->parent=this;
        retVal += daylightSavingInstance->read(istream);
    }

    return retVal;
}

int DaylightSavings_1_2::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for daylightSavingInstance **/
    }

    int retVal= 0;
    // write daylightSavingsControl
    ostream.writeUI8(daylightSavingsControl);
    retVal +=1;
    // write daylightSavingInstance
    if ( daylightSavingInstance != NULL ) {
        retVal +=daylightSavingInstance->write(ostream);
    }

    return retVal;
}

int DaylightSavings_1_2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DaylightSavings_1_2\n");
    dc.increaseIndent();
    int retVal= 0;
    // write daylightSavingsControl
    dc.indent();
    dc.getPs().print("daylightSavingsControl=");
    dc.getPs().println((long)daylightSavingsControl);
    // write daylightSavingInstance
    if ( daylightSavingInstance != NULL ) {
        dc.indent();
        dc.getPs().println("daylightSavingInstance") ;
        retVal +=daylightSavingInstance->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for daylightSavingsControl
//ui8 DaylightSavings_1_2::getDaylightSavingsControl()
//{
//return this->daylightSavingsControl;
//}

// Setter for daylightSavingsControl
//void DaylightSavings_1_2::setDaylightSavingsControl(ui8 val)
//{
//this->daylightSavingsControl= val;
//}

// Getter for daylightSavingInstance
//org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE DaylightSavings_1_2::getDaylightSavingInstance()
//{
//return this->daylightSavingInstance;
//}

// Setter for daylightSavingInstance
//void DaylightSavings_1_2::setDaylightSavingInstance(org_himalay_ccif_DaylightSavings_1_2_daylightSaving__PTR_TYPE val)
//{
//this->daylightSavingInstance= val;
//}

int DaylightSavings_1_2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_DaylightSavings_1_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2::daylightSaving* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::DaylightSavings_1_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::DaylightSavings_1_2* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code