//**//
//@Created(date = "Mon Feb 01 22:30:18 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "SystemTime.h"

#ifdef org_himalay_ccif_SystemTime__USE_SMART_PTR
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
SystemTime::SystemTime() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // systemTime
    systemTime= (ui32)0;
    // GPS_UTCoffset
    GPS_UTCoffset= (ui8)0;
}
// Destructor
SystemTime::~SystemTime() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // systemTime

    // GPS_UTCoffset

}

int SystemTime::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // systemTime
    {
        systemTime=istream.readUI32() ;
        retVal+=4;
    }
    // GPS_UTCoffset
    {
        GPS_UTCoffset=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int SystemTime::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read systemTime
    {
        systemTime=istream.readUI32() ;
        retVal+=4;
    }
    // read GPS_UTCoffset
    {
        GPS_UTCoffset=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int SystemTime::write(DataOutputStream& ostream) { // throws IOException
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
    // write systemTime
    ostream.writeUI32(systemTime);
    retVal +=4;
    // write GPS_UTCoffset
    ostream.writeUI8(GPS_UTCoffset);
    retVal +=1;

    return retVal;
}

int SystemTime::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SystemTime\n");
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
    // write systemTime
    dc.indent();
    dc.getPs().print("systemTime=");
    dc.getPs().println((long)systemTime);
    // write GPS_UTCoffset
    dc.indent();
    dc.getPs().print("GPS_UTCoffset=");
    dc.getPs().println((long)GPS_UTCoffset);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE SystemTime::getHeader()
//{
//return this->header;
//}

// Setter for header
//void SystemTime::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 SystemTime::getLength()
//{
//return this->length;
//}

// Setter for length
//void SystemTime::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for systemTime
//ui32 SystemTime::getSystemTime()
//{
//return this->systemTime;
//}

// Setter for systemTime
//void SystemTime::setSystemTime(ui32 val)
//{
//this->systemTime= val;
//}

// Getter for GPS_UTCoffset
//ui8 SystemTime::getGPS_UTCoffset()
//{
//return this->GPS_UTCoffset;
//}

// Setter for GPS_UTCoffset
//void SystemTime::setGPS_UTCoffset(ui8 val)
//{
//this->GPS_UTCoffset= val;
//}

int SystemTime::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void SystemTime::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE SystemTime::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_SystemTime__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::SystemTime* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::SystemTime* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code