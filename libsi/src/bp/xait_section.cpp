//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "xait_section.h"

#ifdef org_himalay_si_xait_section__USE_SMART_PTR
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
xait_section::app_data::app_data() {
    references= 0;

    parent = NULL;

    // org_id
    org_id= (ui32)0;
    // app_id
    app_id= (ui16)0;
    // app_control_code
    app_control_code= (ui8)0;
    // bf
    bf = 0;
    // app_descriptors
    app_descriptors.setMemberSize(0);
}
// Destructor
xait_section::app_data::~app_data() {
    // org_id

    // app_id

    // app_control_code

    // bf

    // app_descriptors
    {
#ifndef org_himalay_si_app_desc_base_USE_SMART_PTR
        app_descriptors.deleteMembers();
#endif
    }
    parent = NULL;
}

int xait_section::app_data::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // org_id
    {
        org_id=istream.readUI32() ;
        retVal+=4;
    }
    // app_id
    {
        app_id=istream.readUI16();
        retVal+=2;
    }
    // app_control_code
    {
        app_control_code=(istream.readUI8());
        retVal+=1;
    }
    // bf
    bf= istream.readUI16();
    retVal += 2;
    // app_descriptors
    {
        int ilimit= retVal + (getApplication_descriptors_loop_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
                int iHolder= 0;
                DataInputStream* disTemp = &istream;
                temp = app_desc_baseFactory::createMsg(*disTemp,iHolder);
                retVal += iHolder;
            }
            app_descriptors.add(temp);
        }
    }
    return retVal;
}

int xait_section::app_data::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read org_id
    {
        org_id=istream.readUI32() ;
        retVal+=4;
    }
    // read app_id
    {
        app_id=istream.readUI16();
        retVal+=2;
    }
    // read app_control_code
    {
        app_control_code=(istream.readUI8());
        retVal+=1;
    }
    // read bf
    bf= istream.readUI16();
    retVal += 2;
    // read app_descriptors
    {
        int ilimit= retVal + (getApplication_descriptors_loop_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
                int iHolder= 0;
                DataInputStream* disTemp = &istream;
                temp = app_desc_baseFactory::createMsg(*disTemp,iHolder);
                retVal += iHolder;
            }
            app_descriptors.add(temp);
        }
    }

    return retVal;
}

int xait_section::app_data::write(DataOutputStream& ostream) { // throws IOException




    {   /** fix dependent sizes for app_descriptors**/ setApplication_descriptors_loop_length((short)app_descriptors.getSize() -(0));
    }

    int retVal= 0;
    // write org_id
    ostream.writeUI32(org_id);
    retVal +=4;
    // write app_id
    ostream.writeUI16(app_id);
    retVal +=2;
    // write app_control_code
    ostream.writeUI8(app_control_code);
    retVal +=1;
    // write bf
    ostream.writeUI16(bf);
    retVal +=2;
    // write app_descriptors
{   for (ArrayList_iterator(app_desc_baseFactory::app_desc_base) it=  app_descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int xait_section::app_data::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("app_data\n");
    dc.increaseIndent();
    int retVal= 0;
    // write org_id
    dc.indent();
    dc.getPs().print("org_id=");
    dc.getPs().println((long)org_id);
    // write app_id
    dc.indent();
    dc.getPs().print("app_id=");
    dc.getPs().println((long)app_id);
    // write app_control_code
    dc.indent();
    dc.getPs().print("app_control_code=");
    dc.getPs().println((long)app_control_code);
    // write bf
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),4);
        dc.indent();
        dc.getPs().print("application_descriptors_loop_length: ");
        dc.getPs().printlnBin(getApplication_descriptors_loop_length(),12);
    }
    // write app_descriptors
{   for (ArrayList_iterator(app_desc_baseFactory::app_desc_base) it=  app_descriptors.getIterator() ; it.hasNext();) {
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


// Getter for org_id
//ui32 xait_section::app_data::getOrg_id()
//{
//return this->org_id;
//}

// Setter for org_id
//void xait_section::app_data::setOrg_id(ui32 val)
//{
//this->org_id= val;
//}

// Getter for app_id
//ui16 xait_section::app_data::getApp_id()
//{
//return this->app_id;
//}

// Setter for app_id
//void xait_section::app_data::setApp_id(ui16 val)
//{
//this->app_id= val;
//}

// Getter for app_control_code
//ui8 xait_section::app_data::getApp_control_code()
//{
//return this->app_control_code;
//}

// Setter for app_control_code
//void xait_section::app_data::setApp_control_code(ui8 val)
//{
//this->app_control_code= val;
//}

// Getter for bf
//ui16 xait_section::app_data::getBf()
//{
//return this->bf;
//}

// Setter for bf
//void xait_section::app_data::setBf(ui16 val)
//{
//this->bf= val;
//}

// Getter for app_descriptors
//ArrayList(app_desc_baseFactory::app_desc_base) xait_section::app_data::getApp_descriptors()
//{
//return this->app_descriptors;
//}

// Setter for app_descriptors
//void xait_section::app_data::setApp_descriptors(ArrayList(app_desc_baseFactory::app_desc_base) val)
//{
//this->app_descriptors= val;
//}

int xait_section::app_data::getReserved( ) {
    return ( this->bf & 0x0000f000 ) >> 12 ;
}

void xait_section::app_data::setReserved(int val) {
    bf=(  (this->bf & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int xait_section::app_data::getApplication_descriptors_loop_length( ) {
    return ( this->bf & 0x00000fff ) >> 0 ;
}

void xait_section::app_data::setApplication_descriptors_loop_length(int val) {
    bf=(  (this->bf & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int xait_section::app_data::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_xait_section_app_data__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p) {
    p->decreaseRef();
};;
#endif

// Constructor
xait_section::xait_section() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // bf3
    bf3 = 0;
    // section_number
    section_number= (ui8)0;
    // last_section_number
    last_section_number= (ui8)0;
    // bf4
    bf4 = 0;
    // common_descriptors
    common_descriptors.setMemberSize(0);
    // bf5
    bf5 = 0;
    // appDatum
    appDatum.setMemberSize(0);
    // CRC
    CRC= (ui32)0;
}
// Destructor
xait_section::~xait_section() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // bf3

    // section_number

    // last_section_number

    // bf4

    // common_descriptors
    {
#ifndef org_himalay_si_app_desc_base_USE_SMART_PTR
        common_descriptors.deleteMembers();
#endif
    }
    // bf5

    // appDatum
    {
#ifndef org_himalay_si_app_data_USE_SMART_PTR
        appDatum.deleteMembers();
#endif
    }
    // CRC

}

int xait_section::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // bf3
    bf3= istream.readUI8();
    retVal += 1;
    // section_number
    {
        section_number=(istream.readUI8());
        retVal+=1;
    }
    // last_section_number
    {
        last_section_number=(istream.readUI8());
        retVal+=1;
    }
    // bf4
    bf4= istream.readUI16();
    retVal += 2;
    // common_descriptors
    {
        int ilimit= retVal + (getCommon_descriptors_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
                int iHolder= 0;
                DataInputStream* disTemp = &istream;
                temp = app_desc_baseFactory::createMsg(*disTemp,iHolder);
                retVal += iHolder;
            }
            common_descriptors.add(temp);
        }
    }
    // bf5
    bf5= istream.readUI16();
    retVal += 2;
    // appDatum
    {
        int ilimit= retVal + (getApplication_loop_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_xait_section_app_data__PTR_TYPE temp;
            org_himalay_si_xait_section_app_data__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            appDatum.add(temp);
        }
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int xait_section::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read bf3
    bf3= istream.readUI8();
    retVal += 1;
    // read section_number
    {
        section_number=(istream.readUI8());
        retVal+=1;
    }
    // read last_section_number
    {
        last_section_number=(istream.readUI8());
        retVal+=1;
    }
    // read bf4
    bf4= istream.readUI16();
    retVal += 2;
    // read common_descriptors
    {
        int ilimit= retVal + (getCommon_descriptors_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_app_desc_baseFactory_app_desc_base__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
                int iHolder= 0;
                DataInputStream* disTemp = &istream;
                temp = app_desc_baseFactory::createMsg(*disTemp,iHolder);
                retVal += iHolder;
            }
            common_descriptors.add(temp);
        }
    }
    // read bf5
    bf5= istream.readUI16();
    retVal += 2;
    // read appDatum
    {
        int ilimit= retVal + (getApplication_loop_length() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_xait_section_app_data__PTR_TYPE temp;
            org_himalay_si_xait_section_app_data__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            appDatum.add(temp);
        }
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int xait_section::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }





    {   /** fix dependent sizes for common_descriptors**/ setCommon_descriptors_length((short)common_descriptors.getSize() -(0));
    }

    {   /** fix dependent sizes for appDatum**/ setApplication_loop_length((short)appDatum.getSize() -(0));
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;
    // write bf3
    ostream.writeUI8(bf3);
    retVal +=1;
    // write section_number
    ostream.writeUI8(section_number);
    retVal +=1;
    // write last_section_number
    ostream.writeUI8(last_section_number);
    retVal +=1;
    // write bf4
    ostream.writeUI16(bf4);
    retVal +=2;
    // write common_descriptors
{   for (ArrayList_iterator(app_desc_baseFactory::app_desc_base) it=  common_descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write bf5
    ostream.writeUI16(bf5);
    retVal +=2;
    // write appDatum
{   for (ArrayList_iterator(xait_section::app_data) it=  appDatum.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int xait_section::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("xait_section\n");
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
        dc.getPs().print("test_application_flag: ");
        dc.getPs().printlnBin(getTest_application_flag(),1);
        dc.indent();
        dc.getPs().print("application_type: ");
        dc.getPs().printlnBin(getApplication_type(),15);
    }
    // write bf3
    {
        dc.indent();
        dc.getPs().print("reserved2: ");
        dc.getPs().printlnBin(getReserved2(),2);
        dc.indent();
        dc.getPs().print("version_number: ");
        dc.getPs().printlnBin(getVersion_number(),5);
        dc.indent();
        dc.getPs().print("current_next_indicator: ");
        dc.getPs().printlnBin(getCurrent_next_indicator(),1);
    }
    // write section_number
    dc.indent();
    dc.getPs().print("section_number=");
    dc.getPs().println((long)section_number);
    // write last_section_number
    dc.indent();
    dc.getPs().print("last_section_number=");
    dc.getPs().println((long)last_section_number);
    // write bf4
    {
        dc.indent();
        dc.getPs().print("reserved3: ");
        dc.getPs().printlnBin(getReserved3(),4);
        dc.indent();
        dc.getPs().print("common_descriptors_length: ");
        dc.getPs().printlnBin(getCommon_descriptors_length(),12);
    }
    // write common_descriptors
{   for (ArrayList_iterator(app_desc_baseFactory::app_desc_base) it=  common_descriptors.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write bf5
    {
        dc.indent();
        dc.getPs().print("reserved4: ");
        dc.getPs().printlnBin(getReserved4(),4);
        dc.indent();
        dc.getPs().print("application_loop_length: ");
        dc.getPs().printlnBin(getApplication_loop_length(),12);
    }
    // write appDatum
{   for (ArrayList_iterator(xait_section::app_data) it=  appDatum.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE xait_section::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void xait_section::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui16 xait_section::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void xait_section::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for bf3
//ui8 xait_section::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void xait_section::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for section_number
//ui8 xait_section::getSection_number()
//{
//return this->section_number;
//}

// Setter for section_number
//void xait_section::setSection_number(ui8 val)
//{
//this->section_number= val;
//}

// Getter for last_section_number
//ui8 xait_section::getLast_section_number()
//{
//return this->last_section_number;
//}

// Setter for last_section_number
//void xait_section::setLast_section_number(ui8 val)
//{
//this->last_section_number= val;
//}

// Getter for bf4
//ui16 xait_section::getBf4()
//{
//return this->bf4;
//}

// Setter for bf4
//void xait_section::setBf4(ui16 val)
//{
//this->bf4= val;
//}

// Getter for common_descriptors
//ArrayList(app_desc_baseFactory::app_desc_base) xait_section::getCommon_descriptors()
//{
//return this->common_descriptors;
//}

// Setter for common_descriptors
//void xait_section::setCommon_descriptors(ArrayList(app_desc_baseFactory::app_desc_base) val)
//{
//this->common_descriptors= val;
//}

// Getter for bf5
//ui16 xait_section::getBf5()
//{
//return this->bf5;
//}

// Setter for bf5
//void xait_section::setBf5(ui16 val)
//{
//this->bf5= val;
//}

// Getter for appDatum
//ArrayList(xait_section::app_data) xait_section::getAppDatum()
//{
//return this->appDatum;
//}

// Setter for appDatum
//void xait_section::setAppDatum(ArrayList(xait_section::app_data) val)
//{
//this->appDatum= val;
//}

// Getter for CRC
//ui32 xait_section::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void xait_section::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int xait_section::getTest_application_flag( ) {
    return ( this->bf2 & 0x00008000 ) >> 15 ;
}

void xait_section::setTest_application_flag(int val) {
    bf2=(  (this->bf2 & 0xffff7fff) | ( (val << 15 ) & 0x00008000));
}

int xait_section::getApplication_type( ) {
    return ( this->bf2 & 0x00007fff ) >> 0 ;
}

void xait_section::setApplication_type(int val) {
    bf2=(  (this->bf2 & 0xffff8000) | ( (val << 0 ) & 0x00007fff));
}

int xait_section::getReserved2( ) {
    return ( this->bf3 & 0x000000c0 ) >> 6 ;
}

void xait_section::setReserved2(int val) {
    bf3=(  (this->bf3 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int xait_section::getVersion_number( ) {
    return ( this->bf3 & 0x0000003e ) >> 1 ;
}

void xait_section::setVersion_number(int val) {
    bf3=(  (this->bf3 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int xait_section::getCurrent_next_indicator( ) {
    return ( this->bf3 & 0x00000001 ) >> 0 ;
}

void xait_section::setCurrent_next_indicator(int val) {
    bf3=(  (this->bf3 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int xait_section::getReserved3( ) {
    return ( this->bf4 & 0x0000f000 ) >> 12 ;
}

void xait_section::setReserved3(int val) {
    bf4=(  (this->bf4 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int xait_section::getCommon_descriptors_length( ) {
    return ( this->bf4 & 0x00000fff ) >> 0 ;
}

void xait_section::setCommon_descriptors_length(int val) {
    bf4=(  (this->bf4 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int xait_section::getReserved4( ) {
    return ( this->bf5 & 0x0000f000 ) >> 12 ;
}

void xait_section::setReserved4(int val) {
    bf5=(  (this->bf5 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int xait_section::getApplication_loop_length( ) {
    return ( this->bf5 & 0x00000fff ) >> 0 ;
}

void xait_section::setApplication_loop_length(int val) {
    bf5=(  (this->bf5 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int xait_section::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void xait_section::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE xait_section::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_xait_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::xait_section::app_data* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::xait_section::app_data* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::xait_section* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::xait_section* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code