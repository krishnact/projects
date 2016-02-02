//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "application_name_descriptor.h"

#ifdef org_himalay_si_application_name_descriptor__USE_SMART_PTR
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
application_name_descriptor::application_name_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // ISO_639_Language_Code
    org_himalay_msgs_runtime_ByteArray_NEW(ISO_639_Language_Code);
    ISO_639_Language_Code->setSizeType("FIXED");
    ISO_639_Language_Code->setSize(3);
    // app_name
    org_himalay_msgs_runtime_ByteArray_NEW(app_name);
    app_name->setSizeType("FIRST_UI8");
}
// Destructor
application_name_descriptor::~application_name_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // ISO_639_Language_Code
    org_himalay_msgs_runtime_ByteArray_DELETE( ISO_639_Language_Code);
    // app_name
    org_himalay_msgs_runtime_ByteArray_DELETE( app_name);
}

int application_name_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // ISO_639_Language_Code
        {
            retVal+=ISO_639_Language_Code->read(istream);
        }
        // app_name
        {
            retVal+=app_name->read(istream);
        }
    }
    return retVal;
}

int application_name_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read ISO_639_Language_Code
        {
            retVal+=ISO_639_Language_Code->read(istream);
        }
        // read app_name
        {
            retVal+=app_name->read(istream);
        }
    }

    return retVal;
}

int application_name_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }
    {   /** fix dependent sizes for ISO_639_Language_Code**/
    }
    {   /** fix dependent sizes for app_name**/
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write ISO_639_Language_Code
    {
        retVal += ISO_639_Language_Code->write(ostream);
    }
    // write app_name
    {
        retVal += app_name->write(ostream);
    }

    return retVal;
}

int application_name_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("application_name_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write ISO_639_Language_Code
    dc.indent();
    dc.getPs().print("ISO_639_Language_Code");
    ISO_639_Language_Code->dump(dc);
    // write app_name
    dc.indent();
    dc.getPs().print("app_name");
    app_name->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE application_name_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void application_name_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for ISO_639_Language_Code
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE application_name_descriptor::getISO_639_Language_Code()
//{
//return this->ISO_639_Language_Code;
//}

// Setter for ISO_639_Language_Code
//void application_name_descriptor::setISO_639_Language_Code(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->ISO_639_Language_Code= val;
//}

// Getter for app_name
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE application_name_descriptor::getApp_name()
//{
//return this->app_name;
//}

// Setter for app_name
//void application_name_descriptor::setApp_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->app_name= val;
//}

int application_name_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void application_name_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE application_name_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_application_name_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_name_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_name_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code