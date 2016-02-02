//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "abstract_service_descriptor.h"

#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
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

// Constructor
abstract_service_descriptor::abstract_service_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // service_id
    service_id= (ui24)0;
    // bf1
    bf1 = 0;
    // service_name
    org_himalay_msgs_runtime_ByteArray_NEW(service_name);
    service_name->setSizeType("EOS");
}
// Destructor
abstract_service_descriptor::~abstract_service_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // service_id

    // bf1

    // service_name
    org_himalay_msgs_runtime_ByteArray_DELETE( service_name);
}

int abstract_service_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // service_id
        {
            int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
            int i2= (0x0000FFFF & ((int)istream.readUI16()));
            service_id= i1 | i2;
            retVal += 3;
        }
        // bf1
        bf1= istream.readUI8();
        retVal += 1;
        // service_name
        {
            retVal+=service_name->read(istream);
        }
    }
    return retVal;
}

int abstract_service_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read service_id
        {
            int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
            int i2= (0x0000FFFF & ((int)istream.readUI16()));
            service_id= i1 | i2;
            retVal += 3;
        }
        // read bf1
        bf1= istream.readUI8();
        retVal += 1;
        // read service_name
        {
            retVal+=service_name->read(istream);
        }
    }

    return retVal;
}

int abstract_service_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }


    {   /** fix dependent sizes for service_name**/
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write service_id
    {
        ostream.writeUI8((service_id  & 0x00FF0000)>>16);
        ostream.writeUI16((service_id & 0x0000FFFF));
        retVal+=3;
    }
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write service_name
    {
        retVal += service_name->write(ostream);
    }

    return retVal;
}

int abstract_service_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("abstract_service_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write service_id
    dc.indent();
    dc.getPs().print("service_id=");
    dc.getPs().println((long)service_id);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),7);
        dc.indent();
        dc.getPs().print("auto_select: ");
        dc.getPs().printlnBin(getAuto_select(),5);
    }
    // write service_name
    dc.indent();
    dc.getPs().print("service_name");
    service_name->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE abstract_service_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void abstract_service_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for service_id
//ui24 abstract_service_descriptor::getService_id()
//{
//return this->service_id;
//}

// Setter for service_id
//void abstract_service_descriptor::setService_id(ui24 val)
//{
//this->service_id= val;
//}

// Getter for bf1
//ui8 abstract_service_descriptor::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void abstract_service_descriptor::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for service_name
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE abstract_service_descriptor::getService_name()
//{
//return this->service_name;
//}

// Setter for service_name
//void abstract_service_descriptor::setService_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->service_name= val;
//}

int abstract_service_descriptor::getReserved( ) {
    return ( this->bf1 & 0x000000fe ) >> 1 ;
}

void abstract_service_descriptor::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffffff01) | ( (val << 1 ) & 0x000000fe));
}

int abstract_service_descriptor::getAuto_select( ) {
    return ( this->bf1 & 0x0000001f ) >> 0 ;
}

void abstract_service_descriptor::setAuto_select(int val) {
    bf1=(  (this->bf1 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int abstract_service_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void abstract_service_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE abstract_service_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_abstract_service_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::abstract_service_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::abstract_service_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code