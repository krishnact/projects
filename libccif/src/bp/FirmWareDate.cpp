//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FirmWareDate.h"

#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
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
FirmWareDate::FirmWareDate() {
    references= 0;


    // year
    year= (ui16)0;
    // month
    month= (ui8)0;
    // date
    date= (ui8)0;
}
// Destructor
FirmWareDate::~FirmWareDate() {
    // year

    // month

    // date

}

int FirmWareDate::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // year
    {
        year=istream.readUI16();
        retVal+=2;
    }
    // month
    {
        month=(istream.readUI8());
        retVal+=1;
    }
    // date
    {
        date=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int FirmWareDate::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read year
    {
        year=istream.readUI16();
        retVal+=2;
    }
    // read month
    {
        month=(istream.readUI8());
        retVal+=1;
    }
    // read date
    {
        date=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int FirmWareDate::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write year
    ostream.writeUI16(year);
    retVal +=2;
    // write month
    ostream.writeUI8(month);
    retVal +=1;
    // write date
    ostream.writeUI8(date);
    retVal +=1;

    return retVal;
}

int FirmWareDate::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FirmWareDate\n");
    dc.increaseIndent();
    int retVal= 0;
    // write year
    dc.indent();
    dc.getPs().print("year=");
    dc.getPs().println((long)year);
    // write month
    dc.indent();
    dc.getPs().print("month=");
    dc.getPs().println((long)month);
    // write date
    dc.indent();
    dc.getPs().print("date=");
    dc.getPs().println((long)date);
    dc.decreaseIndent();
    return retVal;
}


// Getter for year
//ui16 FirmWareDate::getYear()
//{
//return this->year;
//}

// Setter for year
//void FirmWareDate::setYear(ui16 val)
//{
//this->year= val;
//}

// Getter for month
//ui8 FirmWareDate::getMonth()
//{
//return this->month;
//}

// Setter for month
//void FirmWareDate::setMonth(ui8 val)
//{
//this->month= val;
//}

// Getter for date
//ui8 FirmWareDate::getDate()
//{
//return this->date;
//}

// Setter for date
//void FirmWareDate::setDate(ui8 val)
//{
//this->date= val;
//}

int FirmWareDate::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_FirmWareDate__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmWareDate* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FirmWareDate* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code