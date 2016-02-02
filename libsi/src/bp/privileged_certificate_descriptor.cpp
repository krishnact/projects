//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "privileged_certificate_descriptor.h"

#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
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
privileged_certificate_descriptor::certificate_identifier_byte::certificate_identifier_byte() {
    references= 0;

    parent = NULL;

    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIXED");
    data->setSize(20);
}
// Destructor
privileged_certificate_descriptor::certificate_identifier_byte::~certificate_identifier_byte() {
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
    parent = NULL;
}

int privileged_certificate_descriptor::certificate_identifier_byte::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        retVal+=data->read(istream);
    }
    return retVal;
}

int privileged_certificate_descriptor::certificate_identifier_byte::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read data
    {
        retVal+=data->read(istream);
    }

    return retVal;
}

int privileged_certificate_descriptor::certificate_identifier_byte::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for data**/
    }

    int retVal= 0;
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int privileged_certificate_descriptor::certificate_identifier_byte::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("certificate_identifier_byte\n");
    dc.increaseIndent();
    int retVal= 0;
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE privileged_certificate_descriptor::certificate_identifier_byte::getData()
//{
//return this->data;
//}

// Setter for data
//void privileged_certificate_descriptor::certificate_identifier_byte::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int privileged_certificate_descriptor::certificate_identifier_byte::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->decreaseRef();
};;
#endif

// Constructor
privileged_certificate_descriptor::privileged_certificate_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // certificates
    certificates.setMemberSize(0);
}
// Destructor
privileged_certificate_descriptor::~privileged_certificate_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // certificates
    {
#ifndef org_himalay_si_certificate_identifier_byte_USE_SMART_PTR
        certificates.deleteMembers();
#endif
    }
}

int privileged_certificate_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // certificates
    {
        int ilimit= retVal + (desc_header->length + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__PTR_TYPE temp;
            org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            certificates.add(temp);
        }
    }
    return retVal;
}

int privileged_certificate_descriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read desc_header
    retVal += desc_header->read(istream);
    // read certificates
    {
        int ilimit= retVal + (desc_header->length + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__PTR_TYPE temp;
            org_himalay_si_privileged_certificate_descriptor_certificate_identifier_byte__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            certificates.add(temp);
        }
    }

    return retVal;
}

int privileged_certificate_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }
    {   /** fix dependent sizes for certificates**/ desc_header->length=((short)certificates.getSize() -(0));
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write certificates
{   for (ArrayList_iterator(privileged_certificate_descriptor::certificate_identifier_byte) it=  certificates.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int privileged_certificate_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("privileged_certificate_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write certificates
{   for (ArrayList_iterator(privileged_certificate_descriptor::certificate_identifier_byte) it=  certificates.getIterator() ; it.hasNext();) {
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


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE privileged_certificate_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void privileged_certificate_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for certificates
//ArrayList(privileged_certificate_descriptor::certificate_identifier_byte) privileged_certificate_descriptor::getCertificates()
//{
//return this->certificates;
//}

// Setter for certificates
//void privileged_certificate_descriptor::setCertificates(ArrayList(privileged_certificate_descriptor::certificate_identifier_byte) val)
//{
//this->certificates= val;
//}

int privileged_certificate_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void privileged_certificate_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE privileged_certificate_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_privileged_certificate_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor::certificate_identifier_byte* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::privileged_certificate_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::privileged_certificate_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code