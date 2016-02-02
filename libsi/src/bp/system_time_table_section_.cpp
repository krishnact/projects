//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "system_time_table_section_.h"

#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
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
namespace si {

using namespace ::org::himalay::msgs::runtime;
// member static classes
// Constructor
system_time_table_section_::subtable::subtable() {
    references= 0;

    parent = NULL;

    // zero
    zero= (ui8)0;
    // systemTime
    systemTime= (ui32)0;
    // GPS_UTC_Offset
    GPS_UTC_Offset= (ui8)0;
    // descriptor
    org_himalay_si_Descriptors__INIT(descriptor)
}
// Destructor
system_time_table_section_::subtable::~subtable() {
    // zero

    // systemTime

    // GPS_UTC_Offset

    // descriptor
    org_himalay_si_Descriptors__DELETE( descriptor);
    parent = NULL;
}

int system_time_table_section_::subtable::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // zero
    {
        zero=(istream.readUI8());
        retVal+=1;
    }
    // systemTime
    {
        systemTime=istream.readUI32() ;
        retVal+=4;
    }
    // GPS_UTC_Offset
    {
        GPS_UTC_Offset=(istream.readUI8());
        retVal+=1;
    }
    // descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }
    return retVal;
}

int system_time_table_section_::subtable::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read zero
    {
        zero=(istream.readUI8());
        retVal+=1;
    }
    // read systemTime
    {
        systemTime=istream.readUI32() ;
        retVal+=4;
    }
    // read GPS_UTC_Offset
    {
        GPS_UTC_Offset=(istream.readUI8());
        retVal+=1;
    }
    // read descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }

    return retVal;
}

int system_time_table_section_::subtable::write(DataOutputStream& ostream) { // throws IOException



    {   /** fix dependent sizes for descriptor **/
    }

    int retVal= 0;
    // write zero
    ostream.writeUI8(zero);
    retVal +=1;
    // write systemTime
    ostream.writeUI32(systemTime);
    retVal +=4;
    // write GPS_UTC_Offset
    ostream.writeUI8(GPS_UTC_Offset);
    retVal +=1;
    // write descriptor
    if ( descriptor != NULL ) {
        retVal +=descriptor->write(ostream);
    }

    return retVal;
}

int system_time_table_section_::subtable::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("subtable\n");
    dc.increaseIndent();
    int retVal= 0;
    // write zero
    dc.indent();
    dc.getPs().print("zero=");
    dc.getPs().println((long)zero);
    // write systemTime
    dc.indent();
    dc.getPs().print("systemTime=");
    dc.getPs().println((long)systemTime);
    // write GPS_UTC_Offset
    dc.indent();
    dc.getPs().print("GPS_UTC_Offset=");
    dc.getPs().println((long)GPS_UTC_Offset);
    // write descriptor
    if ( descriptor != NULL ) {
        dc.indent();
        dc.getPs().println("descriptor") ;
        retVal +=descriptor->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for zero
//ui8 system_time_table_section_::subtable::getZero()
//{
//return this->zero;
//}

// Setter for zero
//void system_time_table_section_::subtable::setZero(ui8 val)
//{
//this->zero= val;
//}

// Getter for systemTime
//ui32 system_time_table_section_::subtable::getSystemTime()
//{
//return this->systemTime;
//}

// Setter for systemTime
//void system_time_table_section_::subtable::setSystemTime(ui32 val)
//{
//this->systemTime= val;
//}

// Getter for GPS_UTC_Offset
//ui8 system_time_table_section_::subtable::getGPS_UTC_Offset()
//{
//return this->GPS_UTC_Offset;
//}

// Setter for GPS_UTC_Offset
//void system_time_table_section_::subtable::setGPS_UTC_Offset(ui8 val)
//{
//this->GPS_UTC_Offset= val;
//}

// Getter for descriptor
//org_himalay_si_Descriptors__PTR_TYPE system_time_table_section_::subtable::getDescriptor()
//{
//return this->descriptor;
//}

// Setter for descriptor
//void system_time_table_section_::subtable::setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val)
//{
//this->descriptor= val;
//}

int system_time_table_section_::subtable::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_system_time_table_section__subtable__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p) {
    p->decreaseRef();
};;
#endif

// Constructor
system_time_table_section_::system_time_table_section_() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // subtableInstance
    org_himalay_si_system_time_table_section__subtable__NEW( subtableInstance);
    subtableInstance->parent=this;
    // CRC
    CRC= (ui32)0;
}
// Destructor
system_time_table_section_::~system_time_table_section_() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // subtableInstance
    org_himalay_si_system_time_table_section__subtable__DELETE( subtableInstance);
    // CRC

}

int system_time_table_section_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-5)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-5));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += subtableInstance->read(*bais);
        delete bais;
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int system_time_table_section_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-5)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-5));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += subtableInstance->read(*bais);
        delete bais;
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int system_time_table_section_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }

{   /** fix dependent sizes for subtableInstance **/ if ( subtableInstance != NULL ) {
            tableHeader->setSection_length((short)subtableInstance->getSize());
        }
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write subtableInstance
    if ( subtableInstance != NULL ) {
        retVal +=subtableInstance->write(ostream);
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int system_time_table_section_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("system_time_table_section_\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("zeroVersion: ");
        dc.getPs().printlnBin(getZeroVersion(),3);
        dc.indent();
        dc.getPs().print("protocol_version: ");
        dc.getPs().printlnBin(getProtocol_version(),5);
    }
    // write subtableInstance
    if ( subtableInstance != NULL ) {
        dc.indent();
        dc.getPs().println("subtableInstance") ;
        retVal +=subtableInstance->dump(dc);
    }
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE system_time_table_section_::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void system_time_table_section_::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui8 system_time_table_section_::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void system_time_table_section_::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for subtableInstance
//org_himalay_si_system_time_table_section__subtable__PTR_TYPE system_time_table_section_::getSubtableInstance()
//{
//return this->subtableInstance;
//}

// Setter for subtableInstance
//void system_time_table_section_::setSubtableInstance(org_himalay_si_system_time_table_section__subtable__PTR_TYPE val)
//{
//this->subtableInstance= val;
//}

// Getter for CRC
//ui32 system_time_table_section_::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void system_time_table_section_::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int system_time_table_section_::getZeroVersion( ) {
    return ( this->bf2 & 0x000000e0 ) >> 5 ;
}

void system_time_table_section_::setZeroVersion(int val) {
    bf2=(  (this->bf2 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int system_time_table_section_::getProtocol_version( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void system_time_table_section_::setProtocol_version(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int system_time_table_section_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void system_time_table_section_::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE system_time_table_section_::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_system_time_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::system_time_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::system_time_table_section_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::system_time_table_section_* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code