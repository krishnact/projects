//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "unbound_application_descriptor.h"

#ifdef org_himalay_si_unbound_application_descriptor__USE_SMART_PTR
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
unbound_application_descriptor::unbound_application_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // service_id
    service_id= (ui24)0;
    // version_number
    version_number= (ui32)0;
}
// Destructor
unbound_application_descriptor::~unbound_application_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // service_id

    // version_number

}

int unbound_application_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // service_id
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        service_id= i1 | i2;
        retVal += 3;
    }
    // version_number
    {
        version_number=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int unbound_application_descriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read desc_header
    retVal += desc_header->read(istream);
    // read service_id
    {
        int i1= (0x000000FF & ((int)istream.readUI8())) << 16;
        int i2= (0x0000FFFF & ((int)istream.readUI16()));
        service_id= i1 | i2;
        retVal += 3;
    }
    // read version_number
    {
        version_number=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int unbound_application_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
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
    // write version_number
    ostream.writeUI32(version_number);
    retVal +=4;

    return retVal;
}

int unbound_application_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("unbound_application_descriptor\n");
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
    // write version_number
    dc.indent();
    dc.getPs().print("version_number=");
    dc.getPs().println((long)version_number);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE unbound_application_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void unbound_application_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for service_id
//ui24 unbound_application_descriptor::getService_id()
//{
//return this->service_id;
//}

// Setter for service_id
//void unbound_application_descriptor::setService_id(ui24 val)
//{
//this->service_id= val;
//}

// Getter for version_number
//ui32 unbound_application_descriptor::getVersion_number()
//{
//return this->version_number;
//}

// Setter for version_number
//void unbound_application_descriptor::setVersion_number(ui32 val)
//{
//this->version_number= val;
//}

int unbound_application_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void unbound_application_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE unbound_application_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_unbound_application_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::unbound_application_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::unbound_application_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code